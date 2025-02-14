#include <iostream>
#include <fstream>
#include <sstream>




int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;

	std::string stringNumOne;
	std::string stringNumTwo;
	std::string text;

	int numOne;
	int numTwo;
	int sum;

	inFile.open("data.csv");
	while (getline(inFile,currentLine)){

		converter.clear();
		converter.str(currentLine);

		getline(converter,stringNumOne,',');
		getline(converter,stringNumTwo, ',');
		getline(converter,text);

		converter.clear();
		converter.str("");

		converter << stringNumOne << " " << stringNumTwo;
		converter >> numOne >> numTwo;

		sum = numOne + numTwo;

		for (int i = 0; i < sum; i++){
			std::cout << text << " ";
		
		}
		std::cout << std::endl;
	
	}

	inFile.close();
}
