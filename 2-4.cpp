#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>


int main(void){
    char text[] = "This Program is coded for example of using cstring instead string.h.";
    std::cout << text << std::endl;
    std::cout << "length: "  << strlen(text) << std::endl;
    std::cout << "concated: " << strcat(text, "Yes. I didn't learn C++ correctly.") << std::endl;
    char * text2 = new char[strlen(text)];
    strcpy(text2, text);
    std::cout << "copied: " << text2 << std::endl;
    std::cout << "isEqual: " << strcmp(text, text2) << std::endl;
    std::cout << "-------- End of Question 1 --------" << std::endl;

    srand(time(new time_t));
    for(int i = 0; i < 5; i++)
    {
        std::cout << i << " rand: " << rand() << std::endl;;
    }
}