#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;

// This program is supposed to be a digital way to manage the DND group

class Character
{
private:
    string name;
    int hitPoints;
    int strength;
    int strengthModifier;
    int dexterity;
    int dexterityModifier;
    int constitution;
    int constitutionModifier;
    int intelligence;
    int intelligenceModifier;
    int wisdom;
    int wisdomModifier;
    int charisma;
    int CharismaModifier;
    double credits;

public:
    // getters
    string getName()
    {
        return name;
    }
    int getHitPoints()
    {
        return hitPoints;
    }
    int getStrength()
    {
        return strength;
    }
    int getStrengthModifier()
    {
        return strengthModifier;
    }
    int getDexterity()
    {
        return dexterity;
    }
    int getDexterityModifier()
    {
        return dexterityModifier;
    }
    int getConstitution()
    {
        return constitution;
    }
    int getConstitutionModifier()
    {
        return constitutionModifier;
    }

    int getIntelligence()
    {
        return intelligence;
    }
    int getIntelligenceModifier()
    {
        return intelligenceModifier;
    }
    int getWisdom()
    {
        return wisdom;
    }
    int getWisdomModifier()
    {
        return wisdomModifier;
    }
    int getCharisma()
    {
        return charisma;
    }
    int getCharismaModifier()
    {
        return CharismaModifier;
    }
    double getCredits()
    {
        return credits;
    }
    // setters
    void setName(string n)
    {
        name = n;
    }
    void setStrength(int s)
    {
        strength = s;
    }
    void setStrengthModifier(int sm)
    {
        strengthModifier = sm;
    }
    void setDexterity(int d)
    {
        dexterity = d;
    }
    void setDexterityModifier(int dm)
    {
        dexterityModifier = dm;
    }
    void setConstitution(int c)
    {
        constitution = c;
    }
    void setConstitutionModifier(int cm)
    {
        constitutionModifier = cm;
    }
    void setIntelligence(int i)
    {
        intelligence = i;
    }
    void setIntelligenceModifier(int im)
    {
        intelligenceModifier = im;
    }
    void setWisdom(int w)
    {
        wisdom = w;
    }
    void setWisdomModifier(int wm)
    {
        wisdomModifier = wm;
    }
    void setCharisma(int ch)
    {
        charisma = ch;
    }
    void setCharismaModifier(int cham)
    {
        CharismaModifier = cham;
    }
    void setCredits(int cred)
    {
        credits = cred;
    }
    // printing the character information
    void printInfo()
    {
        cout << setw(35) << "Character name: " << name << setw(3) << " Credits: " << credits << endl;
        cout << setw(35) << "Strength: " << strength << setw(3) << "  Strength Modifier: " << strengthModifier << endl;
        cout << setw(35) << "Dexterity: " << dexterity << setw(3) << "  Dexterity Modifier: " << dexterityModifier << endl;
        cout << setw(35) << "Constitution: " << constitution << setw(3) << "  Constitution Modifier: " << constitutionModifier << endl;
        cout << setw(35) << "Intelligence: " << intelligence << setw(3) << "  Intelligence Modifier: " << intelligenceModifier << endl;
        cout << setw(35) << "Wisdom: " << wisdom << setw(3) << "  Wisdom Modifer: " << wisdomModifier << endl;
        cout << setw(35) << "Charisma: " << charisma << setw(3) << "  Charisma Modifier: " << CharismaModifier << endl;
    }
};

int main()
{
    Character player1;
    Character player2;
    Character player3;

    Character playerList[3] = {player1, player2, player3};

    string name;
    int strength;
    int strengthModifier;
    int dexterity;
    int dexterityModifier;
    int constitution;
    int constitutionModifier;
    int intelligence;
    int intelligenceModifier;
    int charisma;
    int charismaModifier;
    double credits;

    fstream characterFile;

    characterFile.open("playerfile.txt", ios::in);

    if (characterFile.is_open())
    {
        cout << "File open successfully" << endl
             << "----------------------\n\n"
             << endl;

        cout << setw(50) << "Character information" << endl
             << setw(54) << "-----------------------------" << endl;

        for (int i = 0; i < 3; i += 1)
        {
            characterFile >> name >> strength >> strengthModifier >> dexterity >> dexterityModifier >> constitution >> constitutionModifier >> intelligence >> intelligenceModifier >> charisma >> charismaModifier >> credits;

            // Setting values for the character
            playerList[i].setName(name);
            playerList[i].setStrength(strength);
            playerList[i].setStrengthModifier(strengthModifier);
            playerList[i].setDexterity(dexterity);
            playerList[i].setDexterityModifier(dexterityModifier);
            playerList[i].setConstitution(constitution);
            playerList[i].setConstitutionModifier(constitutionModifier);
            playerList[i].setIntelligence(intelligence);
            playerList[i].setIntelligenceModifier(intelligenceModifier);
            playerList[i].setCharisma(charisma);
            playerList[i].setCharismaModifier(charismaModifier);
            playerList[i].setCredits(credits);

            // Printing character info
            playerList[i].printInfo();
        }
    }
    else
    {
        cout << "Failed to open the file..." << endl;
    }
    characterFile.close();
    if (characterFile.is_open() == false)
    {
        cout << "File closed successfully!!" << endl;
    }
    else
    {
        cout << "failed to close the file..." << endl;
    }
}