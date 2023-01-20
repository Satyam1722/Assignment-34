#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;

class item{
    public:
    string code;
    string name;
    int price;
};


int main()
{
    ifstream fin;
    fin.open("file.txt");
    
    item it[50];
    int i=0;

    while(!fin.eof())
    {
      fin>>it[i].code;
      fin>>it[i].name;
      fin>>it[i].price;
      i++;
    }
    
    int n=i;

    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(it[i].price>it[j].price){
                item temp=it[i];
                it[i]=it[j];
                it[j]=temp;
            }
        }
    }

    fin.close();

    ofstream fout;
    fout.open("file.txt");

    for(int i=0;i<n;i++)
    {
        fout<<it[i].code;
        fout<<" ";
        fout<<it[i].name;
        fout<<" ";
        fout<<it[i].price;
        if(i<n-1)
        fout<<endl;
    }

    fout.close();
    

    return 0;

}