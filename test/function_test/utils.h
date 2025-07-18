/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TEST_FUNCTION_TEST_UTILS_H_
#define TENCENTCLOUD_TEST_FUNCTION_TEST_UTILS_H_

#include <string>
#include <stdlib.h>

class CUtils
{
public:
    static std::string GetEnv(const std::string &env)
    {
        char* value = getenv(env.c_str());
        if (value == nullptr) {
            return "";
        }
        return std::string(value);
    }
};

#endif // !TENCENTCLOUD_TEST_FUNCTION_TEST_UTILS_H_
