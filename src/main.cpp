#include <iostream>
#include <fstream>
#include <filesystem>
#include "include.h"

namespace fs= std::filesystem;
int main()
{
    system("clear");
    std::fstream File;
    fs::path records{"file.txt"};
    File.open(records); // Update path as needed

    std::cout<<"ExVault welcomes you\n";
    if(File.is_open()){
        std::cout<<"database loaded successfully.\n";
    }
}
