#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class system : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
public:
    explicit system(QObject *parent = nullptr);

    bool carLocked() const;
    void setCarLocked(bool newCarLocked);

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

signals:

    void carLockedChanged();
    void outdoorTempChanged();

    void userNameChanged();

private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
};

#endif // SYSTEM_H
