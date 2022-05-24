#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 private:
  std::string _ideas[100];

 public:
  Brain();
  Brain(const Brain& src);
  Brain& operator=(const Brain& src);
  ~Brain();
  void setIdea(size_t idx, const std::string idea);
  const std::string& getIdea(size_t idx);
};

#endif  // Brain_HPP