#include "sstd_qml_control.hpp"
#include <string>
#include <string_view>
using namespace std::string_view_literals;
#include "GlobalObject.hpp"

/*register the module*/
void SSTDQmlControlPlugin::registerTypes(const char *uri) {
#ifdef _DEBUG
    std::string_view argUri{ uri };
    assert(argUri == "sstd.qml.control"sv);
#endif
    qmlRegisterSingletonType<GlobalObject>(uri, 1, 0,
        "GlobalObject",
        &GlobalObject::instance);
}





















