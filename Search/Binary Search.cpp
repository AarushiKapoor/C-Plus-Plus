#include<iostream>
using namespace std;
class Searching
{
    int a[10],n,i;
public:
    void Input();
    void Binary();
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
//Binary Search
void Searching::Binary()
{
    int ele,f=0,F,M,L;
    cout<<"\nEnter any element to be searched:";
    cin>>ele;
    F=0;
    L=n-1;
    while((F<=L)&&(f==0))
    {
        M=(F+L)/2;
        if(a[M]==ele)
            f=1;
        else if(a[M]<ele)
            F=M+1;
        else
            L=M-1;
    }
    if(f==0)
        cout<<"Element does not exist";
    else
        cout<<"\nElement exists in "<<M<<" position";
}
int main()
{
    Searching S;
    S.Input();
    S.Binary();
    return 0;
}
