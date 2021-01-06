#include "Strategy.hpp"
#include "Job.hpp"
#include <list>
namespace schedul
{
    class RR : public Strategy
    {
    private:
        int jobSize;
        double totalWait = 0, totalTurnover = 0, totalRightTurnover = 0;
        unsigned int now = 0, total = 0;
        int slince;
        /* data */

    public:
        std::list<Job> jobList;
        RR(std::list<Job> jobs, int timeSlince, int jobmax)
        {

            this->jobList = jobs;
            this->slince = timeSlince;
            this->jobSize = jobmax;
        };
        void todo()
        {
            for (Job job : jobList)
            {
                if (job.getTime() - slince < 0)

                {
                    jobList.remove(job);
                    /* code */
                }
                else
                {

                    job.changeTime(slince);
                    totalWait+=job.getTime()-slince;
                }

                if (jobList.max_size() < 0)
                {
                    break;
                    /* code */
                }
            }
        };
        void outputSummary();
    };

} // namespace strategy
