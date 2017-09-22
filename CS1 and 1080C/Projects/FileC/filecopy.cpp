#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Fcopy(string File, string OutFile)
{
    ifstream Myfile;
    ofstream Writefile;
    Myfile.open(File);
    Writefile.open(OutFile);
    //Writefile << "Writing this to file";
    string line;
    while(Myfile.eof())
    {
        //cout << Myfile;
        Writefile.close();
    }
}

int main()
{
    string File, OutFile;
    cout << "Enter the file location: ";
    cin >> File;
    cout << "Enter the output file location: ";
    cin >> OutFile;
    Fcopy(File, OutFile);
    return 0;
}
