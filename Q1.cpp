#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream input;
string str;
int count =0;
input.open("hello.txt");

if(!input)
cout<<"The file cannot open"<<endl;
else
{
while(!input.eof())
{
input>>str;
if(str == "the" || str=="The")
{
count++;
}
}

}
cout<<"total the  words in file are:"<<count<<endl;
return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin;
    string str;
    fin.open("file.txt");
    int count = 0;
    //char str[30];
    int i = 0;

    if (!fin)
    {
        cout << "file did not open" << endl;
    }
    else
    {

        while (!fin.eof())
        {
            fin >> str;
            if (str=="the")
            {
                count++;
            }
        }
    }
    cout << "Count of Word 'the' = " << count << endl;
    fin.close();
}*/




