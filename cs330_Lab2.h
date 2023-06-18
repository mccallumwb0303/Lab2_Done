
#include <stdio.h>
#include <math.h>
#include <stdbool.h>



// this function takes in a int and finds the cube of every ud number leading up to it
// then it prints the string of that odd number
int cubeOfOdds(int n1){
    // declaring varables
    printf("%d" , n1);
    printf("\n");
    int i;
    int n = n1;
    for(i =1 ; i< n ; i++){
        if (i%2 != 0){
            int cubeI = i * i * i;
            printf("Cube of %d: " , i ,": ");
            printf("%d",cubeI);
            printf("\n");
        }
    }
    return 0;
}
bool isPrime(int n5) {

    bool isItPrime = 1;
    int i =2 ;
    for (i; i <= n5 / 2; ++i) {

        if (n5 % i == 0) {
            isItPrime = 0;

        }
    }

    return isItPrime;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}
int introToCS330 (int n2){
    int n = n2;
    printf("%d" , n2);
    printf("\n");
    if(n % 7 == 0){
        printf("UAB");
        printf("\n");
    } else if (n % 3 == 0){
        printf("CS");
        printf("\n");
    }else if (n2 % 3 == 0 && n2 % 7 == 0) {
        printf("UAB CS 330");
        printf("\n");
    } else if (isPrime(n2) && n2 != 3 && n2 != 7) {
        printf("Go Blazers");
        printf("\n");

    } else {
        int out = n2 * n2 * n2;
        printf("%d", out);
        printf("\n");
    }
    printf("\n");
    return 0;
}
int printHELLO (int n3){
    int i;
    printf("%d" , n3);
    printf("\n");
    for( i=0;i<=n3;i++)
    {
        if(isPowerOfTwo(i))
        {
            printf("HELLO");
        }else
        {
            printf("%d",i);
        }
    }



    return 0;
}
int paintGallons(float length, float width, float height){
    float sqft = (((length * height * 2)+(width * height * 2)+(length*width)));
    float stand = 400;

    int neededGals = (sqft / stand) + (((int)sqft % (int)stand) != 0);
    return neededGals;


}
 bool grader (float avg_exams, float avg_hw, int attendance)  {
    bool out = 0;
    if (attendance >= 20) {
        //printf("FAIL");

        if (avg_exams > 70 && avg_hw > 70 && (avg_exams > 85 || avg_hw > 85) ){
            //printf("PASS");
            out = 1;
        }
    }

    if(out == 1){
        printf("Pass");
    }else{
        printf("Fail");
    }

    return out;
}



