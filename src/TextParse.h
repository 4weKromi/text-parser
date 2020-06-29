
/*
	https://github.com/4wekromi
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class TextParse{
	string configFile;
	string buff;
	vector <char> buffer;
	vector <string> configKey;
	vector <string> configValue;
	const bool success = true, failed = false;
	public:
	TextParse(string conf="sample.conf"){
		this->configFile=conf;
	}
	bool loadFile();
	bool dataParse();
	string getConfigValue(int index);
	string getConfigKey(int index);
	bool showFormattedDataAll();
	bool showBuffer();
};
