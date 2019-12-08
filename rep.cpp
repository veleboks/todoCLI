#include "rep.h"

Rep::Rep()
{

}

Rep::~Rep()
{
    for (auto it : tasks) {
        delete it;
    }
}
