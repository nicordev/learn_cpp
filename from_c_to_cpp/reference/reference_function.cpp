// With references

struct Coordonnees
{
    int x;
    int y;
};

int main()
{
    Coordonnees point;

    remiseAZero(point);

    return 0;
}

void remiseAZero(Coordonnees &pointAModifier)
{
    pointAModifier.x = 0;
    pointAModifier.y = 0;
}

/*
// With pointers

int main()
{
    Coordonnees point;

    remiseAZero(&point);

    return 0;
}

void remiseAZero(Coordonnees *pointAModifier)
{
    pointAModifier->x = 0;
    pointAModifier->y = 0;
}

*/