// Matthew Kavanagh
#include <iostream>
#include <cctype>
#include <fstream>
#include <ostream>
#include <iostream>
#include <cstdlib>

using namespace std;

// Please add your function or class here to implement your filecopy
//home/vuatamaca/Desktop

class rot13				//class to do the rot 13 encryption
{
    string Line;		//string for the line in the file
public:
    void encrypt(string,string);
    void decrypt(string,string);
    string encrypt(string);
    string decrypt(string);
};

string rot13::encrypt(string Line)		//runs through the file and saves
{
    string NewLine = Line;
    for(int x = 0;x < Line.size();x++)
    {
        if(islower(Line[x]))
        {
            NewLine[x]=toupper(Line[x]);
        }
        if(NewLine[x] > 77 && NewLine[x] < 90)
        {
            NewLine[x]-=26;
        }
        if(isalpha(Line[x]))
        {
            NewLine[x]+=13;
        }
        if(islower(Line[x]))
        {
            NewLine[x]=tolower(NewLine[x]);
        }
}
    return NewLine;
}

string rot13::decrypt(string line)		//runs through the file and saves
{
    string NewLine = line;
    for(int i = 0;i < line.size();i++)
    {
        if(islower(Line[i]))
        {
            NewLine[i] = toupper(Line[i]);
        }
        if(NewLine[i] <= 78 && NewLine[i]>=65)
        {
            NewLine[i]+=26;
        }
        if(isalpha(Line[i]))
        {
            NewLine[i]-=13;
        }
        if(islower(Line[i])){
            NewLine[i]=tolower(NewLine[i]);
        }

    }
    return NewLine;
}

void rot13::encrypt(string input_file, string encrypted_file)	//do the rot13 encrypt
{
    ifstream source(input_file);
    ofstream dest(encrypted_file);

    if (source.is_open())
    {
        while(!source.eof())
        {
            getline(source, Line);
            if(source.eof()) break;
            Line=encrypt(Line);
            dest << Line << endl;
        }
    }
    source.close();
    dest.close();
}

void rot13::decrypt(string encrypted_file, string decrypted_file) //do the rot13 decrypt
{
    ifstream source(encrypted_file);
    ofstream dest(decrypted_file);

    if (source.is_open())
    {
        while(!source.eof())
        {
            getline(source, Line);
            if(source.eof()) break;
            Line=decrypt(Line);
            dest << Line << endl;
        }
    }
    source.close();
    dest.close();
}

int main(int argc, char *argv[]) {
   string input_file;	// input file to encrypt
   string encrypted_file;	// dest file the recipent of the encrypted data
   string decrypted_file;	// dest file the recipent of the decrypted data

// This section prompts for or uses command line arguments to get
// the filenames
#ifdef TESTING	// includes Mimir so do not modify

    if(argc != 4) {
        cout << "Not correct Usage: " << argv[0] << " input_file encrypted_file decrypted_file\n";
        exit(-1);
    }
    input_file = argv[1];
    encrypted_file = argv[2];
    decrypted_file = argv[3];

#else
    cout << "Enter Source File: ";
    cin >> input_file;

    cout << "Enter Encrypted File: ";
    cin >> encrypted_file;

    cout << "Enter Decrypted File: ";
    cin >> decrypted_file;

#endif
    cout << "Going to Encrypt into: " << encrypted_file << " From " << input_file << endl;
    cout << "Going to Decrypt into: " << decrypted_file << " From " << encrypted_file << endl;


// Please place your function code or calls to function here.
rot13 files;
files.encrypt(input_file,encrypted_file);
files.decrypt(encrypted_file,decrypted_file);

    return 0;
}
