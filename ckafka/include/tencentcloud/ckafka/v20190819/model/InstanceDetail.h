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
                     * 获取CKafka cluster instance name.
                     * @return InstanceName CKafka cluster instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CKafka cluster instance name.
                     * @param _instanceName CKafka cluster instance name.
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
                     * 获取Instance VIP information
                     * @return Vip Instance VIP information
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance VIP information
                     * @param _vip Instance VIP information
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
                     * 获取Instance port information
                     * @return Vport Instance port information
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Instance port information
                     * @param _vport Instance port information
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
                     * 获取Virtual IP list
                     * @return VipList Virtual IP list
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置Virtual IP list
                     * @param _vipList Virtual IP list
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
                     * 获取Specifies the ckafka cluster instance disk size in gb.
                     * @return DiskSize Specifies the ckafka cluster instance disk size in gb.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the ckafka cluster instance disk size in gb.
                     * @param _diskSize Specifies the ckafka cluster instance disk size in gb.
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
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
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
                     * 获取vpcId. If this parameter is empty, it means the basic network
                     * @return VpcId vpcId. If this parameter is empty, it means the basic network
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId. If this parameter is empty, it means the basic network
                     * @param _vpcId vpcId. If this parameter is empty, it means the basic network
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
                     * 获取Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * @return RenewFlag Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * @param _renewFlag Whether to renew the instance automatically, which is an int-type enumerated value. 1: yes, 2: no
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance status. An int-type value will be returned. `0`: Healthy, `1`: Alarmed, `2`: Exceptional
                     * @return Healthy Instance status. An int-type value will be returned. `0`: Healthy, `1`: Alarmed, `2`: Exceptional
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Instance status. An int-type value will be returned. `0`: Healthy, `1`: Alarmed, `2`: Exceptional
                     * @param _healthy Instance status. An int-type value will be returned. `0`: Healthy, `1`: Alarmed, `2`: Exceptional
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
                     * 获取Instance status information
                     * @return HealthyMessage Instance status information
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置Instance status information
                     * @param _healthyMessage Instance status information
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
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createTime Instance creation time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return ExpireTime Instance expiration time
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param _expireTime Instance expiration time
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is an internal customer. 1: yes
                     * @return IsInternal Whether it is an internal customer. 1: yes
                     * 
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置Whether it is an internal customer. 1: yes
                     * @param _isInternal Whether it is an internal customer. 1: yes
                     * 
                     */
                    void SetIsInternal(const int64_t& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of topics
                     * @param _topicNum Number of topics
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
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
                     * 获取kafka version information.
                     * @return Version kafka version information.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置kafka version information.
                     * @param _version kafka version information.
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
                     * 获取Cross-Availability zone.
                     * @return ZoneIds Cross-Availability zone.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Cross-Availability zone.
                     * @param _zoneIds Cross-Availability zone.
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
                     * 获取ckafka sales type.
                     * @return Cvm ckafka sales type.
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置ckafka sales type.
                     * @param _cvm ckafka sales type.
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
                     * 获取Specifies the cluster instance type of ckafka.
                     * @return InstanceType Specifies the cluster instance type of ckafka.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifies the cluster instance type of ckafka.
                     * @param _instanceType Specifies the cluster instance type of ckafka.
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
                     * 获取Specifies the ckafka cluster instance disk type.
                     * @return DiskType Specifies the ckafka cluster instance disk type.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Specifies the ckafka cluster instance disk type.
                     * @param _diskType Specifies the ckafka cluster instance disk type.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics for current specifications.
                     * @return MaxTopicNumber Maximum number of topics for current specifications.
                     * 
                     */
                    int64_t GetMaxTopicNumber() const;

                    /**
                     * 设置Maximum number of topics for current specifications.
                     * @param _maxTopicNumber Maximum number of topics for current specifications.
                     * 
                     */
                    void SetMaxTopicNumber(const int64_t& _maxTopicNumber);

                    /**
                     * 判断参数 MaxTopicNumber 是否已赋值
                     * @return MaxTopicNumber 是否已赋值
                     * 
                     */
                    bool MaxTopicNumberHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions for current specifications.
                     * @return MaxPartitionNumber Maximum number of partitions for current specifications.
                     * 
                     */
                    int64_t GetMaxPartitionNumber() const;

                    /**
                     * 设置Maximum number of partitions for current specifications.
                     * @param _maxPartitionNumber Maximum number of partitions for current specifications.
                     * 
                     */
                    void SetMaxPartitionNumber(const int64_t& _maxPartitionNumber);

                    /**
                     * 判断参数 MaxPartitionNumber 是否已赋值
                     * @return MaxPartitionNumber 是否已赋值
                     * 
                     */
                    bool MaxPartitionNumberHasBeenSet() const;

                    /**
                     * 获取Scheduled configuration upgrade time.
                     * @return RebalanceTime Scheduled configuration upgrade time.
                     * 
                     */
                    std::string GetRebalanceTime() const;

                    /**
                     * 设置Scheduled configuration upgrade time.
                     * @param _rebalanceTime Scheduled configuration upgrade time.
                     * 
                     */
                    void SetRebalanceTime(const std::string& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     * 
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the number of partitions in the current instance.
                     * @return PartitionNumber Specifies the number of partitions in the current instance.
                     * 
                     */
                    uint64_t GetPartitionNumber() const;

                    /**
                     * 设置Specifies the number of partitions in the current instance.
                     * @param _partitionNumber Specifies the number of partitions in the current instance.
                     * 
                     */
                    void SetPartitionNumber(const uint64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the public network bandwidth type of the ckafka cluster instance.
                     * @return PublicNetworkChargeType Specifies the public network bandwidth type of the ckafka cluster instance.
                     * 
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置Specifies the public network bandwidth type of the ckafka cluster instance.
                     * @param _publicNetworkChargeType Specifies the public network bandwidth type of the ckafka cluster instance.
                     * 
                     */
                    void SetPublicNetworkChargeType(const std::string& _publicNetworkChargeType);

                    /**
                     * 判断参数 PublicNetworkChargeType 是否已赋值
                     * @return PublicNetworkChargeType 是否已赋值
                     * 
                     */
                    bool PublicNetworkChargeTypeHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * @return PublicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * @param _publicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
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
                     * 获取Specifies the underlying cluster type of the ckafka cluster instance.
                     * @return ClusterType Specifies the underlying cluster type of the ckafka cluster instance.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Specifies the underlying cluster type of the ckafka cluster instance.
                     * @param _clusterType Specifies the underlying cluster type of the ckafka cluster instance.
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
                     * 获取Instance feature list.
                     * @return Features Instance feature list.
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置Instance feature list.
                     * @param _features Instance feature list.
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CKafka cluster instance name.
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
                     * Specifies the ckafka cluster instance disk size in gb.
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
                     * Instance status. An int-type value will be returned. `0`: Healthy, `1`: Alarmed, `2`: Exceptional
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
                     * kafka version information.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Cross-Availability zone.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ckafka sales type.
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * Specifies the cluster instance type of ckafka.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specifies the ckafka cluster instance disk type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Maximum number of topics for current specifications.
                     */
                    int64_t m_maxTopicNumber;
                    bool m_maxTopicNumberHasBeenSet;

                    /**
                     * Maximum number of partitions for current specifications.
                     */
                    int64_t m_maxPartitionNumber;
                    bool m_maxPartitionNumberHasBeenSet;

                    /**
                     * Scheduled configuration upgrade time.
                     */
                    std::string m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * Specifies the number of partitions in the current instance.
                     */
                    uint64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * Specifies the public network bandwidth type of the ckafka cluster instance.
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Specifies the underlying cluster type of the ckafka cluster instance.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Instance feature list.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
