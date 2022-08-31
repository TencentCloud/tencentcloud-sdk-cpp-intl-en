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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_

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
                * UpdateGrafanaNotificationChannel request structure.
                */
                class UpdateGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaNotificationChannelRequest();
                    ~UpdateGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param ChannelId Channel ID
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceId Instance name
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name
                     * @param InstanceId Instance name
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return ChannelName Channel name
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name
                     * @param ChannelName Channel name
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Array of notification channel IDs
                     * @return Receivers Array of notification channel IDs
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置Array of notification channel IDs
                     * @param Receivers Array of notification channel IDs
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Array of extra organization IDs
                     * @return ExtraOrgIds Array of extra organization IDs
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置Array of extra organization IDs
                     * @param ExtraOrgIds Array of extra organization IDs
                     */
                    void SetExtraOrgIds(const std::vector<std::string>& _extraOrgIds);

                    /**
                     * 判断参数 ExtraOrgIds 是否已赋值
                     * @return ExtraOrgIds 是否已赋值
                     */
                    bool ExtraOrgIdsHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Array of notification channel IDs
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Array of extra organization IDs
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
