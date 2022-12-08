//implement head command

#include <fstream>
#include <iostream>
#include <list>
using namespace std;


int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        char c;
        while (true)
        {
            cin>>c;
            if (c == EOF)
                break;
            cout<<c;
        }
    }
    else
    {
        list<string>lines;
        string line;
        int count=1;
        for(int i = 1; i < argc; i++)
        {
            if(argc > 2)
            {
                cout << "==> " << argv[i] << " <=="<<endl;
                count = 1;
            }
            ifstream file(argv[i]);
            while(getline(file,line))
            {
                cout<<line<<endl;
                if(count==10)
                {
                    cout << endl;
                    break;
                }
                count++;
            }
        }
    }
    return 0;
}
