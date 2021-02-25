#include <iostream>
#include "book.hpp"

int main() {
    Book magicalRealism;
    magicalRealism.setAuthor("Isabel Allende");
    magicalRealism.setGenre("Magical Realism");
    magicalRealism.setTitle("Daughter of Fortune");

    std::cout<< magicalRealism.getAuthor()<< " is a "<< magicalRealism.getGenre()<<" writer. One of the author's books from this genre is "<<magicalRealism.getTitle()<<"/n";

}