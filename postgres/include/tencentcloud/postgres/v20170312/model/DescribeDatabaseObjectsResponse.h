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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects response structure.
                */
                class DescribeDatabaseObjectsResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsResponse();
                    ~DescribeDatabaseObjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Query object list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectSet Query object list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetObjectSet() const;

                    /**
                     * 判断参数 ObjectSet 是否已赋值
                     * @return ObjectSet 是否已赋值
                     * 
                     */
                    bool ObjectSetHasBeenSet() const;

                    /**
                     * 获取Specifies the total number of objects.
                     * @return TotalCount Specifies the total number of objects.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Query object list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_objectSet;
                    bool m_objectSetHasBeenSet;

                    /**
                     * Specifies the total number of objects.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
