#include <stdio.h>
#include <math.h>
float egor(int n, float x ){
    float ics = x;
    float sum = 0;
        int i;
    for (i=1; i<=n; i++){
        sum+=(x/i);
        x*=ics;
    }
    return sum;
}
int main() {
    float answer;
    float x;
    int n;
    float tabl_res;
        printf("Enter -1<x<=1: ");
        scanf("%f", &x);
        while(-1>x || x>1){
                printf("Repeat x please:");
                scanf("%f",&x);
        }
        printf("Enter n: ");
        scanf("%d", &n);
        answer = egor(n, x);
        printf("Answer: %f\n", answer);
        tabl_res = log(1  + x + x*x + x*x*x);
        printf("Tabl result: %f", tabl_res);

}
//created by egoriwe999
