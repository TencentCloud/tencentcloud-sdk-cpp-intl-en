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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_

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
                * CreateGrafanaNotificationChannel request structure.
                */
                class CreateGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    CreateGrafanaNotificationChannelRequest();
                    ~CreateGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TCMG instance ID, such as “grafana-abcdefgh”.
                     * @return InstanceId TCMG instance ID, such as “grafana-abcdefgh”.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCMG instance ID, such as “grafana-abcdefgh”.
                     * @param _instanceId TCMG instance ID, such as “grafana-abcdefgh”.
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
                     * 获取Default value: `1`. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @return OrgId Default value: `1`. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 设置Default value: `1`. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @param _orgId Default value: `1`. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    void SetOrgId(const int64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

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
                     * 获取Array of extra organization IDs. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @return ExtraOrgIds Array of extra organization IDs. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置Array of extra organization IDs. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @param _extraOrgIds Array of extra organization IDs. This parameter has been deprecated. Please use `OrganizationIds` instead.
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
                     * 获取Array of all valid organization IDs. Default value: `1`.
                     * @return OrganizationIds Array of all valid organization IDs. Default value: `1`.
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置Array of all valid organization IDs. Default value: `1`.
                     * @param _organizationIds Array of all valid organization IDs. Default value: `1`.
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
                     * TCMG instance ID, such as “grafana-abcdefgh”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Alert channel name, such as “test”.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Default value: `1`. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * Array of notification channel IDs
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Array of extra organization IDs. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * Array of all valid organization IDs. Default value: `1`.
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
