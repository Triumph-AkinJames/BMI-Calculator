#include <stdio.h>

/**
 * main - checks the weight and height of the user
 * and prints their BMI
 * @height: The height of the user.
 * @weight: The weight of the user'
 * @BMI: The BMI of the user'
 * Return 0
 */


int main()
{
    int BMI, height, weight;

    //collect input from the user.
    printf("What is your height(m):\n");
    scanf("%d", &height);

    printf("What is your weight(kg):\n");
    scanf("%d", &weight);

    //The BMI calculation.
    BMI = weight / (height * height);

    if (BMI < 18)
    {
        printf("Underweight\n");
    }
    else if (BMI >= 18 && BMI <= 25)
    {
        printf("Normal weight\n");
    }
    else if (BMI >= 26 && BMI <= 29)
    {
        printf("Overweight\n");
    }
     else if (BMI >= 30 && BMI <= 50)
    {
        printf("Obesity\n");

        if (BMI >= 30 && BMI <= 34)
        {
            printf("Class 1 obesity\n");
        }
        else if (BMI >= 35 && BMI <= 39)
        {
            printf("Class II obesity\n");
        }
        else
        {
            printf("Class III obesity\n");
        }

    }
    else
        printf("You are over obese\n");


    return (0);
}

