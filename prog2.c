#include <stdio.h>
#include <math.h>
float egor(float x, float e, int* pn){
        float ics = x;
        float sum = 0, summ=0;
        int i=2;
        sum+=x;
        while(fabsl(summ-sum)>e){
                x*=ics;
                sum=summ;
                summ+=(x/i);
                i++;
        }
    *pn=i;
    return summ;
}
int main() {
        float x, e, answer;
        int n;
        printf("Enter -1<x<=1: ");
        scanf("%f", &x);
        while(-1>x || x>1){
                printf("Repeat x please:");
                scanf("%f",&x);
        }
        printf("Enter accuracy: ");
        scanf("%f", &e);
        answer = egor(x, e, &n);
        printf("Answer: %f\n", answer);
        printf("Mathematical operations: %d\n", n);
}
// created by egoriwe999
