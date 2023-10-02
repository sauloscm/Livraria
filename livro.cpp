#include "livro.hpp"


Livro::Livro() {
    // Inicialize membros, se necessário.
}

Livro::Livro(const std::string& titulo, const std::string& autor, int anoPublicacao)
    : titulo(titulo), autor(autor), anoPublicacao(anoPublicacao) {}

std::string Livro::getTitulo() const {
    return titulo;
}

std::string Livro::getAutor() const {
    return autor;
}

int Livro::getAnoPublicacao() const {
    return anoPublicacao;
}

void Livro::setAnoPublicacao(int ano) {
    anoPublicacao = ano;
}

void Livro::setNome(const std::string& novoNome) {
    titulo = novoNome;
}

void Livro::setAutor(const std::string& novoAutor) {
    autor = novoAutor;
}
