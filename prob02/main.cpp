#include <iostream>
#include <iomanip>

int main() {

int gameNumber = 0;
double gamePrice = 0;
double initialTotal = 0;
double newTotal = 0;
double savedAmount = 0;
bool discountOn = false;

std::cout << std::setprecision(2) << std::fixed;

std::cout << "Please input the number of game(s) you want to purchase: ";
std::cin >> gameNumber;

if (gameNumber > 0) {

  for (int i = 1; i <= gameNumber; i++) {
    std::cout << "Enter the price of the game: $";
    std::cin >> gamePrice;

    initialTotal += gamePrice;

    if (gamePrice >= 60) {
      discountOn = true;
    }

  }

  if (discountOn == true) {
    newTotal = initialTotal * .8;
    savedAmount = initialTotal - newTotal;
    std::cout << "The total cost of " << gameNumber << " game(s) is $" << newTotal;
  }
  else {
    std::cout << "The total cost of " << gameNumber << " game(s) is $" << initialTotal;
  }


  std::cout << "\nYou saved $" << savedAmount;

}

else {
  std::cout << "You need to purchase at least 1 game. Please rerun the program.";
}



}
