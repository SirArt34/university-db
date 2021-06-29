
#include <string>

enum class Gender
{
    None = 0,
	Man = 1,
	Woman = 1
};

class Student{

    private: 
    std::string name_;
    std::string surName_;
    std::string address_;
    unsigned indexNumber_;
    std::string pesel_;
    Gender gender_{ Gender::None };
};