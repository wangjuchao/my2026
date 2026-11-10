#include "Log/Log.h"

int main() { 
    
    int  a = 8;
    int& ref = a;//引用
    ref = 99;
    std::cout << ref << std::endl;

    int* b = &a;//指针

    a++;
    const char* strings = "helloworld";
    for (int i = 0; i < strlen(strings); i++)
    {
        std::cout << strings[i] << std::endl;
    }

    int* ptr = &a;//指针
    *ptr = 99;

    char* buffer = new char[8];//动态分配内存
    memset(buffer,0,8);
    char** pptr = &buffer;//指针的指针

    delete[] buffer;//释放动态分配的内存

    Log log;//创建日志对象
    log.SetLevel(log.LOG_LEVEL_DEBUG);//设置日志级别为调试级别
    log.Debug("This is a debug message.");//输出调试信息
    log.Info("This is an info message.");//输出信息
    log.Warn("This is a warning message.");//输出警告信息
    log.Error("This is an error message.");//输出错误信息

    
    




    
    std::cin.get(); // Wait for user input before closing the console window
    return 0;
}