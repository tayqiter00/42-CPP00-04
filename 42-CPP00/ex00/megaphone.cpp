#include <iostream>
#include <string>
using namespace std;
int main(int argc, char ** argv)
{
    int i = 1;
    string str;
    if (argc < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
    cout << str << endl;
	return (0);
}
