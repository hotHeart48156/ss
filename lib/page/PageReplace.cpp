#include "PageReplace.hpp"

void pageReplace::Fifo::fifo()
{
    auto summaryBeginIndex = summaryData.begin();
    std::vector<int> temSummary;

    std::list<int> temPage = page;
    mem.clear();
    for (auto a : page)
    {
        temSummary.clear();
        temSummary.insert(temSummary.begin(), a);
        if (std::count(mem.begin(), mem.end(), a) == 0)
        {
            mem.push_back(a);
        }
        for (auto i : mem)
        {
            temSummary.push_back(i);
        }
        summaryData.push_back(temSummary);

        // for (auto tem : temSummary)
        // {
        //     std::cout << tem << "  ";
        // }
        // std::cout << std::endl;
    }

    summary();
}

void pageReplace::Fifo::summary()
{

    for (auto i : summaryData)
    {
        for (auto j : i)
        {
            std::cout << j << "  ";
        }
        std::cout << std::endl;
    }
}
pageReplace::Fifo::Fifo(int memsize, std::list<int> pages)
{
    mem.resize(memsize);
    page = pages;
    summaryData.resize(pages.size());
    summaryData.front().resize(memsize);
};
pageReplace::Fifo::Fifo(){};
void pageReplace::Fifo::init()
{
    page.clear();
    mem.clear();
}
template <typename T, typename t>
std::vector<T> listToVector(t)
{
    return NULL;
}