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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Managed configuration.
                */
                class HostingConfig : public AbstractModel
                {
                public:
                    HostingConfig();
                    ~HostingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hosted resource replacement time, defaults to 30 days before the certificate expiration if there is a renewal certificate, then replace.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReplaceTime Hosted resource replacement time, defaults to 30 days before the certificate expiration if there is a renewal certificate, then replace.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReplaceTime() const;

                    /**
                     * 设置Hosted resource replacement time, defaults to 30 days before the certificate expiration if there is a renewal certificate, then replace.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _replaceTime Hosted resource replacement time, defaults to 30 days before the certificate expiration if there is a renewal certificate, then replace.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplaceTime(const int64_t& _replaceTime);

                    /**
                     * 判断参数 ReplaceTime 是否已赋值
                     * @return ReplaceTime 是否已赋值
                     * 
                     */
                    bool ReplaceTimeHasBeenSet() const;

                    /**
                     * 获取Hosted send message type: 0, reminder message before hosted starts (you will receive this reminder message even if there is no renewal certificate); 1, reminder message when hosted starts (you will receive the message reminder only if there is a renewal certificate); 2, reminder message when hosted resource replacement fails; 3 reminder message when hosted resource replacement succeeds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MessageTypes Hosted send message type: 0, reminder message before hosted starts (you will receive this reminder message even if there is no renewal certificate); 1, reminder message when hosted starts (you will receive the message reminder only if there is a renewal certificate); 2, reminder message when hosted resource replacement fails; 3 reminder message when hosted resource replacement succeeds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetMessageTypes() const;

                    /**
                     * 设置Hosted send message type: 0, reminder message before hosted starts (you will receive this reminder message even if there is no renewal certificate); 1, reminder message when hosted starts (you will receive the message reminder only if there is a renewal certificate); 2, reminder message when hosted resource replacement fails; 3 reminder message when hosted resource replacement succeeds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _messageTypes Hosted send message type: 0, reminder message before hosted starts (you will receive this reminder message even if there is no renewal certificate); 1, reminder message when hosted starts (you will receive the message reminder only if there is a renewal certificate); 2, reminder message when hosted resource replacement fails; 3 reminder message when hosted resource replacement succeeds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageTypes(const std::vector<int64_t>& _messageTypes);

                    /**
                     * 判断参数 MessageTypes 是否已赋值
                     * @return MessageTypes 是否已赋值
                     * 
                     */
                    bool MessageTypesHasBeenSet() const;

                    /**
                     * 获取Resource replacement start time.
                     * @return ReplaceStartTime Resource replacement start time.
                     * 
                     */
                    std::string GetReplaceStartTime() const;

                    /**
                     * 设置Resource replacement start time.
                     * @param _replaceStartTime Resource replacement start time.
                     * 
                     */
                    void SetReplaceStartTime(const std::string& _replaceStartTime);

                    /**
                     * 判断参数 ReplaceStartTime 是否已赋值
                     * @return ReplaceStartTime 是否已赋值
                     * 
                     */
                    bool ReplaceStartTimeHasBeenSet() const;

                    /**
                     * 获取Resource replacement end time.
                     * @return ReplaceEndTime Resource replacement end time.
                     * 
                     */
                    std::string GetReplaceEndTime() const;

                    /**
                     * 设置Resource replacement end time.
                     * @param _replaceEndTime Resource replacement end time.
                     * 
                     */
                    void SetReplaceEndTime(const std::string& _replaceEndTime);

                    /**
                     * 判断参数 ReplaceEndTime 是否已赋值
                     * @return ReplaceEndTime 是否已赋值
                     * 
                     */
                    bool ReplaceEndTimeHasBeenSet() const;

                private:

                    /**
                     * Hosted resource replacement time, defaults to 30 days before the certificate expiration if there is a renewal certificate, then replace.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_replaceTime;
                    bool m_replaceTimeHasBeenSet;

                    /**
                     * Hosted send message type: 0, reminder message before hosted starts (you will receive this reminder message even if there is no renewal certificate); 1, reminder message when hosted starts (you will receive the message reminder only if there is a renewal certificate); 2, reminder message when hosted resource replacement fails; 3 reminder message when hosted resource replacement succeeds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_messageTypes;
                    bool m_messageTypesHasBeenSet;

                    /**
                     * Resource replacement start time.
                     */
                    std::string m_replaceStartTime;
                    bool m_replaceStartTimeHasBeenSet;

                    /**
                     * Resource replacement end time.
                     */
                    std::string m_replaceEndTime;
                    bool m_replaceEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_HOSTINGCONFIG_H_
