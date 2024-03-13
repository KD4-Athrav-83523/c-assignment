#include<stdio.h>

/* Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F
 */
int access_marks();
 
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    
    sub1= access_marks();
    sub2= access_marks(); 
    sub3= access_marks(); 
    sub4= access_marks(); 
    sub5= access_marks();
    if( sub1==21 || sub2==21 || sub3==21 || sub4==21 || sub5==21)
    {
        printf("Marks are invalid");
        goto label;
    }
    printf("Marks obtained by students are:\n");  
    printf("Sub1=%d\nSub2=%d\nSub3=%d\nSub4=%d\nSub5=%d\n",sub1,sub2,sub3,sub4,sub5);
    int i=sub1+sub2+sub3+sub4+sub5;
    printf("Total marks obtained by student is %d\n",i);
    
    if(i>=60)
    {
        if(i>=70)
        {
            if(i>=80)
            {
                if(i>90)
                printf("Grade is \'EX\'");
               else
               { printf("Grade is \'A");}
            }
            else{printf("Grade is \'B\'");}
            
        }
        else{printf("Grade is \'C\'");}
    }
    else
    {
        printf("Grade is \'F\'");
    }
   
    label:
    return 0;
}
int access_marks()
{
    int num;
    printf("Enter the marks:");
    scanf("%d",&num);
    if(num>20)
    {
        printf("marks cant br greter than 20");
        return 21;
    }
    else
    {
        return num;
    }
    
}
