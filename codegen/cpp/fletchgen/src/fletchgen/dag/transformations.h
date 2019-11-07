// Copyright 2018-2019 Delft University of Technology
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <string>
#include <vector>

#include "fletchgen/dag/composer.h"

#pragma once

namespace fletchgen::dag {

Transform Sum(const PrimRef &type);
Transform SplitByRegex(const std::string &regex);
Transform Zip(const std::vector<TypeRef> &inputs);
Transform Zip(const ListRef &t0, const PrimRef &t1);
Transform IndexOfComparison(const ListRef &item_type, const std::string &op);
Transform Select(const ListRef &t);
Transform Sort(const ListRef &list_type);
Transform SortBy(const Struct &input, size_t field_idx);

}  // namespace fletchgen::dag
