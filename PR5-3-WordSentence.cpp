#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int i=0,word=1;
char str[100],ch;
cout<<"please enter a string:";
gets(str);
while(true){
ch=str[i];
if(ch==' ')
word++;
else if(ch=='.' || ch=='\0')
break;
i++;
};
cout<<"\n"<<"word="<<word;
system("pause>n");
return 0;
}
 
