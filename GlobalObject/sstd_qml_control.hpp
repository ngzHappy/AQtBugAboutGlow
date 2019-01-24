#include <QtQuick/QtQuick>

class SSTDQmlControlPlugin :
        public QQmlExtensionPlugin {
    Q_OBJECT
private:
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    void registerTypes(const char *uri);
};
















