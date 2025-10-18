#include <iostream>
#include <windows.h>
#include <cstring>

namespace Terminal
{
    using namespace std;
    void RunTerminal(int args)
    {
        char prompt[256]; // 分配一个足够大的数组来存储输入的字符串
        while (true)
        {
            cout << "~>";
            cin.getline(prompt, sizeof(prompt));
            // 使用getline来安全地读取字符串
            if (strcmp(prompt, "der") == 0) // 使用strcmp函数进行字符串比较
            {
                system("dir"); // 显示当前目录下的文件
            }
            if (strcmp(prompt, "cles") == 0) // 使用strcmp函数进行字符串比较
            {
                system("cls"); // 清屏命令
            }
            if (strcmp(prompt, "ipcerfdr") == 0) // 使用strcmp函数进行字符串比较
            {
                system("ipconfig"); // 显示网络配置信息
            }
            if (strcmp(prompt, "pyatmo") == 0) // 使用strcmp函数进行字符串比较
            {
                system("python");
            }
            if (strcmp(prompt, "ecok") == 0) // 使用strcmp函数进行字符串比较
            {
                system("echo > text.txt");
            }
            if (strcmp(prompt, "exxt") == 0) // 使用strcmp函数进行字符串比较
            {
                exit(0); // 退出程序
            }
        }
    }
}

// 主函数
int main()
{
    int args = 0;
    Terminal::RunTerminal(args);
    return 0;
}