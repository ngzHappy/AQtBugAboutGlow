#include <QtCore/QtCore>
#include <chrono>
class QQmlEngine;
class QJSEngine;

class GlobalObject : public QObject {
    Q_OBJECT
public:
    Q_SLOT qint64 getTimeSinceProgramStart() const;
    GlobalObject();
private:
    const std::chrono::steady_clock::time_point mmmStartTime;
public:
    static QObject * instance(QQmlEngine *, QJSEngine *);
};


















