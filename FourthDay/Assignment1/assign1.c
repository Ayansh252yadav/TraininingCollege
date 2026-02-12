#include<stdio.h>
int main(){
    extern void toCheckAlphabets(char); // to check character is vowel or consonants
    toCheckAlphabets('a');
    extern void isAlphabets(char);
    isAlphabets('a');
    extern void asciiValue(char);
    asciiValue( 'a');
    extern void typeOfCharacter(char);
    typeOfCharacter('@');
    extern void isPosNeg(int);
    isPosNeg(5);
    extern void isEvOdd(int);
    isEvOdd(8);
    extern void swap1(int,int);
    swap1(5,3);
    extern void areaCircle(int);
     areaCircle(5);
    extern void lcm(int,int);
    lcm(4,6);
    extern void gcd(int,int);
    gcd(12,18);
    extern void greatestTwo(int,int);
    greatestTwo(5,4);
    extern void greatestThree(int,int,int);
    greatestThree(7,8,9);
    extern void numOfDigit(int);
    numOfDigit(578);
    extern void sumOfDigit(int);
    sumOfDigit(578);
    extern void naturalSum(int);
    naturalSum(5);
    return 0;
}
#include"toCheckAlphabets.c"
#include"isAlphabets.c"
#include"asciiValue.c"
#include"isPosNeg.c"
#include"isEvOdd.c"
#include"swap1.c"
#include"areaCircle.c"
#include"lcm.c"
#include"gcd.c"
#include"greatestTwo.c"
#include"greatestThree.c"
#include"numOfDigit.c"
#include"sumOfDigit.c"
#include"naturalSum.c"
#include"typeOfCharacter.c"
