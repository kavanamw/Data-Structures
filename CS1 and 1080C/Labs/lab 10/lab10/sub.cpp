// Matthew Kavanagh

#include <iostream>
#include <cctype>
#include <fstream>
#include <ostream>
#include <iostream>
#include <cstdlib>

using namespace std;

class sub {
    string line;
    char cipher(char, string, string);
    string encrypter(string, string);
    string decrypter(string, string);
    void rotate(string&);
public:
    void encrypter(string,string,string);
    void decrypter(string,string,string);
};

void sub::rotate(string &cipher_key){
    string newcipher = cipher_key;
    cipher_key[0]=newcipher[25];
    int front = 0;
    for (int z = 1; z < cipher_key.length(); z++){
        cipher_key[z] = newcipher[front];
        front++;
    }
}

char sub::cipher(char letter, string cipher_key, string crypt){
    char ascii[26];
    int charl = 65;
    for(int x = 0; x < 26; x++){        //translate to numbers and caps
        ascii[x] = charl;
        charl++;
    }
    for(int i = 0; i < 26; i++){
        if(islower(cipher_key[i])){
            cipher_key[i] = toupper(cipher_key[i]);
        }
        if (crypt == "encrypt"){
            if (letter == ascii[i]){
                letter = cipher_key[i];
                break;
            }
        }
        else if (crypt == "decrypt"){
            if (letter == cipher_key[i]){
                letter = ascii[i];
                break;
            }
        }

    }
    return letter;
}

string sub::encrypter(string line, string cipher_key){	//save file into string
    string newline = line;
    for(int i = 0; i < line.size(); i++){
        if(islower(line[i])){
            newline[i] = toupper(line[i]);
        }
        if(isalpha(line[i])){
            newline[i] = cipher(newline[i], cipher_key, "encrypt");
        }
        if(islower(line[i])) newline[i]=tolower(newline[i]);
                           rotate(cipher_key);
    }
    return newline;
}

string sub::decrypter(string line, string cipher_key){	//save file into string
    string newline = line;
    for(int i = 0; i < line.size(); i++){
        if(islower(line[i])){
            newline[i] = toupper(line[i]);
        }
        if(isalpha(line[i])){
            newline[i] = cipher(newline[i], cipher_key, "decrypt");
        }
        if(islower(line[i])) newline[i]=tolower(newline[i]);
                           rotate(cipher_key);
    }
    return newline;
}

void sub::encrypter(string input_file, string encrypted_file, string cipher_key)    // run the sub encrypter
{
    ifstream source(input_file);
    ofstream dest(encrypted_file);

    if (source.is_open()){
        while(!source.eof()){
            getline(source, line);
            if(source.eof()) break;
            line=encrypter(line, cipher_key);
            dest << line << endl;
        }
    }
    source.close();
    dest.close();
}

void sub::decrypter(string encrypted_file, string decrypted_file, string cipher_key)	//run the sub decrypter
{
    ifstream source(encrypted_file);
    ofstream dest(decrypted_file);

    if (source.is_open()){
        while(!source.eof()){
            getline(source, line);
            if(source.eof()) break;
            line=decrypter(line, cipher_key);
            dest << line << endl;
        }
    }
    source.close();
    dest.close();
}

int main(int argc, char *argv[]) {
   string input_file;	// input file to encrypt
   string encrypted_file;	// dest file for the recipent of the encrypted data
   string decrypted_file;	// dest file for the decrypted data
   string cipher_key;	// cipher_key

// This section prompts for or uses command line arguments to get
// the filenames
#ifdef TESTING	// includes Mimir so do not modify

cout << argc << endl;
    if(argc != 5) {
        cout << "Not correct Usage: " << argv[0] << " input_file encrypted_file decrypted_file cipher_key\n";
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
         << "  decrypting back to" << decrypted_file
         << endl;

    sub files;
        files.encrypter(input_file, encrypted_file, cipher_key);
        files.decrypter(encrypted_file, decrypted_file, cipher_key);


    return 0;
}
