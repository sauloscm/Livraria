#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <string>

class Livro {
public:

	Livro();
//
    Livro(const std::string& titulo, const std::string& autor, int anoPublicacao);
    std::string getTitulo() const;
    std::string getAutor() const;
    int getAnoPublicacao() const;
    void setAnoPublicacao(int ano);
	void setNome(const std::string& novoNome);
    void setAutor(const std::string& novoAutor);

private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
};

#endif
