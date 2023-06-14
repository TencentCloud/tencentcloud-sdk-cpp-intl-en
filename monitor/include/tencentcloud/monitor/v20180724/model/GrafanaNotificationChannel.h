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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_

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
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Grafana notification channel
                */
                class GrafanaNotificationChannel : public AbstractModel
                {
                public:
                    GrafanaNotificationChannel();
                    ~GrafanaNotificationChannel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
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
                     * 获取Channel name
                     * @return ChannelName Channel name
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name
                     * @param _channelName Channel name
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
                     * 获取Array of notification channel template IDs
                     * @return Receivers Array of notification channel template IDs
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置Array of notification channel template IDs
                     * @param _receivers Array of notification channel template IDs
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
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdatedAt Update time
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time
                     * @param _updatedAt Update time
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Default valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @return OrgId Default valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置Default valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * @param _orgId Default valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     * 
                     */
                    void SetOrgId(const std::string& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取Extra valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraOrgIds Extra valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置Extra valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraOrgIds Extra valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgIds Valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgIds() const;

                    /**
                     * 设置Valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgIds Valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrgIds(const std::string& _orgIds);

                    /**
                     * 判断参数 OrgIds 是否已赋值
                     * @return OrgIds 是否已赋值
                     * 
                     */
                    bool OrgIdsHasBeenSet() const;

                    /**
                     * 获取All valid organizations in an alert channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrganizationIds All valid organizations in an alert channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrganizationIds() const;

                    /**
                     * 设置All valid organizations in an alert channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _organizationIds All valid organizations in an alert channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrganizationIds(const std::string& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Array of notification channel template IDs
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Default valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * Extra valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * Valid organization. This parameter has been deprecated. Please use `OrganizationIds` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgIds;
                    bool m_orgIdsHasBeenSet;

                    /**
                     * All valid organizations in an alert channel
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_
