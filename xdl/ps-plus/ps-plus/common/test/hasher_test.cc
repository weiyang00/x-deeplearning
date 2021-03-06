/* Copyright (C) 2016-2018 Alibaba Group Holding Limited

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "gtest/gtest.h"
#include "ps-plus/common/hasher.h"

using ps::Hasher;

TEST(HasherTest, Hasher) {
  int value = Hasher::Hash128(123456789, 987654321);
  ASSERT_NE(value, 0);
  ASSERT_NE(value, 1);
}
