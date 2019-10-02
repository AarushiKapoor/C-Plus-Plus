#include<iostream>
using namespace std;
class Searching
{
    int a[10],n,i;
public:
    void Input();
    void Linear();
};
void Searching::Input()
{
    cout<<"Enter Total number of elements:";
    cin>>n;
    cout<<"\nEnter them one by one:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
//Linear Search
void Searching::Linear()
{
    int ele,f=0;
    cout<<"\nEnter the number to be searched:";
    cin>>ele;
    for(i=0;((i<n)&&(f==0));i++)
        if(a[i]==ele)
            f=1;
        if(f==0)
            cout<<"Element does not exist";
        else
            cout<<"Element exists in "<<i-1<<" position";
}
int main()
{
    Searching S;
    S.Input();
    S.Linear();
    return 0;
}
