    #include <iostream>

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
        std::cout << "Due on 11 December 2018 \n\n";
        drawAXmasTree();

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
                std::cout << BLANK;
            }
            std::cout << WOOD;
            std::cout << std::endl;

        }
    }

    void getValidHeight(int& trHgt)
    {
        do
        {
            std::cout << "Enter the size of the tree(4 - 20): ";
            std::cin >> trHgt;
            if (trHgt < 4 || trHgt > 20)
            {
                std::cout << "ERROR: Invalid height! ";
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
            std::cout << BLANK;
        }
        for (tree; tree < (branchLine * 2 - 1); tree++)
        {
            std::cout << LEAF;
        }
        std::cout << std::endl;
    }