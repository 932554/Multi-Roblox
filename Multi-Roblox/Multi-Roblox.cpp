#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleTitle("Multi-Roblox");

    std::cout << "You will no longer be limited to one Roblox instance" << std::endl << "Closing this will terminate all but one Roblox instance" << std::endl;
    std::cout << "Press any key to exit..." << std::endl;

    CreateMutex(NULL, TRUE, "ROBLOX_singletonMutex");

    std::cin.get();

    return -1;
}