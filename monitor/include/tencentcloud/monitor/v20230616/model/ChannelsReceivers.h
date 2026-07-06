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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Receiver details
                */
                class ChannelsReceivers : public AbstractModel
                {
                public:
                    ChannelsReceivers();
                    ~ChannelsReceivers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification channel name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChannelName Notification channel name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Notification channel name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _channelName Notification channel name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Recipient.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Receivers Recipient.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置Recipient.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receivers Recipient.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Sending result. Valid values: 0, (invalid), 1 (successful), 2 (failed), and 3 (no sending required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendStatus Sending result. Valid values: 0, (invalid), 1 (successful), 2 (failed), and 3 (no sending required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSendStatus() const;

                    /**
                     * 设置Sending result. Valid values: 0, (invalid), 1 (successful), 2 (failed), and 3 (no sending required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sendStatus Sending result. Valid values: 0, (invalid), 1 (successful), 2 (failed), and 3 (no sending required).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSendStatus(const std::string& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                private:

                    /**
                     * Notification channel name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Recipient.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Sending result. Valid values: 0, (invalid), 1 (successful), 2 (failed), and 3 (no sending required).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
