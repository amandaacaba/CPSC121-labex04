#include <iostream>
#include <iomanip>

int main() {

std::cout << std::setprecision(2) << std::fixed;

double monthlySales = 0;
double totalSales = 0;
double averageSales = 0;

std::cout << "Annual sales report\n";
std::cout << "===================\n";
std::cout << "Please provide the monthly sales for the year.\n";

for (int i = 1; i < 13; i++) {
  std::cout << "Month " << i << ": $";
  std::cin >> monthlySales;
  totalSales += monthlySales;
  averageSales = totalSales / i;
}

std::cout << "Total sales: $" << totalSales << "\n";
std::cout << "Average monthly sale: $" << averageSales;

}
