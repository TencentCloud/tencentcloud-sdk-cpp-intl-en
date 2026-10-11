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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Serverless HBase instance information.
                */
                class SLInstanceInfo : public AbstractModel
                {
                public:
                    SLInstanceInfo();
                    ~SLInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster string ID.
                     * @return ClusterId Cluster string ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster string ID.
                     * @param _clusterId Cluster string ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
                     * @return Id Cluster ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _id Cluster ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _statusDesc Status description.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Health status.
                     * @return HealthStatus Health status.
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置Health status.
                     * @param _healthStatus Health status.
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return ClusterName Instance name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Instance name.
                     * @param _clusterName Instance name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ ID.
                     * @return ZoneId Primary AZ ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Primary AZ ID.
                     * @param _zoneId Primary AZ ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ.
                     * @return Zone Primary AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Primary AZ.
                     * @param _zone Primary AZ.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取User APPID.
                     * @return AppId User APPID.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User APPID.
                     * @param _appId User APPID.
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ VPC ID.
                     * @return VpcId Primary AZ VPC ID.
                     * 
                     */
                    uint64_t GetVpcId() const;

                    /**
                     * 设置Primary AZ VPC ID.
                     * @param _vpcId Primary AZ VPC ID.
                     * 
                     */
                    void SetVpcId(const uint64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ VPC name.
                     * @return VpcName Primary AZ VPC name.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置Primary AZ VPC name.
                     * @param _vpcName Primary AZ VPC name.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Primary AZ subnet ID.
                     * @return SubnetId Primary AZ subnet ID.
                     * 
                     */
                    uint64_t GetSubnetId() const;

                    /**
                     * 设置Primary AZ subnet ID.
                     * @param _subnetId Primary AZ subnet ID.
                     * 
                     */
                    void SetSubnetId(const uint64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ subnet name.
                     * @return SubnetName Primary AZ subnet name.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Primary AZ subnet name.
                     * @param _subnetName Primary AZ subnet name.
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取Status code.
                     * @return Status Status code.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status code.
                     * @param _status Status code.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return AddTime Creation time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time.
                     * @param _addTime Creation time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Cluster billing type. 0 indicates pay-as-you-go. 1 indicates yearly/monthly subscription.
                     * @return PayMode Cluster billing type. 0 indicates pay-as-you-go. 1 indicates yearly/monthly subscription.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Cluster billing type. 0 indicates pay-as-you-go. 1 indicates yearly/monthly subscription.
                     * @param _payMode Cluster billing type. 0 indicates pay-as-you-go. 1 indicates yearly/monthly subscription.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Multi-AZ information.
                     * @return ZoneSettings Multi-AZ information.
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置Multi-AZ information.
                     * @param _zoneSettings Multi-AZ information.
                     * 
                     */
                    void SetZoneSettings(const std::vector<ZoneSetting>& _zoneSettings);

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取Instance tag.
                     * @return Tags Instance tag.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Instance tag.
                     * @param _tags Instance tag.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values: 0 (notify before expiration but do not auto-renew), 1 (notify before expiration and auto-renew), and 2 (do not notify before expiration and do not auto-renew). If the business does not support renewal, the value is 0.
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: 0 (notify before expiration but do not auto-renew), 1 (notify before expiration and auto-renew), and 2 (do not notify before expiration and do not auto-renew). If the business does not support renewal, the value is 0.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: 0 (notify before expiration but do not auto-renew), 1 (notify before expiration and auto-renew), and 2 (do not notify before expiration and do not auto-renew). If the business does not support renewal, the value is 0.
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: 0 (notify before expiration but do not auto-renew), 1 (notify before expiration and auto-renew), and 2 (do not notify before expiration and do not auto-renew). If the business does not support renewal, the value is 0.
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Isolation time. For instances that are not isolated, 0000-00-00 00:00:00 is returned.
                     * @return IsolateTime Isolation time. For instances that are not isolated, 0000-00-00 00:00:00 is returned.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time. For instances that are not isolated, 0000-00-00 00:00:00 is returned.
                     * @param _isolateTime Isolation time. For instances that are not isolated, 0000-00-00 00:00:00 is returned.
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time. For postpaid instances, 0000-00-00 00:00:00 is returned.
                     * @return ExpireTime Expiration time. For postpaid instances, 0000-00-00 00:00:00 is returned.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time. For postpaid instances, 0000-00-00 00:00:00 is returned.
                     * @param _expireTime Expiration time. For postpaid instances, 0000-00-00 00:00:00 is returned.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Primary/standby deployment role.
                     * @return DeployRole Primary/standby deployment role.
                     * 
                     */
                    std::string GetDeployRole() const;

                    /**
                     * 设置Primary/standby deployment role.
                     * @param _deployRole Primary/standby deployment role.
                     * 
                     */
                    void SetDeployRole(const std::string& _deployRole);

                    /**
                     * 判断参数 DeployRole 是否已赋值
                     * @return DeployRole 是否已赋值
                     * 
                     */
                    bool DeployRoleHasBeenSet() const;

                    /**
                     * 获取WebUI address.
                     * @return WebUIUrl WebUI address.
                     * 
                     */
                    std::string GetWebUIUrl() const;

                    /**
                     * 设置WebUI address.
                     * @param _webUIUrl WebUI address.
                     * 
                     */
                    void SetWebUIUrl(const std::string& _webUIUrl);

                    /**
                     * 判断参数 WebUIUrl 是否已赋值
                     * @return WebUIUrl 是否已赋值
                     * 
                     */
                    bool WebUIUrlHasBeenSet() const;

                private:

                    /**
                     * Cluster string ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Health status.
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region ID.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Primary AZ ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Primary AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * User APPID.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Primary AZ VPC ID.
                     */
                    uint64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Primary AZ VPC name.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Primary AZ subnet ID.
                     */
                    uint64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Primary AZ subnet name.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Status code.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Cluster billing type. 0 indicates pay-as-you-go. 1 indicates yearly/monthly subscription.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Multi-AZ information.
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * Instance tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: 0 (notify before expiration but do not auto-renew), 1 (notify before expiration and auto-renew), and 2 (do not notify before expiration and do not auto-renew). If the business does not support renewal, the value is 0.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Isolation time. For instances that are not isolated, 0000-00-00 00:00:00 is returned.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Expiration time. For postpaid instances, 0000-00-00 00:00:00 is returned.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Primary/standby deployment role.
                     */
                    std::string m_deployRole;
                    bool m_deployRoleHasBeenSet;

                    /**
                     * WebUI address.
                     */
                    std::string m_webUIUrl;
                    bool m_webUIUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SLINSTANCEINFO_H_
