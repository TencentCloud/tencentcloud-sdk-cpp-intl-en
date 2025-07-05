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
                     * 获取Channel ID, such as “nchannel-abcd1234”.
                     * @return ChannelId Channel ID, such as “nchannel-abcd1234”.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID, such as “nchannel-abcd1234”.
                     * @param _channelId Channel ID, such as “nchannel-abcd1234”.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

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
                     * 获取Array of notification channel IDs
                     * @return Receivers Array of notification channel IDs
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置Array of notification channel IDs
                     * @param _receivers Array of notification channel IDs
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
                     * 获取This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @return ExtraOrgIds This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @param _extraOrgIds This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    void SetExtraOrgIds(const std::vector<std::string>& _extraOrgIds);

                    /**
                     * 判断参数 ExtraOrgIds 是否已赋值
                     * @return ExtraOrgIds 是否已赋值
                     * 
                     */
                    bool ExtraOrgIdsHasBeenSet() const;

                    /**
                     * 获取Array of valid organization IDs
                     * @return OrganizationIds Array of valid organization IDs
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置Array of valid organization IDs
                     * @param _organizationIds Array of valid organization IDs
                     * 
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * Channel ID, such as “nchannel-abcd1234”.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * TCMG instance ID, such as “grafana-12345678”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Alert channel name, such as “test”.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Array of notification channel IDs
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * This parameter has been deprecated. Please use `OrganizationIds` instead.
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * Array of valid organization IDs
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
