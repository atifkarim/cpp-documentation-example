#pragma once

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