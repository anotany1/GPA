#ifndef MARKLABELLIST_H
#define MARKLABELLIST_H

#include "MarkLabel.h"
#include <list>

using namespace std;

class MarkLabelList
{
    double markSum;
    list<MarkLabel*> markLabels;
public:
    MarkLabelList();
    ~MarkLabelList();
    MarkLabel *Add(int mark);
    bool Sub(MarkLabel *markLabel);
    double GetMidMark();
    int GetSize();
    void Clear();


};

#endif // MARKLABELLIST_H
