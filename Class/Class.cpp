#include <iostream>
using namespace std;

enum Gender { MALE, FEMALE };
enum HairColor { DARK, LIGHT };

class House
{
public:
    string address;
    double area;
    int storeys;
    int numberOfRooms;
    int sellingPricePerSquareMeter;
    int repairPricePerSquareMeter;
    bool isRepairRequired;

    void ShowHouse()
    {
        cout << "Address of the house - " << address << "."  << "\n";
        cout << "Area of house is " << area << " square meters." << "\n";
        cout << "Number of storeys of the house  - " << storeys << "." << "\n";
    }

    void SellHouse()
    {
        cout << "Selling price of a house - " << area * sellingPricePerSquareMeter << " dollars." << "\n";
    }

    void Repair()
    {
        if (isRepairRequired)
            cout << "House renovation cost - " << repairPricePerSquareMeter * area << " dollars." << "\n";
        else 
            cout << "The house does not need renovation" << "\n";
    }

    void AverageRoomArea()
    {
        cout << "Average room area " << area / numberOfRooms << " square meters." << "\n";
    }

    void AveragaFloorArea()
    {
        cout << "Average floor area " << area / storeys << " square meters." << "\n";
    }
};

class Room
{
public:
    string usage;
    double ceilingHeight;
    double area;
    int windows;
    int timeForOneMeterCleaning;
    bool isFurnitureAvailable;
    bool isBalconyAvaialble;

    void ShowRoom()
    {
        cout << "This room is " << usage << "\n";
        cout << "Room has " << windows << " windows" << "\n";
        cout << "Area of room is " << area << " square meters." << "\n";
    }

    void CleaningRoom()
    {
        cout << "To clean whole room you need " << timeForOneMeterCleaning * area / 60 << " hours" << "\n";
    }

    void FurnishRoom()
    {
        if (!isFurnitureAvailable)
            cout << "You need furnish the room with furniture " << "\n";
        else 
            cout << "You don't need furnish the room with furniture " << "\n";
    }

    void BuildSecondFloor()
    {
        if (ceilingHeight >= 4)
            cout << "You can build second floor" << "\n";
        else if (ceilingHeight < 4)
            cout << "You can not build second floor" << "\n";
    }

    void BuildBalcony()
    {
        if (windows > 0 && isBalconyAvaialble == false)
            cout << "You can build balcony" << "\n";
        else if (isBalconyAvaialble)
            cout << "You can enjoy great view from your balcony!" << "\n";
        else 
            cout << "You can not build balcony" << "\n";
    }



};

class Fridge
{
public:
    string color;
    double totalVolume;
    int compartments;
    int height;
    bool isFreezerAvailable;

    void ShowFridge()
    {
        cout << "This fridge is " << color << "\n";
        cout << "It's total volume is " << totalVolume << "\n";
    }

    void ModifyCompartments()
    {
        if (compartments > 3)
            cout << "You can cnahnge the number of compartments" << "\n";
        else if (compartments <= 3)
            cout << "You can not cnahnge the number of compartments" << "\n";
    }

    void AverageVolumeOneCompartment()
    {
        cout << "The average volume of one compartment is " << totalVolume / compartments << " liters" << "\n";
    }

    void IsFreezerNeeded()
    {
        if (isFreezerAvailable)
            cout << "You do not need to buy freezer" << "\n";
        else 
            cout << "You need to buy freezer" << "\n";
    }

    void InstallationMethod()
    {
        if (height < 2)
            cout << "Your refrigerator built-in kitchen furniture " << "\n";
        else 
            cout << "Your refrigerator is freestanding" << "\n";
    }
};

class Food
{
public:
    string fruits;
    string vegetables;
    string meat; 
    string fish;
    string porridge;

    void Breakfast()
    {
        cout << "You have " << fruits << " and cottage cheese for breakfast" << "\n";
    }

    void Lunch()
    {
        cout << "You have " << vegetables << " and " << fish << " for lunch" << "\n";
    }

    void Dinner()
    {
        cout << "You have " << meat << " and " << porridge << " for dinner" << "\n";
    }

    void Supper()
    {
        cout << "You have " << fish << " and pasta for supper" << "\n";
    }

    void Snack()
    {
        cout << "You have " << meat << " and " << vegetables << " salad for snack" << "\n";
    }

};

class Beverage
{
public:
    string morningDrink;
    string sweetWater;
    string juices;
    string alcohol;
    string milkDrink;
    string berries;

    void MorningDrink()
    {
        cout << "In the morning I prefer " << morningDrink << "\n";
    }

    void HotDrink()
    {
        cout << "To make hot drink you need to mix hot " << milkDrink << " and " << morningDrink << "\n";
    }

    void LongDrink()
    {
        cout << "To make long drink you need to mix " << alcohol << " and " << sweetWater << "\n";
    }

    void ShortDrink()
    {
        cout << "To make short drink you need to mix " << alcohol << " and " << juices << " juice" << "\n";
    }

    void MilkCoctail()
    {
        cout << "Very tasty mild drink is mix of " << berries << " and " << milkDrink << "\n";
    }
};

class Cat
{
public:
    string breed;
    string name;
    string color;
    int birthYear;
    Gender cat;
    bool IsLitterBoxTrained;
    bool IsCatVaccinated;

    void ShowCat()
    {
        cout << "Cat breed is " << breed << "\n";
        cout << "Cat's name is " << name << "\n";
        cout << "Cat's color is " << color << "\n";
    }

    void AgeCat()
    {
        cout << "Age of cat is " << 2022 - birthYear << " years" << "\n";
    }

    void IsOffspringPosiable()
    {
        if (cat == FEMALE)
            cout << "Can bring kittens home" << "\n";
        else 
            cout << "Can not bring kittens home" << "\n";
    }

    void IsWalkOutNeeded()
    {
        if (IsLitterBoxTrained)
            cout << "You do not need to walk with cat" << "\n";
        else 
            cout << "You need to walk with cat three times a day" << "\n";
    }

    void IsVaccineNeeded()
    {
        if (IsCatVaccinated)
            cout << "You do not need to visit the veterinarian this year for vaccinations " << "\n";
        else 
            cout << "You need to visit the veterinarian this year for vaccinations " << "\n";
    }
};

class Person
{
public:
    string name;
    string profession;
    string address;
    int birthYear;
    HairColor hairColor;
    bool IsLikeSinging;

    void Introduction()
    {
        cout << "The name of person is " << name << "\n";
        cout << "The profession is " << profession << "\n";
    }

    void AgePerson()
    {
        cout << "Age of person is " << 2022 - birthYear << " years" << "\n";
    }

    void ColorHair()
    {
        if (hairColor == DARK)
            cout << "The person is brunet" << "\n";
        else 
            cout << "The person is blond" << "\n";
    }

    void LivingPlace()
    {
        cout << "The address of person is " << address << "\n";
    }

    void Singing()
    {
        if (IsLikeSinging)
            cout << "We can go to karaoke !!!" << "\n";
        else 
            cout << "We can go to karaoke and try to make you like singing !!!" << "\n";
    }

};

int main()
{
    House SellingHouse;
    SellingHouse.address = "Independence Square 15";
    SellingHouse.area = 120;
    SellingHouse.numberOfRooms = 5;
    SellingHouse.storeys = 2;
    SellingHouse.repairPricePerSquareMeter = 100;
    SellingHouse.sellingPricePerSquareMeter = 1000;
    SellingHouse.isRepairRequired = true;
    SellingHouse.ShowHouse();
    SellingHouse.Repair();
    SellingHouse.SellHouse();
    SellingHouse.AveragaFloorArea();
    SellingHouse.AverageRoomArea();
    cout << "\n";

    Room Kitchen;
    Kitchen.area = 20;
    Kitchen.ceilingHeight = 3.5;
    Kitchen.isBalconyAvaialble = false;
    Kitchen.isFurnitureAvailable = false;
    Kitchen.timeForOneMeterCleaning = 15;
    Kitchen.usage = "kitchen";
    Kitchen.windows = 2;
    Kitchen.ShowRoom();
    Kitchen.FurnishRoom();
    Kitchen.BuildBalcony();
    Kitchen.BuildSecondFloor();
    Kitchen.CleaningRoom();
    cout << "\n";

    Fridge New;
    New.color = "stainless steel";
    New.compartments = 5;
    New.height = 2;
    New.isFreezerAvailable = true;
    New.totalVolume = 400;
    New.ShowFridge();
    New.AverageVolumeOneCompartment();
    New.InstallationMethod();
    New.IsFreezerNeeded();
    New.ModifyCompartments();
    cout << "\n";

    Food Menu;
    Menu.fish = "salmon";
    Menu.fruits = "peaches";
    Menu.meat = "chicken";
    Menu.porridge = "buckwheat";
    Menu.vegetables = "tomatoes";
    Menu.Breakfast();
    Menu.Dinner();
    Menu.Lunch();
    Menu.Supper();
    Menu.Snack();
    cout << "\n";

    Beverage Drinks;
    Drinks.alcohol = "vodka";
    Drinks.berries = "strawberry";
    Drinks.juices = "orange";
    Drinks.milkDrink = "cream";
    Drinks.morningDrink = "coffee";
    Drinks.sweetWater = "Cola";
    Drinks.HotDrink();
    Drinks.LongDrink();
    Drinks.MilkCoctail();
    Drinks.MorningDrink();
    Drinks.ShortDrink();
    cout << "\n";

    Cat Murzik;
    Murzik.birthYear = 2020;
    Murzik.breed = "sphynx";
    Murzik.cat = MALE;
    Murzik.color = "grey";
    Murzik.IsCatVaccinated = true;
    Murzik.IsLitterBoxTrained = false;
    Murzik.name = "Murzik";
    Murzik.ShowCat();
    Murzik.AgeCat();
    Murzik.IsOffspringPosiable();
    Murzik.IsVaccineNeeded();
    Murzik.IsWalkOutNeeded();
    cout << "\n";

    Person Friend;
    Friend.address = "Independence Square 15";
    Friend.birthYear = 1995;
    Friend.hairColor = DARK;
    Friend.IsLikeSinging = false;
    Friend.name = "Anna";
    Friend.profession = "economist";
    Friend.Introduction();
    Friend.AgePerson();
    Friend.ColorHair();
    Friend.LivingPlace();
    Friend.Singing();
}