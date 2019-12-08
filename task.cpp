#include "task.h"

Task::Task(string task, int id)
{
    this->task = task;
    this->id = id;
}

string Task::getTask()
{
    return task;
}

int Task::getID()
{
    return id;
}

void Task::setID(int id)
{
    this->id = id;
}



void Task::setTask(string task)
{
    this->task = task;
}
