#include <iostream>
#include <string>
#include <vector>

void showConsole();
void studentsName(std::string argument[]);
void create();

int main(int arg, char* argv[])
{
  std::string command;
  while(!std::cin.eof()){
    showConsole();
    std::getline(std::cin, command);

    if (command.empty())
      break;
    
    if (command == "create"){
      if(command.length() == 6 )
        std::cout << "Try again\n";
      else {
        std::vector<std::string> vecName;
        vecName.push_back(command);
        std::cout << vecName.back();
      }
    }
  }
} // main

void showConsole(){
  std::cout << "> ";
}

/*void studentsName(std::string argument){
  std::cout <<"Radi";
  std::vector<std::string> vecName;
  vecName.push_back(argument);
  std::cout << vecName.back();
}

void create(){
  std::cout << "create <add name>\n";
  std::string argument;
  studentsName(argument);
}
*/