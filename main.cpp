#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    int numbers_of_lines;
    string country, name;
    map<string, int> countries;
    map<string, int>::iterator it;

    cin >> numbers_of_lines;

    while (numbers_of_lines--) {
        cin >> country;
        getline(cin, name);

        countries[country]++;
    }

    for (it = countries.begin(); it != countries.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
