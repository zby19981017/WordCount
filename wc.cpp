#include <iostream>
#include<fstream>
#include<cassert>
#include<string>
using namespace std;
void CountChar(string FileName);
void CountWord(string FileName);

int main(int argc, char *argv[]) {
	string FileName ;
	if ((string)argv[1] == "-c")CountChar ((string)argv[2]) ; 
	if ((string)argv[1] == "-w")CountWord ((string)argv[2]) ;
	return 0;
}
void CountChar(string FileName){
	int sum = -1;
	char data;
	string File = "D:/Software/vc++/MyProjects/Word Count/Debug/" + FileName;
	ifstream file;
	file.open(File.data());
	assert(file.is_open());
	while (!file.eof()){
		file>>data;
		if ((data >= 'a'&&data <= 'z')||(data >= 'A'&&data <='Z')||(data >= '0'&&data <= '9'))
		sum++;
	}
	file.close() ;
	cout <<" char count:" << sum << endl ;
	return;
}

void CountWord(string FileName){
	int sum = 1;
	char data;
	string File = "D:/Software/vc++/MyProjects/Word Count/Debug/" + FileName;
	ifstream file;
	file.open(File.data());
	assert(file.is_open());
	while (!file. eof()){
		file >> data;
			if (data < 'A' || (data > 'Z'&& data < 'a')||data > 'z'){
			sum++;
		}
		if(data==' '||data=='\n')cout<<"ad";
	}
	file. close();
	cout<<"wrod count:"<< sum << endl ;
	return;
}
