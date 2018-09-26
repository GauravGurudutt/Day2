Write a program to get a number from the user and print it.

#include<stdio.h>                       //#include is a preprocessor directive with stdio.h library file attached to it
int main()                              //main function is invoked with data type int
{
int n;                                  //an integer n is declared
printf("Enter a number:");              //prints the text "Enter a number:" on the screen
scanf("%d",&n);                         //gets the value of variable n by the user
printf("The number you entered is:");   //prints the text "The number you entered is:" on the screen
printf("%d",n);                         //prints the value of n on the screen
}

What is #include<stdio.h>?

#include<> is a preprocessor directive which includes the library stdio.h,which consists of standard input/output operations like printf,scanf,etc.

What is printf?

printf() is used to print any value(for ex. char,int,float,etc) onto the screen.

What is main?

main() is a function used to indicate the start of any C program;sometimes also indicating the execution of the program.  

What is a variable?

Variables are names which are used to specify some location in memory,that holds a value with which we are working.

What is type of a variable?
  
There are basically two types of variables in C:-

1.Local Variables:The values of the local variables are confined only within the block or function in which it is invoked or defined.
  
2.Global Variables:The values of global variables are defined at the top of the program file and it can be visible and modified by any function that may reference it.
  
What is & operator?
  
& operator is used to return the address of a variable.
  
What is %d in printf and scanf?
  
%d refers to an integer value which is returned after compilation in C.
  
What is the meaning of compilation of a program?
  
Compilation is a process done to check the syntax and semantic errors in a program code.
  
What is meaning of running a program?
  
Running a program means checking the working of a program step by step after the compilation process is done.

List all syntax errors and reasons for the syntax errors.
  
Errors that occur when you violate the rules of writing C syntax are known as syntax errors.

Some syntax errors are:-
   
1.Missing parenthesis (}).
2.Printing the value of variable without declaring it.
3.Missing semicolon (;) at the end of a line.
  
Reasons for syntax errors might be the carelessness of the coder while typing a code and/or missing some paranthesis,semicolons or not declaring a variable in the beginning of a program or in a function or class.
