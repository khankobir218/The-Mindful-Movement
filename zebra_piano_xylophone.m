% The Mindful Movement 
% Matlab code for 2000 line file

%Initialize constants for the program
numEpochs = 2000; %Number of steps to train for 
eta = 0.001; %Learning rate

%Define the activation and derivative functions
sigmoid = @(z) 1./(1+exp(-z));
dSigmoid = @(z) sigmoid(z).*(1-sigmoid(z));

%Initialize weights
w1 = rand(2,3); %2x3 weight matrix
w2 = rand(1,3); %1x3 weight matrix

%Initialize training data
trainInputs = [0 0; 0 1; 1 0; 1 1]; %Inputs
trainOutputs = [0; 1; 1; 0]; %Outputs

%Run the training loop
for epoch=1:numEpochs
    %Loop to run through all training data
    for n=1:size(trainInputs,1)
        %Forward propagation through the network
        inputValues = trainInputs(n,:); %Input layer values
        hiddenInputs = inputValues*w1; %Calculate input to hidden layer
        hiddenOutputs = sigmoid(hiddenInputs); %Calculate output from hidden layer
        outputInputs = hiddenOutputs*w2; %Calculate input to output layer
        output = sigmoid(outputInputs); %Calculate output from output layer
        
        %Calculate error at output
        error = trainOutputs(n) - output;
        
        %Backpropagation
        %Calculate errors at output layer
        outputDelta = error.*dSigmoid(outputInputs);
        
        %Calculate errors at hidden layer
        hiddenError = w2*outputDelta';
        hiddenDelta = hiddenError.*dSigmoid(hiddenInputs);
        
        %Update weights
        w1 = w1 + eta.*inputValues'*hiddenDelta;
        w2 = w2 + eta.*hiddenOutputs'*outputDelta;
    end
end

%Final weights
weight1 = w1
weight2 = w2