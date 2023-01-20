#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
   ofstream fout;

   try
   {
    fout.open("file.txt");
     if(fout)
     puts("file created successfulty");
     else
     throw 0;
   }
   catch(int a)
   {
     printf("file unable to create %d",a);
   }
   
   fout.close();
   return 0;
   


}