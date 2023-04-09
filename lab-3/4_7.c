#include<stdio.h>
int main(){
    // 0 1 1 2 3 5 8 13
    /**
     a = 0
     b = 1
     x = 0
     ....
    {
        x = a +b // 
        a =b
        b =x
    }


    */
    
    int n ,a = 0 , b = 1 , x = 0 , sum = 0;
    printf("Enter a number: ");
    scanf("%d" , &n);
    printf("%d %d " , a ,b);
    for(int i = 0; i<n; i++){
       sum = sum + x;
        x = a + b;
       // sum += x;
        a = b;
        b = x;
        printf("%d\t" , x);
         
    }
    printf("\nSum = %d\n" , sum);

    return 0;
}