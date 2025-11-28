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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>
#include <tencentcloud/tdmq/v20200217/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for Pulsar pro instance information
                */
                class PulsarProInstance : public AbstractModel
                {
                public:
                    PulsarProInstance();
                    ~PulsarProInstance() = default;
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
                     * 获取Instance version
                     * @return InstanceVersion Instance version
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置Instance version
                     * @param _instanceVersion Instance version
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed), `6` (Adjusting configuration), `7` (Configuration adjustment failed).
                     * @return Status Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed), `6` (Adjusting configuration), `7` (Configuration adjustment failed).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed), `6` (Adjusting configuration), `7` (Configuration adjustment failed).
                     * @param _status Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed), `6` (Adjusting configuration), `7` (Configuration adjustment failed).
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
                     * 获取Instance specification name
                     * @return ConfigDisplay Instance specification name
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置Instance specification name
                     * @param _configDisplay Instance specification name
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取Peak TPS
                     * @return MaxTps Peak TPS
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Peak TPS
                     * @param _maxTps Peak TPS
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB
                     * @return MaxStorage Storage capacity in GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param _maxStorage Storage capacity in GB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取Instance expiration time in milliseconds
                     * @return ExpireTime Instance expiration time in milliseconds
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Instance expiration time in milliseconds
                     * @param _expireTime Instance expiration time in milliseconds
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * @return AutoRenewFlag Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * @param _autoRenewFlag Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
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
                     * 获取Payment mode. Valid values: `0` (Pay-as-you-go), `1` (Monthly subscription).
                     * @return PayMode Payment mode. Valid values: `0` (Pay-as-you-go), `1` (Monthly subscription).
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. Valid values: `0` (Pay-as-you-go), `1` (Monthly subscription).
                     * @param _payMode Payment mode. Valid values: `0` (Pay-as-you-go), `1` (Monthly subscription).
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Instance specification ID
                     * @return SpecName Instance specification ID
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Instance specification ID
                     * @param _specName Instance specification ID
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
                     * 获取Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScalableTps(const uint64_t& _scalableTps);

                    /**
                     * 判断参数 ScalableTps 是否已赋值
                     * @return ScalableTps 是否已赋值
                     * 
                     */
                    bool ScalableTpsHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Peak bandwidth in Mbps
                     * @return MaxBandWidth Peak bandwidth in Mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth in Mbps
                     * @param _maxBandWidth Peak bandwidth in Mbps
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Tag list of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag list of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag list of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Cluster Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Cluster Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Cluster Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingLabelVersion Specifies the different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingLabelVersion() const;

                    /**
                     * 设置Specifies the different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingLabelVersion Specifies the different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingLabelVersion(const std::string& _billingLabelVersion);

                    /**
                     * 判断参数 BillingLabelVersion 是否已赋值
                     * @return BillingLabelVersion 是否已赋值
                     * 
                     */
                    bool BillingLabelVersionHasBeenSet() const;

                    /**
                     * 获取Custom tenant.
                     * @return Tenant Custom tenant.
                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置Custom tenant.
                     * @param _tenant Custom tenant.
                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取Certificate list of the cluster.
                     * @return CertificateList Certificate list of the cluster.
                     * 
                     */
                    std::vector<CertificateInfo> GetCertificateList() const;

                    /**
                     * 设置Certificate list of the cluster.
                     * @param _certificateList Certificate list of the cluster.
                     * 
                     */
                    void SetCertificateList(const std::vector<CertificateInfo>& _certificateList);

                    /**
                     * 判断参数 CertificateList 是否已赋值
                     * @return CertificateList 是否已赋值
                     * 
                     */
                    bool CertificateListHasBeenSet() const;

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
                     * Instance version
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed), `6` (Adjusting configuration), `7` (Configuration adjustment failed).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance specification name
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * Peak TPS
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * Storage capacity in GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Instance expiration time in milliseconds
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Payment mode. Valid values: `0` (Pay-as-you-go), `1` (Monthly subscription).
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance specification ID
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scalableTps;
                    bool m_scalableTpsHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Peak bandwidth in Mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Tag list of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Cluster Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingLabelVersion;
                    bool m_billingLabelVersionHasBeenSet;

                    /**
                     * Custom tenant.
                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * Certificate list of the cluster.
                     */
                    std::vector<CertificateInfo> m_certificateList;
                    bool m_certificateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_
