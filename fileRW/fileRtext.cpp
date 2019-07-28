// reading a text file
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <dirent.h>
#ifdef __APPLE__
        #include <sys/uio.h>
#else
        #include <sys/io.h>
#endif

using namespace std;
int main () {
char buffer[256];
string name("example_001.txt");

std::string prefix = name.substr(0,name.size()-7);
cout<<prefix<<endl; // 0001E
int aa;
aa = 1;

do{
string num;
string real_name;
char c[3];
cout << aa << endl;
sprintf(c, "%03d", aa);
num = c;

cout << num << endl;
real_name = prefix + num + ".txt";
cout << real_name << endl;
    
ifstream examplefile (real_name);
if (!examplefile.is_open())
{ printf("no good\n"); cout << real_name << endl;break; }
string s;
getline(examplefile, s );
while (getline(examplefile, s )) {
size_t pos = s.find(",");
size_t pos2 = s.find("}");
if(pos2 == std::string::npos){
std::string x = s.substr(0,pos);
int numm = atoi(x.c_str());
cout << numm << endl;
}
}

aa++;
}while(1);


/*
string path;
char* pathvar = getenv("ABC");
if(pathvar)
path=pathvar;
else
path = "./";

	long hFile = 0;
	struct _finddata_t fileInfo;

	string p; // string.assign()：Assignment function，clear origin string，then replace with new string，several overloads
	if ((hFile = _findfirst(p.assign(path).append("/").append("*.txt").c_str(), &fileInfo)) != -1){

    do
		{
			// Current filename
			p.assign(path).append(FILEseparator).append(fileInfo.name);
            std::cout << p << std::endl;
			// Recurse if subdirectory
			if(fileInfo.attrib & _A_SUBDIR)
			{
				if (recurseSubdir && strcmp(fileInfo.name, ".") != 0 && strcmp(fileInfo.name, "..") != 0)
				{
					if (verbose)
					{
						cout << "SubDir：" << p << endl;
					}
					// Recurse current subdirectory
					getAllFiles(p, files, fileType, recurseSubdir);
				}
			}
			// Enroll if not subdirectory
			else
			{
				// Judge file extension name
				if (strcmp((p.substr(p.size() - fileType.size())).c_str(), fileType.c_str()) == 0)
				{
					if (verbose)
					{
						cout << "File：" << p << endl;
					}
					// Save to vector
					files.push_back(p);
				}
			}
		}
        while (_findnext(hFile, &fileInfo) == 0);

		// close handle
		_findclose(hFile);
*/
return 0;
}
