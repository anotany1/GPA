#include <list>
#include "MarkLabel.h"
#include "MarkLabelList.h"

using namespace std;

MarkLabelList::MarkLabelList()
{
    markSum = 0;

}

MarkLabelList::~MarkLabelList()
{
    Clear();
}

MarkLabel *MarkLabelList::Add(int mark)
{
    MarkLabel *markLabel = MarkLabel::Create(mark);
    markLabels.push_back(markLabel);
    if (markLabel != nullptr)
    {
        markSum += mark;
    }
    return markLabel;
}

bool MarkLabelList::Sub(MarkLabel *markLabel)
{
    if (markLabel == nullptr || !markLabel->isHidden())
            return false;
    markSum -= markLabel->GetMark();
    markLabels.remove(markLabel);
    delete markLabel;
    return true;

}

double MarkLabelList::GetMidMark()
{
    if (markLabels.size() != 0)
        return markSum / markLabels.size();
        return 0;

}

int MarkLabelList::GetSize()
{
    return markLabels.size();
}

void MarkLabelList::Clear()
{
    for (auto markLabel : markLabels)
    {
        delete markLabel;
    }
    markLabels.clear();
    markSum = 0;
}
