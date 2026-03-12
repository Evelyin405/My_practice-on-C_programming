
#include<stdio.h>
int main()
{
    int rollno;
    char initial;
    int marks[3];
    int total = 0;
    float average;
    double percentage;
    int i;
    printf("Enter Roll number:");
    scanf("%d", &rollno);
    printf("Enter Name Initial:");
    scanf(" %c", &initial);
    printf("Enter Marks for 3 subjects:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }
    average = total / 3.0;
    percentage = (double) total / 300 * 100;
    printf("\nStudent Details\n");
    printf("Roll Number : %d\n",rollno);
    printf("Name Initial : %c\n",initial);
    printf("Marks: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ",marks[i]);
    }
    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2lf\n", percentage);
    return 0;
}
