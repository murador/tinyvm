/*
 * VMInstance.h
 *
 *  Created on: 12/nov/2014
 *      Author: Gianfranco Murador
 * Define the instance of the virtual machine,
 * such as free memory , object allocated and jit provisioning.
 * NOTE: the parser is out of scope of the runtime
 */

#ifndef VMINSTANCE_H_
#define VMINSTANCE_H_
#include "JITCompiler.h"
#include "GarbageCollector.h"
using namespace vm::compiler;
namespace vm {

namespace runtime {

	class VMInstance {
	private:
		unsigned long high_mem;
		unsigned long low_mem;
		unsigned long size_of_memory;
		unsigned long num_of_thread;

		// ogni istanza della vm ha un proprio JITCompiler
		// e un proprio GarbageCollector

		JITCompiler *jc;
		GarbageCollector *gc;
	public:
		VMInstance();
		virtual ~VMInstance();
	};
 } /* namespace runtime */
} /* namespace vm */

#endif /* VMINSTANCE_H_ */
