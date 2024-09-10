#include <iostream>
#include <vector>

using namespace std;

// Функция для поиска всех уникальных подмассивов с суммой S
void findSubarraysWithSumS(const vector<int>& nums, int S) {
    int n = nums.size();
    
    // Внешний цикл проходит по каждому стартовому индексу подмассива
    for (int i = 0; i < n; i++) {
        int summ = 0;
        
        // Внутренний цикл расширяет подмассив, начиная с индекса start
        for (int j = i; j < n; j++) {
            summ += nums[j];

            // Если сумма подмассива равна S, выводим индексы
            if (summ == S) {
                cout << "Subarray from index " << i << " to " << j << endl;
            }
        }
    }
}

int main() {
    vector<int> nums = {-12, 2, 12, -20, 8};
    int S = -10;

    cout << S << endl;
    findSubarraysWithSumS(nums, S);

    return 0;
}

