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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateBasicDDoSAlarmThreshold request structure.
                */
                class CreateBasicDDoSAlarmThresholdRequest : public AbstractModel
                {
                public:
                    CreateBasicDDoSAlarmThresholdRequest();
                    ~CreateBasicDDoSAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`basic`: Anti-DDoS Basic)
                     * @return Business Anti-DDoS service type (`basic`: Anti-DDoS Basic)
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`basic`: Anti-DDoS Basic)
                     * @param Business Anti-DDoS service type (`basic`: Anti-DDoS Basic)
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取`get`: read alarm threshold, `set`: set alarm threshold
                     * @return Method `get`: read alarm threshold, `set`: set alarm threshold
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置`get`: read alarm threshold, `set`: set alarm threshold
                     * @param Method `get`: read alarm threshold, `set`: set alarm threshold
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Alarm threshold type. 1: inbound traffic, 2: cleansed traffic. This field is required if `Method` is `set`;
                     * @return AlarmType Alarm threshold type. 1: inbound traffic, 2: cleansed traffic. This field is required if `Method` is `set`;
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置Alarm threshold type. 1: inbound traffic, 2: cleansed traffic. This field is required if `Method` is `set`;
                     * @param AlarmType Alarm threshold type. 1: inbound traffic, 2: cleansed traffic. This field is required if `Method` is `set`;
                     */
                    void SetAlarmType(const uint64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold. It is required if `Method` is `set`. If it is set to 0, it means to clear the alarm threshold configuration;
                     * @return AlarmThreshold Alarm threshold. It is required if `Method` is `set`. If it is set to 0, it means to clear the alarm threshold configuration;
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置Alarm threshold. It is required if `Method` is `set`. If it is set to 0, it means to clear the alarm threshold configuration;
                     * @param AlarmThreshold Alarm threshold. It is required if `Method` is `set`. If it is set to 0, it means to clear the alarm threshold configuration;
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     */
                    bool AlarmThresholdHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`basic`: Anti-DDoS Basic)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * `get`: read alarm threshold, `set`: set alarm threshold
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Alarm threshold type. 1: inbound traffic, 2: cleansed traffic. This field is required if `Method` is `set`;
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Alarm threshold. It is required if `Method` is `set`. If it is set to 0, it means to clear the alarm threshold configuration;
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_
