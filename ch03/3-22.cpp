//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> text;
    string in;
    while(getline(cin,in))
    {
        text.push_back(in);
    }

    cout<<text.size();
    for (auto i = text.begin(); i != text.end() && !i->empty(); ++i) {
        for (auto &c  : (*i))
        {
            c = toupper(c);
        }
        cout<<(*i)<<" ";
    }
}
