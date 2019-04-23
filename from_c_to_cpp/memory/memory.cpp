int main()
{
    // Variable
    int *variable = 0;

    variable = new int; // Allocation de mémoire

    delete variable; // Libération de mémoire

    // Tableaux
    int taille = 20;
    int *tableau = 0;

    tableau = new int[taille]; // Allocation de mémoire ("taille" cases)

    delete[] tableau; // Libération de mémoire

    return 0;
}
