// write a program to check that given number is palindrome or not.

// input:123
// output:NO 

// input:121
// output:YES

// input:12321
// output:YES


// 123 => 321 //not palindrome

// 121 => 121 //palindrome

#include<stdio.h>

int main(){
    int num;
    printf("Enter the value of num :\n");
    scanf("%d",&num); //121

    int rev=0,rem,originalNum=num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem; //121
        num/=10;
    }
    if(originalNum == rev){
        printf("YES \n");
    }else{
        printf("NO\n");
    }
    return 0;
}