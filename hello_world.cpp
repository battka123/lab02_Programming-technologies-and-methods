#include <iostream>
#include <string>
int
main()
{
  std::string name;
  std::cout << "Input your name: "; \\new_name
  std::cin >> name;
  std::cout << "Hello world from " << name << "!\n"; \\Hello?
  std::cout << "Input your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << "!\n";
  return 0;
}
