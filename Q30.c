// Write a program to receive a paragraph and display the paragraph in capitalized letter form.
// Name :Raunak kumar , Enrollment number : MGCU2020CSIT3020
#include<stdio.h>
 #include<string.h>
 int main()
 {
   char s[100]; 

   printf("Enter a string: "); // taking input from user
   scanf("%[^\n]",s);

   printf("In Upper Case:\n"); // print uppercase
   puts(strupr(s)); //  using puts() and strupr() library function

   return 0;
 }
 // output:
 /*Enter a string: i am raunak
In Upper Case:
I AM RAUNAK   */
