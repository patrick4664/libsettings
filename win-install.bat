@echo off
if not exist build echo Please build the library first
if not exist C:\KDE md C:\KDE
if not exist C:\KDE\bin md C:\KDE\bin
if not exist C:\KDE\lib md C:\KDE\lib
if not exist C:\KDE\include md C:\KDE\include
if not exist C:\KDE\include\cpplib md C:\KDE\include\cpplib

cd build\lib
copy libsettings.dll C:\KDE\bin
copy libsettings.dll.a C:\KDE\lib

cd ../..
cd lib
copy settings.hh C:\KDE\include\cpplib
copy tinyxml2.h C:\KDE\include\cpplib

echo Done
