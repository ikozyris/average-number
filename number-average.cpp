/*
    Copyright (C) 2022  Ioannis Kozyris
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <vector>


using namespace std;

 int main() {

    int temp;
    int sum = 0;
    int n;

    vector<int> nums;

    printf("Enter number of elements: ");
    scanf("%d", &n);
   // printf("\n");
    printf("Enter elements: \n");

    for (int i=0; i<n; i++)
    {
        scanf("%d", &temp);

        nums.push_back(temp);

        sum += temp;
    }


    printf("Average:%d", sum/nums.size());

    return 0;
 }
