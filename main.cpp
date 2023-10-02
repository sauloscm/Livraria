//#include "livraria.hpp"
#include "menu.hpp"
#include <iostream>



int main() {
    Livraria livraria;

    livraria.adicionarLivro(Livro("Dom Casmurro", "Machado de Assis", 1899));
    livraria.adicionarLivro(Livro("1984", "George Orwell", 1949));
    livraria.adicionarLivro(Livro("O Apanhador no Campo de Centeio", "J.D. Salinger", 1951));
    livraria.adicionarLivro(Livro("Cem Anos de Solidão", "Gabriel García Márquez", 1967));
    livraria.adicionarLivro(Livro("A Revolução dos Bichos", "George Orwell", 1945));
    livraria.adicionarLivro(Livro("Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997));
    livraria.adicionarLivro(Livro("O Senhor dos Anéis: A Sociedade do Anel", "J.R.R. Tolkien", 1954));
    livraria.adicionarLivro(Livro("O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943));
    livraria.adicionarLivro(Livro("Crime e Castigo", "Fiódor Dostoiévski", 1866));
    livraria.adicionarLivro(Livro("A Metamorfose", "Franz Kafka", 1915));
    livraria.adicionarLivro(Livro("O Alquimista", "Paulo Coelho", 1988));
    livraria.adicionarLivro(Livro("O Hobbit", "J.R.R. Tolkien", 1937));
    livraria.adicionarLivro(Livro("Os Miseráveis", "Victor Hugo", 1862));
    livraria.adicionarLivro(Livro("Memórias Póstumas de Brás Cubas", "Machado de Assis", 1881));
    livraria.adicionarLivro(Livro("A Guerra dos Tronos", "George R.R. Martin", 1996));


    Menu menu(livraria);
    menu.executar();

    return 0;
}
