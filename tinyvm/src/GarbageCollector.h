/*
 * GarbageCollector.h
 *
 *  Created on: 26/dic/2014
 *      Author: Gianfranco Murador
 * Defines a weak garbage collector for the vm.
 *
 */

#ifndef GARBAGECOLLECTOR_H_
#define GARBAGECOLLECTOR_H_
// good we can use boost for restro-compabilty
#if __cplusplus < 201103L
#include <boost/shared_ptr.hpp>
#endif

namespace vm {
namespace runtime {

class GarbageCollector {
private:
	// facciamo un test di compilazione
	boost::shared_ptr<int> _test;
public:
	GarbageCollector();
	virtual ~GarbageCollector();
};

} /* namespace runtime */
} /* namespace vm */

#endif /* GARBAGECOLLECTOR_H_ */
