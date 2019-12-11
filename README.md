# Android/JNI: link a dummy C++ library

This project shows how to configure CMakeLists.txt for linking a shared library, either from source or precompiled.

The library is called ```beast``` and only has a ```getNumber()``` method.

The master branch builds the library. The precompiled branch imports a .so precompiled version of the library.

After building the APK from this branch, you can extract the .so file:
- rename the apk as a zip and extract it.
- locate the ```libbeast.so``` file and save it to ```src/main/cpp/Libraries/abis/<your target architecture>/libbeast.so

The precompiled branch links to the .so file instead of building the lib. Notice how the ```build.gradle``` file needs an additional ```sourceSets``` block to locate the .so file(s) as documented [here](https://developer.android.com/studio/projects/gradle-external-native-builds.html#jniLibs).



 


