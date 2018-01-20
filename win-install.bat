@echo off
if not exist build echo Please build the library first
if not exist C:\Unix md C:\Unix
if not exist C:\Unix\bin md C:\Unix\bin
if not exist C:\Unix\lib md C:\Unix\lib
if not exist C:\Unix\include md C:\Unix\include
if not exist C:\Unix\include\cpplib md C:\Unix\include\cpplib

cd build\lib
copy libsettings.dll C:\Unix\bin
copy libsettings.dll.a C:\Unix\lib

cd ../..
cd lib
copy settings.hh C:\Unix\include\cpplib
copy tinyxml2.h C:\Unix\include\cpplib

echo Done
