class Solution {
public:
    int countOperations(int num1, int num2) {
if(num1==0||num2==0) return 0;
int count = 0;
while(num1 != 0 && num2 != 0){ //as when any one number becomes 0 we have to end it there otherwise it will go to infinite loop as num2-0=num2 and same for num1 case.
if(num1 > num2)
num1 -= num2;
else
num2 -=num1;
count++;
}
return count;
}
};