//
// Created by willb on 9/11/2022.
//
#include "cs330_Lab2.h"
#include<stdio.h>
int main(){


    printf("\n");
    printf("cubeOfOdds:");

    printf("Please enter a number:");
    int n1 = 4;
//    scanf("%[^\n]d",&n1);

    cubeOfOdds(n1);



    printf("\n");

    printf("introToCS330:");
    printf("Please enter a positive integer: ");
    int n2 =  4;


//    scanf("%[^\n]d",&n2);
    introToCS330(n2);


    printf("printHELLO:");
    printf("Please enter a positive integer: ");
    int n3 = 7;
//    scanf("%[^\n]d",&n3);
    printHELLO(n3);
    printf("\n");


    int k = 10;
    int k1 = 12;
    int k2 = 8;
    int h =paintGallons(k, k1, k2);

    printf("\n");
    printf("paintGallons:");
    printf("%d", h);
    printf("\n");

    printf("\n");
    printf("grader: ");
    grader(72,88,22); //
    printf("\n");
    int variable;
    scanf("%d",&variable );
    return 0;

}
