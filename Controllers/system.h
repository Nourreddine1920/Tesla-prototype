#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QTimer>

class system : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged)
public:
    explicit system(QObject *parent = nullptr);

    bool carLocked() const;
    void setCarLocked(bool newCarLocked)
    {
        if (m_carLocked == newCarLocked)
            return;
        m_carLocked = newCarLocked;
        emit carLockedChanged();
    }

    int outdoorTemp() const;
    void setOutdoorTemp(int newOutdoorTemp)
    {
        if (m_outdoorTemp == newOutdoorTemp)
            return;
        m_outdoorTemp = newOutdoorTemp;
        emit outdoorTempChanged();
    }

    QString userName() const;
    void setUserName(const QString &newUserName)
    {
        if (m_userName == newUserName)
            return;
        m_userName = newUserName;
        emit userNameChanged();
    }

    QString currentTime() const;
    void setCurrentTime(const QString &newCurrentTime)
    {
        if (m_currentTime == newCurrentTime)
            return;
        m_currentTime = newCurrentTime;
        emit currentTimeChanged();
    }


signals:

    void carLockedChanged();
    void outdoorTempChanged();

    void userNameChanged();

    void currentTimeChanged();

private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
    QString m_currentTime;
    QTimer *m_currentTimeTimer;

};

#endif // SYSTEM_H
