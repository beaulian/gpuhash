#pragma once

#include <vector_types.h>

namespace gpuhash {
	const unsigned kPrimeDivisor = 4294967291u;

	void GenerateFunctions(const unsigned  N,
						   const unsigned  num_keys,
						   const unsigned *d_keys,
						   const unsigned  table_size,
						   uint2    *constants);
}