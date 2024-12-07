#include<stdio.h>
void main(){
    int a,b,n,x,c=0,d,e;
    printf("enter number you want to delete = ");
    scanf("%d",&n);
    printf("series upto = ");
    scanf("%d",&x);
    for(int i=1;i<=x;i=i+2){
        a=i%10;
        b=i/10;
        d=i/10;
        d=d%10;
        e=i/100;
        if(a==n||b==n||i==n||d==n||e==n){
            c++;
        }
        else{
            printf ("%d\t",i);
            }
}}