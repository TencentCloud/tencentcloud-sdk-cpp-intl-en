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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANANOTIFICATIONCHANNELSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANANOTIFICATIONCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaNotificationChannels request structure.
                */
                class DescribeGrafanaNotificationChannelsRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaNotificationChannelsRequest();
                    ~DescribeGrafanaNotificationChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TCMG instance ID, such as “grafana-12345678”.
                     * @return InstanceId TCMG instance ID, such as “grafana-12345678”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCMG instance ID, such as “grafana-12345678”.
                     * @param _instanceId TCMG instance ID, such as “grafana-12345678”.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items to be queried
                     * @return Limit Number of items to be queried
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items to be queried
                     * @param _limit Number of items to be queried
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Alert channel name, such as “test”.
                     * @return ChannelName Alert channel name, such as “test”.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Alert channel name, such as “test”.
                     * @param _channelName Alert channel name, such as “test”.
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
                     * 获取Alert channel ID, such as “nchannel-abcd1234”.
                     * @return ChannelIDs Alert channel ID, such as “nchannel-abcd1234”.
                     * 
                     */
                    std::vector<std::string> GetChannelIDs() const;

                    /**
                     * 设置Alert channel ID, such as “nchannel-abcd1234”.
                     * @param _channelIDs Alert channel ID, such as “nchannel-abcd1234”.
                     * 
                     */
                    void SetChannelIDs(const std::vector<std::string>& _channelIDs);

                    /**
                     * 判断参数 ChannelIDs 是否已赋值
                     * @return ChannelIDs 是否已赋值
                     * 
                     */
                    bool ChannelIDsHasBeenSet() const;

                    /**
                     * 获取Alert channel status
                     * @return ChannelState Alert channel status
                     * 
                     */
                    int64_t GetChannelState() const;

                    /**
                     * 设置Alert channel status
                     * @param _channelState Alert channel status
                     * 
                     */
                    void SetChannelState(const int64_t& _channelState);

                    /**
                     * 判断参数 ChannelState 是否已赋值
                     * @return ChannelState 是否已赋值
                     * 
                     */
                    bool ChannelStateHasBeenSet() const;

                private:

                    /**
                     * TCMG instance ID, such as “grafana-12345678”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items to be queried
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Alert channel name, such as “test”.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Alert channel ID, such as “nchannel-abcd1234”.
                     */
                    std::vector<std::string> m_channelIDs;
                    bool m_channelIDsHasBeenSet;

                    /**
                     * Alert channel status
                     */
                    int64_t m_channelState;
                    bool m_channelStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANANOTIFICATIONCHANNELSREQUEST_H_
