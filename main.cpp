#include <iostream>
#include <vector>
#include "histogram.h"
#include "svg.h"

using namespace std;

int main()
{
    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;
    cerr << "Enter numbers: ";
    const auto numbers = input_numbers(number_count);
    size_t bin_count;
    cerr << "Enter column count: ";
    cin >> bin_count;
    const auto bins = make_histogram(numbers, bin_count);
    size_t BLOCK;
    bool F = true;
    cerr << "Enter BLOCK_WIDTH behind 3 and 30";
    while (F)
    {
        cin >> BLOCK;
        if (BLOCK >= 3 && BLOCK <= 30)
        F = false;
    }
    show_histogram_svg(bins, BLOCK);
    return 0;
}

