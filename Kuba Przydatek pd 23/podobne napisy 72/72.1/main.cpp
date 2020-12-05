#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream napisy("napisy.txt");
    string s1, s2;
    int dl1, dl2, ile=0;
    string para1, para2;
    float bufor1, bufor2, stosunek;
    for(int i=0;i<200;i++)
    {
        napisy>>s1;
        dl1=s1.length();
        bufor1=dl1;
        napisy>>s2;
        dl2=s2.length();
        bufor2=dl2;
        if(dl1>dl2)
        {
            stosunek=bufor1/bufor2;
        }
        else
        {
            stosunek=bufor2/bufor1;
        }
        if(stosunek>=3)
        {
            ile++;
        }
        if(ile==1)
        {
            para1=s1;
            para2=s2;
        }
    }
        cout<<ile<<" wierszy"<<endl;
        cout<<para1<<" "<<para2<<" pierwsza para"<<endl;
    return 0;
}
