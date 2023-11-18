#include<iostream>
using namespace std;
void countVowelsConsonats(string str)
{
    int vowels=0,consonant=0,space=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]!='A' || str[i]!='E' || str[i]!='I' ||str[i]!='O' || str[i]!='U' || str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u')
        {
            consonant++;
        }
    }
    cout<<"vowels: "<<vowels<<endl<<"consonants: "<<consonant<<endl<<"space: "<<space<<endl;
}
int main()
{
   countVowelsConsonats("Hello to my world ");

    return 0;
}