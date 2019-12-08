#ifndef REP_H
#define REP_H

#include <list>
#include <task.h>

using namespace std;

class Rep
{
public:
    list<Task*> tasks;
    Rep();
    ~Rep();

};

#endif // REP_H
