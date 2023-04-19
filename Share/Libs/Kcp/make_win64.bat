rmdir /S /Q build64
mkdir build64 & pushd build64
 cmake -G "Visual Studio 16 2019" ..
 popd
 cmake --build build64 --config Release
 md Pluginsx86_64
 copy  build64/Release/kcp.dll Pluginsx86_64/kcp.dll
:: rmdir /S /Q build64
 pause
