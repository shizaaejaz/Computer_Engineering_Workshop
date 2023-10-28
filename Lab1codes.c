//Write a C program that accepts an employee's ID, total worked hours in a month and
//the amount received per hour. Print the ID and salary (with two decimal places) of the
//employee for a particular month.
//#include <stdio.h>

//int main(){
//int employee_ID;
//int worked_hours;
//float amount_per_hour;
//printf("employee id: ");
//scanf("%d",&employee_ID);
//printf("Enter worked hours in a month: ");
//scanf("%d",&worked_hours);
//printf("Enter amount received per hour: ");
//scanf("%f",&amount_per_hour);
//printf("Employee'ID is: %d ",employee_ID);
//printf("\n Employee's total salary is Rs. %.2f: ",worked_hours*amount_per_hour);
//
//}




//Write a C program that takes the height and width of a rectangle as an input from user
//and compute the perimeter and area of a rectangle.


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int height;
//    int width;
//
//    printf("Enter height:\n");
//    scanf("%d", &height);
//
//    printf("Enter width:\n");
//    scanf("%d", &width);
//
//    printf("The perimeter of the rectangle is: %d\n", 2 * (height + width));
//    printf("The area of the rectangle is: %d\n", height * width);
//
//    return 0;
//}


//Write a C program to accept the height of a person in centimeters and categorize the
//person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
//Height>=165cm – Tall).

//#include <stdio.h>
//int main() {
//float height;
//printf("Enter height of the person in centimeters:");
//scanf("%f",&height);
//if (height<150)
//    printf("The person is a DWARF.");
//else if (height==150)
//    printf("The person is AVERAGE");
//else if (height>=165)
//    printf("The person is TALL");
//return 0;
//}


//Write a program in C to convert a decimal number to a binary number using functions.

//#include <stdio.h>
//void DecimalToBinary(int decimal) {
//    if (decimal==0){
//        return;
//    }
//    DecimalToBinary(decimal/2);
//    printf("%d",decimal%2);
//        }
//int main(){
//int decimal;
//printf("Enter a decimal number:");
//scanf("%d",&decimal);
//printf("Binary equivalent is:");
//DecimalToBinary(decimal);
//printf("\n");
//return 0;
//
//}



//
//Write a function to calculate the nth Fibonacci number and call it recursively to print
//the Fibonacci series.

//#include <stdio.h>
//int fibo(a,b,n){
//int z;
//    if (n==0){
//
//        printf("end of series");
//        return 0;}
//    else{
//        z=(a+b);
//        printf("%d",z);
//        return fibo(b,z,n-1);
//    }
//}
//int main(){
//int n;
//printf("FIBONACCI SERIES:\n Enter nth term of the Fibonacci series");
//scanf("%d",&n);
//if (n>0) printf("0");
//if (n>1) printf("1");
//fibo(0,1,n-2);
//return 0;
//
//}


//
//Write a C program that does the following : Takes a number as an input from user,checks if the number is even or odd
//#include <stdio.h>
//int main(){
//int num;
//printf("Enter a number:");
//scanf("%d",&num);
//if (num%2!=0){
//    printf("ODD");
//}
//else {
//    printf("EVEN");
//}
//}



//Write a C program that takes two numbers as input from user, if both numbers are greater than 5 add them, if either one number is greater than 5 multiply them,
//else print Hello World

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//int num1;
//int num2;
//printf("Enter first number:\n");
//scanf("%d",&num1);
//printf("Enter second number:\n");
//scanf("%d",&num2);
//if (num1>5 && num2>5){
//        printf("%d+%d=%d",num1,num2,num1+num2);
//}
//else if (num1>5 || num2>5){
//    printf("%d*%d=%d",num1,num2,num1*num2);
//}
// else {
//    printf("Hello World");
// }
//
//}
