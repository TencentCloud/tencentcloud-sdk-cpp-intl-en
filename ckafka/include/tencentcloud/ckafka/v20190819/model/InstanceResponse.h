/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Instance.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Aggregated returned result of instance status
                */
                class InstanceResponse : public AbstractModel
                {
                public:
                    InstanceResponse();
                    ~InstanceResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of eligible instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceList List of eligible instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Instance> GetInstanceList() const;

                    /**
                     * 设置List of eligible instances
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceList List of eligible instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceList(const std::vector<Instance>& _instanceList);

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取Total number of eligible results
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of eligible results
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of eligible results
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TotalCount Total number of eligible results
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of eligible instances
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Instance> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * Total number of eligible results
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCERESPONSE_H_
