//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int in ;
    while(cin >> in)
    {
        ivec.push_back(in);
    }
//    for (decltype(ivec.size()) n=0;n<ivec.size();++n)
//    {
//
//        if(n != ivec.size()-1)
//            cout<<ivec[n]+ivec[n+1]<<endl;
//    }
    for (decltype(ivec.size()) n=0;n<ivec.size()/2;n++)
    {
            cout<<n<<":"<<ivec[n]<<"+"<<ivec[ivec.size()-1-n]<<endl;
            cout<<ivec[n]+ivec[ivec.size()-1-n]<<endl;
    }

}
