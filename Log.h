#include <string>
#include <iostream>

enum ERROR {INVALID, };

class Log {
public:
	static void m(std::string, std::string);	
	static void m(std::string, std::string, std::string);	
};

void Log::m(std::string TAG, std::string mTAG){
	m(TAG, mTAG, " ");
	//std::cout << TAG << ": " << mTAG  << std::endl;
}

void Log::m(std::string TAG, std::string mTAG, std::string message){
	std::cout << TAG << ": " << mTAG << " " << message  << std::endl;
}



