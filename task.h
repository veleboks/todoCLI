#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task
{
public:
    Task(string task, int id);
    Task();
    string getTask();
    int getID();
    void setID(int id);
    void setTask(string task);
private:
    string task;
    int id;
};

#endif // TASK_H
