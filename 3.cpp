#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   fstream fout;

   try
   {
    fout.open("a.txt",ios::app);
     if(fout)
     puts("file created successfulty");
     else
     throw 0;
   }
   catch(int a)
   {
     printf("file unable to create %d",a);
   }
   
   string s;
   puts("enter the string which you want to append");
   getline(cin,s);
   
   fout<<" ";
   fout<<s;

   
   fout.close();
   return 0;
   


}