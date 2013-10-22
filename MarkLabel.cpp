#include "MarkLabel.h"



MarkLabel::MarkLabel() : QLabel()
{

}

MarkLabel *MarkLabel::Create(int mark)
{
    if (IsMark(mark))
    {
        QString text = QString::number(mark);
        MarkLabel *markLabel = new MarkLabel(text, mark);

        return markLabel;
    }
    return NULL;
}

bool MarkLabel::IsMark(int mark)
{
   if (mark >= 0 && mark <= 10)
       return true;
   return false;
}

int MarkLabel::GetMark() const
{
    return mark;
}

MarkLabel::MarkLabel(QString text, int mark) : QLabel(text)
{

    this->mark = mark;
}
