mkdir build32 & pushd build32
 ::cmake -G "Visual Studio 14 2015" ..
  cmake -G "Visual Studio 16 2019" ..
 popd
 cmake --build build32 --config Release
 md Pluginsx86
 copy  build32/Release/kcp.dll Pluginsx86/kcp.dll
 ::rmdir /S /Q build32
 pause
