#include<stdio.h>
#include <iostream>
using namespace std;

int Max_num(int *arr,int n)
{
    int i,temp=0,Max=0,sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            temp=1;
    }
    if(temp==0)
        Max=0;
    else
    {
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<arr[i])
                sum=arr[i];
            if(Max<sum)
                Max=sum;
        }

    }
    return Max;
}

int main()
{
    int x,n=0,max=0;
    int a[50];
    while(scanf("%d",&x)==1)
    {
        a[n]=x;
        n++;
    }
    max=Max_num(a,n);
    printf("%d",max);
    return 0;
}
