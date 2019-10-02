#include <iostream>
using namespace std;
class array
{
    int a[20],i,n;
public:
    void Input();
    void Output();
    void Selection();
};
void array::Input()
{
    cout<<"Enter the no. of elements:";
    cin>>n;
    cout<<"\nEnter the Elements one by one";
    for(i=0;i<n;i++)
        {cin>>a[i];}
}
void array::Output()
{
    cout<<"\nOutput:";
    for(i=0;i<n;i++)
        {cout<<a[i]<<endl;}
}
void array::Selection()
{
    int temp,j,small,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        small=a[i];
        for(j=i+1;j<n;j++)
            {
                if(a[j]<small)
                {
                    pos=j;
                    small=a[j];
                }
            }
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
    }
}
int main()
{
    array A;
    A.Input();
    A.Selection();
    A.Output();
    return 0;
}

