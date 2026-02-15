#include <stdio.h>
#include <stdlib.h>


#define TOTAL_SUBJECTS 5
#define MAX_MARKS 100

int main()
{
    int math, eng, sci, hist, mar;

    //printf("Enter the marks obtained in math, eng, sci, hist, mar: ");
    //scanf("%d%d%d%d%d", &math, &eng, &sci, &hist, &mar);
    printf("Enter marks obtained (out of 100) for:\n");
    printf("Math: ");
    scanf("%d", &math);
    printf("English: ");
    scanf("%d", &eng);
    printf("Science: ");
    scanf("%d", &sci);
    printf("History: ");
    scanf("%d", &hist);
    printf("Marathi: ");
    scanf("%d", &mar);

     if (math < 0 || math > MAX_MARKS || eng < 0 || eng > MAX_MARKS ||
        sci < 0 || sci > MAX_MARKS || hist < 0 || hist > MAX_MARKS ||
        mar < 0 || mar > MAX_MARKS) {
        printf("Error: Marks should be between 0 and %d!\n", MAX_MARKS);
        return 1;
    }

    float obtained_marks = math + eng + sci + hist + mar;
    float total_marks = TOTAL_SUBJECTS * MAX_MARKS;
    float percentage = (obtained_marks*100) /total_marks;

    printf("Total Obtained: %.2f / %.2f\n", obtained_marks, total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: ");

    if (percentage >= 90)
    {
        printf("EX\n");
    }
    else if (percentage >= 80)
    {
        printf("A\n");
    }
    else if (percentage >= 70)
    {
        printf("B\n");
    }
    else if (percentage >= 60)
    {
        printf("C\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}
