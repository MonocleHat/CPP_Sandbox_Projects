#ifndef DATA_ASSESSMENT_H_
#define DATA_ASSESSMENT_H_
#include <string>
namespace data {
	class Prompts {
		std::string m_topic;
		std::string m_prompt;
		int difficulty;


		std::string getTopic();
		std::string getPrompt();
		int getDifficulty();
	public:
		bool loadPrompts(const std::string filename);
		bool loadObjects(Prompts& f_prompt);
		void display();
		void memDel();
	};
}


#endif