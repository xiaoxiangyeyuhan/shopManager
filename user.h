                                                                                                                                              #ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    virtual QString getName();
    virtual QString getPassword();
    virtual ~User();
protected:
    QString Name;
    QString Password;
};

#endif // USER_H
