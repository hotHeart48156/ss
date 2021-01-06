#include "context.hpp"
void context::init()
{
    page.clear();
    page.resize(pageNumber);
    // std::map mmap();
}

void context::input()
{
    {
        std::cout << "请输入内存大小";
        std::cin >> memSize;
        std::cout << "请输入页面数量";
        std::cin >> pageNumber;
        init();
    }
}

void context::inputPages()
{

    unsigned p;
    for (int i = 0; i < pageNumber; i++)
    {
        std::cout << "请输入" << i << "个页面" << std::endl;
        /* code */
        std::cin >> p;
        page.push_back(p);
    }
    // page.unique();
    page.remove_if([](int value) { return (value == 0); });
}

void context::todo()
{
    // page.reverse();
    fifoReplace = pageReplace::Fifo(memSize, page);
    fifoReplace.fifo();
}
context::context() {}