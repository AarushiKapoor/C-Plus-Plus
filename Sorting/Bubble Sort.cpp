#include <iostream>
using namespace std;
class array
{
    int a[20],i,n;
public:
    void Input();
    void Output();
    void Bubble();
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
void array::Bubble()
{
    int j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
int main()
{
    array A;
    A.Input();
    A.Bubble();
    A.Output();
    return 0;
}

