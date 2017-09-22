//Matthew Kavanagh
#include <iostream>
#include <cctype>
#include <fstream>
#include <ostream>
#include <iostream>
#include <cstdlib>

using namespace std;

class caesar
{
    string Line;
    int findcount(string);
    string encrypter(string, string);
    string decrypter(string, string);
public:
    void encrypter(string,string,string);
    void decrypter(string,string,string);
};

int caesar::findcount(string cipher_key)
{
    int sum = 0, count;
    for (int x = 0; x < cipher_key.size(); x++)
    {
        sum  += cipher_key[x];
    }
    count = (sum%23)+3;
    return count;
}

string caesar::encrypter(string Line, string cipher_key)
{
    int count = findcount(cipher_key);

    string NewLine = Line;
    for(int i = 0; i < Line.size(); i++)
    {
        if(islower(Line[i]))
        {
            NewLine[i] = toupper(Line[i]);
        }
        if (NewLine[i] > (90 - count) && NewLine[i] < 90 )
        {
            NewLine[i] -= 26;
        }
        if(isalpha(Line[i]))
        {
            NewLine[i] += count;
        }
        if(islower(Line[i])) NewLine[i]=tolower(NewLine[i]);

    }
    return NewLine;
}

string caesar::decrypter(string Line, string cipher_key)
{
    int count = findcount(cipher_key);
    string NewLine = Line;
    for(int i = 0; i < Line.size(); i++)
    {
        if(islower(Line[i]))
        {
            NewLine[i] = toupper(Line[i]);
        }
        if (NewLine[i] < (65+count) && NewLine[i] >= 65)
        {
            NewLine[i] += 26;
        }
        if(isalpha(Line[i]))
        {
            NewLine[i] -= count;
        }
        if(islower(Line[i])) NewLine[i]=tolower(NewLine[i]);
    }
    return NewLine;
}

void caesar::encrypter(string input_file, string encrypted_file, string cipher_key)
{
    ifstream source(input_file);
    ofstream dest(encrypted_file);

    if (source.is_open())
    {
        while(!source.eof())
        {
            getline(source, Line);
            if(source.eof())
                break;
            Line=encrypter(Line, cipher_key);
            dest << Line << endl;
        }
    }
    source.close();
    dest.close();
}

void caesar::decrypter(string encrypted_file, string decrypted_file, string cipher_key)
{
    ifstream source(encrypted_file);
    ofstream dest(decrypted_file);

    if (source.is_open())
    {
        while(!source.eof())
        {
            getline(source, Line);
            if(source.eof())
                break;
            Line=decrypter(Line, cipher_key);
            dest << Line << endl;
        }
    }
    source.close();
    dest.close();
}

int main(int argc, char *argv[]){
   string input_file;	// input file to encrypt
   string encrypted_file;	// dest file for the recipent of the encrypted data
   string decrypted_file;	// dest file for the decrypted data
   string cipher_key;	// cipher_key

#ifdef TESTING	// includes Mimir so do not modify

    if(argc != 5) {
        cout << "Not correct Usage: " << argv[0] << " input_file encryped_file decryped_file cipher_key\n";
        exit(-1);
    }
    input_file = argv[1];
    encrypted_file = argv[2];
    decrypted_file = argv[3];
    cipher_key = argv[4];

#else
    cout << "Enter Source File: ";
    cin >> input_file;

    cout << "Enter Encrypted File: ";
    cin >> encrypted_file;

    cout << "Enter Decrypted File: ";
    cin >> decrypted_file;

    cout << "Enter Cipher Key: ";
    cin >> cipher_key;

#endif
    cout << "Going to Encrypt File:  " << input_file
         << " using the encryption key " << cipher_key
         << " the encrypted file going to " << encrypted_file
         << "  decrypting back to " << decrypted_file
         << endl;

    caesar files;
        files.encrypter(input_file, encrypted_file, cipher_key);
        files.decrypter(encrypted_file, decrypted_file, cipher_key);


    return 0;
}
