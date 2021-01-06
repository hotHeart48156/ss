#include "AssignCookie.hpp"
#include <vector>
#include <algorithm>
#include<iostream>
int main(int argc, char const *argv[])
{
    std::vector<int> g;
    std::vector<int> n;
    int cookieNeedNumber;
    int childrenNeedNumber;
    std::cout<<"请输入糖果需求因子数组数量"<<std::endl;
    std::cin>>cookieNeedNumber;
    for (int i = 0; i < cookieNeedNumber; i++)
    {
        std::cout<<"请输入第"<<i+1<<"个糖果需求因子";
        int tem;
        std::cin>>tem;
        g.push_back(tem);

        /* code */
    }
        std::cout<<"请输入孩子需求因子数组数量"<<std::endl;
            std::cin>>childrenNeedNumber;

      for (int i = 0; i < childrenNeedNumber; i++)
    {
        std::cout<<"请输入第"<<i+1<<"个孩子的需求因子";
        int tem;
        std::cin>>tem;
        n.push_back(tem);

        /* code */
    }
    
    std::sort(g.begin(), g.end());
    std::sort(n.begin(), n.end());
    greedy::AssignCookie cookie;
    int number=cookie.findContentChildren(g,n);
    std::cout<<number<<std::endl;
    return 0;
}
