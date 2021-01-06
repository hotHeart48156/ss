#include "WiggleSubsequence.hpp"
#include <vector>
#include <iostream>
int main(int argc, char const *argv[])
{
    int vecLeng;
    std::vector<int> vec;
    std::cout << "请输入摇摆子序列的长度";
    std::cin>>vecLeng;

    for (int i = 0; i < vecLeng; i++)
    {
        std::cout<<"请输入第"<<i+1<<"个数字"<<std::endl;
        int tem;
        std::cin>>tem;
        vec.push_back(tem);

        /* code */
    }
    
    greedy::WiggleSubsequence wiggle;
   int number= wiggle.wiggleMaxLength(vec);
    std::cout<<"摇摆子序列长度为"<<number<<std::endl;
    /* code */
    return 0;
}
