/*
 * SDNV.cpp
 *
 * Copyright (C) 2011 IBR, TU Braunschweig
 *
 * Written-by: Johannes Morgenroth <morgenroth@ibr.cs.tu-bs.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 * THIS FILE BASES ON DTN_2.4.0/SERVLIB/BUNDLING/SDNV.CC
 */

#include "ibrdtn/data/SDNV.h"
#include <ibrdtn/utils/Random.h>

namespace dtn
{
	namespace data
	{
		template<class E>
		uint32_t SDNV<E>::get_random_number() {
			dtn::utils::Random r;
			return static_cast<uint32_t>(r.gen_number());
		}
	}
}
