#include<stdio.h>
int main() {
    int choice;
    float grades[5];
    float sum = 0,avg;
    int a,b,c,d,e,s;

    printf("STUDENT GRADE BOOK\n");
    printf("1.Welcome\n");
    printf("2.Enter Subject marks\n");
    printf("3.Calculate Average Marks\n");
    printf("4.Exit\n");

    do{
        printf("enter your choice");
        scanf("%d",&choice);

        switch(choice) {
        case 1 :
            printf("***Thank you for using***\n");

            printf("***GREETINGS***\n***HAVE A NICE EXPERENCE***\n");
            break;

        case 2:
            printf("\nEnter Hindi Marks:");
            scanf("%d",&a);
            if(a<=100 || a>0)

            else
            printf("fsdvsfg");
            printf("\nEnter English Marks:");
            scanf("%d",&b);
            printf("\nEnter Maths Marks:");
            scanf("%d",&c);
            printf("\nEnter Science Marks:");
            scanf("%d",&d);
            printf("\nEnter Computer Marks:");
            scanf("%d",&e);
        break;
        case 3:
            s=a+b+c+d+e;
            avg=s/5;
            ///for (int i =0;i<5;i++){
               /// sum += grades[i];
           /// }
            printf("Average Marks: %f\n", avg);
        break;

        case 4:
            printf("Exiting the Program.\n");
            printf("Thank You For Using. Have a nice day\n");
        break;

        default :
            printf("Invalid choice. Please Enter Valid Number.\n");
        }
    } while (choice != 4);
     return 0;

}
