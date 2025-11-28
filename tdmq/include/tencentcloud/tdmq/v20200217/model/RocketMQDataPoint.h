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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Monitoring data points
                */
                class RocketMQDataPoint : public AbstractModel
                {
                public:
                    RocketMQDataPoint();
                    ~RocketMQDataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Monitoring value array, which corresponds one-to-one with Timestamps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timestamps Monitoring value array, which corresponds one-to-one with Timestamps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 设置Monitoring value array, which corresponds one-to-one with Timestamps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestamps Monitoring value array, which corresponds one-to-one with Timestamps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamps(const std::vector<int64_t>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取Monitoring data point position. For example, a day is divided into 1,440 points per minute, with each point having a serial number between 0 and 1439. If a certain serial number is not in the array, it indicates a missing data point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Values Monitoring data point position. For example, a day is divided into 1,440 points per minute, with each point having a serial number between 0 and 1439. If a certain serial number is not in the array, it indicates a missing data point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置Monitoring data point position. For example, a day is divided into 1,440 points per minute, with each point having a serial number between 0 and 1439. If a certain serial number is not in the array, it indicates a missing data point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _values Monitoring data point position. For example, a day is divided into 1,440 points per minute, with each point having a serial number between 0 and 1439. If a certain serial number is not in the array, it indicates a missing data point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Monitoring value array, which corresponds one-to-one with Timestamps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * Monitoring data point position. For example, a day is divided into 1,440 points per minute, with each point having a serial number between 0 and 1439. If a certain serial number is not in the array, it indicates a missing data point.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_
