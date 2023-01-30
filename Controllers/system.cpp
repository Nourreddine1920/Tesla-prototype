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

void system::setcarLocked(bool newCarLocked)
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

void system::setoutdoorTemp(int newOutdoorTemp)
{
    if (m_outdoorTemp == newOutdoorTemp)
        return;
    m_outdoorTemp = newOutdoorTemp;
    emit outdoorTempChanged();
}

QString system::userName() const
{
    return m_userName;
}

void system::setuserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}
