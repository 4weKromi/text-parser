
/*
	https://github.com/4wekromi
*/

#include <iostream>
#include <fstream>
#include <vector>

class TextParse{
	std::string configFile;
	std::string buff;
	std::vector <char> buffer;
	std::vector <std::string> configKey;
	std::vector <std::string> configValue;
	const bool success = true, failed = false;
	public:
	TextParse(std::string conf="sample.conf"){
		this->configFile=conf;
	}
	bool loadFile();
	bool dataParse();
	std::string getConfigValue(int index);
	std::string getConfigKey(int index);
	bool showFormattedDataAll();
	bool showBuffer();
};
