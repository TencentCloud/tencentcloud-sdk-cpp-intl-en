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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/IntegrateInstanceInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConfigInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/IntegrateCreateClusterConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateIntegrateCluster request structure.
                */
                class CreateIntegrateClusterRequest : public AbstractModel
                {
                public:
                    CreateIntegrateClusterRequest();
                    ~CreateIntegrateClusterRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Specifies the ID of the VPC network it belongs to.
                     * @return VpcId Specifies the ID of the VPC network it belongs to.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the ID of the VPC network it belongs to.
                     * @param _vpcId Specifies the ID of the VPC network it belongs to.
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
                     * 获取Subnet ID.
                     * @return SubnetId Subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetId Subnet ID.
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
                     * 获取Database version. valid values:. 
<li>Specifies the available values for MYSQL: 5.7, 8.0.</li>.
                     * @return DbVersion Database version. valid values:. 
<li>Specifies the available values for MYSQL: 5.7, 8.0.</li>.
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database version. valid values:. 
<li>Specifies the available values for MYSQL: 5.7, 8.0.</li>.
                     * @param _dbVersion Database version. valid values:. 
<li>Specifies the available values for MYSQL: 5.7, 8.0.</li>.
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cluster name, length less than 64 characters. each character value ranges from uppercase/lowercase letters, digits, special symbols ('-','_','.').
                     * @return ClusterName Cluster name, length less than 64 characters. each character value ranges from uppercase/lowercase letters, digits, special symbols ('-','_','.').
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name, length less than 64 characters. each character value ranges from uppercase/lowercase letters, digits, special symbols ('-','_','.').
                     * @param _clusterName Cluster name, length less than 64 characters. each character value ranges from uppercase/lowercase letters, digits, special symbols ('-','_','.').
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
                     * 获取Account password (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/ with any three types).
                     * @return AdminPassword Account password (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/ with any three types).
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Account password (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/ with any three types).
                     * @param _adminPassword Account password (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/ with any three types).
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
                     * 获取Port, default 3306, in the range of [0, 65535).
                     * @return Port Port, default 3306, in the range of [0, 65535).
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port, default 3306, in the range of [0, 65535).
                     * @param _port Port, default 3306, in the range of [0, 65535).
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
                     * @return PayMode Billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
                     * @param _payMode Billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
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
                     * 获取Number of clusters to purchase. value range: [1,3]. default is 1.
                     * @return Count Number of clusters to purchase. value range: [1,3]. default is 1.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of clusters to purchase. value range: [1,3]. default is 1.
                     * @param _count Number of clusters to purchase. value range: [1,3]. default is 1.
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
                     * 获取Maximum storage limit of a regular instance, in GB.
When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.
                     * @return StorageLimit Maximum storage limit of a regular instance, in GB.
When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Maximum storage limit of a regular instance, in GB.
When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.
                     * @param _storageLimit Maximum storage limit of a regular instance, in GB.
When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the annual and monthly subscription duration.
                     * @return TimeSpan Specifies the annual and monthly subscription duration.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Specifies the annual and monthly subscription duration.
                     * @param _timeSpan Specifies the annual and monthly subscription duration.
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
                     * 获取Specifies the measurement unit for annual and monthly subscription duration. valid values: 's', 'd', 'm', 'y'.
                     * @return TimeUnit Specifies the measurement unit for annual and monthly subscription duration. valid values: 's', 'd', 'm', 'y'.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Specifies the measurement unit for annual and monthly subscription duration. valid values: 's', 'd', 'm', 'y'.
                     * @param _timeUnit Specifies the measurement unit for annual and monthly subscription duration. valid values: 's', 'd', 'm', 'y'.
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
                     * 获取Whether annual/monthly subscription is auto-renewed. default value is 0.
0 identifies the default renewal method, 1 means auto-renew, 2 indicates no auto-renewal.
                     * @return AutoRenewFlag Whether annual/monthly subscription is auto-renewed. default value is 0.
0 identifies the default renewal method, 1 means auto-renew, 2 indicates no auto-renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether annual/monthly subscription is auto-renewed. default value is 0.
0 identifies the default renewal method, 1 means auto-renew, 2 indicates no auto-renewal.
                     * @param _autoRenewFlag Whether annual/monthly subscription is auto-renewed. default value is 0.
0 identifies the default renewal method, 1 means auto-renew, 2 indicates no auto-renewal.
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
                     * 获取Whether to automatically select a voucher. 1: yes; 0: no. default value: 0.
                     * @return AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. default value: 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. 1: yes; 0: no. default value: 0.
                     * @param _autoVoucher Whether to automatically select a voucher. 1: yes; 0: no. default value: 0.
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
                     * 获取Specifies the tag array information that needs to be bound during cluster creation.
                     * @return ResourceTags Specifies the tag array information that needs to be bound during cluster creation.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Specifies the tag array information that needs to be bound during cluster creation.
                     * @param _resourceTags Specifies the tag array information that needs to be bound during cluster creation.
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
                     * 获取Specifies the cluster storage billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
When DbType is MYSQL and the cluster billing mode for computing is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be pay-as-you-go.
Rollback and clone do not support monthly subscription storage.
                     * @return StoragePayMode Specifies the cluster storage billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
When DbType is MYSQL and the cluster billing mode for computing is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be pay-as-you-go.
Rollback and clone do not support monthly subscription storage.
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置Specifies the cluster storage billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
When DbType is MYSQL and the cluster billing mode for computing is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be pay-as-you-go.
Rollback and clone do not support monthly subscription storage.
                     * @param _storagePayMode Specifies the cluster storage billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
When DbType is MYSQL and the cluster billing mode for computing is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be pay-as-you-go.
Rollback and clone do not support monthly subscription storage.
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取Security group id array.
                     * @return SecurityGroupIds Security group id array.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group id array.
                     * @param _securityGroupIds Security group id array.
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
                     * 获取Specifies the Alarm policy Id array.
                     * @return AlarmPolicyIds Specifies the Alarm policy Id array.
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置Specifies the Alarm policy Id array.
                     * @param _alarmPolicyIds Specifies the Alarm policy Id array.
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names. valid values: 1 (case-insensitive), 0 (case-sensitive).
                     * @return ClusterParams Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names. valid values: 1 (case-insensitive), 0 (case-sensitive).
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names. valid values: 1 (case-insensitive), 0 (case-sensitive).
                     * @param _clusterParams Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names. valid values: 1 (case-insensitive), 0 (case-sensitive).
                     * 
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     * 
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取Transaction mode. valid values: 0 (place order and pay), 1 (place order).
                     * @return DealMode Transaction mode. valid values: 0 (place order and pay), 1 (place order).
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Transaction mode. valid values: 0 (place order and pay), 1 (place order).
                     * @param _dealMode Transaction mode. valid values: 0 (place order and pay), 1 (place order).
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取Parameter template ID. can be obtained through querying parameter template information DescribeParamTemplates.
                     * @return ParamTemplateId Parameter template ID. can be obtained through querying parameter template information DescribeParamTemplates.
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置Parameter template ID. can be obtained through querying parameter template information DescribeParamTemplates.
                     * @param _paramTemplateId Parameter template ID. can be obtained through querying parameter template information DescribeParamTemplates.
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取Multi-AZ address.
                     * @return SlaveZone Multi-AZ address.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Multi-AZ address.
                     * @param _slaveZone Multi-AZ address.
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Initializes configuration information, mainly used to purchase clusters with different specification instances.
                     * @return InstanceInitInfos Initializes configuration information, mainly used to purchase clusters with different specification instances.
                     * 
                     */
                    std::vector<IntegrateInstanceInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置Initializes configuration information, mainly used to purchase clusters with different specification instances.
                     * @param _instanceInitInfos Initializes configuration information, mainly used to purchase clusters with different specification instances.
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<IntegrateInstanceInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

                    /**
                     * 获取Global database unique identifier.
                     * @return GdnId Global database unique identifier.
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置Global database unique identifier.
                     * @param _gdnId Global database unique identifier.
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取Database proxy configuration.
                     * @return ProxyConfig Database proxy configuration.
                     * 
                     */
                    ProxyConfigInfo GetProxyConfig() const;

                    /**
                     * 设置Database proxy configuration.
                     * @param _proxyConfig Database proxy configuration.
                     * 
                     */
                    void SetProxyConfig(const ProxyConfigInfo& _proxyConfig);

                    /**
                     * 判断参数 ProxyConfig 是否已赋值
                     * @return ProxyConfig 是否已赋值
                     * 
                     */
                    bool ProxyConfigHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically archive.
                     * @return AutoArchive Specifies whether to automatically archive.
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置Specifies whether to automatically archive.
                     * @param _autoArchive Specifies whether to automatically archive.
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取Processing time after pausing.
                     * @return AutoArchiveDelayHours Processing time after pausing.
                     * 
                     */
                    int64_t GetAutoArchiveDelayHours() const;

                    /**
                     * 设置Processing time after pausing.
                     * @param _autoArchiveDelayHours Processing time after pausing.
                     * 
                     */
                    void SetAutoArchiveDelayHours(const int64_t& _autoArchiveDelayHours);

                    /**
                     * 判断参数 AutoArchiveDelayHours 是否已赋值
                     * @return AutoArchiveDelayHours 是否已赋值
                     * 
                     */
                    bool AutoArchiveDelayHoursHasBeenSet() const;

                    /**
                     * 获取Encryption method (consists of encryption algorithm and key pair version).
                     * @return EncryptMethod Encryption method (consists of encryption algorithm and key pair version).
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置Encryption method (consists of encryption algorithm and key pair version).
                     * @param _encryptMethod Encryption method (consists of encryption algorithm and key pair version).
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
                     * 获取Describes the cluster configuration information.
                     * @return IntegrateCreateClusterConfig Describes the cluster configuration information.
                     * 
                     */
                    IntegrateCreateClusterConfig GetIntegrateCreateClusterConfig() const;

                    /**
                     * 设置Describes the cluster configuration information.
                     * @param _integrateCreateClusterConfig Describes the cluster configuration information.
                     * 
                     */
                    void SetIntegrateCreateClusterConfig(const IntegrateCreateClusterConfig& _integrateCreateClusterConfig);

                    /**
                     * 判断参数 IntegrateCreateClusterConfig 是否已赋值
                     * @return IntegrateCreateClusterConfig 是否已赋值
                     * 
                     */
                    bool IntegrateCreateClusterConfigHasBeenSet() const;

                    /**
                     * 获取Storage architecture type. valid values: 1.0/2.0. default value: 1.0.
                     * @return StorageVersion Storage architecture type. valid values: 1.0/2.0. default value: 1.0.
                     * 
                     */
                    std::string GetStorageVersion() const;

                    /**
                     * 设置Storage architecture type. valid values: 1.0/2.0. default value: 1.0.
                     * @param _storageVersion Storage architecture type. valid values: 1.0/2.0. default value: 1.0.
                     * 
                     */
                    void SetStorageVersion(const std::string& _storageVersion);

                    /**
                     * 判断参数 StorageVersion 是否已赋值
                     * @return StorageVersion 是否已赋值
                     * 
                     */
                    bool StorageVersionHasBeenSet() const;

                private:

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Specifies the ID of the VPC network it belongs to.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Database version. valid values:. 
<li>Specifies the available values for MYSQL: 5.7, 8.0.</li>.
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster name, length less than 64 characters. each character value ranges from uppercase/lowercase letters, digits, special symbols ('-','_','.').
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Account password (8-64 characters, a combination of uppercase and lowercase letters, digits and symbols ~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/ with any three types).
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Port, default 3306, in the range of [0, 65535).
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of clusters to purchase. value range: [1,3]. default is 1.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Maximum storage limit of a regular instance, in GB.
When DbType is MYSQL and the storage billing mode is prepaid, this parameter should not exceed the maximum storage specification corresponding to cpu and memory.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Specifies the annual and monthly subscription duration.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Specifies the measurement unit for annual and monthly subscription duration. valid values: 's', 'd', 'm', 'y'.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Whether annual/monthly subscription is auto-renewed. default value is 0.
0 identifies the default renewal method, 1 means auto-renew, 2 indicates no auto-renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. 1: yes; 0: no. default value: 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Specifies the tag array information that needs to be bound during cluster creation.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Specifies the cluster storage billing mode. 0: pay-as-you-go; 1: monthly subscription. default is pay-as-you-go.
When DbType is MYSQL and the cluster billing mode for computing is postpaid (including DbMode as SERVERLESS), the storage billing mode can only be pay-as-you-go.
Rollback and clone do not support monthly subscription storage.
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * Security group id array.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Specifies the Alarm policy Id array.
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names. valid values: 1 (case-insensitive), 0 (case-sensitive).
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * Transaction mode. valid values: 0 (place order and pay), 1 (place order).
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * Parameter template ID. can be obtained through querying parameter template information DescribeParamTemplates.
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Multi-AZ address.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Initializes configuration information, mainly used to purchase clusters with different specification instances.
                     */
                    std::vector<IntegrateInstanceInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * Global database unique identifier.
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * Database proxy configuration.
                     */
                    ProxyConfigInfo m_proxyConfig;
                    bool m_proxyConfigHasBeenSet;

                    /**
                     * Specifies whether to automatically archive.
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * Processing time after pausing.
                     */
                    int64_t m_autoArchiveDelayHours;
                    bool m_autoArchiveDelayHoursHasBeenSet;

                    /**
                     * Encryption method (consists of encryption algorithm and key pair version).
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * Describes the cluster configuration information.
                     */
                    IntegrateCreateClusterConfig m_integrateCreateClusterConfig;
                    bool m_integrateCreateClusterConfigHasBeenSet;

                    /**
                     * Storage architecture type. valid values: 1.0/2.0. default value: 1.0.
                     */
                    std::string m_storageVersion;
                    bool m_storageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEINTEGRATECLUSTERREQUEST_H_
