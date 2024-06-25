#include <stdio.h>

int main(){
    int student, Maxstudent = 5, course, NumCourse = 3, score;
    float Totalscore, departmentTotal = 0;

    for(student = 1; student <= Maxstudent; student++){
        Totalscore = 0;
        for(course = 1; course <= NumCourse; course++){
            printf("Enter score for Course %d : ", course);
            scanf("%d", &score);
            Totalscore += score;
        }
        
        printf("Average Score for student %d: %2.f\n", student, Totalscore / NumCourse);
        departmentTotal += Totalscore / NumCourse;
    }  
    printf("Average score for the department: %2.f\n", departmentTotal / Maxstudent);
}