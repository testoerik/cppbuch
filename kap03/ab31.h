using namespace std;

class Person {
	private:
		std::string name_;
		int alter_;
	public:
		// Getter functions for name_ and alter_.
		std::string getName() {return name_; }
		int getAlter() {return alter_; };
		
		std::string setName(const std::string& neuerName);
		int setAlter(int neuesAlter);
		// Constructor
		Person();
};

