#ifndef MEDPACSSELECTOR_H
#define MEDPACSSELECTOR_H

class medToolBoxPacsSelectorPrivate;

#include "medGuiExport.h"
#include <QWidget>

class MEDGUI_EXPORT medPacsSelector : public QWidget
{
    Q_OBJECT

public:
    medPacsSelector(QWidget *parent = 0);
    ~medPacsSelector(void);

signals:
    void selectionChanged(QVector<int> list);

 public slots:

    void updateList();

    void emitSelectionChanged();

private:

    void readSettings(void);

    void fillWidget( QList<QVariant> nodes );

    medToolBoxPacsSelectorPrivate *d;
};

#endif 