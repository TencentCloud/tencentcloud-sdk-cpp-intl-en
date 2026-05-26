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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LibraDBInstanceInitInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateLibraDBClusters request structure.
                */
                class CreateLibraDBClustersRequest : public AbstractModel
                {
                public:
                    CreateLibraDBClustersRequest();
                    ~CreateLibraDBClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity.
                     * @return Count Quantity.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Quantity.
                     * @param _count Quantity.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
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
                     * 获取Instance initialization information
                     * @return InstanceInitInfos Instance initialization information
                     * 
                     */
                    std::vector<LibraDBInstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置Instance initialization information
                     * @param _instanceInitInfos Instance initialization information
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<LibraDBInstanceInitInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

                    /**
                     * 获取user password
                     * @return AdminPassword user password
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置user password
                     * @param _adminPassword user password
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Whether to perform auto-renewal.
                     * @return AutoRenewFlag Whether to perform auto-renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to perform auto-renewal.
                     * @param _autoRenewFlag Whether to perform auto-renewal.
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
                     * 获取Whether to automatically select a voucher.
                     * @return AutoVoucher Whether to automatically select a voucher.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher.
                     * @param _autoVoucher Whether to automatically select a voucher.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
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
                     * 获取Order placement mode
                     * @return DealMode Order placement mode
                     * 
                     */
                    std::string GetDealMode() const;

                    /**
                     * 设置Order placement mode
                     * @param _dealMode Order placement mode
                     * 
                     */
                    void SetDealMode(const std::string& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取Encryption method
                     * @return EncryptMethod Encryption method
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置Encryption method
                     * @param _encryptMethod Encryption method
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                    /**
                     * 获取LibraDBVersion version. Defaults to the latest version.
                     * @return LibraDBVersion LibraDBVersion version. Defaults to the latest version.
                     * 
                     */
                    std::string GetLibraDBVersion() const;

                    /**
                     * 设置LibraDBVersion version. Defaults to the latest version.
                     * @param _libraDBVersion LibraDBVersion version. Defaults to the latest version.
                     * 
                     */
                    void SetLibraDBVersion(const std::string& _libraDBVersion);

                    /**
                     * 判断参数 LibraDBVersion 是否已赋值
                     * @return LibraDBVersion 是否已赋值
                     * 
                     */
                    bool LibraDBVersionHasBeenSet() const;

                    /**
                     * 获取Order Source
                     * @return OrderSource Order Source
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order Source
                     * @param _orderSource Order Source
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Security group
                     * @return SecurityGroupIds Security group
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group
                     * @param _securityGroupIds Security group
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Duration
                     * @return TimeSpan Duration
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Duration
                     * @param _timeSpan Duration
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit
                     * @return TimeUnit Time unit
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit
                     * @param _timeUnit Time unit
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Instance creation binds Tag array information
                     * @return ResourceTags Instance creation binds Tag array information
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Instance creation binds Tag array information
                     * @param _resourceTags Instance creation binds Tag array information
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取VPC ID of the cluster location
                     * @return VpcId VPC ID of the cluster location
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID of the cluster location
                     * @param _vpcId VPC ID of the cluster location
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
                     * 获取Subnet ID of the cluster location
                     * @return SubnetId Subnet ID of the cluster location
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the cluster location
                     * @param _subnetId Subnet ID of the cluster location
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
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Quantity.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance initialization information
                     */
                    std::vector<LibraDBInstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * user password
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Whether to perform auto-renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically select a voucher.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Order placement mode
                     */
                    std::string m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * Encryption method
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * LibraDBVersion version. Defaults to the latest version.
                     */
                    std::string m_libraDBVersion;
                    bool m_libraDBVersionHasBeenSet;

                    /**
                     * Order Source
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Payment mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Security group
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Duration
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Instance creation binds Tag array information
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * VPC ID of the cluster location
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the cluster location
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Port.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERSREQUEST_H_
