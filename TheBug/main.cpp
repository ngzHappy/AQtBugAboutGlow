#include <QtWidgets/QtWidgets>
#include <QtQuick/QtQuick>

int main(int argc,char ** argv){

    QApplication varApp{argc,argv};


    QQuickView varView;
    QDir varDir{ varApp.applicationDirPath() };
    varView.setSource(
                QUrl::fromLocalFile(
                varDir.absoluteFilePath(QStringLiteral("main.qml") ) ) );
    varView.show();

    return varApp.exec();

}























