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
                     * 获取The ckafka cluster instance Id.
                     * @return InstanceId The ckafka cluster instance Id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id.
                     * @param _instanceId The ckafka cluster instance Id.
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
                     * 获取Specifies the Name of the ckafka cluster instance.
                     * @return InstanceName Specifies the Name of the ckafka cluster instance.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the Name of the ckafka cluster instance.
                     * @param _instanceName Specifies the Name of the ckafka cluster instance.
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
                     * 获取VIP list information of access point
                     * @return VipList VIP list information of access point
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置VIP list information of access point
                     * @param _vipList VIP list information of access point
                     * 
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取Virtual IP
                     * @return Vip Virtual IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual IP
                     * @param _vip Virtual IP
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
                     * 获取Virtual port
                     * @return Vport Virtual port
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Virtual port
                     * @param _vport Virtual port
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: creating, 1: running, 2: deleting, 3: deleted, 5: isolated, 7: upgrading, -1: creation failed.
                     * @return Status Instance status. 0: creating, 1: running, 2: deleting, 3: deleted, 5: isolated, 7: upgrading, -1: creation failed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: creating, 1: running, 2: deleting, 3: deleted, 5: isolated, 7: upgrading, -1: creation failed.
                     * @param _status Instance status. 0: creating, 1: running, 2: deleting, 3: deleted, 5: isolated, 7: upgrading, -1: creation failed.
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
                     * 获取Instance bandwidth in Mbps
                     * @return Bandwidth Instance bandwidth in Mbps
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Instance bandwidth in Mbps
                     * @param _bandwidth Instance bandwidth in Mbps
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Instance storage capacity in GB
                     * @return DiskSize Instance storage capacity in GB
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Instance storage capacity in GB
                     * @param _diskSize Instance storage capacity in GB
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取AZ
                     * @return ZoneId AZ
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ
                     * @param _zoneId AZ
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
                     * 获取VPC ID. If this parameter is empty, it means the basic network
                     * @return VpcId VPC ID. If this parameter is empty, it means the basic network
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is empty, it means the basic network
                     * @param _vpcId VPC ID. If this parameter is empty, it means the basic network
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
                     * 获取Subnet ID. If this parameter is empty, it means the basic network
                     * @return SubnetId Subnet ID. If this parameter is empty, it means the basic network
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. If this parameter is empty, it means the basic network
                     * @param _subnetId Subnet ID. If this parameter is empty, it means the basic network
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
                     * 获取Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * @return Healthy Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * @param _healthy Instance health status. 1: healthy, 2: alarmed, 3: exceptional
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * @return HealthyMessage Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * @param _healthyMessage Instance health information. Currently, the disk utilization is displayed with a maximum length of 256
                     * 
                     */
                    void SetHealthyMessage(const std::string& _healthyMessage);

                    /**
                     * 判断参数 HealthyMessage 是否已赋值
                     * @return HealthyMessage 是否已赋值
                     * 
                     */
                    bool HealthyMessageHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Message retention period in minutes
                     * @return MsgRetentionTime Message retention period in minutes
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Message retention period in minutes
                     * @param _msgRetentionTime Message retention period in minutes
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * @return Config Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * 
                     */
                    InstanceConfigDO GetConfig() const;

                    /**
                     * 设置Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * @param _config Configuration for automatic topic creation. If this field is empty, it means that automatic creation is not enabled
                     * 
                     */
                    void SetConfig(const InstanceConfigDO& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable partitions
                     * @return RemainderPartitions Number of remaining creatable partitions
                     * 
                     */
                    int64_t GetRemainderPartitions() const;

                    /**
                     * 设置Number of remaining creatable partitions
                     * @param _remainderPartitions Number of remaining creatable partitions
                     * 
                     */
                    void SetRemainderPartitions(const int64_t& _remainderPartitions);

                    /**
                     * 判断参数 RemainderPartitions 是否已赋值
                     * @return RemainderPartitions 是否已赋值
                     * 
                     */
                    bool RemainderPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable topics
                     * @return RemainderTopics Number of remaining creatable topics
                     * 
                     */
                    int64_t GetRemainderTopics() const;

                    /**
                     * 设置Number of remaining creatable topics
                     * @param _remainderTopics Number of remaining creatable topics
                     * 
                     */
                    void SetRemainderTopics(const int64_t& _remainderTopics);

                    /**
                     * 判断参数 RemainderTopics 是否已赋值
                     * @return RemainderTopics 是否已赋值
                     * 
                     */
                    bool RemainderTopicsHasBeenSet() const;

                    /**
                     * 获取Number of partitions already created
                     * @return CreatedPartitions Number of partitions already created
                     * 
                     */
                    int64_t GetCreatedPartitions() const;

                    /**
                     * 设置Number of partitions already created
                     * @param _createdPartitions Number of partitions already created
                     * 
                     */
                    void SetCreatedPartitions(const int64_t& _createdPartitions);

                    /**
                     * 判断参数 CreatedPartitions 是否已赋值
                     * @return CreatedPartitions 是否已赋值
                     * 
                     */
                    bool CreatedPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of topics already created
                     * @return CreatedTopics Number of topics already created
                     * 
                     */
                    int64_t GetCreatedTopics() const;

                    /**
                     * 设置Number of topics already created
                     * @param _createdTopics Number of topics already created
                     * 
                     */
                    void SetCreatedTopics(const int64_t& _createdTopics);

                    /**
                     * 判断参数 CreatedTopics 是否已赋值
                     * @return CreatedTopics 是否已赋值
                     * 
                     */
                    bool CreatedTopicsHasBeenSet() const;

                    /**
                     * 获取Tag array
                     * @return Tags Tag array
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag array
                     * @param _tags Tag array
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
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
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
                     * 获取Availability Zone List
                     * @return ZoneIds Availability Zone List
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Availability Zone List
                     * @param _zoneIds Availability Zone List
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
                     * 获取Specifies the ckafka cluster instance version.
                     * @return Version Specifies the ckafka cluster instance version.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Specifies the ckafka cluster instance version.
                     * @param _version Specifies the ckafka cluster instance version.
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
                     * 获取Maximum number of groups.
                     * @return MaxGroupNum Maximum number of groups.
                     * 
                     */
                    int64_t GetMaxGroupNum() const;

                    /**
                     * 设置Maximum number of groups.
                     * @param _maxGroupNum Maximum number of groups.
                     * 
                     */
                    void SetMaxGroupNum(const int64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     * 
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取Sale type. valid values: 0 (standard version), 1 (pro edition).
                     * @return Cvm Sale type. valid values: 0 (standard version), 1 (pro edition).
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置Sale type. valid values: 0 (standard version), 1 (pro edition).
                     * @param _cvm Sale type. valid values: 0 (standard version), 1 (pro edition).
                     * 
                     */
                    void SetCvm(const int64_t& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     * 
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取Instance type. valid values:. 
Specifies the pro edition.    
Standard version.
premium. specifies the advanced edition.
Specifies the serverless version.
                     * @return InstanceType Instance type. valid values:. 
Specifies the pro edition.    
Standard version.
premium. specifies the advanced edition.
Specifies the serverless version.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. valid values:. 
Specifies the pro edition.    
Standard version.
premium. specifies the advanced edition.
Specifies the serverless version.
                     * @param _instanceType Instance type. valid values:. 
Specifies the pro edition.    
Standard version.
premium. specifies the advanced edition.
Specifies the serverless version.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL means the policy support for configuring subnets.
                     * @return Features Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL means the policy support for configuring subnets.
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL means the policy support for configuring subnets.
                     * @param _features Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL means the policy support for configuring subnets.
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取Dynamic message retention policy.
                     * @return RetentionTimeConfig Dynamic message retention policy.
                     * 
                     */
                    DynamicRetentionTime GetRetentionTimeConfig() const;

                    /**
                     * 设置Dynamic message retention policy.
                     * @param _retentionTimeConfig Dynamic message retention policy.
                     * 
                     */
                    void SetRetentionTimeConfig(const DynamicRetentionTime& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     * 
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections.
                     * @return MaxConnection Maximum number of connections.
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置Maximum number of connections.
                     * @param _maxConnection Maximum number of connections.
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth
                     * @return PublicNetwork Public network bandwidth
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth
                     * @param _publicNetwork Public network bandwidth
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取Specifies the deprecated field with no actual meaning.
                     * @return DeleteRouteTimestamp Specifies the deprecated field with no actual meaning.
                     * 
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置Specifies the deprecated field with no actual meaning.
                     * @param _deleteRouteTimestamp Specifies the deprecated field with no actual meaning.
                     * 
                     */
                    void SetDeleteRouteTimestamp(const std::string& _deleteRouteTimestamp);

                    /**
                     * 判断参数 DeleteRouteTimestamp 是否已赋值
                     * @return DeleteRouteTimestamp 是否已赋值
                     * 
                     */
                    bool DeleteRouteTimestampHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable partitions.
                     * @return RemainingPartitions Number of remaining creatable partitions.
                     * 
                     */
                    int64_t GetRemainingPartitions() const;

                    /**
                     * 设置Number of remaining creatable partitions.
                     * @param _remainingPartitions Number of remaining creatable partitions.
                     * 
                     */
                    void SetRemainingPartitions(const int64_t& _remainingPartitions);

                    /**
                     * 判断参数 RemainingPartitions 是否已赋值
                     * @return RemainingPartitions 是否已赋值
                     * 
                     */
                    bool RemainingPartitionsHasBeenSet() const;

                    /**
                     * 获取Number of remaining creatable topics.
                     * @return RemainingTopics Number of remaining creatable topics.
                     * 
                     */
                    int64_t GetRemainingTopics() const;

                    /**
                     * 设置Number of remaining creatable topics.
                     * @param _remainingTopics Number of remaining creatable topics.
                     * 
                     */
                    void SetRemainingTopics(const int64_t& _remainingTopics);

                    /**
                     * 判断参数 RemainingTopics 是否已赋值
                     * @return RemainingTopics 是否已赋值
                     * 
                     */
                    bool RemainingTopicsHasBeenSet() const;

                    /**
                     * 获取Scaling policy for dynamic disk.
                     * @return DynamicDiskConfig Scaling policy for dynamic disk.
                     * 
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置Scaling policy for dynamic disk.
                     * @param _dynamicDiskConfig Scaling policy for dynamic disk.
                     * 
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     * 
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.
                     * @return InstanceChargeType Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.
                     * @param _instanceChargeType Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the elastic bandwidth allowlist.   
Indicates the allowlist feature with elastic bandwidth enabled.
0: elastic bandwidth allowlist feature is disabled.
                     * @return ElasticBandwidthSwitch Whether to enable the elastic bandwidth allowlist.   
Indicates the allowlist feature with elastic bandwidth enabled.
0: elastic bandwidth allowlist feature is disabled.
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置Whether to enable the elastic bandwidth allowlist.   
Indicates the allowlist feature with elastic bandwidth enabled.
0: elastic bandwidth allowlist feature is disabled.
                     * @param _elasticBandwidthSwitch Whether to enable the elastic bandwidth allowlist.   
Indicates the allowlist feature with elastic bandwidth enabled.
0: elastic bandwidth allowlist feature is disabled.
                     * 
                     */
                    void SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch);

                    /**
                     * 判断参数 ElasticBandwidthSwitch 是否已赋值
                     * @return ElasticBandwidthSwitch 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthSwitchHasBeenSet() const;

                    /**
                     * 获取Indicates the elastic bandwidth activation status.
1: indicates elastic bandwidth is disabled.
Enable elastic bandwidth.
Enable elastic bandwidth successfully.
33: disabling elastic bandwidth.
Indicates that the elastic bandwidth is successfully disabled.
Enable elastic bandwidth failed.
Bandwidth failure.
                     * @return ElasticBandwidthOpenStatus Indicates the elastic bandwidth activation status.
1: indicates elastic bandwidth is disabled.
Enable elastic bandwidth.
Enable elastic bandwidth successfully.
33: disabling elastic bandwidth.
Indicates that the elastic bandwidth is successfully disabled.
Enable elastic bandwidth failed.
Bandwidth failure.
                     * 
                     */
                    int64_t GetElasticBandwidthOpenStatus() const;

                    /**
                     * 设置Indicates the elastic bandwidth activation status.
1: indicates elastic bandwidth is disabled.
Enable elastic bandwidth.
Enable elastic bandwidth successfully.
33: disabling elastic bandwidth.
Indicates that the elastic bandwidth is successfully disabled.
Enable elastic bandwidth failed.
Bandwidth failure.
                     * @param _elasticBandwidthOpenStatus Indicates the elastic bandwidth activation status.
1: indicates elastic bandwidth is disabled.
Enable elastic bandwidth.
Enable elastic bandwidth successfully.
33: disabling elastic bandwidth.
Indicates that the elastic bandwidth is successfully disabled.
Enable elastic bandwidth failed.
Bandwidth failure.
                     * 
                     */
                    void SetElasticBandwidthOpenStatus(const int64_t& _elasticBandwidthOpenStatus);

                    /**
                     * 判断参数 ElasticBandwidthOpenStatus 是否已赋值
                     * @return ElasticBandwidthOpenStatus 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthOpenStatusHasBeenSet() const;

                    /**
                     * 获取Cluster type.  
CLOUD_IDC idc cluster.
CLOUD_CVM_SHARE shared cluster.
CLOUD_CVM_YUNTI yunti cvm cluster.
CLOUD_CVM. specifies the cvm cluster.
CLOUD_CDC cdc cluster.
CLOUD_EKS_TSE eks cluster.
                     * @return ClusterType Cluster type.  
CLOUD_IDC idc cluster.
CLOUD_CVM_SHARE shared cluster.
CLOUD_CVM_YUNTI yunti cvm cluster.
CLOUD_CVM. specifies the cvm cluster.
CLOUD_CDC cdc cluster.
CLOUD_EKS_TSE eks cluster.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type.  
CLOUD_IDC idc cluster.
CLOUD_CVM_SHARE shared cluster.
CLOUD_CVM_YUNTI yunti cvm cluster.
CLOUD_CVM. specifies the cvm cluster.
CLOUD_CDC cdc cluster.
CLOUD_EKS_TSE eks cluster.
                     * @param _clusterType Cluster type.  
CLOUD_IDC idc cluster.
CLOUD_CVM_SHARE shared cluster.
CLOUD_CVM_YUNTI yunti cvm cluster.
CLOUD_CVM. specifies the cvm cluster.
CLOUD_CDC cdc cluster.
CLOUD_EKS_TSE eks cluster.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Number of free partitions.
                     * @return FreePartitionNumber Number of free partitions.
                     * 
                     */
                    int64_t GetFreePartitionNumber() const;

                    /**
                     * 设置Number of free partitions.
                     * @param _freePartitionNumber Number of free partitions.
                     * 
                     */
                    void SetFreePartitionNumber(const int64_t& _freePartitionNumber);

                    /**
                     * 判断参数 FreePartitionNumber 是否已赋值
                     * @return FreePartitionNumber 是否已赋值
                     * 
                     */
                    bool FreePartitionNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the elastic bandwidth upper limit.
                     * @return ElasticFloatBandwidth Specifies the elastic bandwidth upper limit.
                     * 
                     */
                    int64_t GetElasticFloatBandwidth() const;

                    /**
                     * 设置Specifies the elastic bandwidth upper limit.
                     * @param _elasticFloatBandwidth Specifies the elastic bandwidth upper limit.
                     * 
                     */
                    void SetElasticFloatBandwidth(const int64_t& _elasticFloatBandwidth);

                    /**
                     * 判断参数 ElasticFloatBandwidth 是否已赋值
                     * @return ElasticFloatBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticFloatBandwidthHasBeenSet() const;

                    /**
                     * 获取ssl custom certificate id. only returned for instance clusters with custom certificates.
                     * @return CustomCertId ssl custom certificate id. only returned for instance clusters with custom certificates.
                     * 
                     */
                    std::string GetCustomCertId() const;

                    /**
                     * 设置ssl custom certificate id. only returned for instance clusters with custom certificates.
                     * @param _customCertId ssl custom certificate id. only returned for instance clusters with custom certificates.
                     * 
                     */
                    void SetCustomCertId(const std::string& _customCertId);

                    /**
                     * 判断参数 CustomCertId 是否已赋值
                     * @return CustomCertId 是否已赋值
                     * 
                     */
                    bool CustomCertIdHasBeenSet() const;

                    /**
                     * 获取Default unclean.leader.election.enable configuration for cluster topic: 1 enable 0 disable.
                     * @return UncleanLeaderElectionEnable Default unclean.leader.election.enable configuration for cluster topic: 1 enable 0 disable.
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置Default unclean.leader.election.enable configuration for cluster topic: 1 enable 0 disable.
                     * @param _uncleanLeaderElectionEnable Default unclean.leader.election.enable configuration for cluster topic: 1 enable 0 disable.
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取Instance deletion protection switch. 1: enabled; 0: disabled.
                     * @return DeleteProtectionEnable Instance deletion protection switch. 1: enabled; 0: disabled.
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置Instance deletion protection switch. 1: enabled; 0: disabled.
                     * @param _deleteProtectionEnable Instance deletion protection switch. 1: enabled; 0: disabled.
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the Name of the ckafka cluster instance.
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
                     * Instance status. 0: creating, 1: running, 2: deleting, 3: deleted, 5: isolated, 7: upgrading, -1: creation failed.
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
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Expiration time
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Availability Zone List
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Specifies the ckafka cluster instance version.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Maximum number of groups.
                     */
                    int64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * Sale type. valid values: 0 (standard version), 1 (pro edition).
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * Instance type. valid values:. 
Specifies the pro edition.    
Standard version.
premium. specifies the advanced edition.
Specifies the serverless version.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL means the policy support for configuring subnets.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * Dynamic message retention policy.
                     */
                    DynamicRetentionTime m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * Maximum number of connections.
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * Public network bandwidth
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Specifies the deprecated field with no actual meaning.
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                    /**
                     * Number of remaining creatable partitions.
                     */
                    int64_t m_remainingPartitions;
                    bool m_remainingPartitionsHasBeenSet;

                    /**
                     * Number of remaining creatable topics.
                     */
                    int64_t m_remainingTopics;
                    bool m_remainingTopicsHasBeenSet;

                    /**
                     * Scaling policy for dynamic disk.
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Whether to enable the elastic bandwidth allowlist.   
Indicates the allowlist feature with elastic bandwidth enabled.
0: elastic bandwidth allowlist feature is disabled.
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * Indicates the elastic bandwidth activation status.
1: indicates elastic bandwidth is disabled.
Enable elastic bandwidth.
Enable elastic bandwidth successfully.
33: disabling elastic bandwidth.
Indicates that the elastic bandwidth is successfully disabled.
Enable elastic bandwidth failed.
Bandwidth failure.
                     */
                    int64_t m_elasticBandwidthOpenStatus;
                    bool m_elasticBandwidthOpenStatusHasBeenSet;

                    /**
                     * Cluster type.  
CLOUD_IDC idc cluster.
CLOUD_CVM_SHARE shared cluster.
CLOUD_CVM_YUNTI yunti cvm cluster.
CLOUD_CVM. specifies the cvm cluster.
CLOUD_CDC cdc cluster.
CLOUD_EKS_TSE eks cluster.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Number of free partitions.
                     */
                    int64_t m_freePartitionNumber;
                    bool m_freePartitionNumberHasBeenSet;

                    /**
                     * Specifies the elastic bandwidth upper limit.
                     */
                    int64_t m_elasticFloatBandwidth;
                    bool m_elasticFloatBandwidthHasBeenSet;

                    /**
                     * ssl custom certificate id. only returned for instance clusters with custom certificates.
                     */
                    std::string m_customCertId;
                    bool m_customCertIdHasBeenSet;

                    /**
                     * Default unclean.leader.election.enable configuration for cluster topic: 1 enable 0 disable.
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Instance deletion protection switch. 1: enabled; 0: disabled.
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
