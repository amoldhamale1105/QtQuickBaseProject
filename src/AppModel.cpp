#include <include/AppModel.hpp>
#include <QDebug>

AppModel::AppModel(QObject* parent) : QObject(parent), m_color("slategray"), m_toggle(false)
{
    qInfo("AppModel instantiated in main.qml");
}

void AppModel::toggleWindowColor()
{
    QString color = m_toggle ? colorPair.first : colorPair.second;
    m_color.setNamedColor(color);
    emit colorChanged(color);
    m_toggle = !m_toggle;
}