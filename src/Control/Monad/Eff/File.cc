#include <fstream>
#include <sstream>
#include "PureScript/PureScript.hh"

namespace Control_Monad_Eff_File {
  auto readFile(std::string file_name) -> std::function<std::string ()> {
    return [=]() -> std::string {
      std::ifstream t(file_name);
      std::stringstream buffer;
      buffer << t.rdbuf();

      return buffer.str();
    };
  }
}
