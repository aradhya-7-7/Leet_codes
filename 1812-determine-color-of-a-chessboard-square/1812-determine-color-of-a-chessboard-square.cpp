class Solution {
public:
    bool squareIsWhite(string coordinates)
    {
        char f=coordinates[0];
        char l=coordinates[1];
        if((f=='a'||f=='c'||f=='e'||f=='g')&&(l=='2'||l=='4'||l=='6'||l=='8'))
            return true;
        else if((f=='b'||f=='d'||f=='f'||f=='h')&&(l=='1'||l=='3'||l=='5'||l=='7'))
            return true;
        else
            return false;
    }
};