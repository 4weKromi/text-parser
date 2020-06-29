
/*
	https://github.com/4wekromi
*/

#include "TextParse.h"

int main(int argc, char **argv){
	//TextParse app("yourfile.conf");
	TextParse app; //creates a sample.conf
	if(app.loadFile()){
		//app.showBuffer(); //Displays raw data loaded from file
		if(app.dataParse()){
			//app.showFormattedDataAll(); //Displays stored vector
			cout<<app.getConfigKey(1);
			cout<<" = ";
			cout<<app.getConfigValue(1)<<endl;
			cout<<app.getConfigKey(2);
			cout<<" = ";
			cout<<app.getConfigValue(2)<<endl;
		}
	}
	return 0;
}
