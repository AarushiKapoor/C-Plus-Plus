#include <iostream>
using namespace std;
class array
{
    int a[20],i,n;
public:
    void Input();
    void Output();
    void Insertion();
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
void array::Insertion()
{
    int j,small;
    for(i=1;i<n;i++)
    {
        
        small=a[i];
        j=i-1;
        while((j>=0)&&(small<a[j]))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=small;
    }
}
int main()
{
    array A;
    A.Input();
    A.Insertion();
    A.Output();
    return 0;
}
