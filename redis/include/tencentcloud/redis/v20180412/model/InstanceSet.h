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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceNode.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * List of instance details
                */
                class InstanceSet : public AbstractModel
                {
                public:
                    InstanceSet();
                    ~InstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取User's Appid
                     * @return Appid User's Appid
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置User's Appid
                     * @param Appid User's Appid
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong, China; 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley); 16: Chengdu; 17: Germany; 18: South Korea; 19: Chongqing; 21: India; 22: East US (Virginia); 23: Thailand; 24: Russia; 25: Japan
                     * @return RegionId Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong, China; 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley); 16: Chengdu; 17: Germany; 18: South Korea; 19: Chongqing; 21: India; 22: East US (Virginia); 23: Thailand; 24: Russia; 25: Japan
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong, China; 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley); 16: Chengdu; 17: Germany; 18: South Korea; 19: Chongqing; 21: India; 22: East US (Virginia); 23: Thailand; 24: Russia; 25: Japan
                     * @param RegionId Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong, China; 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley); 16: Chengdu; 17: Germany; 18: South Korea; 19: Chongqing; 21: India; 22: East US (Virginia); 23: Thailand; 24: Russia; 25: Japan
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return ZoneId Region ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Region ID
                     * @param ZoneId Region ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取VPC ID, such as 75101
                     * @return VpcId VPC ID, such as 75101
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC ID, such as 75101
                     * @param VpcId VPC ID, such as 75101
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, such as 46315
                     * @return SubnetId VPC subnet ID, such as 46315
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, such as 46315
                     * @param SubnetId VPC subnet ID, such as 46315
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Current instance status. 0: to be initialized; 1: instance in process; 2: instance running; -2: instance isolated; -3: instance to be deleted
                     * @return Status Current instance status. 0: to be initialized; 1: instance in process; 2: instance running; -2: instance isolated; -3: instance to be deleted
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Current instance status. 0: to be initialized; 1: instance in process; 2: instance running; -2: instance isolated; -3: instance to be deleted
                     * @param Status Current instance status. 0: to be initialized; 1: instance in process; 2: instance running; -2: instance isolated; -3: instance to be deleted
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance VIP
                     * @return WanIp Instance VIP
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Instance VIP
                     * @param WanIp Instance VIP
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Port number of an instance
                     * @return Port Port number of an instance
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port number of an instance
                     * @param Port Port number of an instance
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return Createtime Instance creation time
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置Instance creation time
                     * @param Createtime Instance creation time
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取Instance capacity in MB
                     * @return Size Instance capacity in MB
                     */
                    double GetSize() const;

                    /**
                     * 设置Instance capacity in MB
                     * @param Size Instance capacity in MB
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取This field has been disused
                     * @return SizeUsed This field has been disused
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置This field has been disused
                     * @param SizeUsed This field has been disused
                     */
                    void SetSizeUsed(const double& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取Instance type. 1: Redis 2.8 cluster edition; 2: Redis 2.8 master-slave edition; 3: CKV master-slave edition (Redis 3.2); 4: CKV cluster edition (Redis 3.2); 5: Redis 2.8 standalone edition; 6: Redis 4.0 master-slave edition; 7: Redis 4.0 cluster edition
                     * @return Type Instance type. 1: Redis 2.8 cluster edition; 2: Redis 2.8 master-slave edition; 3: CKV master-slave edition (Redis 3.2); 4: CKV cluster edition (Redis 3.2); 5: Redis 2.8 standalone edition; 6: Redis 4.0 master-slave edition; 7: Redis 4.0 cluster edition
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type. 1: Redis 2.8 cluster edition; 2: Redis 2.8 master-slave edition; 3: CKV master-slave edition (Redis 3.2); 4: CKV cluster edition (Redis 3.2); 5: Redis 2.8 standalone edition; 6: Redis 4.0 master-slave edition; 7: Redis 4.0 cluster edition
                     * @param Type Instance type. 1: Redis 2.8 cluster edition; 2: Redis 2.8 master-slave edition; 3: CKV master-slave edition (Redis 3.2); 4: CKV cluster edition (Redis 3.2); 5: Redis 2.8 standalone edition; 6: Redis 4.0 master-slave edition; 7: Redis 4.0 cluster edition
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to set the auto-renewal flag for an instance. 1: auto-renewal set; 0: auto-renewal not set
                     * @return AutoRenewFlag Whether to set the auto-renewal flag for an instance. 1: auto-renewal set; 0: auto-renewal not set
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to set the auto-renewal flag for an instance. 1: auto-renewal set; 0: auto-renewal not set
                     * @param AutoRenewFlag Whether to set the auto-renewal flag for an instance. 1: auto-renewal set; 0: auto-renewal not set
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return DeadlineTime Instance expiration time
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param DeadlineTime Instance expiration time
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取Engine: Redis community edition, Tencent Cloud CKV
                     * @return Engine Engine: Redis community edition, Tencent Cloud CKV
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine: Redis community edition, Tencent Cloud CKV
                     * @param Engine Engine: Redis community edition, Tencent Cloud CKV
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Product type: Redis 2.8 cluster edition, Redis 2.8 master-slave edition, Redis 3.2 master-slave edition (CKV master-slave edition), Redis 3.2 cluster edition (CKV cluster edition), Redis 2.8 standalone edition, Redis 4.0 cluster edition
                     * @return ProductType Product type: Redis 2.8 cluster edition, Redis 2.8 master-slave edition, Redis 3.2 master-slave edition (CKV master-slave edition), Redis 3.2 cluster edition (CKV cluster edition), Redis 2.8 standalone edition, Redis 4.0 cluster edition
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置Product type: Redis 2.8 cluster edition, Redis 2.8 master-slave edition, Redis 3.2 master-slave edition (CKV master-slave edition), Redis 3.2 cluster edition (CKV cluster edition), Redis 2.8 standalone edition, Redis 4.0 cluster edition
                     * @param ProductType Product type: Redis 2.8 cluster edition, Redis 2.8 master-slave edition, Redis 3.2 master-slave edition (CKV master-slave edition), Redis 3.2 cluster edition (CKV cluster edition), Redis 2.8 standalone edition, Redis 4.0 cluster edition
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID, such as vpc-fk33jsf43kgv
                     * @return UniqVpcId VPC ID, such as vpc-fk33jsf43kgv
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID, such as vpc-fk33jsf43kgv
                     * @param UniqVpcId VPC ID, such as vpc-fk33jsf43kgv
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, such as subnet-fd3j6l35mm0
                     * @return UniqSubnetId VPC subnet ID, such as subnet-fd3j6l35mm0
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置VPC subnet ID, such as subnet-fd3j6l35mm0
                     * @param UniqSubnetId VPC subnet ID, such as subnet-fd3j6l35mm0
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Billing method. 0: pay-as-you-go; 1: monthly subscription
                     * @return BillingMode Billing method. 0: pay-as-you-go; 1: monthly subscription
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing method. 0: pay-as-you-go; 1: monthly subscription
                     * @param BillingMode Billing method. 0: pay-as-you-go; 1: monthly subscription
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Description of an instance status, such as "instance running"
                     * @return InstanceTitle Description of an instance status, such as "instance running"
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置Description of an instance status, such as "instance running"
                     * @param InstanceTitle Description of an instance status, such as "instance running"
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取Scheduled deactivation time
                     * @return OfflineTime Scheduled deactivation time
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Scheduled deactivation time
                     * @param OfflineTime Scheduled deactivation time
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Sub-status returned for an instance in process
                     * @return SubStatus Sub-status returned for an instance in process
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置Sub-status returned for an instance in process
                     * @param SubStatus Sub-status returned for an instance in process
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取Anti-affinity tag
                     * @return Tags Anti-affinity tag
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Anti-affinity tag
                     * @param Tags Anti-affinity tag
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Instance node information
                     * @return InstanceNode Instance node information
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置Instance node information
                     * @param InstanceNode Instance node information
                     */
                    void SetInstanceNode(const std::vector<InstanceNode>& _instanceNode);

                    /**
                     * 判断参数 InstanceNode 是否已赋值
                     * @return InstanceNode 是否已赋值
                     */
                    bool InstanceNodeHasBeenSet() const;

                    /**
                     * 获取Shard size
                     * @return RedisShardSize Shard size
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置Shard size
                     * @param RedisShardSize Shard size
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return RedisShardNum Number of shards
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Number of shards
                     * @param RedisShardNum Number of shards
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return RedisReplicasNum Number of replicas
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Number of replicas
                     * @param RedisReplicasNum Number of replicas
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Billing ID
                     * @return PriceId Billing ID
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置Billing ID
                     * @param PriceId Billing ID
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return CloseTime Isolation time
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置Isolation time
                     * @param CloseTime Isolation time
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取Read weight of a slave node
                     * @return SlaveReadWeight Read weight of a slave node
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置Read weight of a slave node
                     * @param SlaveReadWeight Read weight of a slave node
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取Instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceTags Instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置Instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceTags Instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Project name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProjectName Project name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Whether an instance is password-free. true: yes; false: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoAuth Whether an instance is password-free. true: yes; false: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether an instance is password-free. true: yes; false: no
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NoAuth Whether an instance is password-free. true: yes; false: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取Number of client connections
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClientLimit Number of client connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置Number of client connections
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClientLimit Number of client connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取DTS status (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DtsStatus DTS status (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置DTS status (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DtsStatus DTS status (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取Upper shard bandwidth limit in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetLimit Upper shard bandwidth limit in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置Upper shard bandwidth limit in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NetLimit Upper shard bandwidth limit in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取Password-free instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PasswordFree Password-free instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置Password-free instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PasswordFree Password-free instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取Read-only instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReadOnly Read-only instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Read-only instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ReadOnly Read-only instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Vip6 Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Vip6 Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RemainBandwidthDuration Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RemainBandwidthDuration Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * User's Appid
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong, China; 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley); 16: Chengdu; 17: Germany; 18: South Korea; 19: Chongqing; 21: India; 22: East US (Virginia); 23: Thailand; 24: Russia; 25: Japan
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * VPC ID, such as 75101
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, such as 46315
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Current instance status. 0: to be initialized; 1: instance in process; 2: instance running; -2: instance isolated; -3: instance to be deleted
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance VIP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Port number of an instance
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * Instance capacity in MB
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * This field has been disused
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * Instance type. 1: Redis 2.8 cluster edition; 2: Redis 2.8 master-slave edition; 3: CKV master-slave edition (Redis 3.2); 4: CKV cluster edition (Redis 3.2); 5: Redis 2.8 standalone edition; 6: Redis 4.0 master-slave edition; 7: Redis 4.0 cluster edition
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to set the auto-renewal flag for an instance. 1: auto-renewal set; 0: auto-renewal not set
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Engine: Redis community edition, Tencent Cloud CKV
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Product type: Redis 2.8 cluster edition, Redis 2.8 master-slave edition, Redis 3.2 master-slave edition (CKV master-slave edition), Redis 3.2 cluster edition (CKV cluster edition), Redis 2.8 standalone edition, Redis 4.0 cluster edition
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * VPC ID, such as vpc-fk33jsf43kgv
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, such as subnet-fd3j6l35mm0
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Billing method. 0: pay-as-you-go; 1: monthly subscription
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Description of an instance status, such as "instance running"
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * Scheduled deactivation time
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Sub-status returned for an instance in process
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * Anti-affinity tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance node information
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * Shard size
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * Number of shards
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Billing ID
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * Isolation time
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * Read weight of a slave node
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * Instance tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Project name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Whether an instance is password-free. true: yes; false: no
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * Number of client connections
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * DTS status (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * Upper shard bandwidth limit in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * Password-free instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * Read-only instance flag (internal parameter, which can be ignored)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * Internal parameter, which can be ignored
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
