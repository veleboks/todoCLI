#include "service.h"

Service::Service()
{
    rep = new Rep();
    rep->tasks.push_back(new Task("Write new task with \"add\"!", 1));
}

Service::~Service() {
    delete rep;
}

void Service::add(string str)
{
    rep->tasks.push_back(new Task(str, (*(--rep->tasks.end()))->getID()+1));
}

void Service::deleteByID(int id)
{
    for (auto task = rep->tasks.begin(); task != rep->tasks.end(); ++task) {
        if ((*task)->getID() == id) {
            for (auto newTask = task; newTask != rep->tasks.end(); ++newTask)
                (*newTask)->setID((*newTask)->getID()-1);
            delete *task;
            rep->tasks.erase(task);
            break;
        }
    }
}

Task Service::getByID(int id)
{
    for (auto it : rep->tasks)
        if (it->getID() == id) return *it;
    return Task("Task with this id do not exist.", false);
}

list<Task> Service::getAll()
{
    list<Task> tasks;
    for (auto it : rep->tasks)
        tasks.push_back(*it);
    return tasks;
}
