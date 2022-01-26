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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
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
                     * 获取Instance VIP information
                     * @return Vip Instance VIP information
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance VIP information
                     * @param Vip Instance VIP information
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Instance port information
                     * @return Vport Instance port information
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Instance port information
                     * @param Vport Instance port information
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Virtual IP list
                     * @return VipList Virtual IP list
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置Virtual IP list
                     * @param VipList Virtual IP list
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: creating, 1: running, 2: deleting, 5: isolated, -1: creation failed
                     * @return Status Instance status. 0: creating, 1: running, 2: deleting, 5: isolated, -1: creation failed
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: creating, 1: running, 2: deleting, 5: isolated, -1: creation failed
                     * @param Status Instance status. 0: creating, 1: running, 2: deleting, 5: isolated, -1: creation failed
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
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param ZoneId AZ ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取vpcId. If this parameter is empty, it means the basic network
                     * @return VpcId vpcId. If this parameter is empty, it means the basic network
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId. If this parameter is empty, it means the basic network
                     * @param VpcId vpcId. If this parameter is empty, it means the basic network
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param SubnetId Subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * @return RenewFlag Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * @param RenewFlag Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance status, which is an int-type value. 0: healthy, 1: alarmed, 2: exceptional
                     * @return Healthy Instance status, which is an int-type value. 0: healthy, 1: alarmed, 2: exceptional
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Instance status, which is an int-type value. 0: healthy, 1: alarmed, 2: exceptional
                     * @param Healthy Instance status, which is an int-type value. 0: healthy, 1: alarmed, 2: exceptional
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Instance status information
                     * @return HealthyMessage Instance status information
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置Instance status information
                     * @param HealthyMessage Instance status information
                     */
                    void SetHealthyMessage(const std::string& _healthyMessage);

                    /**
                     * 判断参数 HealthyMessage 是否已赋值
                     * @return HealthyMessage 是否已赋值
                     */
                    bool HealthyMessageHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param CreateTime Instance creation time
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return ExpireTime Instance expiration time
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param ExpireTime Instance expiration time
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is an internal customer. 1: yes
                     * @return IsInternal Whether it is an internal customer. 1: yes
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置Whether it is an internal customer. 1: yes
                     * @param IsInternal Whether it is an internal customer. 1: yes
                     */
                    void SetIsInternal(const int64_t& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of topics
                     * @param TopicNum Number of topics
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
                     * @param Tags Tag
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

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
                     * 获取CKafka sale type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Cvm CKafka sale type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置CKafka sale type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Cvm CKafka sale type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCvm(const int64_t& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取CKafka instance type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return InstanceType CKafka instance type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置CKafka instance type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param InstanceType CKafka instance type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Disk type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return DiskType Disk type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param DiskType Disk type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return MaxTopicNumber Maximum number of topics for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxTopicNumber() const;

                    /**
                     * 设置Maximum number of topics for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param MaxTopicNumber Maximum number of topics for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetMaxTopicNumber(const int64_t& _maxTopicNumber);

                    /**
                     * 判断参数 MaxTopicNumber 是否已赋值
                     * @return MaxTopicNumber 是否已赋值
                     */
                    bool MaxTopicNumberHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return MaxPartitionNumber Maximum number of partitions for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxPartitionNumber() const;

                    /**
                     * 设置Maximum number of partitions for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param MaxPartitionNumber Maximum number of partitions for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetMaxPartitionNumber(const int64_t& _maxPartitionNumber);

                    /**
                     * 判断参数 MaxPartitionNumber 是否已赋值
                     * @return MaxPartitionNumber 是否已赋值
                     */
                    bool MaxPartitionNumberHasBeenSet() const;

                    /**
                     * 获取Time of scheduled upgrade
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RebalanceTime Time of scheduled upgrade
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetRebalanceTime() const;

                    /**
                     * 设置Time of scheduled upgrade
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param RebalanceTime Time of scheduled upgrade
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetRebalanceTime(const std::string& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取Number of partitions in the current instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PartitionNumber Number of partitions in the current instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPartitionNumber() const;

                    /**
                     * 设置Number of partitions in the current instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PartitionNumber Number of partitions in the current instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPartitionNumber(const uint64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublicNetworkChargeType Public network bandwidth type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置Public network bandwidth type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PublicNetworkChargeType Public network bandwidth type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPublicNetworkChargeType(const std::string& _publicNetworkChargeType);

                    /**
                     * 判断参数 PublicNetworkChargeType 是否已赋值
                     * @return PublicNetworkChargeType 是否已赋值
                     */
                    bool PublicNetworkChargeTypeHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublicNetwork Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PublicNetwork Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     */
                    bool PublicNetworkHasBeenSet() const;

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
                     * Instance VIP information
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Instance port information
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Virtual IP list
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * Instance status. 0: creating, 1: running, 2: deleting, 5: isolated, -1: creation failed
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
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * vpcId. If this parameter is empty, it means the basic network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Instance status, which is an int-type value. 0: healthy, 1: alarmed, 2: exceptional
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * Instance status information
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Whether it is an internal customer. 1: yes
                     */
                    int64_t m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * Number of topics
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Kafka version information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Cross-AZ
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * CKafka sale type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * CKafka instance type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Disk type
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Maximum number of topics for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxTopicNumber;
                    bool m_maxTopicNumberHasBeenSet;

                    /**
                     * Maximum number of partitions for the current instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxPartitionNumber;
                    bool m_maxPartitionNumberHasBeenSet;

                    /**
                     * Time of scheduled upgrade
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * Number of partitions in the current instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * Public network bandwidth type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
