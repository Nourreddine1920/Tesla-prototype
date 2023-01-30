#include "system.h"2

system::system(QObject *parent)
    : QObject{parent},
      m_carLocked(true),
      m_outdoorTemp(64),
      m_userName("Nouri"),
      m_currentTime("Nouri")
{
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer ->setInterval(500);

}

bool system::carLocked() const
{
    return m_carLocked;
}





int system::outdoorTemp() const
{
    return m_outdoorTemp;
}



QString system::userName() const
{
    return m_userName;
}



QString system::currentTime() const
{
    return m_currentTime;
}


