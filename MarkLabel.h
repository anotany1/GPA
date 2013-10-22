#ifndef MARKLABEL_H
#define MARKLABEL_H

#include <QLabel>

class MarkLabel : public QLabel
{
    Q_OBJECT

    static const int defaultFontSize = 0;

    int mark;


private:
    MarkLabel(QString text, int mark);
public:
    explicit MarkLabel();

public:
    static MarkLabel *Create(int mark);
    static bool IsMark(int mark);

    int GetMark() const;



signals:

public slots:

};

#endif // MARKLABEL_H
