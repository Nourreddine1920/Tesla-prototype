#include "system.h"

system::system(QObject *parent)
    : QObject{parent},
      m_carLocked(true),
      m_outdoorTemp(64),
      m_userName("Nouri")
{

}

bool system::carLocked() const
{
    return m_carLocked;
}

void system::setCarLocked(bool newCarLocked)
{
    if (m_carLocked == newCarLocked)
        return;
    m_carLocked = newCarLocked;
    emit carLockedChanged();
}

int system::outdoorTemp() const
{
    return m_outdoorTemp;
}



QString system::userName() const
{
    return m_userName;
}


