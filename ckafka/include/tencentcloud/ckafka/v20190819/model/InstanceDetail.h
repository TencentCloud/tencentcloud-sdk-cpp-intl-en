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
                     * 获取<p>ckafka cluster instance Id.</p>.
                     * @return InstanceId <p>ckafka cluster instance Id.</p>.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id.</p>.
                     * @param _instanceId <p>ckafka cluster instance Id.</p>.
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
                     * 获取<P>Specifies the name of the ckafka cluster instance.</p>.
                     * @return InstanceName <P>Specifies the name of the ckafka cluster instance.</p>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<P>Specifies the name of the ckafka cluster instance.</p>.
                     * @param _instanceName <P>Specifies the name of the ckafka cluster instance.</p>.
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
                     * 获取<P>Specifies the vip information for accessing the instance.</p>.
                     * @return Vip <P>Specifies the vip information for accessing the instance.</p>.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<P>Specifies the vip information for accessing the instance.</p>.
                     * @param _vip <P>Specifies the vip information for accessing the instance.</p>.
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
                     * 获取<P>Specifies the port information to access the instance.</p>.
                     * @return Vport <P>Specifies the port information to access the instance.</p>.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<P>Specifies the port information to access the instance.</p>.
                     * @param _vport <P>Specifies the port information to access the instance.</p>.
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
                     * 获取<p>Specifies the virtual IP list.</p>.
                     * @return VipList <p>Specifies the virtual IP list.</p>.
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>Specifies the virtual IP list.</p>.
                     * @param _vipList <p>Specifies the virtual IP list.</p>.
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
                     * 获取<P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
                     * @return Status <P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
                     * @param _status <P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
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
                     * 获取<p>Specifies the instance bandwidth in Mbps.</p>.
                     * @return Bandwidth <p>Specifies the instance bandwidth in Mbps.</p>.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>Specifies the instance bandwidth in Mbps.</p>.
                     * @param _bandwidth <p>Specifies the instance bandwidth in Mbps.</p>.
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
                     * 获取<p>Specifies the disk size of the ckafka cluster instance, in gb.</p>.
                     * @return DiskSize <p>Specifies the disk size of the ckafka cluster instance, in gb.</p>.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Specifies the disk size of the ckafka cluster instance, in gb.</p>.
                     * @param _diskSize <p>Specifies the disk size of the ckafka cluster instance, in gb.</p>.
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
                     * 获取<p>Specifies the available zone ID.</p>.
                     * @return ZoneId <p>Specifies the available zone ID.</p>.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Specifies the available zone ID.</p>.
                     * @param _zoneId <p>Specifies the available zone ID.</p>.
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
                     * 获取<p>vpcId. if empty, indicates a basic network.</p>.
                     * @return VpcId <p>vpcId. if empty, indicates a basic network.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpcId. if empty, indicates a basic network.</p>.
                     * @param _vpcId <p>vpcId. if empty, indicates a basic network.</p>.
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
                     * 获取<P>Subnet id.</p>.
                     * @return SubnetId <P>Subnet id.</p>.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<P>Subnet id.</p>.
                     * @param _subnetId <P>Subnet id.</p>.
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
                     * 获取<P>Specifies whether to renew the instance. int enumeration value: 1 means auto-renew, 2 means explicitly no auto-renew.</p>.
                     * @return RenewFlag <P>Specifies whether to renew the instance. int enumeration value: 1 means auto-renew, 2 means explicitly no auto-renew.</p>.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<P>Specifies whether to renew the instance. int enumeration value: 1 means auto-renew, 2 means explicitly no auto-renew.</p>.
                     * @param _renewFlag <P>Specifies whether to renew the instance. int enumeration value: 1 means auto-renew, 2 means explicitly no auto-renew.</p>.
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
                     * 获取<p>Specifies the instance status. valid values: 1 (healthy), 2 (alarm), 3 (instance status exception).</p>.
                     * @return Healthy <p>Specifies the instance status. valid values: 1 (healthy), 2 (alarm), 3 (instance status exception).</p>.
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<p>Specifies the instance status. valid values: 1 (healthy), 2 (alarm), 3 (instance status exception).</p>.
                     * @param _healthy <p>Specifies the instance status. valid values: 1 (healthy), 2 (alarm), 3 (instance status exception).</p>.
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
                     * 获取<P>Specifies the instance status information.</p>.
                     * @return HealthyMessage <P>Specifies the instance status information.</p>.
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置<P>Specifies the instance status information.</p>.
                     * @param _healthyMessage <P>Specifies the instance status information.</p>.
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
                     * 获取<P>Specifies the instance creation time.</p>.
                     * @return CreateTime <P>Specifies the instance creation time.</p>.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<P>Specifies the instance creation time.</p>.
                     * @param _createTime <P>Specifies the instance creation time.</p>.
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
                     * 获取<P>Specifies the instance expiration time.</p>.
                     * @return ExpireTime <P>Specifies the instance expiration time.</p>.
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<P>Specifies the instance expiration time.</p>.
                     * @param _expireTime <P>Specifies the instance expiration time.</p>.
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
                     * 获取<P>Specifies whether it is an internal customer. a value of 1 indicates an internal customer.</p>.
                     * @return IsInternal <P>Specifies whether it is an internal customer. a value of 1 indicates an internal customer.</p>.
                     * 
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置<P>Specifies whether it is an internal customer. a value of 1 indicates an internal customer.</p>.
                     * @param _isInternal <P>Specifies whether it is an internal customer. a value of 1 indicates an internal customer.</p>.
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
                     * 获取<p>Specifies the number of topics.</p>.
                     * @return TopicNum <p>Specifies the number of topics.</p>.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置<p>Specifies the number of topics.</p>.
                     * @param _topicNum <p>Specifies the number of topics.</p>.
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
                     * 获取<P>Specifies the identifier tag.</p>.
                     * @return Tags <P>Specifies the identifier tag.</p>.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<P>Specifies the identifier tag.</p>.
                     * @param _tags <P>Specifies the identifier tag.</p>.
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
                     * 获取<p>kafka version information.</p>.
                     * @return Version <p>kafka version information.</p>.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>kafka version information.</p>.
                     * @param _version <p>kafka version information.</p>.
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
                     * 获取<P>Specifies the cross-availability zone.</p>.
                     * @return ZoneIds <P>Specifies the cross-availability zone.</p>.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<P>Specifies the cross-availability zone.</p>.
                     * @param _zoneIds <P>Specifies the cross-availability zone.</p>.
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
                     * 获取<P>Specifies the ckafka sales type.</p>.
                     * @return Cvm <P>Specifies the ckafka sales type.</p>.
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置<P>Specifies the ckafka sales type.</p>.
                     * @param _cvm <P>Specifies the ckafka sales type.</p>.
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
                     * 获取<P>Specifies the ckafka cluster instance type.</p>.
                     * @return InstanceType <P>Specifies the ckafka cluster instance type.</p>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<P>Specifies the ckafka cluster instance type.</p>.
                     * @param _instanceType <P>Specifies the ckafka cluster instance type.</p>.
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
                     * 获取<P>Specifies the disk type of the ckafka cluster instance.</p>.
                     * @return DiskType <P>Specifies the disk type of the ckafka cluster instance.</p>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<P>Specifies the disk type of the ckafka cluster instance.</p>.
                     * @param _diskType <P>Specifies the disk type of the ckafka cluster instance.</p>.
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
                     * 获取<p>Maximum number of topics for current specifications.</p>.
                     * @return MaxTopicNumber <p>Maximum number of topics for current specifications.</p>.
                     * 
                     */
                    int64_t GetMaxTopicNumber() const;

                    /**
                     * 设置<p>Maximum number of topics for current specifications.</p>.
                     * @param _maxTopicNumber <p>Maximum number of topics for current specifications.</p>.
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
                     * 获取<p>Specifies the maximum number of partitions for current specifications.</p>.
                     * @return MaxPartitionNumber <p>Specifies the maximum number of partitions for current specifications.</p>.
                     * 
                     */
                    int64_t GetMaxPartitionNumber() const;

                    /**
                     * 设置<p>Specifies the maximum number of partitions for current specifications.</p>.
                     * @param _maxPartitionNumber <p>Specifies the maximum number of partitions for current specifications.</p>.
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
                     * 获取<P>Specifies the planned configuration upgrade time.</p>.
                     * @return RebalanceTime <P>Specifies the planned configuration upgrade time.</p>.
                     * 
                     */
                    std::string GetRebalanceTime() const;

                    /**
                     * 设置<P>Specifies the planned configuration upgrade time.</p>.
                     * @param _rebalanceTime <P>Specifies the planned configuration upgrade time.</p>.
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
                     * 获取<P>Current number of partitions of the instance.</p>.
                     * @return PartitionNumber <P>Current number of partitions of the instance.</p>.
                     * 
                     */
                    uint64_t GetPartitionNumber() const;

                    /**
                     * 设置<P>Current number of partitions of the instance.</p>.
                     * @param _partitionNumber <P>Current number of partitions of the instance.</p>.
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
                     * 获取<P>Specifies the public network bandwidth type of the ckafka cluster instance.</p>.
                     * @return PublicNetworkChargeType <P>Specifies the public network bandwidth type of the ckafka cluster instance.</p>.
                     * 
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置<P>Specifies the public network bandwidth type of the ckafka cluster instance.</p>.
                     * @param _publicNetworkChargeType <P>Specifies the public network bandwidth type of the ckafka cluster instance.</p>.
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
                     * 获取<p>Specifies the public network bandwidth. value range: 3Mbps to 999Mbps. only supported in pro edition.</p>.
                     * @return PublicNetwork <p>Specifies the public network bandwidth. value range: 3Mbps to 999Mbps. only supported in pro edition.</p>.
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>Specifies the public network bandwidth. value range: 3Mbps to 999Mbps. only supported in pro edition.</p>.
                     * @param _publicNetwork <p>Specifies the public network bandwidth. value range: 3Mbps to 999Mbps. only supported in pro edition.</p>.
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
                     * 获取<P>Specifies the underlying cluster type of the ckafka cluster instance.</p>.
                     * @return ClusterType <P>Specifies the underlying cluster type of the ckafka cluster instance.</p>.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<P>Specifies the underlying cluster type of the ckafka cluster instance.</p>.
                     * @param _clusterType <P>Specifies the underlying cluster type of the ckafka cluster instance.</p>.
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
                     * 获取<P>Specifies the instance feature list.</p>.
                     * @return Features <P>Specifies the instance feature list.</p>.
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置<P>Specifies the instance feature list.</p>.
                     * @param _features <P>Specifies the instance feature list.</p>.
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
                     * <p>ckafka cluster instance Id.</p>.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <P>Specifies the name of the ckafka cluster instance.</p>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <P>Specifies the vip information for accessing the instance.</p>.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <P>Specifies the port information to access the instance.</p>.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Specifies the virtual IP list.</p>.
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Specifies the instance bandwidth in Mbps.</p>.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>Specifies the disk size of the ckafka cluster instance, in gb.</p>.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Specifies the available zone ID.</p>.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>vpcId. if empty, indicates a basic network.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <P>Subnet id.</p>.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <P>Specifies whether to renew the instance. int enumeration value: 1 means auto-renew, 2 means explicitly no auto-renew.</p>.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Specifies the instance status. valid values: 1 (healthy), 2 (alarm), 3 (instance status exception).</p>.
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <P>Specifies the instance status information.</p>.
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * <P>Specifies the instance creation time.</p>.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <P>Specifies the instance expiration time.</p>.
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <P>Specifies whether it is an internal customer. a value of 1 indicates an internal customer.</p>.
                     */
                    int64_t m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * <p>Specifies the number of topics.</p>.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * <P>Specifies the identifier tag.</p>.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>kafka version information.</p>.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <P>Specifies the cross-availability zone.</p>.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <P>Specifies the ckafka sales type.</p>.
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * <P>Specifies the ckafka cluster instance type.</p>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <P>Specifies the disk type of the ckafka cluster instance.</p>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Maximum number of topics for current specifications.</p>.
                     */
                    int64_t m_maxTopicNumber;
                    bool m_maxTopicNumberHasBeenSet;

                    /**
                     * <p>Specifies the maximum number of partitions for current specifications.</p>.
                     */
                    int64_t m_maxPartitionNumber;
                    bool m_maxPartitionNumberHasBeenSet;

                    /**
                     * <P>Specifies the planned configuration upgrade time.</p>.
                     */
                    std::string m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * <P>Current number of partitions of the instance.</p>.
                     */
                    uint64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <P>Specifies the public network bandwidth type of the ckafka cluster instance.</p>.
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * <p>Specifies the public network bandwidth. value range: 3Mbps to 999Mbps. only supported in pro edition.</p>.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <P>Specifies the underlying cluster type of the ckafka cluster instance.</p>.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <P>Specifies the instance feature list.</p>.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
