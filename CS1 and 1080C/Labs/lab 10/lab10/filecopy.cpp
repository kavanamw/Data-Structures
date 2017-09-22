// Matthew Kavanagh
#include <iostream>
#include <cctype>
#include <fstream>
#include <ostream>
#include <cstdlib>
#include <string>

using namespace std;

// Please add your function or class here to implement your filecopy
//home/vuatamaca/Desktop
void Fcopy(string source_file, string dest_file)
{
    ofstream output(dest_file);		//output stream
    ifstream source(source_file);	//input stream
    string data = "";

    while(getline(source, data))	//running thought to copy each line
    {
        output << data;
        if(source.eof())			//if end of file of the source
        {
            break;
        }
        else
        {
            output << "\n";
        }
    }
    output.close();					//closes all files
    source.close();
}

int main(int argc, char *argv[]) {
   string source_file;	// source file to copy data from
   string dest_file;	// dest file the recipent of the data

// This section prompts for or uses command line arguments to get 
// the filenames
#ifdef TESTING	// includes Mimir so do not modify

	if(argc != 3) {
		cout << "Not correct Usage: " << argv[0] << " source_file dest_file\n";
		exit(-1);
	}
	source_file = argv[1];
	dest_file = argv[2];

#else
	cout << "Enter Source File: ";
	cin >> source_file;

	cout << "Enter Dest File: ";
	cin >> dest_file;

#endif
	cout << "Going to Copy into: " << dest_file << " From " << source_file << endl;
		

// Please place your function code or calls to function here.

    Fcopy(source_file, dest_file);	//cpoy function call
	return 0;
}
