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

/*

int main()
{
    int x,n=0,max2=0,temp=0;
    int a[50];
    while(scanf("%d",&x)==1)
    {
        a[n]=x;
        if(x>0)
            temp=1;
        n++;
    }
    if(temp==0)
        max2=0;
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum=0;
                for(int k=i;k<=j;k++)
                {
                     sum+=a[k];
                   if(sum>max2)
                    max2=sum;
                }
            }
        }
    }
    printf("%d",max2);
    return 0;
}
*/
