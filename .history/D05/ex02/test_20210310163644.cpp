    #include <iostream>
    using namespace std;

    const char BLANK = ' ';
    const char LEAF = '#';
    const char WOOD = '|';

    void drawAXmasTree();
    void drawFoliage(int);
    void drawTrunk(int);
    void getValidHeight(int&);
    void drawALineOfFoliage(int, int);

    int main()
    {
        cout << "Due on 11 December 2018 \n\n";
        drawAXmasTree();

        system("pause");
    }

    void drawAXmasTree()
    {
        int treeHeight = 0;

        getValidHeight(treeHeight); 
        drawFoliage(treeHeight);             
        drawTrunk(treeHeight);          
    }

    void drawFoliage(int trHgt) 
    {
        int branchLine = 1;
        int treeHeight = trHgt;

        while (branchLine <= (trHgt - 2))
        {
            drawALineOfFoliage(treeHeight, branchLine);
            branchLine += 1;
        }
    }

    void drawTrunk(int trHgt)   
    {
        int trunkLine = 1;
        int spaces;

        for (trunkLine; trunkLine <= 2; trunkLine++)
        {
            for (spaces = 1; spaces <= (trHgt - 1); spaces++)
            {
                cout << BLANK;
            }
            cout << WOOD;
            cout << "\n";

        }
    }

    void getValidHeight(int& trHgt)
    {
        do
        {
            cout << "Enter the size of the tree(4 - 20): ";
            cin >> trHgt;
            if (trHgt < 4 || trHgt > 20)
            {
                cout << "ERROR: Invalid height! ";
            }
        } while (trHgt < 4 || trHgt > 20);
    }

    void drawALineOfFoliage(int trHgt, int brLine)
    {
        int treeHeight = trHgt;
        int branchLine = brLine;
        int spaces(0);
        int tree(0);

        for (spaces; spaces < (trHgt - branchLine); spaces++)
        {
            cout << BLANK;
        }
        for (tree; tree < (branchLine * 2 - 1); tree++)
        {
            cout << LEAF;
        }
        cout << endl;
    }