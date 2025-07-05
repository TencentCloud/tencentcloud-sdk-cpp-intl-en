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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Rule supports trigger type
                */
                class TriggerType : public AbstractModel
                {
                public:
                    TriggerType();
                    ~TriggerType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger Type
                     * @return MessageType Trigger Type
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置Trigger Type
                     * @param _messageType Trigger Type
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取Trigger time period
Note: This field may return null, indicating that no valid value is found.
                     * @return MaximumExecutionFrequency Trigger time period
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMaximumExecutionFrequency() const;

                    /**
                     * 设置Trigger time period
Note: This field may return null, indicating that no valid value is found.
                     * @param _maximumExecutionFrequency Trigger time period
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMaximumExecutionFrequency(const std::string& _maximumExecutionFrequency);

                    /**
                     * 判断参数 MaximumExecutionFrequency 是否已赋值
                     * @return MaximumExecutionFrequency 是否已赋值
                     * 
                     */
                    bool MaximumExecutionFrequencyHasBeenSet() const;

                private:

                    /**
                     * Trigger Type
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * Trigger time period
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_maximumExecutionFrequency;
                    bool m_maximumExecutionFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_
