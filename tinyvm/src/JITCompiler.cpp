/*
 * JITCompiler.cpp
 *  Created on: 05/nov/2014
 *      Author: Gianfranco Murador
 * Define a llvm jit compiler wrapper
 */

#include "JITCompiler.h"

namespace vm {
namespace compiler {

JITCompiler::JITCompiler() {

}
JITCompiler::~JITCompiler() {
}

// TODO: verficare come integrare il metodo con llvm
std::string JITCompiler::translate(std::stringstream out, int pos, ARCH arch) {
	return "";
}


} /* namespace compiler */
} /* namespace vm */

