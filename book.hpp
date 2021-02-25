#include <string>

class Book{
   std::string title;
   std::string author;
   std::string genre;

   public:
   void setTitle(std::string new_title);
   void setAuthor(std::string new_author);
   void setGenre(std::string new_genre);
   std::string getTitle();
   std::string getAuthor();
   std::string getGenre();


};