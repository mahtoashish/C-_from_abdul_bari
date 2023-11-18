#include <iostream>
#include<string>
using namespace std;
int main()
{
    string st="Hello";

    cout<<st.length()<<endl;
    cout<<st.size()<<endl;
    cout<<st.capacity()<<endl;
    st.resize(40);
    cout<<st.capacity()<<endl;
    st.clear();
    cout<<st<<endl;

    if (st.empty())
    {
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }


return 0;
}