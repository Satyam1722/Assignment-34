#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   ifstream fin;
   fin.open("a.txt");
   ofstream fout;
   fout.open("file.txt");
   string s;
   while(!fin.eof())
   {
    getline(fin,s);
    for(int i=0;s[i];i++)
    {
        
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
            continue;
        }
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
       
    }
    fout<<s;
    fout<<endl;

   }

   fin.close();
   fout.close();
   return 0;
   


}