#include <iostream>
#include <windows.h>
#include <cstring>

namespace Terminal
{
    using namespace std;
    void RunTerminal(int args)
    {
        char prompt[256]; // ����һ���㹻����������洢������ַ���
        while (true)
        {
            cout << "~>";
            cin.getline(prompt, sizeof(prompt));
            // ʹ��getline����ȫ�ض�ȡ�ַ���
            if (strcmp(prompt, "der") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                system("dir"); // ��ʾ��ǰĿ¼�µ��ļ�
            }
            if (strcmp(prompt, "cles") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                system("cls"); // ��������
            }
            if (strcmp(prompt, "ipcerfdr") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                system("ipconfig"); // ��ʾ����������Ϣ
            }
            if (strcmp(prompt, "pyatmo") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                system("python");
            }
            if (strcmp(prompt, "ecok") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                system("echo > text.txt");
            }
            if (strcmp(prompt, "exxt") == 0) // ʹ��strcmp���������ַ����Ƚ�
            {
                exit(0); // �˳�����
            }
        }
    }
}

// ������
int main()
{
    int args = 0;
    Terminal::RunTerminal(args);
    return 0;
}