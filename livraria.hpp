#ifndef lIVRARIA_HPP
#define LIVRARIA_HPP

#include "livro.hpp"
#include <vector>
#include <string>

class Livraria {
public:
	Livraria();

    void adicionarLivro(const Livro& livro);
    void listarLivros() const;
    void editarLivro(const std::string& titulo, int novoAno);
    void excluirLivro(const std::string& titulo);
    void pesquisarLivro(const std::string& titulo) const;
	void editarLivro(const std::string& titulo, 
	const std::string& novoNome, const std::string& novoAutor, int novoAno);
	


private:
	std::vector<Livro> livros;
};

#endif
