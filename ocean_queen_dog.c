#include <stdio.h>
#include <string.h>

void allTheWaysToBeMindful(void);
void mindfulMovementForTheHeart(void);
void mindfulMovementForTheMind(void);
void mindfulMovementForTheBody(void);
int mindfulMovementForTheFamily(void);

int main( void )
{
    printf("Welcome to 'The Mindful Movement'! \n");
    printf("Today, we will be learning different ways to be mindful.\n \n");

    allTheWaysToBeMindful();
    mindfulMovementForTheHeart();
    mindfulMovementForTheMind();
    mindfulMovementForTheBody();
    mindfulMovementForTheFamily();
	
    printf("Thank you for your participation in The Mindful Movement! \n");

    return 0;
}

void allTheWaysToBeMindful(void)
{
    printf("There are many ways to be mindful. Here are some of them: \n");
    printf("- Spend time alone in nature \n");
    printf("- Practice yoga \n");
    printf("- Meditate \n");
    printf("- Listen and appreciate music \n");
    printf("- Spend time with loved ones \n \n");
}

void mindfulMovementForTheHeart(void)
{
    printf("Today, we will be discussing mindful movement for the heart. \n");
    printf("It's important to take time to nurture your relationships. \n");
    printf("Suggested activities: \n");
    printf("- Reach out to someone you haven't seen in a while \n");
    printf("- Have meaningful conversations with friends and family \n");
    printf("- Send a thoughtful card or gift \n");
    printf("- Laugh with friends \n \n");
}

void mindfulMovementForTheMind(void)
{
    printf("Now, we will be exploring mindful movement for the mind. \n");
    printf("It's important to take time to nurture your mental wellbeing. \n");
    printf("Suggested activities: \n");
    printf("- Take a break from technology \n");
    printf("- Learn a new skill or hobby \n");
    printf("- Read an inspiring book \n");
    printf("- Spend time in silence or stillness \n \n");
}

void mindfulMovementForTheBody(void)
{
    printf("Let's look at mindful movement for the body. \n");
    printf("It's important to take time to nurture your physical wellbeing. \n");
    printf("Suggested activities: \n");
    printf("- Go for a walk or run \n");
    printf("- Practice breathwork \n");
    printf("- Try a new form of exercise \n");
    printf("- Stretch or practice yoga \n \n");
}

int mindfulMovementForTheFamily(void)
{
    int familyTime = 0; // the amount of time that's spent with family
    printf("Finally, let's discuss mindful movement for the family. \n");
    printf("It's important to spend quality time with family. \n");
    printf("Suggested activities: \n");
    printf("- Cook a meal together \n");
    printf("- Take a family vacation \n");
    printf("- Play a board game \n");
    printf("- Watch a movie \n \n");
    printf("How much time do you plan on spending in mindful movement with your family? \n");
    scanf("%d", &familyTime);
    printf("You plan on spending %d hours with your family! \n \n", familyTime);

    return familyTime;
}