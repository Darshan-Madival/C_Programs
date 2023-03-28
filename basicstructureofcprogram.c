//documentation section
//linking section
//definition section
//global variable declaration
//main function section
//sub program section
/*
* File Name: areaofcircle.c
* Author: Darshan Madival
* date: 21/11/2021
* description: a program to calculate area of circle
*user enters the radius
**/
#include<stdio.h>//link section
#define pi 3.14;//defination section
float area(float r);//global declaration 
int main()//main function
{
float r;
printf(" Enter the radius:n");
scanf("%f",&r);
printf("the area is: %f",area(r));
return 0;
}
float area(float r)
{
return  pi * r* r;//sub program
}