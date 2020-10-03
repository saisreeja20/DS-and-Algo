#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    long int v,e,i,j,k,h=0,c,d,sum=0;
    cin>>v>>e;
    int a[3][e],b[e];
    for(k=1;k<=e;k++)
    {
        cin>>a[0][k]>>a[1][k]>>a[2][k];
    }
    for(i=1;i<e;i++)
    {
        for(j=i+1;j<=e;j++)
        {
            if(a[2][i]>a[2][j])
            {
                swap(&a[2][i],&a[2][j]);
                swap(&a[1][i],&a[1][j]);
                swap(&a[0][i],&a[0][j]);
            }
        }
    }
    h=2;
    b[0]=a[0][1];
    b[1]=a[1][1];
    sum=a[2][1];
    for(i=2;i<=e;i++)
    {
        for(j=0;j<h;j++)
        {
            if(a[0][i]==b[j])
            {
                c=1;
            }
            if(a[1][i]==b[j])
            {
                d=1;
            }
        }
        if(c==1&&d==1)
        {
            c=0;
            d=0;
            continue;
        }
        else
        {
            sum=sum+a[2][i];
            if(c==1)
            {
                b[j]=a[1][i];
                h++;
            }
            else if(d==1)
            {
                b[j]=a[0][i];
                h++;
            }
            else
            {
                b[j]=a[1][i];
                h++;
            }
        }
        c=0;
            d=0;
    }
    cout<<sum;
}

