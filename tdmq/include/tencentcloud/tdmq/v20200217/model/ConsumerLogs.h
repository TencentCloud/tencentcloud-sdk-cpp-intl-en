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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/ConsumerLog.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Consumption information
                */
                class ConsumerLogs : public AbstractModel
                {
                public:
                    ConsumerLogs();
                    ~ConsumerLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Record count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Record count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Record count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Consumption log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerLogSets Consumption log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConsumerLog> GetConsumerLogSets() const;

                    /**
                     * 设置Consumption log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerLogSets Consumption log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumerLogSets(const std::vector<ConsumerLog>& _consumerLogSets);

                    /**
                     * 判断参数 ConsumerLogSets 是否已赋值
                     * @return ConsumerLogSets 是否已赋值
                     * 
                     */
                    bool ConsumerLogSetsHasBeenSet() const;

                private:

                    /**
                     * Record count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Consumption log.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConsumerLog> m_consumerLogSets;
                    bool m_consumerLogSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_
