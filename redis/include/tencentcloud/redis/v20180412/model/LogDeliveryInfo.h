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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Log shipping information.
                */
                class LogDeliveryInfo : public AbstractModel
                {
                public:
                    LogDeliveryInfo();
                    ~LogDeliveryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enabling status of log shipping. true: enabled; false: disabled.
                     * @return Enabled Enabling status of log shipping. true: enabled; false: disabled.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Enabling status of log shipping. true: enabled; false: disabled.
                     * @param _enabled Enabling status of log shipping. true: enabled; false: disabled.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Log set ID.
                     * @return LogsetId Log set ID.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Log set ID.
                     * @param _logsetId Log set ID.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID.
                     * @return TopicId Log topic ID.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID.
                     * @param _topicId Log topic ID.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Logset region
                     * @return LogRegion Logset region
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置Logset region
                     * @param _logRegion Logset region
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                private:

                    /**
                     * Enabling status of log shipping. true: enabled; false: disabled.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Log set ID.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Logset region
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_
