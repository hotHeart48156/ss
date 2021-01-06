class Job
{
private:
    /* data */
    int time;
    char state;
public:
    Job(/* args */int t,char s){
        time=t;state=s;
    }

    void changeState(char s){
        state=s;
    }
    char getState(){
        return state;
    }
    int getTime(){
        return time;
    }
    void changeTime(int t){
        time+=t;
    }
};

