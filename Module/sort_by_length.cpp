#include "sort_string_by_length.h"
#include "sort_string_by_length.cpp"

int main()
{
    string line;
    list<string> lines;
    while (getline(cin, line))
    {
        lines.push_front(line);
    }
    cout << endl;

    lines.sort(compare);
    for (auto itr = lines.begin(); itr != lines.end(); ++itr)
        cout << *itr << endl;
    cout << endl;
}
