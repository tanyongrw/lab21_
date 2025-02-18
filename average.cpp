
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float sum = 0;
    if (argc == 1)  cout << "Please input numbers to find average." << endl;
    else
    {
        for (int i = 0; i < argc - 1; i++)
        {
            sum += atof(argv[i + 1]);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc - 1 << " numbers = " << sum  / double(argc - 1) << endl;
        cout << "---------------------------------" << endl;
    }
}