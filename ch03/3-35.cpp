
//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a[10]={1,1,1,1,1,1,1,1,1,1};
    int *pb=begin(a);
    int *pe=end(a);
    for (int i = 0; i < 10; ++i)
    {
        cout<<a[i]<<",";
    }
    while(pb!=pe)
    {
        (*pb)=0;
        ++pb;
    }
    for (int i = 0; i < 10; ++i)
    {
        cout<<a[i]<<",";
    }


}
