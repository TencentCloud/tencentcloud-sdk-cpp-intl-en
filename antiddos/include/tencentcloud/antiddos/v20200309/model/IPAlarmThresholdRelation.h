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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Single IP alarm threshold configuration
                */
                class IPAlarmThresholdRelation : public AbstractModel
                {
                public:
                    IPAlarmThresholdRelation();
                    ~IPAlarmThresholdRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm threshold type. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     * @return AlarmType Alarm threshold type. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置Alarm threshold type. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     * @param AlarmType Alarm threshold type. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    void SetAlarmType(const uint64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold (Mbps). The value should be greater than or equal to 0. Note that the alarm threshold configuration will be removed if you pass the parameter for input and set it to 0.
                     * @return AlarmThreshold Alarm threshold (Mbps). The value should be greater than or equal to 0. Note that the alarm threshold configuration will be removed if you pass the parameter for input and set it to 0.
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置Alarm threshold (Mbps). The value should be greater than or equal to 0. Note that the alarm threshold configuration will be removed if you pass the parameter for input and set it to 0.
                     * @param AlarmThreshold Alarm threshold (Mbps). The value should be greater than or equal to 0. Note that the alarm threshold configuration will be removed if you pass the parameter for input and set it to 0.
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     */
                    bool AlarmThresholdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance configured
                     * @return InstanceDetailList Anti-DDoS instance configured
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置Anti-DDoS instance configured
                     * @param InstanceDetailList Anti-DDoS instance configured
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * Alarm threshold type. Valid values:
`1`: alarm threshold for inbound traffic
`2`: alarm threshold for cleansing attack traffic
]
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Alarm threshold (Mbps). The value should be greater than or equal to 0. Note that the alarm threshold configuration will be removed if you pass the parameter for input and set it to 0.
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                    /**
                     * Anti-DDoS instance configured
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_
