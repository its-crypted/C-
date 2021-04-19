#include <iostream>

//polymorphism allow us to use the same function
//and have many different outcomes.

using namespace std;

class Enemy {
	protected:
		int attackPower;
	public:
		void setAttackPower(int a){
			attackPower = a;
		}
};

class Ninja: public Enemy{
	public:
		void attack(){
			cout << "I'm a ninja swipe! - " << attackPower << endl;
		}
};

class Monster: public Enemy{
	public:
		void attack()
		{
			cout << "Monster must eat you!!! - " << attackPower << endl;
		}
};


int main(){
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1 -> setAttackPower(23);
	enemy2 -> setAttackPower(99);
	n.attack();
	m.attack();
}
