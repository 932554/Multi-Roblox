#include <Windows.h>
#include <iostream>

int main()
{
    SetConsoleTitleA("Multi-Roblox");

    std::cout << "You will no longer be limited to one Roblox instance" << std::endl
        << "Closing this will terminate all but one Roblox process" << std::endl;

    CreateMutexA(nullptr, true, "ROBLOX_singletonMutex");

    std::cin.get();

    return 0;
}
