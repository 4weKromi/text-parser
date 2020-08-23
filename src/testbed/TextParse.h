
/*
	https://github.com/4wekromi
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class TextParse{
	std::string configFile;
	std::string buff;
	std::vector <char> buffer;
	std::vector <std::string> buffer_sort;
	std::vector <std::string> configKey;
	std::vector <std::string> configValue;
	const bool success = true, failed = false;
	public:
	TextParse(std::string conf="sample.conf"){
		this->configFile=conf;
	}
	bool loadFile();
	bool dataParse();
	int getParseDataSize();
	std::string getConfigValue(int index);
	std::string getConfigKey(int index);
	bool showFormattedDataAll();
	bool showBuffer();
	bool sortBuffer();
	bool writeSortedConf(std::string newFile);
};
