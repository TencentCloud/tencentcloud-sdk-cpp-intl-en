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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/AccessLogConfig.h>
#include <tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerOperationLocksItem.h>
#include <tencentcloud/alb/v20251030/model/ModificationProtectionInfo.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Structure of application CLB instances in list view.
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access log configuration architecture.
                     * @return AccessLogConfig Access log configuration architecture.
                     * 
                     */
                    AccessLogConfig GetAccessLogConfig() const;

                    /**
                     * 设置Access log configuration architecture.
                     * @param _accessLogConfig Access log configuration architecture.
                     * 
                     */
                    void SetAccessLogConfig(const AccessLogConfig& _accessLogConfig);

                    /**
                     * 判断参数 AccessLogConfig 是否已赋值
                     * @return AccessLogConfig 是否已赋值
                     * 
                     */
                    bool AccessLogConfigHasBeenSet() const;

                    /**
                     * 获取IP address version. Value: IPv4 or IPv6.
                     * @return AddressIpVersion IP address version. Value: IPv4 or IPv6.
                     * 
                     */
                    std::string GetAddressIpVersion() const;

                    /**
                     * 设置IP address version. Value: IPv4 or IPv6.
                     * @param _addressIpVersion IP address version. Value: IPv4 or IPv6.
                     * 
                     */
                    void SetAddressIpVersion(const std::string& _addressIpVersion);

                    /**
                     * 判断参数 AddressIpVersion 是否已赋值
                     * @return AddressIpVersion 是否已赋值
                     * 
                     */
                    bool AddressIpVersionHasBeenSet() const;

                    /**
                     * 获取LoadBalancer address type. Valid values:

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer only has a private IP address, and the DNS domain name resolves to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer is located.
                     * @return AddressType LoadBalancer address type. Valid values:

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer only has a private IP address, and the DNS domain name resolves to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer is located.
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置LoadBalancer address type. Valid values:

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer only has a private IP address, and the DNS domain name resolves to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer is located.
                     * @param _addressType LoadBalancer address type. Valid values:

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer only has a private IP address, and the DNS domain name resolves to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer is located.
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取Resource creation time.
                     * @return CreateTime Resource creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Resource creation time.
                     * @param _createTime Resource creation time.
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
                     * 获取Deletion protection setting information.
                     * @return DeletionProtection Deletion protection setting information.
                     * 
                     */
                    DeletionProtectionConfig GetDeletionProtection() const;

                    /**
                     * 设置Deletion protection setting information.
                     * @param _deletionProtection Deletion protection setting information.
                     * 
                     */
                    void SetDeletionProtection(const DeletionProtectionConfig& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取DNS domain name.
                     * @return Domain DNS domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置DNS domain name.
                     * @param _domain DNS domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Billing configuration of a load balancing instance.
                     * @return LoadBalancerBillingConfig Billing configuration of a load balancing instance.
                     * 
                     */
                    LoadBalancerBillingConfig GetLoadBalancerBillingConfig() const;

                    /**
                     * 设置Billing configuration of a load balancing instance.
                     * @param _loadBalancerBillingConfig Billing configuration of a load balancing instance.
                     * 
                     */
                    void SetLoadBalancerBillingConfig(const LoadBalancerBillingConfig& _loadBalancerBillingConfig);

                    /**
                     * 判断参数 LoadBalancerBillingConfig 是否已赋值
                     * @return LoadBalancerBillingConfig 是否已赋值
                     * 
                     */
                    bool LoadBalancerBillingConfigHasBeenSet() const;

                    /**
                     * 获取CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Load balancing instance name.
                     * @return LoadBalancerName Load balancing instance name.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Load balancing instance name.
                     * @param _loadBalancerName Load balancing instance name.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Load balancer operation lock configuration.
                     * @return LoadBalancerOperationLocks Load balancer operation lock configuration.
                     * 
                     */
                    std::vector<LoadBalancerOperationLocksItem> GetLoadBalancerOperationLocks() const;

                    /**
                     * 设置Load balancer operation lock configuration.
                     * @param _loadBalancerOperationLocks Load balancer operation lock configuration.
                     * 
                     */
                    void SetLoadBalancerOperationLocks(const std::vector<LoadBalancerOperationLocksItem>& _loadBalancerOperationLocks);

                    /**
                     * 判断参数 LoadBalancerOperationLocks 是否已赋值
                     * @return LoadBalancerOperationLocks 是否已赋值
                     * 
                     */
                    bool LoadBalancerOperationLocksHasBeenSet() const;

                    /**
                     * 获取Application CLB instance status. Valid values:

- **Provisioning**: Under creation.
- **Active**: Running.
- **Configuring**: The configuration is being changed.
- **Deleting**: Deleting.
- **ProvisionFailed**: Creation failed.
- **ConfigureFailed**: Configuration adjustment failure.
- **DeletionFailed**: deletion failed.
- **Abnormal**: abnormal status. For the specific exception reason, see the LoadBalancerOperationLocks field.
                     * @return LoadBalancerStatus Application CLB instance status. Valid values:

- **Provisioning**: Under creation.
- **Active**: Running.
- **Configuring**: The configuration is being changed.
- **Deleting**: Deleting.
- **ProvisionFailed**: Creation failed.
- **ConfigureFailed**: Configuration adjustment failure.
- **DeletionFailed**: deletion failed.
- **Abnormal**: abnormal status. For the specific exception reason, see the LoadBalancerOperationLocks field.
                     * 
                     */
                    std::string GetLoadBalancerStatus() const;

                    /**
                     * 设置Application CLB instance status. Valid values:

- **Provisioning**: Under creation.
- **Active**: Running.
- **Configuring**: The configuration is being changed.
- **Deleting**: Deleting.
- **ProvisionFailed**: Creation failed.
- **ConfigureFailed**: Configuration adjustment failure.
- **DeletionFailed**: deletion failed.
- **Abnormal**: abnormal status. For the specific exception reason, see the LoadBalancerOperationLocks field.
                     * @param _loadBalancerStatus Application CLB instance status. Valid values:

- **Provisioning**: Under creation.
- **Active**: Running.
- **Configuring**: The configuration is being changed.
- **Deleting**: Deleting.
- **ProvisionFailed**: Creation failed.
- **ConfigureFailed**: Configuration adjustment failure.
- **DeletionFailed**: deletion failed.
- **Abnormal**: abnormal status. For the specific exception reason, see the LoadBalancerOperationLocks field.
                     * 
                     */
                    void SetLoadBalancerStatus(const std::string& _loadBalancerStatus);

                    /**
                     * 判断参数 LoadBalancerStatus 是否已赋值
                     * @return LoadBalancerStatus 是否已赋值
                     * 
                     */
                    bool LoadBalancerStatusHasBeenSet() const;

                    /**
                     * 获取Modification protection setting information.
                     * @return ModificationProtection Modification protection setting information.
                     * 
                     */
                    ModificationProtectionInfo GetModificationProtection() const;

                    /**
                     * 设置Modification protection setting information.
                     * @param _modificationProtection Modification protection setting information.
                     * 
                     */
                    void SetModificationProtection(const ModificationProtectionInfo& _modificationProtection);

                    /**
                     * 判断参数 ModificationProtection 是否已赋值
                     * @return ModificationProtection 是否已赋值
                     * 
                     */
                    bool ModificationProtectionHasBeenSet() const;

                    /**
                     * 获取Tag list.
                     * @return Tags Tag list.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag list.
                     * @param _tags Tag list.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Virtual Private Cloud (VPC) ID.
                     * @return VpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC) ID.
                     * @param _vpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Access log configuration architecture.
                     */
                    AccessLogConfig m_accessLogConfig;
                    bool m_accessLogConfigHasBeenSet;

                    /**
                     * IP address version. Value: IPv4 or IPv6.
                     */
                    std::string m_addressIpVersion;
                    bool m_addressIpVersionHasBeenSet;

                    /**
                     * LoadBalancer address type. Valid values:

- **Internet**: The load balancing has a public IP address, and the DNS domain name is resolved to the public IP, so it can be accessed via the public network.

- **Intranet**: The load balancer only has a private IP address, and the DNS domain name resolves to the private IP, so it can only be accessed from the private network environment of the VPC where the load balancer is located.
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * Resource creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Deletion protection setting information.
                     */
                    DeletionProtectionConfig m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * DNS domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Billing configuration of a load balancing instance.
                     */
                    LoadBalancerBillingConfig m_loadBalancerBillingConfig;
                    bool m_loadBalancerBillingConfigHasBeenSet;

                    /**
                     * CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Load balancing instance name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Load balancer operation lock configuration.
                     */
                    std::vector<LoadBalancerOperationLocksItem> m_loadBalancerOperationLocks;
                    bool m_loadBalancerOperationLocksHasBeenSet;

                    /**
                     * Application CLB instance status. Valid values:

- **Provisioning**: Under creation.
- **Active**: Running.
- **Configuring**: The configuration is being changed.
- **Deleting**: Deleting.
- **ProvisionFailed**: Creation failed.
- **ConfigureFailed**: Configuration adjustment failure.
- **DeletionFailed**: deletion failed.
- **Abnormal**: abnormal status. For the specific exception reason, see the LoadBalancerOperationLocks field.
                     */
                    std::string m_loadBalancerStatus;
                    bool m_loadBalancerStatusHasBeenSet;

                    /**
                     * Modification protection setting information.
                     */
                    ModificationProtectionInfo m_modificationProtection;
                    bool m_modificationProtectionHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC) ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCER_H_
