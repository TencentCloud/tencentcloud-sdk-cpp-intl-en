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
                     * 获取<p>Specifies the Name of the ckafka cluster instance.</p>.
                     * @return InstanceName <p>Specifies the Name of the ckafka cluster instance.</p>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Specifies the Name of the ckafka cluster instance.</p>.
                     * @param _instanceName <p>Specifies the Name of the ckafka cluster instance.</p>.
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
                     * 获取<p>Access point VIP list information.</p>.
                     * @return VipList <p>Access point VIP list information.</p>.
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>Access point VIP list information.</p>.
                     * @param _vipList <p>Access point VIP list information.</p>.
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
                     * 获取<p>Virtual IP.</p>.
                     * @return Vip <p>Virtual IP.</p>.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Virtual IP.</p>.
                     * @param _vip <p>Virtual IP.</p>.
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
                     * 获取<P>Virtual port.</p>.
                     * @return Vport <P>Virtual port.</p>.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<P>Virtual port.</p>.
                     * @param _vport <P>Virtual port.</p>.
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
                     * 获取<p>Instance bandwidth (unit: Mbps).</p>.
                     * @return Bandwidth <p>Instance bandwidth (unit: Mbps).</p>.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>Instance bandwidth (unit: Mbps).</p>.
                     * @param _bandwidth <p>Instance bandwidth (unit: Mbps).</p>.
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
                     * 获取<p>Specifies the instance storage size in GB.</p>.
                     * @return DiskSize <p>Specifies the instance storage size in GB.</p>.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Specifies the instance storage size in GB.</p>.
                     * @param _diskSize <p>Specifies the instance storage size in GB.</p>.
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
                     * 获取<P>Specifies the availability zone.</p>.
                     * @return ZoneId <P>Specifies the availability zone.</p>.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<P>Specifies the availability zone.</p>.
                     * @param _zoneId <P>Specifies the availability zone.</p>.
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
                     * 获取<p>VPC ID. being empty indicates a basic network.</p>.
                     * @return VpcId <p>VPC ID. being empty indicates a basic network.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID. being empty indicates a basic network.</p>.
                     * @param _vpcId <p>VPC ID. being empty indicates a basic network.</p>.
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
                     * 获取<p>Specifies the subnet ID. being empty indicates the basic network.</p>.
                     * @return SubnetId <p>Specifies the subnet ID. being empty indicates the basic network.</p>.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Specifies the subnet ID. being empty indicates the basic network.</p>.
                     * @param _subnetId <p>Specifies the subnet ID. being empty indicates the basic network.</p>.
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
                     * 获取<P>Specifies the instance health status. valid values: 1 (healthy), 2 (alarm), 3 (abnormal).</p>.
                     * @return Healthy <P>Specifies the instance health status. valid values: 1 (healthy), 2 (alarm), 3 (abnormal).</p>.
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<P>Specifies the instance health status. valid values: 1 (healthy), 2 (alarm), 3 (abnormal).</p>.
                     * @param _healthy <P>Specifies the instance health status. valid values: 1 (healthy), 2 (alarm), 3 (abnormal).</p>.
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
                     * 获取<P>Instance health information. currently shows disk utilization rate. maximum length is 256.</p>.
                     * @return HealthyMessage <P>Instance health information. currently shows disk utilization rate. maximum length is 256.</p>.
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置<P>Instance health information. currently shows disk utilization rate. maximum length is 256.</p>.
                     * @param _healthyMessage <P>Instance health information. currently shows disk utilization rate. maximum length is 256.</p>.
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
                     * 获取<P>Creation time.</p>.
                     * @return CreateTime <P>Creation time.</p>.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<P>Creation time.</p>.
                     * @param _createTime <P>Creation time.</p>.
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
                     * 获取<P>Message retention period, in minutes.</p>.
                     * @return MsgRetentionTime <P>Message retention period, in minutes.</p>.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<P>Message retention period, in minutes.</p>.
                     * @param _msgRetentionTime <P>Message retention period, in minutes.</p>.
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
                     * 获取<p>Automatic creation Topic configuration. if this field is empty, it indicates that automatic creation is not enabled.</p>.
                     * @return Config <p>Automatic creation Topic configuration. if this field is empty, it indicates that automatic creation is not enabled.</p>.
                     * 
                     */
                    InstanceConfigDO GetConfig() const;

                    /**
                     * 设置<p>Automatic creation Topic configuration. if this field is empty, it indicates that automatic creation is not enabled.</p>.
                     * @param _config <p>Automatic creation Topic configuration. if this field is empty, it indicates that automatic creation is not enabled.</p>.
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
                     * 获取<P>Number of remaining creatable partitions.</p>.
                     * @return RemainderPartitions <P>Number of remaining creatable partitions.</p>.
                     * 
                     */
                    int64_t GetRemainderPartitions() const;

                    /**
                     * 设置<P>Number of remaining creatable partitions.</p>.
                     * @param _remainderPartitions <P>Number of remaining creatable partitions.</p>.
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
                     * 获取<P>Number of remaining creatable topics.</p>.
                     * @return RemainderTopics <P>Number of remaining creatable topics.</p>.
                     * 
                     */
                    int64_t GetRemainderTopics() const;

                    /**
                     * 设置<P>Number of remaining creatable topics.</p>.
                     * @param _remainderTopics <P>Number of remaining creatable topics.</p>.
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
                     * 获取<P>Specifies the current number of partitions created.</p>.
                     * @return CreatedPartitions <P>Specifies the current number of partitions created.</p>.
                     * 
                     */
                    int64_t GetCreatedPartitions() const;

                    /**
                     * 设置<P>Specifies the current number of partitions created.</p>.
                     * @param _createdPartitions <P>Specifies the current number of partitions created.</p>.
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
                     * 获取<P>Specifies the current number of topics created.</p>.
                     * @return CreatedTopics <P>Specifies the current number of topics created.</p>.
                     * 
                     */
                    int64_t GetCreatedTopics() const;

                    /**
                     * 设置<P>Specifies the current number of topics created.</p>.
                     * @param _createdTopics <P>Specifies the current number of topics created.</p>.
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
                     * 获取<P>Tag array.</p>.
                     * @return Tags <P>Tag array.</p>.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<P>Tag array.</p>.
                     * @param _tags <P>Tag array.</p>.
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
                     * 获取<P>Specifies the expiration time.</p>.
                     * @return ExpireTime <P>Specifies the expiration time.</p>.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<P>Specifies the expiration time.</p>.
                     * @param _expireTime <P>Specifies the expiration time.</p>.
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
                     * 获取<P>Specifies the availability zone list.</p>.
                     * @return ZoneIds <P>Specifies the availability zone list.</p>.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<P>Specifies the availability zone list.</p>.
                     * @param _zoneIds <P>Specifies the availability zone list.</p>.
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
                     * 获取<P>Specifies the ckafka cluster instance version.</p>.
                     * @return Version <P>Specifies the ckafka cluster instance version.</p>.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<P>Specifies the ckafka cluster instance version.</p>.
                     * @param _version <P>Specifies the ckafka cluster instance version.</p>.
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
                     * 获取<P>Specifies the maximum number of groups.</p>.
                     * @return MaxGroupNum <P>Specifies the maximum number of groups.</p>.
                     * 
                     */
                    int64_t GetMaxGroupNum() const;

                    /**
                     * 设置<P>Specifies the maximum number of groups.</p>.
                     * @param _maxGroupNum <P>Specifies the maximum number of groups.</p>.
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
                     * 获取<P>Sale type. 0: standard version; 1: pro edition.</p>.
                     * @return Cvm <P>Sale type. 0: standard version; 1: pro edition.</p>.
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置<P>Sale type. 0: standard version; 1: pro edition.</p>.
                     * @param _cvm <P>Sale type. 0: standard version; 1: pro edition.</p>.
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
                     * 获取<p>Instance type. enumerates the list: profession: pro edition; standards2: standard version; premium: advanced edition; serverless: serverless edition.</p>.
                     * @return InstanceType <p>Instance type. enumerates the list: profession: pro edition; standards2: standard version; premium: advanced edition; serverless: serverless edition.</p>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance type. enumerates the list: profession: pro edition; standards2: standard version; premium: advanced edition; serverless: serverless edition.</p>.
                     * @param _instanceType <p>Instance type. enumerates the list: profession: pro edition; standards2: standard version; premium: advanced edition; serverless: serverless edition.</p>.
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
                     * 获取<p>Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL: indicates that the ACL policy supports setting subnets.</p>.
                     * @return Features <p>Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL: indicates that the ACL policy supports setting subnets.</p>.
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置<p>Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL: indicates that the ACL policy supports setting subnets.</p>.
                     * @param _features <p>Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL: indicates that the ACL policy supports setting subnets.</p>.
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
                     * 获取<P>Dynamic message retention policy.</p>.
                     * @return RetentionTimeConfig <P>Dynamic message retention policy.</p>.
                     * 
                     */
                    DynamicRetentionTime GetRetentionTimeConfig() const;

                    /**
                     * 设置<P>Dynamic message retention policy.</p>.
                     * @param _retentionTimeConfig <P>Dynamic message retention policy.</p>.
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
                     * 获取<P>Maximum number of connections.</p>.
                     * @return MaxConnection <P>Maximum number of connections.</p>.
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置<P>Maximum number of connections.</p>.
                     * @param _maxConnection <P>Maximum number of connections.</p>.
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
                     * 获取<P>Public network bandwidth.</p>.
                     * @return PublicNetwork <P>Public network bandwidth.</p>.
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<P>Public network bandwidth.</p>.
                     * @param _publicNetwork <P>Public network bandwidth.</p>.
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
                     * 获取<P>Deprecated. no actual meaning.</p>.
                     * @return DeleteRouteTimestamp <P>Deprecated. no actual meaning.</p>.
                     * 
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置<P>Deprecated. no actual meaning.</p>.
                     * @param _deleteRouteTimestamp <P>Deprecated. no actual meaning.</p>.
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
                     * 获取<P>Number of remaining creatable partitions.</p>.
                     * @return RemainingPartitions <P>Number of remaining creatable partitions.</p>.
                     * 
                     */
                    int64_t GetRemainingPartitions() const;

                    /**
                     * 设置<P>Number of remaining creatable partitions.</p>.
                     * @param _remainingPartitions <P>Number of remaining creatable partitions.</p>.
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
                     * 获取<P>Number of remaining creatable topics.</p>.
                     * @return RemainingTopics <P>Number of remaining creatable topics.</p>.
                     * 
                     */
                    int64_t GetRemainingTopics() const;

                    /**
                     * 设置<P>Number of remaining creatable topics.</p>.
                     * @param _remainingTopics <P>Number of remaining creatable topics.</p>.
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
                     * 获取<P>Dynamic disk expansion policy.</p>.
                     * @return DynamicDiskConfig <P>Dynamic disk expansion policy.</p>.
                     * 
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置<P>Dynamic disk expansion policy.</p>.
                     * @param _dynamicDiskConfig <P>Dynamic disk expansion policy.</p>.
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
                     * 获取<P>Specifies the system maintenance time.</p>.
                     * @return SystemMaintenanceTime <P>Specifies the system maintenance time.</p>.
                     * 
                     */
                    std::string GetSystemMaintenanceTime() const;

                    /**
                     * 设置<P>Specifies the system maintenance time.</p>.
                     * @param _systemMaintenanceTime <P>Specifies the system maintenance time.</p>.
                     * 
                     */
                    void SetSystemMaintenanceTime(const std::string& _systemMaintenanceTime);

                    /**
                     * 判断参数 SystemMaintenanceTime 是否已赋值
                     * @return SystemMaintenanceTime 是否已赋值
                     * 
                     */
                    bool SystemMaintenanceTimeHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the maximum size of instance level messages.</p>.
                     * @return MaxMessageByte <P>Specifies the maximum size of instance level messages.</p>.
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置<P>Specifies the maximum size of instance level messages.</p>.
                     * @param _maxMessageByte <P>Specifies the maximum size of instance level messages.</p>.
                     * 
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     * 
                     */
                    bool MaxMessageByteHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.</p>.
                     * @return InstanceChargeType <p>Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.</p>.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.</p>.
                     * @param _instanceChargeType <p>Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.</p>.
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
                     * 获取<p>Specifies whether to enable the elastic bandwidth allowlist. valid values: 1 (enabled), 0 (disabled).</p>.
                     * @return ElasticBandwidthSwitch <p>Specifies whether to enable the elastic bandwidth allowlist. valid values: 1 (enabled), 0 (disabled).</p>.
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置<p>Specifies whether to enable the elastic bandwidth allowlist. valid values: 1 (enabled), 0 (disabled).</p>.
                     * @param _elasticBandwidthSwitch <p>Specifies whether to enable the elastic bandwidth allowlist. valid values: 1 (enabled), 0 (disabled).</p>.
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
                     * 获取<P>Specifies the elastic bandwidth activation status. 1: elastic bandwidth is disabled; 16: enabling elastic bandwidth; 32: elastic bandwidth enabled successfully; 33: disabling elastic bandwidth; 34: elastic bandwidth disabled successfully; 64: failed to enable elastic bandwidth; 65: failed to disable elastic bandwidth.</p>.
                     * @return ElasticBandwidthOpenStatus <P>Specifies the elastic bandwidth activation status. 1: elastic bandwidth is disabled; 16: enabling elastic bandwidth; 32: elastic bandwidth enabled successfully; 33: disabling elastic bandwidth; 34: elastic bandwidth disabled successfully; 64: failed to enable elastic bandwidth; 65: failed to disable elastic bandwidth.</p>.
                     * 
                     */
                    int64_t GetElasticBandwidthOpenStatus() const;

                    /**
                     * 设置<P>Specifies the elastic bandwidth activation status. 1: elastic bandwidth is disabled; 16: enabling elastic bandwidth; 32: elastic bandwidth enabled successfully; 33: disabling elastic bandwidth; 34: elastic bandwidth disabled successfully; 64: failed to enable elastic bandwidth; 65: failed to disable elastic bandwidth.</p>.
                     * @param _elasticBandwidthOpenStatus <P>Specifies the elastic bandwidth activation status. 1: elastic bandwidth is disabled; 16: enabling elastic bandwidth; 32: elastic bandwidth enabled successfully; 33: disabling elastic bandwidth; 34: elastic bandwidth disabled successfully; 64: failed to enable elastic bandwidth; 65: failed to disable elastic bandwidth.</p>.
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
                     * 获取<p>ClusterType<br />CLOUD_IDC IDC cluster<br />CLOUD_CVM_SHARE CVM shared cluster<br />CLOUD_CVM_YUNTI YUNTI CVM cluster<br />CLOUD_CVM CVM cluster<br />CLOUD_CDC CDC cluster<br />CLOUD_EKS_TSE EKS cluster</p>.
                     * @return ClusterType <p>ClusterType<br />CLOUD_IDC IDC cluster<br />CLOUD_CVM_SHARE CVM shared cluster<br />CLOUD_CVM_YUNTI YUNTI CVM cluster<br />CLOUD_CVM CVM cluster<br />CLOUD_CDC CDC cluster<br />CLOUD_EKS_TSE EKS cluster</p>.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>ClusterType<br />CLOUD_IDC IDC cluster<br />CLOUD_CVM_SHARE CVM shared cluster<br />CLOUD_CVM_YUNTI YUNTI CVM cluster<br />CLOUD_CVM CVM cluster<br />CLOUD_CDC CDC cluster<br />CLOUD_EKS_TSE EKS cluster</p>.
                     * @param _clusterType <p>ClusterType<br />CLOUD_IDC IDC cluster<br />CLOUD_CVM_SHARE CVM shared cluster<br />CLOUD_CVM_YUNTI YUNTI CVM cluster<br />CLOUD_CVM CVM cluster<br />CLOUD_CDC CDC cluster<br />CLOUD_EKS_TSE EKS cluster</p>.
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
                     * 获取<P>Specifies the number of free partitions.</p>.
                     * @return FreePartitionNumber <P>Specifies the number of free partitions.</p>.
                     * 
                     */
                    int64_t GetFreePartitionNumber() const;

                    /**
                     * 设置<P>Specifies the number of free partitions.</p>.
                     * @param _freePartitionNumber <P>Specifies the number of free partitions.</p>.
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
                     * 获取<P>Specifies the elastic bandwidth upper limit.</p>.
                     * @return ElasticFloatBandwidth <P>Specifies the elastic bandwidth upper limit.</p>.
                     * 
                     */
                    int64_t GetElasticFloatBandwidth() const;

                    /**
                     * 设置<P>Specifies the elastic bandwidth upper limit.</p>.
                     * @param _elasticFloatBandwidth <P>Specifies the elastic bandwidth upper limit.</p>.
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
                     * 获取<p>ssl custom certificate id. only returned for instance clusters with custom certificates.</p>.
                     * @return CustomCertId <p>ssl custom certificate id. only returned for instance clusters with custom certificates.</p>.
                     * 
                     */
                    std::string GetCustomCertId() const;

                    /**
                     * 设置<p>ssl custom certificate id. only returned for instance clusters with custom certificates.</p>.
                     * @param _customCertId <p>ssl custom certificate id. only returned for instance clusters with custom certificates.</p>.
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
                     * 获取<P>Specifies the default unclean.leader.election.enable configuration for cluster topics. valid values: 1 (enable), 0 (disable).</p>.
                     * @return UncleanLeaderElectionEnable <P>Specifies the default unclean.leader.election.enable configuration for cluster topics. valid values: 1 (enable), 0 (disable).</p>.
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<P>Specifies the default unclean.leader.election.enable configuration for cluster topics. valid values: 1 (enable), 0 (disable).</p>.
                     * @param _uncleanLeaderElectionEnable <P>Specifies the default unclean.leader.election.enable configuration for cluster topics. valid values: 1 (enable), 0 (disable).</p>.
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
                     * 获取<P>Specifies the instance deletion protection switch. valid values: 1 (enabled), 0 (disabled).</p>.
                     * @return DeleteProtectionEnable <P>Specifies the instance deletion protection switch. valid values: 1 (enabled), 0 (disabled).</p>.
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置<P>Specifies the instance deletion protection switch. valid values: 1 (enabled), 0 (disabled).</p>.
                     * @param _deleteProtectionEnable <P>Specifies the instance deletion protection switch. valid values: 1 (enabled), 0 (disabled).</p>.
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
                     * <p>ckafka cluster instance Id.</p>.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Specifies the Name of the ckafka cluster instance.</p>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Access point VIP list information.</p>.
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <p>Virtual IP.</p>.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <P>Virtual port.</p>.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <P>Specifies the instance status. valid values: 0 (creating), 1 (running), 2 (deleting), 3 (deleted), 5 (isolated), 7 (upgrading), -1 (creation failed).</p>.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance bandwidth (unit: Mbps).</p>.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>Specifies the instance storage size in GB.</p>.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <P>Specifies the availability zone.</p>.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>VPC ID. being empty indicates a basic network.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Specifies the subnet ID. being empty indicates the basic network.</p>.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <P>Specifies the instance health status. valid values: 1 (healthy), 2 (alarm), 3 (abnormal).</p>.
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <P>Instance health information. currently shows disk utilization rate. maximum length is 256.</p>.
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * <P>Creation time.</p>.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <P>Message retention period, in minutes.</p>.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>Automatic creation Topic configuration. if this field is empty, it indicates that automatic creation is not enabled.</p>.
                     */
                    InstanceConfigDO m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <P>Number of remaining creatable partitions.</p>.
                     */
                    int64_t m_remainderPartitions;
                    bool m_remainderPartitionsHasBeenSet;

                    /**
                     * <P>Number of remaining creatable topics.</p>.
                     */
                    int64_t m_remainderTopics;
                    bool m_remainderTopicsHasBeenSet;

                    /**
                     * <P>Specifies the current number of partitions created.</p>.
                     */
                    int64_t m_createdPartitions;
                    bool m_createdPartitionsHasBeenSet;

                    /**
                     * <P>Specifies the current number of topics created.</p>.
                     */
                    int64_t m_createdTopics;
                    bool m_createdTopicsHasBeenSet;

                    /**
                     * <P>Tag array.</p>.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <P>Specifies the expiration time.</p>.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <P>Specifies the availability zone list.</p>.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <P>Specifies the ckafka cluster instance version.</p>.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <P>Specifies the maximum number of groups.</p>.
                     */
                    int64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * <P>Sale type. 0: standard version; 1: pro edition.</p>.
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * <p>Instance type. enumerates the list: profession: pro edition; standards2: standard version; premium: advanced edition; serverless: serverless edition.</p>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Indicates the characteristics supported by the instance. FEATURE_SUBNET_ACL: indicates that the ACL policy supports setting subnets.</p>.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * <P>Dynamic message retention policy.</p>.
                     */
                    DynamicRetentionTime m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * <P>Maximum number of connections.</p>.
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * <P>Public network bandwidth.</p>.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <P>Deprecated. no actual meaning.</p>.
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                    /**
                     * <P>Number of remaining creatable partitions.</p>.
                     */
                    int64_t m_remainingPartitions;
                    bool m_remainingPartitionsHasBeenSet;

                    /**
                     * <P>Number of remaining creatable topics.</p>.
                     */
                    int64_t m_remainingTopics;
                    bool m_remainingTopicsHasBeenSet;

                    /**
                     * <P>Dynamic disk expansion policy.</p>.
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * <P>Specifies the system maintenance time.</p>.
                     */
                    std::string m_systemMaintenanceTime;
                    bool m_systemMaintenanceTimeHasBeenSet;

                    /**
                     * <P>Specifies the maximum size of instance level messages.</p>.
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * <p>Specifies the instance billing type. POSTPAID_BY_HOUR: hourly billing; PREPAID: annual/monthly package.</p>.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Specifies whether to enable the elastic bandwidth allowlist. valid values: 1 (enabled), 0 (disabled).</p>.
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * <P>Specifies the elastic bandwidth activation status. 1: elastic bandwidth is disabled; 16: enabling elastic bandwidth; 32: elastic bandwidth enabled successfully; 33: disabling elastic bandwidth; 34: elastic bandwidth disabled successfully; 64: failed to enable elastic bandwidth; 65: failed to disable elastic bandwidth.</p>.
                     */
                    int64_t m_elasticBandwidthOpenStatus;
                    bool m_elasticBandwidthOpenStatusHasBeenSet;

                    /**
                     * <p>ClusterType<br />CLOUD_IDC IDC cluster<br />CLOUD_CVM_SHARE CVM shared cluster<br />CLOUD_CVM_YUNTI YUNTI CVM cluster<br />CLOUD_CVM CVM cluster<br />CLOUD_CDC CDC cluster<br />CLOUD_EKS_TSE EKS cluster</p>.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <P>Specifies the number of free partitions.</p>.
                     */
                    int64_t m_freePartitionNumber;
                    bool m_freePartitionNumberHasBeenSet;

                    /**
                     * <P>Specifies the elastic bandwidth upper limit.</p>.
                     */
                    int64_t m_elasticFloatBandwidth;
                    bool m_elasticFloatBandwidthHasBeenSet;

                    /**
                     * <p>ssl custom certificate id. only returned for instance clusters with custom certificates.</p>.
                     */
                    std::string m_customCertId;
                    bool m_customCertIdHasBeenSet;

                    /**
                     * <P>Specifies the default unclean.leader.election.enable configuration for cluster topics. valid values: 1 (enable), 0 (disable).</p>.
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <P>Specifies the instance deletion protection switch. valid values: 1 (enabled), 0 (disabled).</p>.
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
