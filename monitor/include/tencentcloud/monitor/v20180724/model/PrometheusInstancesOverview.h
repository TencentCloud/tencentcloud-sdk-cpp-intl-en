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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_

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
                * TMP v2 instance overview
                */
                class PrometheusInstancesOverview : public AbstractModel
                {
                public:
                    PrometheusInstancesOverview();
                    ~PrometheusInstancesOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Running status. Valid values: `1` (creating); `2` (running); `3` (abnormal); `4` (restarting); `5` (terminating); `6` (stopped); `7` (deleted).
                     * @return InstanceStatus Running status. Valid values: `1` (creating); `2` (running); `3` (abnormal); `4` (restarting); `5` (terminating); `6` (stopped); `7` (deleted).
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Running status. Valid values: `1` (creating); `2` (running); `3` (abnormal); `4` (restarting); `5` (terminating); `6` (stopped); `7` (deleted).
                     * @param _instanceStatus Running status. Valid values: `1` (creating); `2` (running); `3` (abnormal); `4` (restarting); `5` (terminating); `6` (stopped); `7` (deleted).
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
                     * 获取Billing status. Valid values: `1` (normal); `2` (expired); `3` (terminated); `4` (assigning); `5` (failed to assign)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeStatus Billing status. Valid values: `1` (normal); `2` (expired); `3` (terminated); `4` (assigning); `5` (failed to assign)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置Billing status. Valid values: `1` (normal); `2` (expired); `3` (terminated); `4` (assigning); `5` (failed to assign)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeStatus Billing status. Valid values: `1` (normal); `2` (expired); `3` (terminated); `4` (assigning); `5` (failed to assign)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeStatus(const int64_t& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取Whether Grafana is enabled. Valid values: `0` (no); `1` (yes).
                     * @return EnableGrafana Whether Grafana is enabled. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置Whether Grafana is enabled. Valid values: `0` (no); `1` (yes).
                     * @param _enableGrafana Whether Grafana is enabled. Valid values: `0` (no); `1` (yes).
                     * 
                     */
                    void SetEnableGrafana(const int64_t& _enableGrafana);

                    /**
                     * 判断参数 EnableGrafana 是否已赋值
                     * @return EnableGrafana 是否已赋值
                     * 
                     */
                    bool EnableGrafanaHasBeenSet() const;

                    /**
                     * 获取Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaURL Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _grafanaURL Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGrafanaURL(const std::string& _grafanaURL);

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     * 
                     */
                    bool GrafanaURLHasBeenSet() const;

                    /**
                     * 获取Instance payment type. Valid values: `1` (trial edition); `2` (prepaid)
                     * @return InstanceChargeType Instance payment type. Valid values: `1` (trial edition); `2` (prepaid)
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Instance payment type. Valid values: `1` (trial edition); `2` (prepaid)
                     * @param _instanceChargeType Instance payment type. Valid values: `1` (trial edition); `2` (prepaid)
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
                     * 获取Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specName Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataRetentionTime Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataRetentionTime Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Auto-renewal flag. Valid values: `0` (auto-renewal not enabled); `1` (auto-renewal enabled); `2` (auto-renewal prohibited); `-1` (invalid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: `0` (auto-renewal not enabled); `1` (auto-renewal enabled); `2` (auto-renewal prohibited); `-1` (invalid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: `0` (auto-renewal not enabled); `1` (auto-renewal enabled); `2` (auto-renewal prohibited); `-1` (invalid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: `0` (auto-renewal not enabled); `1` (auto-renewal enabled); `2` (auto-renewal prohibited); `-1` (invalid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Total number of bound clusters
                     * @return BoundTotal Total number of bound clusters
                     * 
                     */
                    int64_t GetBoundTotal() const;

                    /**
                     * 设置Total number of bound clusters
                     * @param _boundTotal Total number of bound clusters
                     * 
                     */
                    void SetBoundTotal(const int64_t& _boundTotal);

                    /**
                     * 判断参数 BoundTotal 是否已赋值
                     * @return BoundTotal 是否已赋值
                     * 
                     */
                    bool BoundTotalHasBeenSet() const;

                    /**
                     * 获取Total number of bound clusters in the normal status
                     * @return BoundNormal Total number of bound clusters in the normal status
                     * 
                     */
                    int64_t GetBoundNormal() const;

                    /**
                     * 设置Total number of bound clusters in the normal status
                     * @param _boundNormal Total number of bound clusters in the normal status
                     * 
                     */
                    void SetBoundNormal(const int64_t& _boundNormal);

                    /**
                     * 判断参数 BoundNormal 是否已赋值
                     * @return BoundNormal 是否已赋值
                     * 
                     */
                    bool BoundNormalHasBeenSet() const;

                    /**
                     * 获取Resource pack status (`0`: Unavailable; `1`: Available)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourcePackageStatus Resource pack status (`0`: Unavailable; `1`: Available)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResourcePackageStatus() const;

                    /**
                     * 设置Resource pack status (`0`: Unavailable; `1`: Available)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourcePackageStatus Resource pack status (`0`: Unavailable; `1`: Available)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourcePackageStatus(const int64_t& _resourcePackageStatus);

                    /**
                     * 判断参数 ResourcePackageStatus 是否已赋值
                     * @return ResourcePackageStatus 是否已赋值
                     * 
                     */
                    bool ResourcePackageStatusHasBeenSet() const;

                    /**
                     * 获取Resource pack specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourcePackageSpecName Resource pack specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourcePackageSpecName() const;

                    /**
                     * 设置Resource pack specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourcePackageSpecName Resource pack specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourcePackageSpecName(const std::string& _resourcePackageSpecName);

                    /**
                     * 判断参数 ResourcePackageSpecName 是否已赋值
                     * @return ResourcePackageSpecName 是否已赋值
                     * 
                     */
                    bool ResourcePackageSpecNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Running status. Valid values: `1` (creating); `2` (running); `3` (abnormal); `4` (restarting); `5` (terminating); `6` (stopped); `7` (deleted).
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Billing status. Valid values: `1` (normal); `2` (expired); `3` (terminated); `4` (assigning); `5` (failed to assign)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * Whether Grafana is enabled. Valid values: `0` (no); `1` (yes).
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * Instance payment type. Valid values: `1` (trial edition); `2` (prepaid)
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: `0` (auto-renewal not enabled); `1` (auto-renewal enabled); `2` (auto-renewal prohibited); `-1` (invalid).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Total number of bound clusters
                     */
                    int64_t m_boundTotal;
                    bool m_boundTotalHasBeenSet;

                    /**
                     * Total number of bound clusters in the normal status
                     */
                    int64_t m_boundNormal;
                    bool m_boundNormalHasBeenSet;

                    /**
                     * Resource pack status (`0`: Unavailable; `1`: Available)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resourcePackageStatus;
                    bool m_resourcePackageStatusHasBeenSet;

                    /**
                     * Resource pack specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourcePackageSpecName;
                    bool m_resourcePackageSpecNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_
