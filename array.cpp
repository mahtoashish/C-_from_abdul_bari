#include <iostream>
using namespace std;
void printarray()
{
    int A[] = {5, 6, 3, 0, 8, 6};

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << A[i]<<" ";
    // }
    for (int x : A)
        cout << x << endl;
}

void sumofarrayelements()
{
    int A[5]={1,3,5,6,7};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+A[i];

    }
    cout<<sum<<endl;
}
void maxelementinarray()
{
    int A[10]={4,5,6,7,8,2,3,9,1,3};
    int max=INT_MIN,temp;
    for(int i=0;i<10;i++)
    {
        if(max<A[i])
        {
            // temp=m;
            max=A[i];
        }
    }
    cout<<max<<endl;

}
int main()
{

    // printarray();
    // sumofarrayelements();
    maxelementinarray();
    return 0;
}