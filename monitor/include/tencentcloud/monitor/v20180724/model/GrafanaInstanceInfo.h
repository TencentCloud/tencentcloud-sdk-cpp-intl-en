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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Instance type when the Grafana instance is queried
                */
                class GrafanaInstanceInfo : public AbstractModel
                {
                public:
                    GrafanaInstanceInfo();
                    ~GrafanaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Array of subnet IDs
                     * @return SubnetIds Array of subnet IDs
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of subnet IDs
                     * @param _subnetIds Array of subnet IDs
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Grafana private network address
                     * @return InternetUrl Grafana private network address
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Grafana private network address
                     * @param _internetUrl Grafana private network address
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Grafana public network address
                     * @return InternalUrl Grafana public network address
                     * 
                     */
                    std::string GetInternalUrl() const;

                    /**
                     * 设置Grafana public network address
                     * @param _internalUrl Grafana public network address
                     * 
                     */
                    void SetInternalUrl(const std::string& _internalUrl);

                    /**
                     * 判断参数 InternalUrl 是否已赋值
                     * @return InternalUrl 是否已赋值
                     * 
                     */
                    bool InternalUrlHasBeenSet() const;

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
                     * 获取Status. Valid values: `1` (creating), `2` (running), `3` (abnormal), `4` (restarting), `5` (stopping), `6` (stopped), `7` (deleted).
                     * @return InstanceStatus Status. Valid values: `1` (creating), `2` (running), `3` (abnormal), `4` (restarting), `5` (stopping), `6` (stopped), `7` (deleted).
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Status. Valid values: `1` (creating), `2` (running), `3` (abnormal), `4` (restarting), `5` (stopping), `6` (stopped), `7` (deleted).
                     * @param _instanceStatus Status. Valid values: `1` (creating), `2` (running), `3` (abnormal), `4` (restarting), `5` (stopping), `6` (stopped), `7` (deleted).
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSpecification Instance tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置Instance tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagSpecification Instance tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Instance AZ
                     * @return Zone Instance AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ
                     * @param _zone Instance AZ
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
                     * 获取Billing mode. Valid value: `1` (monthly subscription).
                     * @return InstanceChargeType Billing mode. Valid value: `1` (monthly subscription).
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Billing mode. Valid value: `1` (monthly subscription).
                     * @param _instanceChargeType Billing mode. Valid value: `1` (monthly subscription).
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
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
                     * 获取Subnet name
                     * @return SubnetName Subnet name
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
                     * @param _subnetName Subnet name
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
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取The full URL used to access this instance
                     * @return RootUrl The full URL used to access this instance
                     * 
                     */
                    std::string GetRootUrl() const;

                    /**
                     * 设置The full URL used to access this instance
                     * @param _rootUrl The full URL used to access this instance
                     * 
                     */
                    void SetRootUrl(const std::string& _rootUrl);

                    /**
                     * 判断参数 RootUrl 是否已赋值
                     * @return RootUrl 是否已赋值
                     * 
                     */
                    bool RootUrlHasBeenSet() const;

                    /**
                     * 获取Whether to enable SSO
                     * @return EnableSSO Whether to enable SSO
                     * 
                     */
                    bool GetEnableSSO() const;

                    /**
                     * 设置Whether to enable SSO
                     * @param _enableSSO Whether to enable SSO
                     * 
                     */
                    void SetEnableSSO(const bool& _enableSSO);

                    /**
                     * 判断参数 EnableSSO 是否已赋值
                     * @return EnableSSO 是否已赋值
                     * 
                     */
                    bool EnableSSOHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return Version Version number
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version number
                     * @param _version Version number
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Whether to enable CAM authentication during SSO
                     * @return EnableSSOCamCheck Whether to enable CAM authentication during SSO
                     * 
                     */
                    bool GetEnableSSOCamCheck() const;

                    /**
                     * 设置Whether to enable CAM authentication during SSO
                     * @param _enableSSOCamCheck Whether to enable CAM authentication during SSO
                     * 
                     */
                    void SetEnableSSOCamCheck(const bool& _enableSSOCamCheck);

                    /**
                     * 判断参数 EnableSSOCamCheck 是否已赋值
                     * @return EnableSSOCamCheck 是否已赋值
                     * 
                     */
                    bool EnableSSOCamCheckHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Array of subnet IDs
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Grafana private network address
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Grafana public network address
                     */
                    std::string m_internalUrl;
                    bool m_internalUrlHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Status. Valid values: `1` (creating), `2` (running), `3` (abnormal), `4` (restarting), `5` (stopping), `6` (stopped), `7` (deleted).
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Instance AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Billing mode. Valid value: `1` (monthly subscription).
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Subnet name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * The full URL used to access this instance
                     */
                    std::string m_rootUrl;
                    bool m_rootUrlHasBeenSet;

                    /**
                     * Whether to enable SSO
                     */
                    bool m_enableSSO;
                    bool m_enableSSOHasBeenSet;

                    /**
                     * Version number
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Whether to enable CAM authentication during SSO
                     */
                    bool m_enableSSOCamCheck;
                    bool m_enableSSOCamCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_
