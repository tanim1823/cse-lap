#include<stdio.h>
int main(){
    int T = 2;
    float P , R , Total;
    R = 5.5;
    P = 1500;
    Total = (P * R * T) / 100 ;
    printf("Total Interest: %.2lf taka\n" , Total );
    return 0;
}
