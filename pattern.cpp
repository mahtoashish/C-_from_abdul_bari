#include <iostream>
using namespace std;
void Draw(int n)
{
    
    //Draw Pattern given in description for n x n dimensions
      for(int i=n;i>=0;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main()
{
    Draw(5);

    return 0;
}