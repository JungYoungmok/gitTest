#include <stdio.h>

int max4(int a, int b, int c, int d);
int min3(int a,int b,int c);
int min4(int a, int b, int c, int d);

int main(){
    int a,b,c,d;
    int max = 0;
    int min = 0;
    int min2 = 0;

    while(1){
        scanf("%d",&a);
        if(a==1) printf("a는 1입니다.");
        else if(a==2) printf("a는 2입니다.");
        else if(a==3) printf("a는 3입니다.");
    }

}

int max4(int a, int b, int c, int d){
    int max = 0, max2 = 0;
    
    if(a>b) max = a;
    else max = b;
    
    if(c>d) max2 = c;
    else max2 = d;

    if(max>max2) return max;
    else return max2;
}

int min3(int a,int b,int c){
    int min = 0;

    min = a;
    if(min>b) min = b;
    if(min>c) min = c;

    return min;
}

int min4(int a, int b, int c, int d){
    int min = 0, min2 = 0;
    
    if(a>b) min = b;
    else min = a;
    
    if(c>d) min2 = d;
    else min2 = c;

    if(min>min2) return min2;
    else return min;
}