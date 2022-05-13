#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
	if (argc != 4 || std::strlen(argv[2]) == 0) {
		std::cerr << "Error: 3 parameters required(./sed [filename] [str1] [str2])" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::ifstream ifs;
	std::ofstream ofs;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string str;
	size_t pos = 0;

	std::cout << argv[1] << " " << argv[2] << " " << argv[3] << std::endl;
	filename.append(".replace");
	ifs.open(argv[1]);
	ofs.open(filename, std::ofstream::out | std::ofstream::trunc);
	if (ifs.fail() || ofs.fail()) {
		std::cerr << "Error: file open failed" << std::endl;
		return 1;
	}
	
	std::stringstream ss;
	ss << ifs.rdbuf();
	ifs.close();

	str = ss.str();
	pos = 0;
	while (true) {
		pos = str.find(s1, pos);
		if (pos == std::string::npos)
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}

	ofs << str;
	ofs.close();

	return (0);
}