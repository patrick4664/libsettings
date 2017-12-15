#include <iostream>
#include <settings.hh>

int main() {
    Settings::registerApp("settings.test");
    Settings::initPaths();

    Settings::writeSetting("window/winX","600");
    Settings::writeSetting("window/winY","500");
    Settings::writeSetting("search/terms/history","a term");
    Settings::writeSetting("base","x2");
    Settings::writeSetting("base/attr","attr1","attrValue","");

    QString defaultSetting = Settings::getSetting("no/exist","Yahoo!");
    QString winX = Settings::getSetting("window/winX","300");
    QString winY = Settings::getSetting("window/winY","200");
    QString history = Settings::getSetting("search/terms/history","term");
    QString base = Settings::getSetting("base","x");
    QString attr = Settings::getAttributeSetting("base/attr","attr1","aValue");

    std::cout << defaultSetting.toStdString() << std::endl;
    std::cout << winX.toStdString() << std::endl;
    std::cout << winY.toStdString() << std::endl;
    std::cout << history.toStdString() << std::endl;
    std::cout << base.toStdString() << std::endl;
    std::cout << attr.toStdString() << std::endl;

	return 0;
}
