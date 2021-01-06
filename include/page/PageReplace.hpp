#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <type_traits>
namespace pageReplace
{
    class Fifo
    {
    private:
        /* data */
        std::list<int> mem;
        std::list<int> page;
        std::vector< std::vector<int> > summaryData;
        int missPageNumber;
        int missPageRate;

    public:
        Fifo(int memsize, std::list<int> pages);
        Fifo();
        void init();

        void fifo();
        template <typename T, typename t>
        std::vector<T> listToVector(t);
        void summary();
        // ~Fifo();cpp文件必须要有定义，否则报错
    };

} // namespace pageReplace