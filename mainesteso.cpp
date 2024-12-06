int main() {
    DizionarioEsteso<int> dizionario;

    dizionario.inserisci("zaino", 10);
    dizionario.inserisci("astuccio", 20);
    dizionario.inserisci("diario", 30);

    dizionario.stampa();

    std::cout << "Valore associato a 'zaino': " << dizionario.recupera("zaino") << std::endl;

    if (dizionario.appartiene("astuccio")) {
        std::cout << "'astuccio' è nel dizionario.\n";
    } else {
        std::cout << "'astuccio' non è nel dizionario.\n";
    }

    dizionario.cancella("astuccio");
    dizionario.stampa();

    if (dizionario.appartiene("astuccio")) {
        std::cout << "'astuccio' è nel dizionario.\n";
    } else {
        std::cout << "'astuccio' non è nel dizionario.\n";
    }

    return 0;
}
