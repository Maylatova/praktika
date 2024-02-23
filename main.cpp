#include <iostream>
using namespace std;

int main()
{
    const int n = 15;
    int a[n], i, countOfNegatives = 0, sumOfElements = 0, maxOfNegativeElements, firtsEvenNumber, lastEvenNumber, minOfElements, countOfPositive = 0, sumOfPositive = 0, temp;
    cout << "Input elements(" << n << " elements)" << endl;
    for (i = 0; i < n; i++) cin >> a[i];
    cout << "Output elements" << endl;
    for (i = 0; i < n; i++) cout << a[i] << " ";
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0) countOfNegatives++;
    }
    for (i = 0; i < n; i++) sumOfElements += a[i];
    double averageNumber = (double)sumOfElements / n;
    i = 0;
    while (i < n && a[i] >= 0) i++;
    if (i == n) cout << "\nNo negative elements\n";
    else
    {
        maxOfNegativeElements = a[i];
        for (; i < n; i++)
        {
            if (a[i] < 0 && a[i] > maxOfNegativeElements)
            {
                maxOfNegativeElements = a[i];
            }
        }
        cout << "\nThe amount of negatives elements in the array = " << countOfNegatives << endl;
        cout << "The max element of negative elements in the array = " << maxOfNegativeElements << endl;
    }
    i = 0;
    while (i < n && (a[i] % 2) != 0) i++;
    if (i == n) cout << "No even elements in the array\n";
    else
    {
        firtsEvenNumber = a[i];
        cout << "The first even number a[" << i << "] = " << firtsEvenNumber << endl;
        int g = n - 1;
        while (g >= i && (a[g] % 2) != 0) g--;
        lastEvenNumber = a[g];
        if (g != i) cout << "The last even number a[" << g << "] = " << lastEvenNumber << endl;
    }
    minOfElements = a[0];
    for (i = 0; i < n; ++i)
    {
        if (a[i] < minOfElements)
        {
            minOfElements = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            countOfPositive++;
            sumOfPositive += a[i];
        }
    }
    if (countOfPositive == 0) cout << "No positive elements" << endl;
    else
    {
        double averagePositiveNumber = (double)sumOfPositive / countOfPositive;
        cout << "The average of positive elements in the array = " << averagePositiveNumber << endl;
    }
    for (i = 0; i < int(n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    cout << "The inverted order of the array:" << endl;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\nThe sum of elements in the array = " << sumOfElements << endl;
    cout << "The average number in the array = " << averageNumber << endl;
    cout << "The min of elements in the array = " << minOfElements << endl;
    for (i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "The array is sorted:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
