#include<iostream>
#include<cstring>

using namespace std;
/**
	A fluffy cat which is not helping me
*/
struct cat {
	/**
		I am funny public function
	*/
	void do_stuff_public();

	/**
		Make this cat look super cute if user needs
	*/
	void make_cute();

	/**
		Count cat if user needs
	*/
	int count_cat();

	private:
	/**
		Suspicious private method which clean cat
	*/
	void clean_cat();
};


class dog{
	/**
		I am funny public function
	*/
	void set_dog_name();

	/**
		Make this cat look super cute if user needs
	*/
	void set_dog_color();

	public:
	/**
		Count cat if user needs
	*/
	int count_dog();

	/**
		Suspicious private method which clean cat
	*/
	void paint_dog();
};

// Inherittance
/// Documenting Base Class
class Base_A{

	/// Name of each student
	char Name[50];

	public:
		Base_A(char *name_1, char *id_1){
			strcpy(Name,name_1);
			strcpy(Id,id_1);
		}

		/// Prints student info
		void PrintStudentInfo();

		/// ID of each student
		char Id[20];
};


/// Documenting Child Class
class Child_A : public Base_A{

	/// Nationality of each student
	char Nationality[50];

	/// Fees of each student
	float fees;

	public:
		Child_A(char *name_1, char *id_1, char *nationality_1, float fees_1):Base_A(name_1, id_1){
			strcpy(Nationality,nationality_1);
			fees = fees_1;}

		/// Prints student register info
		void PrintRegInfo();
};


/// It will print a final status of the project
void print_status();


/// example ENUM datatype
/**
 * uses to set Color
 */
enum class GROUP_COLOR
	{
		black = 0,
		blue = 1,
		green = 2,
		violet = 3,
		purple = 4,
		yellow = 5
	};