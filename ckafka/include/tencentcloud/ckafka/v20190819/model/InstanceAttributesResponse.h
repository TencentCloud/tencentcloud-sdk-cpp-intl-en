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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceConfigDO.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned result object of instance attributes
                */
                class InstanceAttributesResponse : public AbstractModel
                {
                public:
                    InstanceAttributesResponse();
                    ~InstanceAttributesResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取VIP list information of access point
                     * @return VipList VIP list information of access point
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置VIP list information of access point
                     * @param VipList VIP list information of access point
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取Virtual IP
                     * @return Vip Virtual IP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual IP
                     * @param Vip Virtual IP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Virtual port
                     * @return Vport Virtual port
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Virtual port
                     * @param Vport Virtual port
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: creating, 1: running, 2: deleting
                     * @return Status Instance status. 0: creating, 1: running, 2: deleting
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: creating, 1: running, 2: deleting
                     * @param Status Instance status. 0: creating, 1: running, 2: deleting
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance bandwidth in Mbps
                     * @return Bandwidth Instance bandwidth in Mbps
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Instance bandwidth in Mbps
                     * @param Bandwidth Instance bandwidth in Mbps
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Instance storage capacity in GB
                     * @return DiskSize Instance storage capacity in GB
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Instance storage capacity in GB
                     * @param DiskSize Instance storage capacity in GB
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取AZ
                     * @return ZoneId AZ
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ
                     * @param ZoneId AZ
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is empty, it means the basic network
                     * @return VpcId VPC ID. If this parameter is empty, it means the basic network
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is empty, it means the basic network
                     * @param VpcId VPC ID. If this parameter is empty, it means the basic network
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID. If this parameter is empty, it means the basic network
                     * @return SubnetId Subnet ID. If this parameter is empty, it means the basic network
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. If this parameter is empty, it means the basic network
                     * @param SubnetId Subnet ID. If this parameter is empty, it means the basic network
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * @return Healthy Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * @param Healthy Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * @return HealthyMessage Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * @param HealthyMessage Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     */
                    void SetHealthyMessage(const std::string& _healthyMessage);

                    /**
                     * 判断参数 HealthyMessage 是否已赋值
                     * @return HealthyMessage 是否已赋值
                     */
                    bool HealthyMessageHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Message retention period in minutes
                     * @return MsgRetentionTime Message retention period in minutes
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Message retention period in minutes
                     * @param MsgRetentionTime Message retention period in minutes
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * @return Config Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     */
                    InstanceConfigDO GetConfig() const;

                    /**
                     * 设置Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * @param Config Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     */
                    void SetConfig(const InstanceConfigDO& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable partitions
                     * @return RemainderPartitions Number of remaining creatable partitions
                     */
                    int64_t GetRemainderPartitions() const;

                    /**
                     * 设置Number of remaining creatable partitions
                     * @param RemainderPartitions Number of remaining creatable partitions
                     */
                    void SetRemainderPartitions(const int64_t& _remainderPartitions);

                    /**
                     * 判断参数 RemainderPartitions 是否已赋值
                     * @return RemainderPartitions 是否已赋值
                     */
                    bool RemainderPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable topics
                     * @return RemainderTopics Number of remaining creatable topics
                     */
                    int64_t GetRemainderTopics() const;

                    /**
                     * 设置Number of remaining creatable topics
                     * @param RemainderTopics Number of remaining creatable topics
                     */
                    void SetRemainderTopics(const int64_t& _remainderTopics);

                    /**
                     * 判断参数 RemainderTopics 是否已赋值
                     * @return RemainderTopics 是否已赋值
                     */
                    bool RemainderTopicsHasBeenSet() const;

                    /**
                     * 获取Number of partitions already created
                     * @return CreatedPartitions Number of partitions already created
                     */
                    int64_t GetCreatedPartitions() const;

                    /**
                     * 设置Number of partitions already created
                     * @param CreatedPartitions Number of partitions already created
                     */
                    void SetCreatedPartitions(const int64_t& _createdPartitions);

                    /**
                     * 判断参数 CreatedPartitions 是否已赋值
                     * @return CreatedPartitions 是否已赋值
                     */
                    bool CreatedPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of topics already created
                     * @return CreatedTopics Number of topics already created
                     */
                    int64_t GetCreatedTopics() const;

                    /**
                     * 设置Number of topics already created
                     * @param CreatedTopics Number of topics already created
                     */
                    void SetCreatedTopics(const int64_t& _createdTopics);

                    /**
                     * 判断参数 CreatedTopics 是否已赋值
                     * @return CreatedTopics 是否已赋值
                     */
                    bool CreatedTopicsHasBeenSet() const;

                    /**
                     * 获取Tag array
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag array
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag array
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tag array
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIds Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ZoneIds Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Version Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Version Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Maximum number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxGroupNum Maximum number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxGroupNum() const;

                    /**
                     * 设置Maximum number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxGroupNum Maximum number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxGroupNum(const int64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取Offering type. `0`: Standard Edition; `1`: Professional Edition
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Cvm Offering type. `0`: Standard Edition; `1`: Professional Edition
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置Offering type. `0`: Standard Edition; `1`: Professional Edition
Note: this field may return `null`, indicating that no valid value was found.
                     * @param Cvm Offering type. `0`: Standard Edition; `1`: Professional Edition
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetCvm(const int64_t& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取Type.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return InstanceType Type.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param InstanceType Type.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Features supported by the instance. `FEATURE_SUBNET_ACL` indicates that the ACL policy supports setting subnets. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Features Features supported by the instance. `FEATURE_SUBNET_ACL` indicates that the ACL policy supports setting subnets. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置Features supported by the instance. `FEATURE_SUBNET_ACL` indicates that the ACL policy supports setting subnets. 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Features Features supported by the instance. `FEATURE_SUBNET_ACL` indicates that the ACL policy supports setting subnets. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取Dynamic message retention policy
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RetentionTimeConfig Dynamic message retention policy
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    DynamicRetentionTime GetRetentionTimeConfig() const;

                    /**
                     * 设置Dynamic message retention policy
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param RetentionTimeConfig Dynamic message retention policy
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetRetentionTimeConfig(const DynamicRetentionTime& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxConnection Maximum number of connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置Maximum number of connections
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxConnection Maximum number of connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicNetwork Public network bandwidth
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PublicNetwork Public network bandwidth
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取Time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeleteRouteTimestamp Time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置Time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeleteRouteTimestamp Time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeleteRouteTimestamp(const std::string& _deleteRouteTimestamp);

                    /**
                     * 判断参数 DeleteRouteTimestamp 是否已赋值
                     * @return DeleteRouteTimestamp 是否已赋值
                     */
                    bool DeleteRouteTimestampHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable partitions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RemainingPartitions Number of remaining creatable partitions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetRemainingPartitions() const;

                    /**
                     * 设置Number of remaining creatable partitions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RemainingPartitions Number of remaining creatable partitions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRemainingPartitions(const int64_t& _remainingPartitions);

                    /**
                     * 判断参数 RemainingPartitions 是否已赋值
                     * @return RemainingPartitions 是否已赋值
                     */
                    bool RemainingPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable topics
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RemainingTopics Number of remaining creatable topics
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetRemainingTopics() const;

                    /**
                     * 设置Number of remaining creatable topics
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RemainingTopics Number of remaining creatable topics
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRemainingTopics(const int64_t& _remainingTopics);

                    /**
                     * 判断参数 RemainingTopics 是否已赋值
                     * @return RemainingTopics 是否已赋值
                     */
                    bool RemainingTopicsHasBeenSet() const;

                    /**
                     * 获取Dynamic disk expansion policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DynamicDiskConfig Dynamic disk expansion policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置Dynamic disk expansion policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DynamicDiskConfig Dynamic disk expansion policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

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
                     * VIP list information of access point
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * Virtual IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Virtual port
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance status. 0: creating, 1: running, 2: deleting
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance bandwidth in Mbps
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Instance storage capacity in GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * AZ
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * VPC ID. If this parameter is empty, it means the basic network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. If this parameter is empty, it means the basic network
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * Creation time
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Message retention period in minutes
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     */
                    InstanceConfigDO m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Number of remaining creatable partitions
                     */
                    int64_t m_remainderPartitions;
                    bool m_remainderPartitionsHasBeenSet;

                    /**
                     * Number of remaining creatable topics
                     */
                    int64_t m_remainderTopics;
                    bool m_remainderTopicsHasBeenSet;

                    /**
                     * Number of partitions already created
                     */
                    int64_t m_createdPartitions;
                    bool m_createdPartitionsHasBeenSet;

                    /**
                     * Number of topics already created
                     */
                    int64_t m_createdTopics;
                    bool m_createdTopicsHasBeenSet;

                    /**
                     * Tag array
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Maximum number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * Offering type. `0`: Standard Edition; `1`: Professional Edition
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * Type.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Features supported by the instance. `FEATURE_SUBNET_ACL` indicates that the ACL policy supports setting subnets. 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * Dynamic message retention policy
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    DynamicRetentionTime m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * Maximum number of connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * Public network bandwidth
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                    /**
                     * Number of remaining creatable partitions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_remainingPartitions;
                    bool m_remainingPartitionsHasBeenSet;

                    /**
                     * Number of remaining creatable topics
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_remainingTopics;
                    bool m_remainingTopicsHasBeenSet;

                    /**
                     * Dynamic disk expansion policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
