#pragma once
#include <QObject>
#include <QColor>
#include <QPair>

class AppModel: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor color MEMBER m_color NOTIFY colorChanged)

    public:
        explicit AppModel(QObject* parent = nullptr);

    public slots:
        void toggleWindowColor();
    
    signals:
        void colorChanged(QString colorName);

    private:
        QColor m_color;
        bool m_toggle;
        QPair<QString,QString> colorPair = {"steelblue", "burlywood"};
};