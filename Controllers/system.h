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
    void setcarLocked(bool newCarLocked);

    int outdoorTemp() const;
    void setoutdoorTemp(int newOutdoorTemp);

    QString userName() const;
    void setuserName(const QString &newUserName);

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
