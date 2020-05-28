//C program to count number of vowels and consonants in a given string//
#include <iostream>

using namespace std;

int main()
{
char str[100];
int vc=0,cc=0;
cout<<"enter any string\n";
cin.getline(str,150);
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U')
    {
        vc++;
    }
    else if((str[i]>='a'&&str[i]<='z')||(str[i]<='A'&&str[i]<='Z'))
    {
        cc++;
    }
}
cout<<"Vowel in string:"<< vc ;
cout<<"\nConsonants in string:"<< cc ;
return 0;
}
