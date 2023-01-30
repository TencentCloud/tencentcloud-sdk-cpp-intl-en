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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Settings of security log delivery to Kafka
                */
                class SecLogDeliveryKafkaSettingInfo : public AbstractModel
                {
                public:
                    SecLogDeliveryKafkaSettingInfo();
                    ~SecLogDeliveryKafkaSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log type
                     * @return LogType Log type
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
                     * @param LogType Log type
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicID Topic ID
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置Topic ID
                     * @param TopicID Topic ID
                     */
                    void SetTopicID(const std::string& _topicID);

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicName Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TopicName Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Delivery status. Valid values: `false` (disabled); `true` (enabled).
                     * @return State Delivery status. Valid values: `false` (disabled); `true` (enabled).
                     */
                    bool GetState() const;

                    /**
                     * 设置Delivery status. Valid values: `false` (disabled); `true` (enabled).
                     * @param State Delivery status. Valid values: `false` (disabled); `true` (enabled).
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Delivery status. Valid values: `false` (disabled); `true` (enabled).
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYKAFKASETTINGINFO_H_
