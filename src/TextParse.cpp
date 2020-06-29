
/*
	https://github.com/4wekromi
*/

#include "TextParse.h"

bool TextParse::loadFile(){
		ifstream fileIn;
		ofstream fileOut;
		char ch;
		fileIn.open(configFile);
		if(fileIn){
			while(fileIn){
				fileIn.get(ch);
				buffer.push_back(ch);
			}
			fileIn.close();
			return success;
		} else {
			fileOut.open("sample.conf");
			fileOut<<"<SET A>OFF;\n";
			fileOut<<"<SET B>ON;\n";
			fileOut<<"<SET C>OFF;\n";
			fileOut.close();
			cout<<"\n Creating a new "<<configFile<<" file \n";
			return failed;
		}
		return success;
	}
bool TextParse::dataParse(){
	if(!buffer.empty()){
		char ch;
		int configLine = 0;
		for (auto i = buffer.begin(); i != buffer.end(); ++i){
			ch=*i;
			if(ch=='<'){
				i++; //skip '<'
				ch=*i;
				while(ch!='>' && i!=buffer.end()){
					buff+=ch;
					i++;
					ch=*i;
					if(ch == ';'){
						cout<<" Syntax error ["<<configLine<<"] : missing '>' \n";
						return failed;
					}
				}
				if(buff.empty()){
					cout<<" Syntax error ["<<configLine<<"] : missing key data [ <text missing> ] \n";
					return failed;
				}
				/* push buff string to configKey : <example> */
				configKey.push_back(buff);
				buff="";
				i++; //skip '>'
				ch=*i;
				while(ch!=';' && i!=buffer.end()){
					buff+=ch;
					i++;
					ch=*i;
				}
				if(buff.empty()){
					cout<<" Syntax error ["<<configLine<<"] : missing value data [ >text missing; ] \n";
					return failed;
				}
				/* push buff string to configValue : >example; */
				configValue.push_back(buff);
				buff="";
				configLine++;
			}
		}
	} else {
		cout<<"\n Buffer empty : "<<configFile<<" is not loaded or Empty";
		return failed;
	}
	return success;
}
string TextParse::getConfigValue(int index){	
	int sizeValue = configValue.size();
	//int sizeValue = configValue.size();
	if(!configKey.empty() && !configValue.empty()){
		if(index<=sizeValue){
			return configValue.at(index);
		} else {
			cout<<"\n Function getConfigValue() failed : Value Undefined \n";
		}
	}
	return "";
}
string TextParse::getConfigKey(int index){	
	int sizeKey = configKey.size();
	//int sizeValue = configValue.size();
	if(!configKey.empty() && !configValue.empty()){
		if(index<=sizeKey){
			return configKey.at(index);
		} else {
			cout<<"\n Function getConfigKey() failed : Value Undefined \n";
		}
	}
	return "";
}
bool TextParse::showFormattedDataAll(){
	if(!configKey.empty() && !configValue.empty()){
		int index = 0;
		for (auto i = configKey.begin(); i != configKey.end(); ++i){
			cout<<" ["<<index<<"] : "<< *i<<" \n";
			index++;
		}
		index = 0;
		for (auto i = configValue.begin(); i != configValue.end(); ++i){
			cout<<" ["<<index<<"] : "<< *i<<" \n";
			index++;
		}
	} else {
		return failed;
	}
	cout<<" No. of Keys : "<<configKey.size()<<" \n";
	cout<<" No. of Value : "<<configValue.size()<<" \n";
	return success;
}
bool TextParse::showBuffer(){
	cout<<" Buffer size : "<<buffer.size()<<" \n";
	if(!buffer.empty()){ 
		for (auto i = buffer.begin(); i != buffer.end(); ++i) 
			cout << *i;	
	} else {
		cout<<"\n Buffer empty : "<<configFile<<" is not loaded or Empty";
		return failed;
	}
	return success;
}
