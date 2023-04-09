#include<stdio.h>
#include<math.h>
int main(){
    int a = 3, b = 4 , c = 5;
    float s = (a + b + c) / 2;
    float area = sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("Area is: %.2f\n",area);
    return 0;
}
