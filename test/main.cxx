// Copyright 2017 Patrick Flynn
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//	this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this
//	list of conditions and the following disclaimer in the documentation and/or
//	other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may
//	be used to endorse or promote products derived from this software
//	without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#include <iostream>
#include <settings.hh>

using namespace CppLib;

int main() {
    Settings::registerApp("settings.test");
    Settings::setDefaultSettingsFile(":/settings.xml");
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
