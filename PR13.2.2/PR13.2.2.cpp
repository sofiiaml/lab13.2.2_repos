#include<string>
#include <iostream>
#include<fstream>

#define CHECK_LETTER(x) (x>=65&&x<=90||x>=97&&x<=122)?(true):(false)
#define CHECK_NUM(x) (x>=48&&x<=57)?(true):(false)
#define CHECK_PUNCT(x)(x==46||x==44)?(true):(false)
#define PRINT(n,l,p) cout << n << " " << l << " " << p << " " << n << " " << l << endl
#define PRINT_TYPE(t) cout<<t<<" type that is not present"<<endl
using namespace std;


int main()
{
    string line;
    ifstream file("Data.txt");
    char num=' ', letter=' ', punct=' ';
    if (file.is_open()) {
        getline(file, line);
        for (int i = 0; i < line.size(); i++) {
            if (CHECK_LETTER(line[i])) {
                letter = line[i];
            }
            if (CHECK_NUM(line[i])) {
                num = line[i];
            }
            if (CHECK_PUNCT(line[i])) {
                punct = line[i];
            }
        }
        PRINT(num, letter, punct);
        if (num == ' ') {
            PRINT_TYPE("number");
        }
        if (letter == ' ') {
            PRINT_TYPE("letter");
        }
        if (punct == ' ') {
            PRINT_TYPE("punct");
        }
    }
    else {
        cout << "Error file is not opened" << endl;
    }
}


