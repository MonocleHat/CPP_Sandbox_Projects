#ifndef DATA_FILEHANDLER_H_
#define DATA_FILEHANDLER_H_
#include <string>
namespace data {
	bool openFile(const std::string filename);
	void closeFile();
	int recordCount();
	bool read(std::string data);
	bool read(std::string subject);
	bool read(int& difficulty);
}
#endif