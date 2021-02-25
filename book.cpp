#include "book.hpp";
#include <string>

void Book::setTitle(std::string new_title){
    title= new_title;
}
void Book::setAuthor(std::string new_author){
    author= new_author;
}
void Book::setGenre(std::string new_genre){
    genre= new_genre;
}
std::string Book::getTitle(){
    return title;
}
std::string Book::getAuthor(){
    return author;
}
std::string Book::getGenre(){
    return genre;
}