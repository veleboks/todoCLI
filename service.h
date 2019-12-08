#ifndef SERVICE_H
#define SERVICE_H

#include <rep.h>

class Service
{
public:
    Service();
    ~Service();
    void add(string str);
    void deleteByID(int id);
    Task getByID(int id);
    list<Task> getAll();
private:
    Rep *rep;
};

#endif // SERVICE_H
