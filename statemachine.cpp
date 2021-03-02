#include <iostream>

const int NO_QUARTER = 0;
const int HAS_QUARTER = 1;

class gumballMachine {
	public:
		gumballMachine() { //constructor
			state_ = 0;
		}

		int getState() {
			return state_;
		}

		void insertQuarter(){
			if (state_ == NO_QUARTER) {
				std::cout << "\nquarter inserted";
				setState(HAS_QUARTER);
			} else {
				std::cout << "\nquarter could not be inserted";
			}
		}

		void ejectQuarter() {
			if(state_ == HAS_QUARTER ) {
				std::cout << "\nquarter ejected";
				setState(NO_QUARTER);
			} else {
				std::cout << "\nno quarter to eject";
			}
		}

	protected:


	private:
		int state_;

		void setState(int newState) {
			state_ = newState;
		}
};



int main() {

	gumballMachine gumball;

  std::cout << "\nWelcome to a simple Gumball State Machine!";
	std::cout << "\nCurrent State: " << gumball.getState() << "\n";


	gumball.ejectQuarter();
	gumball.insertQuarter();
	gumball.insertQuarter();
	gumball.ejectQuarter();
	gumball.insertQuarter();

}
