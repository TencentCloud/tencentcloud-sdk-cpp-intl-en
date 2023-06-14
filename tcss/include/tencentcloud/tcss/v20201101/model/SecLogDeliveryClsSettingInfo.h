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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_

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
                * Security log - Settings of delivery to CLS
                */
                class SecLogDeliveryClsSettingInfo : public AbstractModel
                {
                public:
                    SecLogDeliveryClsSettingInfo();
                    ~SecLogDeliveryClsSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log type
                     * @return LogType Log type
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
                     * @param _logType Log type
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Delivery status. Valid values: `true` (enabled); `false` (disabled).
                     * @return State Delivery status. Valid values: `true` (enabled); `false` (disabled).
                     * 
                     */
                    bool GetState() const;

                    /**
                     * 设置Delivery status. Valid values: `true` (enabled); `false` (disabled).
                     * @param _state Delivery status. Valid values: `true` (enabled); `false` (disabled).
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Logset
                     * @return LogSet Logset
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置Logset
                     * @param _logSet Logset
                     * 
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicID Topic ID
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置Topic ID
                     * @param _topicID Topic ID
                     * 
                     */
                    void SetTopicID(const std::string& _topicID);

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     * 
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogSetName Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logSetName Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     * 
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicName Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicName Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Delivery status. Valid values: `true` (enabled); `false` (disabled).
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Logset
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * Logset name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * Topic name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_
