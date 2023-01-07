<h1 align="center">AlohaWare</h1>  
<p align="center">  
 <b> Powerful, lightweight, and user-friendly Pokemon fangame development kit made from the groundup in C++ and Vulkan.</b>  
</p> 

## Compiling
First generate MakeFiles by using

```
cmake .
```

Finally use

```
make
```

## Architecture
TBD.
## Contributing
* We are using 2-space soft tabs for indenting.
* To add to a System: 
  * Use the `aloha` namespace
  * Add the files to the System's respective `CMakeLists.txt`
* To add a System:
  1. Create a folder for the System
  2. Use the aloha namespace
  3. Follow the Console System's `CMakeLists.txt`
  4. Add the subdirectory to the top root `CMakeLists.txt`
  5. Add the library to the bottom most system (Console so far)
