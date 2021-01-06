#include <iostream>
#include <list>
#include <string>
#include <map>
#include"../page/PageReplace.hpp"
class context
{
private:
    int pageNumber;
    int memSize;
    std::list<int> page;
    pageReplace::Fifo fifoReplace;

    /* data */
public:
    context(/* args */);
    // ~context();

    void init();
    void input();

    void inputPages();
    void todo();
};
