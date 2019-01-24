#include "GlobalObject.hpp"
#include <QtQuick/QtQuick>
#include <chrono>

/*get current time ...*/
inline static const auto & getStartTime() {
    const static auto varAns
            = std::chrono::steady_clock::now();
    return varAns;
}

/*construct the Object ...*/
GlobalObject::GlobalObject() :
    mmmStartTime(getStartTime()) {
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

/*create only one object ...*/
QObject * GlobalObject::instance(QQmlEngine *, QJSEngine *){
    static auto varAns = new GlobalObject;
    return varAns;
}

/*get the time since the object create ...*/
qint64 GlobalObject::getTimeSinceProgramStart() const{
    const auto varCurrentTime
            = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<
            std::chrono::milliseconds>(
                (varCurrentTime - mmmStartTime)).count();
}



