//Sandeep Saha_2115015
#include<stdio.h>
int main(){
    float arr[5];
    float s=0;
    for(int i=0;i<5;i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<5;i++){
    if(arr[i]<0){
        break;
    }
    else{
        s=s+arr[i];
    }
    }
    printf("%f",s);
}