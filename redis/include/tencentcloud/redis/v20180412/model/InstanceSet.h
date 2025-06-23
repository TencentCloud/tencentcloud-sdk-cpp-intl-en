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
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>


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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取App ID of a user, which is an application ID that uniquely corresponds to the account ID. Some Tencent Cloud products use this app ID.

                     * @return Appid App ID of a user, which is an application ID that uniquely corresponds to the account ID. Some Tencent Cloud products use this app ID.

                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置App ID of a user, which is an application ID that uniquely corresponds to the account ID. Some Tencent Cloud products use this app ID.

                     * @param _appid App ID of a user, which is an application ID that uniquely corresponds to the account ID. Some Tencent Cloud products use this app ID.

                     * 
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Region ID. <ul><li>1: Guangzhou;</li> <li>4: Shanghai;</li> <li>5: Hong Kong (China);</li> <li>7: Shanghai Finance;</li> <li>8: Beijing;</li> <li>9: Singapore;</li> <li>11: Shenzhen Finance;</li> <li>15: Western United States (Silicon Valley);</li> <li>16: Chengdu;</li> <li>17: Frankfurt;</li> <li>18: Seoul;</li> <li>19: Chongqing;</li> <li>21: Mumbai;</li> <li>22: Eastern United States (Virginia);</li> <li>23: Bangkok;</li> <li>25: Tokyo.</li></ul>
                     * @return RegionId Region ID. <ul><li>1: Guangzhou;</li> <li>4: Shanghai;</li> <li>5: Hong Kong (China);</li> <li>7: Shanghai Finance;</li> <li>8: Beijing;</li> <li>9: Singapore;</li> <li>11: Shenzhen Finance;</li> <li>15: Western United States (Silicon Valley);</li> <li>16: Chengdu;</li> <li>17: Frankfurt;</li> <li>18: Seoul;</li> <li>19: Chongqing;</li> <li>21: Mumbai;</li> <li>22: Eastern United States (Virginia);</li> <li>23: Bangkok;</li> <li>25: Tokyo.</li></ul>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID. <ul><li>1: Guangzhou;</li> <li>4: Shanghai;</li> <li>5: Hong Kong (China);</li> <li>7: Shanghai Finance;</li> <li>8: Beijing;</li> <li>9: Singapore;</li> <li>11: Shenzhen Finance;</li> <li>15: Western United States (Silicon Valley);</li> <li>16: Chengdu;</li> <li>17: Frankfurt;</li> <li>18: Seoul;</li> <li>19: Chongqing;</li> <li>21: Mumbai;</li> <li>22: Eastern United States (Virginia);</li> <li>23: Bangkok;</li> <li>25: Tokyo.</li></ul>
                     * @param _regionId Region ID. <ul><li>1: Guangzhou;</li> <li>4: Shanghai;</li> <li>5: Hong Kong (China);</li> <li>7: Shanghai Finance;</li> <li>8: Beijing;</li> <li>9: Singapore;</li> <li>11: Shenzhen Finance;</li> <li>15: Western United States (Silicon Valley);</li> <li>16: Chengdu;</li> <li>17: Frankfurt;</li> <li>18: Seoul;</li> <li>19: Chongqing;</li> <li>21: Mumbai;</li> <li>22: Eastern United States (Virginia);</li> <li>23: Bangkok;</li> <li>25: Tokyo.</li></ul>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取VPC ID, for example, 75101.
                     * @return VpcId VPC ID, for example, 75101.
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC ID, for example, 75101.
                     * @param _vpcId VPC ID, for example, 75101.
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet under VPC, for example, 46315.
                     * @return SubnetId ID of the subnet under VPC, for example, 46315.
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置ID of the subnet under VPC, for example, 46315.
                     * @param _subnetId ID of the subnet under VPC, for example, 46315.
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul>
                     * @return Status Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul>
                     * @param _status Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul>
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
                     * 获取Instance VIP.
                     * @return WanIp Instance VIP.
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Instance VIP.
                     * @param _wanIp Instance VIP.
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Instance port number.
                     * @return Port Instance port number.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Instance port number.
                     * @param _port Instance port number.
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
                     * 获取Instance creation time, for example, in the format of 2020-01-15 10:20:00.
                     * @return Createtime Instance creation time, for example, in the format of 2020-01-15 10:20:00.
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置Instance creation time, for example, in the format of 2020-01-15 10:20:00.
                     * @param _createtime Instance creation time, for example, in the format of 2020-01-15 10:20:00.
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取Instance memory capacity. Unit: MB (1 MB = 1024 KB).
                     * @return Size Instance memory capacity. Unit: MB (1 MB = 1024 KB).
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置Instance memory capacity. Unit: MB (1 MB = 1024 KB).
                     * @param _size Instance memory capacity. Unit: MB (1 MB = 1024 KB).
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated. Obtain the memory capacity used by the instance through the TCOP API [GetMonitorData](https://intl.cloud.tencent.com/document/product/248/31014?from_cn_redirect=1).
                     * @return SizeUsed This parameter has been deprecated. Obtain the memory capacity used by the instance through the TCOP API [GetMonitorData](https://intl.cloud.tencent.com/document/product/248/31014?from_cn_redirect=1).
                     * @deprecated
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置This parameter has been deprecated. Obtain the memory capacity used by the instance through the TCOP API [GetMonitorData](https://intl.cloud.tencent.com/document/product/248/31014?from_cn_redirect=1).
                     * @param _sizeUsed This parameter has been deprecated. Obtain the memory capacity used by the instance through the TCOP API [GetMonitorData](https://intl.cloud.tencent.com/document/product/248/31014?from_cn_redirect=1).
                     * @deprecated
                     */
                    void SetSizeUsed(const double& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     * @deprecated
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * @return Type Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * @param _type Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether the automatic renewal flag is set for an instance. <ul><li>1: set;</li> <li>0: not set.</li></ul>
                     * @return AutoRenewFlag Whether the automatic renewal flag is set for an instance. <ul><li>1: set;</li> <li>0: not set.</li></ul>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether the automatic renewal flag is set for an instance. <ul><li>1: set;</li> <li>0: not set.</li></ul>
                     * @param _autoRenewFlag Whether the automatic renewal flag is set for an instance. <ul><li>1: set;</li> <li>0: not set.</li></ul>
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
                     * 获取Expiration time of a monthly subscription instance.
                     * @return DeadlineTime Expiration time of a monthly subscription instance.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Expiration time of a monthly subscription instance.
                     * @param _deadlineTime Expiration time of a monthly subscription instance.
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.
                     * @return Engine Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.
                     * @param _engine Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Product type. <ul><li>standalone: Standard Edition;</li> <li>cluster: Cluster Edition.</li></ul>
                     * @return ProductType Product type. <ul><li>standalone: Standard Edition;</li> <li>cluster: Cluster Edition.</li></ul>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置Product type. <ul><li>standalone: Standard Edition;</li> <li>cluster: Cluster Edition.</li></ul>
                     * @param _productType Product type. <ul><li>standalone: Standard Edition;</li> <li>cluster: Cluster Edition.</li></ul>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID, for example, vpc-fk33jsf43kgv.
                     * @return UniqVpcId VPC ID, for example, vpc-fk33jsf43kgv.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID, for example, vpc-fk33jsf43kgv.
                     * @param _uniqVpcId VPC ID, for example, vpc-fk33jsf43kgv.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet under VPC, for example, subnet-fd3j6l35mm0.
                     * @return UniqSubnetId ID of the subnet under VPC, for example, subnet-fd3j6l35mm0.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置ID of the subnet under VPC, for example, subnet-fd3j6l35mm0.
                     * @param _uniqSubnetId ID of the subnet under VPC, for example, subnet-fd3j6l35mm0.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Billing mode. Only pay-as-you-go billing is supported.
                     * @return BillingMode Billing mode. Only pay-as-you-go billing is supported.
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing mode. Only pay-as-you-go billing is supported.
                     * @param _billingMode Billing mode. Only pay-as-you-go billing is supported.
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Description of the instance running status, for example, running.
                     * @return InstanceTitle Description of the instance running status, for example, running.
                     * 
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置Description of the instance running status, for example, running.
                     * @param _instanceTitle Description of the instance running status, for example, running.
                     * 
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     * 
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取Default termination time of isolated instances, for example, in the format of 2020-02-15 10:20:00. By default, a pay-as-you-go instance will be terminated after 2 hours of isolation, and a monthly subscription instance will be terminated after 7 days.
                     * @return OfflineTime Default termination time of isolated instances, for example, in the format of 2020-02-15 10:20:00. By default, a pay-as-you-go instance will be terminated after 2 hours of isolation, and a monthly subscription instance will be terminated after 7 days.
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Default termination time of isolated instances, for example, in the format of 2020-02-15 10:20:00. By default, a pay-as-you-go instance will be terminated after 2 hours of isolation, and a monthly subscription instance will be terminated after 7 days.
                     * @param _offlineTime Default termination time of isolated instances, for example, in the format of 2020-02-15 10:20:00. By default, a pay-as-you-go instance will be terminated after 2 hours of isolation, and a monthly subscription instance will be terminated after 7 days.
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Sub-status returned for an instance in process.
                     * @return SubStatus Sub-status returned for an instance in process.
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置Sub-status returned for an instance in process.
                     * @param _subStatus Sub-status returned for an instance in process.
                     * 
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取Anti-affinity tag.
                     * @return Tags Anti-affinity tag.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Anti-affinity tag.
                     * @param _tags Anti-affinity tag.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Instance node information.
                     * @return InstanceNode Instance node information.
                     * 
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置Instance node information.
                     * @param _instanceNode Instance node information.
                     * 
                     */
                    void SetInstanceNode(const std::vector<InstanceNode>& _instanceNode);

                    /**
                     * 判断参数 InstanceNode 是否已赋值
                     * @return InstanceNode 是否已赋值
                     * 
                     */
                    bool InstanceNodeHasBeenSet() const;

                    /**
                     * 获取Shard size.
                     * @return RedisShardSize Shard size.
                     * 
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置Shard size.
                     * @param _redisShardSize Shard size.
                     * 
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     * 
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取Number of shards.
                     * @return RedisShardNum Number of shards.
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Number of shards.
                     * @param _redisShardNum Number of shards.
                     * 
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas.
                     * @return RedisReplicasNum Number of replicas.
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Number of replicas.
                     * @param _redisReplicasNum Number of replicas.
                     * 
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Billing ID.
                     * @return PriceId Billing ID.
                     * 
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置Billing ID.
                     * @param _priceId Billing ID.
                     * 
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     * 
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取Time when an instance starts to be isolated.
                     * @return CloseTime Time when an instance starts to be isolated.
                     * 
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置Time when an instance starts to be isolated.
                     * @param _closeTime Time when an instance starts to be isolated.
                     * 
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     * 
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取Read weight of a secondary node.
                     * @return SlaveReadWeight Read weight of a secondary node.
                     * 
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置Read weight of a secondary node.
                     * @param _slaveReadWeight Read weight of a secondary node.
                     * 
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     * 
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取Tag information associated with an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceTags Tag information associated with an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置Tag information associated with an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceTags Tag information associated with an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Project name

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectName Project name

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectName Project name

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NoAuth Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _noAuth Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取Number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClientLimit Number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置Number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clientLimit Number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取DTS status (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DtsStatus DTS status (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置DTS status (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dtsStatus DTS status (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     * 
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取Upper limit of the shard bandwidth. Unit: MB.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NetLimit Upper limit of the shard bandwidth. Unit: MB.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置Upper limit of the shard bandwidth. Unit: MB.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _netLimit Upper limit of the shard bandwidth. Unit: MB.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     * 
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取Password-free instance flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PasswordFree Password-free instance flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置Password-free instance flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _passwordFree Password-free instance flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     * 
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Vip6 Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _vip6 Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IPv6 Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _iPv6 Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIPv6(const std::string& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取Instance read-only flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReadOnly Instance read-only flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Instance read-only flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _readOnly Instance read-only flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemainBandwidthDuration Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remainBandwidthDuration Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     * 
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                    /**
                     * 获取For Redis instances, ignore this parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DiskSize For Redis instances, ignore this parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置For Redis instances, ignore this parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _diskSize For Redis instances, ignore this parameter.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Monitoring version. <ul><li>1m: 1-minute granularity monitoring. This monitoring granularity has been deprecated. For details, see [1-Minute Granularity Will Be Disused](https://www.tencentcloud.com/document/product/239/50440).</li> <li>5s: 5-second granularity monitoring.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorVersion Monitoring version. <ul><li>1m: 1-minute granularity monitoring. This monitoring granularity has been deprecated. For details, see [1-Minute Granularity Will Be Disused](https://www.tencentcloud.com/document/product/239/50440).</li> <li>5s: 5-second granularity monitoring.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置Monitoring version. <ul><li>1m: 1-minute granularity monitoring. This monitoring granularity has been deprecated. For details, see [1-Minute Granularity Will Be Disused](https://www.tencentcloud.com/document/product/239/50440).</li> <li>5s: 5-second granularity monitoring.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorVersion Monitoring version. <ul><li>1m: 1-minute granularity monitoring. This monitoring granularity has been deprecated. For details, see [1-Minute Granularity Will Be Disused](https://www.tencentcloud.com/document/product/239/50440).</li> <li>5s: 5-second granularity monitoring.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取Minimum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClientLimitMin Minimum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 设置Minimum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clientLimitMin Minimum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClientLimitMin(const int64_t& _clientLimitMin);

                    /**
                     * 判断参数 ClientLimitMin 是否已赋值
                     * @return ClientLimitMin 是否已赋值
                     * 
                     */
                    bool ClientLimitMinHasBeenSet() const;

                    /**
                     * 获取Maximum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClientLimitMax Maximum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 设置Maximum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clientLimitMax Maximum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClientLimitMax(const int64_t& _clientLimitMax);

                    /**
                     * 判断参数 ClientLimitMax 是否已赋值
                     * @return ClientLimitMax 是否已赋值
                     * 
                     */
                    bool ClientLimitMaxHasBeenSet() const;

                    /**
                     * 获取Detailed node information of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeSet Detailed node information of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置Detailed node information of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeSet Detailed node information of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取Region information of an instance, for example, ap-guangzhou.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Region information of an instance, for example, ap-guangzhou.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information of an instance, for example, ap-guangzhou.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Region information of an instance, for example, ap-guangzhou.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Public network address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WanAddress Public network address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置Public network address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wanAddress Public network address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWanAddress(const std::string& _wanAddress);

                    /**
                     * 判断参数 WanAddress 是否已赋值
                     * @return WanAddress 是否已赋值
                     * 
                     */
                    bool WanAddressHasBeenSet() const;

                    /**
                     * 获取Polaris service address, which is for internal use.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PolarisServer Polaris service address, which is for internal use.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPolarisServer() const;

                    /**
                     * 设置Polaris service address, which is for internal use.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _polarisServer Polaris service address, which is for internal use.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPolarisServer(const std::string& _polarisServer);

                    /**
                     * 判断参数 PolarisServer 是否已赋值
                     * @return PolarisServer 是否已赋值
                     * 
                     */
                    bool PolarisServerHasBeenSet() const;

                    /**
                     * 获取CDC Redis cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RedisClusterId CDC Redis cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置CDC Redis cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _redisClusterId CDC Redis cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRedisClusterId(const std::string& _redisClusterId);

                    /**
                     * 判断参数 RedisClusterId 是否已赋值
                     * @return RedisClusterId 是否已赋值
                     * 
                     */
                    bool RedisClusterIdHasBeenSet() const;

                    /**
                     * 获取CDC cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DedicatedClusterId CDC cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dedicatedClusterId CDC cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProductVersion Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _productVersion Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取Current Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurrentProxyVersion Current Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置Current Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _currentProxyVersion Current Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurrentRedisVersion Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _currentRedisVersion Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurrentRedisVersion(const std::string& _currentRedisVersion);

                    /**
                     * 判断参数 CurrentRedisVersion 是否已赋值
                     * @return CurrentRedisVersion 是否已赋值
                     * 
                     */
                    bool CurrentRedisVersionHasBeenSet() const;

                    /**
                     * 获取Upgradable Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpgradeProxyVersion Upgradable Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpgradeProxyVersion() const;

                    /**
                     * 设置Upgradable Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _upgradeProxyVersion Upgradable Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpgradeProxyVersion(const std::string& _upgradeProxyVersion);

                    /**
                     * 判断参数 UpgradeProxyVersion 是否已赋值
                     * @return UpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool UpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取Upgradable Cache minor version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpgradeRedisVersion Upgradable Cache minor version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置Upgradable Cache minor version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _upgradeRedisVersion Upgradable Cache minor version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpgradeRedisVersion(const std::string& _upgradeRedisVersion);

                    /**
                     * 判断参数 UpgradeRedisVersion 是否已赋值
                     * @return UpgradeRedisVersion 是否已赋值
                     * 
                     */
                    bool UpgradeRedisVersionHasBeenSet() const;

                    /**
                     * 获取Backup mode. SecondLevelBackup: second-level backup; NormalLevelBackup: normal backup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BackupMode Backup mode. SecondLevelBackup: second-level backup; NormalLevelBackup: normal backup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置Backup mode. SecondLevelBackup: second-level backup; NormalLevelBackup: normal backup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _backupMode Backup mode. SecondLevelBackup: second-level backup; NormalLevelBackup: normal backup.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                private:

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * App ID of a user, which is an application ID that uniquely corresponds to the account ID. Some Tencent Cloud products use this app ID.

                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region ID. <ul><li>1: Guangzhou;</li> <li>4: Shanghai;</li> <li>5: Hong Kong (China);</li> <li>7: Shanghai Finance;</li> <li>8: Beijing;</li> <li>9: Singapore;</li> <li>11: Shenzhen Finance;</li> <li>15: Western United States (Silicon Valley);</li> <li>16: Chengdu;</li> <li>17: Frankfurt;</li> <li>18: Seoul;</li> <li>19: Chongqing;</li> <li>21: Mumbai;</li> <li>22: Eastern United States (Virginia);</li> <li>23: Bangkok;</li> <li>25: Tokyo.</li></ul>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Zone ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * VPC ID, for example, 75101.
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet under VPC, for example, 46315.
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance VIP.
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Instance port number.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance creation time, for example, in the format of 2020-01-15 10:20:00.
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * Instance memory capacity. Unit: MB (1 MB = 1024 KB).
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * This parameter has been deprecated. Obtain the memory capacity used by the instance through the TCOP API [GetMonitorData](https://intl.cloud.tencent.com/document/product/248/31014?from_cn_redirect=1).
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the automatic renewal flag is set for an instance. <ul><li>1: set;</li> <li>0: not set.</li></ul>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiration time of a monthly subscription instance.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Product type. <ul><li>standalone: Standard Edition;</li> <li>cluster: Cluster Edition.</li></ul>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * VPC ID, for example, vpc-fk33jsf43kgv.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * ID of the subnet under VPC, for example, subnet-fd3j6l35mm0.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Billing mode. Only pay-as-you-go billing is supported.
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Description of the instance running status, for example, running.
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * Default termination time of isolated instances, for example, in the format of 2020-02-15 10:20:00. By default, a pay-as-you-go instance will be terminated after 2 hours of isolation, and a monthly subscription instance will be terminated after 7 days.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Sub-status returned for an instance in process.
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * Anti-affinity tag.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance node information.
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * Shard size.
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * Number of shards.
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Number of replicas.
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Billing ID.
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * Time when an instance starts to be isolated.
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * Read weight of a secondary node.
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * Tag information associated with an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Project name

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * Number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * DTS status (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * Upper limit of the shard bandwidth. Unit: MB.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * Password-free instance flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * Instance read-only flag (internal parameter, which can be ignored).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                    /**
                     * For Redis instances, ignore this parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Monitoring version. <ul><li>1m: 1-minute granularity monitoring. This monitoring granularity has been deprecated. For details, see [1-Minute Granularity Will Be Disused](https://www.tencentcloud.com/document/product/239/50440).</li> <li>5s: 5-second granularity monitoring.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * Minimum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * Maximum value that can be set for the maximum number of client connections.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                    /**
                     * Detailed node information of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * Region information of an instance, for example, ap-guangzhou.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Public network address.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * Polaris service address, which is for internal use.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_polarisServer;
                    bool m_polarisServerHasBeenSet;

                    /**
                     * CDC Redis cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * CDC cluster ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster.</li></ul>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * Current Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * Upgradable Proxy version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_upgradeProxyVersion;
                    bool m_upgradeProxyVersionHasBeenSet;

                    /**
                     * Upgradable Cache minor version of an instance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

                    /**
                     * Backup mode. SecondLevelBackup: second-level backup; NormalLevelBackup: normal backup.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
