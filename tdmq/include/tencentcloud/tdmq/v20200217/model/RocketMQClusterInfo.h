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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ cluster's basic information
                */
                class RocketMQClusterInfo : public AbstractModel
                {
                public:
                    RocketMQClusterInfo();
                    ~RocketMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
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
                     * 获取Creation time in milliseconds
                     * @return CreateTime Creation time in milliseconds
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds
                     * @param _createTime Creation time in milliseconds
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public network access address
                     * @return PublicEndPoint Public network access address
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置Public network access address
                     * @param _publicEndPoint Public network access address
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC access address
                     * @return VpcEndPoint VPC access address
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC access address
                     * @param _vpcEndPoint VPC access address
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SupportNamespaceEndpoint Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportNamespaceEndpoint() const;

                    /**
                     * 设置Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _supportNamespaceEndpoint Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportNamespaceEndpoint(const bool& _supportNamespaceEndpoint);

                    /**
                     * 判断参数 SupportNamespaceEndpoint 是否已赋值
                     * @return SupportNamespaceEndpoint 是否已赋值
                     * 
                     */
                    bool SupportNamespaceEndpointHasBeenSet() const;

                    /**
                     * 获取VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vpcs VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VpcConfig> GetVpcs() const;

                    /**
                     * 设置VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcs VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcs(const std::vector<VpcConfig>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsVip Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isVip Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RocketMQFlag TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRocketMQFlag() const;

                    /**
                     * 设置TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rocketMQFlag TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRocketMQFlag(const bool& _rocketMQFlag);

                    /**
                     * 判断参数 RocketMQFlag 是否已赋值
                     * @return RocketMQFlag 是否已赋值
                     * 
                     */
                    bool RocketMQFlagHasBeenSet() const;

                    /**
                     * 获取Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsolateTime() const;

                    /**
                     * 设置Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolateTime Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolateTime(const int64_t& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpPublicEndpoint HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpPublicEndpoint() const;

                    /**
                     * 设置HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpPublicEndpoint HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpPublicEndpoint(const std::string& _httpPublicEndpoint);

                    /**
                     * 判断参数 HttpPublicEndpoint 是否已赋值
                     * @return HttpPublicEndpoint 是否已赋值
                     * 
                     */
                    bool HttpPublicEndpointHasBeenSet() const;

                    /**
                     * 获取HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVpcEndpoint HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpVpcEndpoint() const;

                    /**
                     * 设置HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpVpcEndpoint HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpVpcEndpoint(const std::string& _httpVpcEndpoint);

                    /**
                     * 判断参数 HttpVpcEndpoint 是否已赋值
                     * @return HttpVpcEndpoint 是否已赋值
                     * 
                     */
                    bool HttpVpcEndpointHasBeenSet() const;

                    /**
                     * 获取Internal TCP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternalEndpoint Internal TCP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置Internal TCP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internalEndpoint Internal TCP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     * 
                     */
                    bool InternalEndpointHasBeenSet() const;

                    /**
                     * 获取Internal HTTP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpInternalEndpoint Internal HTTP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpInternalEndpoint() const;

                    /**
                     * 设置Internal HTTP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpInternalEndpoint Internal HTTP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpInternalEndpoint(const std::string& _httpInternalEndpoint);

                    /**
                     * 判断参数 HttpInternalEndpoint 是否已赋值
                     * @return HttpInternalEndpoint 是否已赋值
                     * 
                     */
                    bool HttpInternalEndpointHasBeenSet() const;

                    /**
                     * 获取Whether to enable ACL authentication. For Exclusive Edition instances, ACL authentication can be disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AclEnabled Whether to enable ACL authentication. For Exclusive Edition instances, ACL authentication can be disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置Whether to enable ACL authentication. For Exclusive Edition instances, ACL authentication can be disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aclEnabled Whether to enable ACL authentication. For Exclusive Edition instances, ACL authentication can be disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取Public network CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicClbId Public network CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicClbId() const;

                    /**
                     * 设置Public network CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicClbId Public network CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicClbId(const std::string& _publicClbId);

                    /**
                     * 判断参数 PublicClbId 是否已赋值
                     * @return PublicClbId 是否已赋值
                     * 
                     */
                    bool PublicClbIdHasBeenSet() const;

                    /**
                     * 获取vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vip vip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Specifies the VPC it belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId Specifies the VPC it belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the VPC it belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId Specifies the VPC it belongs to.
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
                     * 获取Whether migration is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportMigration Whether migration is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportMigration() const;

                    /**
                     * 设置Whether migration is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportMigration Whether migration is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportMigration(const bool& _supportMigration);

                    /**
                     * 判断参数 SupportMigration 是否已赋值
                     * @return SupportMigration 是否已赋值
                     * 
                     */
                    bool SupportMigrationHasBeenSet() const;

                    /**
                     * 获取Instance status:
0: Creating
1: Normal
2: Isolating
3: Destroyed
4: Abnormal
5: Deliver failed
6: Changing the configuration
7: Configuration change failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStatus Instance status:
0: Creating
1: Normal
2: Isolating
3: Destroyed
4: Abnormal
5: Deliver failed
6: Changing the configuration
7: Configuration change failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Instance status:
0: Creating
1: Normal
2: Isolating
3: Destroyed
4: Abnormal
5: Deliver failed
6: Changing the configuration
7: Configuration change failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStatus Instance status:
0: Creating
1: Normal
2: Isolating
3: Destroyed
4: Abnormal
5: Deliver failed
6: Changing the configuration
7: Configuration change failed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Indicates the AZ to which the cluster belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Indicates the AZ to which the cluster belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Indicates the AZ to which the cluster belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId Indicates the AZ to which the cluster belongs.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The AZ where the cluster nodes are located. If the cluster is a cross-AZ cluster, it includes multiple AZs where the cluster nodes are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIds The AZ where the cluster nodes are located. If the cluster is a cross-AZ cluster, it includes multiple AZs where the cluster nodes are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置The AZ where the cluster nodes are located. If the cluster is a cross-AZ cluster, it includes multiple AZs where the cluster nodes are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIds The AZ where the cluster nodes are located. If the cluster is a cross-AZ cluster, it includes multiple AZs where the cluster nodes are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Whether it is frozen.
                     * @return IsFrozen Whether it is frozen.
                     * 
                     */
                    bool GetIsFrozen() const;

                    /**
                     * 设置Whether it is frozen.
                     * @param _isFrozen Whether it is frozen.
                     * 
                     */
                    void SetIsFrozen(const bool& _isFrozen);

                    /**
                     * 判断参数 IsFrozen 是否已赋值
                     * @return IsFrozen 是否已赋值
                     * 
                     */
                    bool IsFrozenHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic topic creation.
                     * @return AutoCreateTopicEnabled Whether to enable automatic topic creation.
                     * 
                     */
                    bool GetAutoCreateTopicEnabled() const;

                    /**
                     * 设置Whether to enable automatic topic creation.
                     * @param _autoCreateTopicEnabled Whether to enable automatic topic creation.
                     * 
                     */
                    void SetAutoCreateTopicEnabled(const bool& _autoCreateTopicEnabled);

                    /**
                     * 判断参数 AutoCreateTopicEnabled 是否已赋值
                     * @return AutoCreateTopicEnabled 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable the admin feature of the cluster.
                     * @return AdminFeatureEnabled Whether to enable the admin feature of the cluster.
                     * 
                     */
                    bool GetAdminFeatureEnabled() const;

                    /**
                     * 设置Whether to enable the admin feature of the cluster.
                     * @param _adminFeatureEnabled Whether to enable the admin feature of the cluster.
                     * 
                     */
                    void SetAdminFeatureEnabled(const bool& _adminFeatureEnabled);

                    /**
                     * 判断参数 AdminFeatureEnabled 是否已赋值
                     * @return AdminFeatureEnabled 是否已赋值
                     * 
                     */
                    bool AdminFeatureEnabledHasBeenSet() const;

                    /**
                     * 获取Admin AK
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminAccessKey Admin AK
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminAccessKey() const;

                    /**
                     * 设置Admin AK
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminAccessKey Admin AK
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdminAccessKey(const std::string& _adminAccessKey);

                    /**
                     * 判断参数 AdminAccessKey 是否已赋值
                     * @return AdminAccessKey 是否已赋值
                     * 
                     */
                    bool AdminAccessKeyHasBeenSet() const;

                    /**
                     * 获取Admin SK
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminSecretKey Admin SK
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminSecretKey() const;

                    /**
                     * 设置Admin SK
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminSecretKey Admin SK
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdminSecretKey(const std::string& _adminSecretKey);

                    /**
                     * 判断参数 AdminSecretKey 是否已赋值
                     * @return AdminSecretKey 是否已赋值
                     * 
                     */
                    bool AdminSecretKeyHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return EnableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _enableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Creation time in milliseconds
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Public network access address
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC access address
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_supportNamespaceEndpoint;
                    bool m_supportNamespaceEndpointHasBeenSet;

                    /**
                     * VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VpcConfig> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_rocketMQFlag;
                    bool m_rocketMQFlagHasBeenSet;

                    /**
                     * Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpPublicEndpoint;
                    bool m_httpPublicEndpointHasBeenSet;

                    /**
                     * HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVpcEndpoint;
                    bool m_httpVpcEndpointHasBeenSet;

                    /**
                     * Internal TCP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * Internal HTTP access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpInternalEndpoint;
                    bool m_httpInternalEndpointHasBeenSet;

                    /**
                     * Whether to enable ACL authentication. For Exclusive Edition instances, ACL authentication can be disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * Public network CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicClbId;
                    bool m_publicClbIdHasBeenSet;

                    /**
                     * vip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Specifies the VPC it belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Whether migration is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportMigration;
                    bool m_supportMigrationHasBeenSet;

                    /**
                     * Instance status:
0: Creating
1: Normal
2: Isolating
3: Destroyed
4: Abnormal
5: Deliver failed
6: Changing the configuration
7: Configuration change failed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Indicates the AZ to which the cluster belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The AZ where the cluster nodes are located. If the cluster is a cross-AZ cluster, it includes multiple AZs where the cluster nodes are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Whether it is frozen.
                     */
                    bool m_isFrozen;
                    bool m_isFrozenHasBeenSet;

                    /**
                     * Whether to enable automatic topic creation.
                     */
                    bool m_autoCreateTopicEnabled;
                    bool m_autoCreateTopicEnabledHasBeenSet;

                    /**
                     * Whether to enable the admin feature of the cluster.
                     */
                    bool m_adminFeatureEnabled;
                    bool m_adminFeatureEnabledHasBeenSet;

                    /**
                     * Admin AK
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminAccessKey;
                    bool m_adminAccessKeyHasBeenSet;

                    /**
                     * Admin SK
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminSecretKey;
                    bool m_adminSecretKeyHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
