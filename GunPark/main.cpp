#include "iostream"

using namespace std;

class  Gun {
public:
    virtual void shoot()
    {
        cout << "Стреляю!" << endl;
    }
};

class autoGun : public  Gun {
public:
    void shoot() override
    {
        cout << "Стреляю! стреляю! стреляю!" << endl;
    }
};

class Bow : public  Gun {
public:
    void shoot() override
    {
        cout << "vzzz.." << endl;
    }
};

class Bazooka : public  Gun {
public:
    void shoot() override
    {
        cout << "ВBOOOOM!" << endl;
    }
};
class Player {
public:
    void shoot(Gun * gun)
    {
        gun->shoot();
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    Gun pistol;
    autoGun agun;
    Bow bow;
    Bazooka bazooka;
    // Gun* gun = &agun;//указатель Родиетля может содержать ссылку на своего потомка
    Player player;
    Gun* gun1 = &pistol;
    Gun* gun2 = &agun;
    Gun* gun3 = &bow;
    Gun* gun4 = &bazooka;

    player.shoot(gun1);
    player.shoot(gun2);
    player.shoot(gun3);
    player.shoot(gun4);

    return 0;
}