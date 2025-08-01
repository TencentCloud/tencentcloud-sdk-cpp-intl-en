/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ClassInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeClasses response structure.
                */
                class DescribeClassesResponse : public AbstractModel
                {
                public:
                    DescribeClassesResponse();
                    ~DescribeClassesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of database specifications
                     * @return ClassInfoSet List of database specifications
                     * 
                     */
                    std::vector<ClassInfo> GetClassInfoSet() const;

                    /**
                     * 判断参数 ClassInfoSet 是否已赋值
                     * @return ClassInfoSet 是否已赋值
                     * 
                     */
                    bool ClassInfoSetHasBeenSet() const;

                private:

                    /**
                     * List of database specifications
                     */
                    std::vector<ClassInfo> m_classInfoSet;
                    bool m_classInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESRESPONSE_H_
