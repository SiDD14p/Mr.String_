#include <bits/stdc++.h>
using namespace std;
int count(int c)
{
    //one two three four five six seven eight nine ten
    switch(c)
    {
        case 1:return 2;
        case 2:return 1;
        case 3:return 2;
        case 4:return 2;
        case 5:return 2;
        case 6:return 1;
        case 7:return 2;
        case 8:return 2;
        case 9:return 1;
    }
    return 0;
}
int check(int a[],int n,int s)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==s)
            {
                count++;
            }
        }
    }
    return count;
}
void convert(int a)
{
    switch(a)
    {
        case 0:printf("zero");break;
        case 1:printf("one");break;
        case 2:printf("two");break;
        case 3:printf("three");break;
        case 4:printf("four");break;
        case 5:printf("five");break;
        case 6:printf("six");break;
        case 7:printf("seven");break;
        case 8:printf("eight");break;
        case 9:printf("nine");break;
    }
}
int main() {
    // Write C++ code here
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n && a[i]<101;i++)
    {
        if(a[i]<10)
        {
            sum=sum+count(a[i]);
        }
        else
        {
            if(a[i]==100)
            {
                sum=sum+count(1);
            }
            else
            {
                sum=sum+count(a[i]%10);
            }
        }
    }
    convert(check(a,n,sum));
    return 0;
}