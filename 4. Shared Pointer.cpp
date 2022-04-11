#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number of Elements : ";
    cin>>num;
    int *DMA = new int(num);
    for(int i=0;i<num;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>DMA[i];
    }
    for(int i=0;i<num;i++)
        cout<<DMA[i]<<"  ";
    delete(DMA);
    return 0;
}
