/*
* Create a C++ program for a Game Character Battle System using inheritance, method overriding, virtual functions, and runtime polymorphism.
*
* Create a parent class Character with:
* - string name
* - int health
* - int power
* - Parameterized constructor
* - virtual void attack()
* - virtual void defend()


 *                   Character
 *                  /    |     \
 *             Warrior  Mage   Archer
*
* The default attack should display:
* "<name> performs a basic attack!"
*
* The default defend should display:
* "<name> blocks the attack!"
*
* Create three child classes:
*
* 1. Warrior
* - Inherit from Character.
* - Override attack().
* - Damage = power + 20.
* - Display: "<name> swings his sword!"
* - Display the damage.
* - Override defend() and display: "<name> raises his shield!"
*
* 2. Mage
* - Inherit from Character.
* - Override attack().
* - Damage = power * 2.
* - Display: "<name> casts Fireball!"
* - Display the damage.
* - Override defend() and display: "<name> creates a magical shield!"
*
* 3. Archer
* - Inherit from Character.
* - Override attack().
* - Damage = power + 10.
* - Display: "<name> fires an arrow!"
* - Display the damage.
* - Override defend() and display: "<name> quickly moves away!"
*
* Use the override keyword in every overridden method.
*
* Create these objects:
*
* Warrior w("Thor", 100, 60);
* Mage m("Merlin", 100, 70);
* Archer a("Robin", 100, 50);
*
* Call attack() and defend() for all three objects.
*
* Then demonstrate runtime polymorphism by creating:
*
* Character *c1 = new Warrior("Thor", 100, 60);
* Character *c2 = new Mage("Merlin", 100, 70);
* Character *c3 = new Archer("Robin", 100, 50);
*
* Call:
*
* c1->attack();
* c2->attack();
* c3->attack();
*
* c1->defend();
* c2->defend();
* c3->defend();
*
* The correct child-class methods must execute.
*
* Now create:
*
* void startBattle(Character *player)
*
* Inside this function:
*
* player->attack();
* player->defend();
*
* Call:
*
* startBattle(&w);
* startBattle(&m);
* startBattle(&a);
*
* The function must work correctly for all three character types without changing the function.
*
* Finally, add a fourth child class called Assassin.
*
* Assassin:
* - Override attack().
* - Damage = power * 3.
* - Display: "<name> attacks from behind!"
* - Display the critical damage.
* - Override defend() and display: "<name> disappears into the darkness!"
*
* The existing startBattle() function must work with Assassin without any modification.
*
* After completing the program, explain:
*
* 1. Why is attack() declared virtual in Character?
* 2. Why does Character* point to Warrior, Mage, and Archer objects?
* 3. Why does c1->attack() execute Warrior::attack()?
* 4. What happens if virtual is removed?
* 5. What is the purpose of override?
* 6. What is the difference between overriding and overloading?
* 7. What is the purpose of Character::attack() if called from a child class?
* 8. Why is Warrior* w = new Character(); invalid?
*/

#include <iostream>
using namespace std;

class Character
{
protected:
    string name;
    int health;
    int power;

    Character(string name, int health, int power)
    {
        this->health = health;
        this->power = power;
        this->name = name;
        cout << "Character arc has started..\n";
    }

public:
    virtual void attack()
    {
        cout << name << " performs basic attack" << endl;
    }

    virtual void defend()
    {
        cout << name << " blocks the attack" << endl;
    }

    ~Character()
    {
    }
};

class Warrior : public Character
{
public:
    Warrior(string name, int health, int power) : Character(name, health, power)
    {
    }
    void attack() override
    {
        cout << name << " Swings his sword" << endl;
        cout << "Damage : " << power + 20 << endl;
    }

    void defend() override
    {
        cout << name << " raises his shield" << endl;
    }
};

class Mage : public Character
{
public:
    Mage(string name, int health, int power) : Character(name, health, power)
    {
    }
    void attack() override
    {
        cout << name << " Casts Fireball" << endl;
        cout << "Damage : " << power * 2 << endl;
    }

    void defend() override
    {
        cout << name << " creates a magical shield" << endl;
    }
};

class Archer : public Character
{
public:
    Archer(string name, int health, int power) : Character(name, health, power)
    {
    }
    void attack() override
    {
        cout << name << " fires an arrow" << endl;
        cout << "Damage : " << power + 10 << endl;
    }

    void defend() override
    {
        cout << name << " quickly moves away" << endl;
    }
};

int main()
{
    // Character *c1;
    // Warrior w();

    // c1 = &w;

    Character *c1 = new Warrior("Thor", 100, 60);
    Character *c2 = new Mage("Merlin", 100, 70);
    Character *c3 = new Archer("Robin", 100, 50);

    c1->attack();
    c2->attack();
    c3->attack();

    c1->defend();
    c2->defend();
    c3->defend();

    delete c1;
    delete c2;
    delete c3;
    return 0;
}