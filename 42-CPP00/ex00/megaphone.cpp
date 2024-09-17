#include <iostream>
#include <string>

int main(int argc, char ** argv)
{
    int i = 1;
    std::string str;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc)
    {
        if (str.length() == 0)
            str = argv[i];
        else
            str = str.append(argv[i]);
        i++;
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    std::cout << str << std::endl;
	return (0);
}
