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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>User AppId. AppId is an application ID with a one-to-one correspondence to the account ID. Some Tencent Cloud products use this AppId.</p>
                     * @return Appid <p>User AppId. AppId is an application ID with a one-to-one correspondence to the account ID. Some Tencent Cloud products use this AppId.</p>
                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置<p>User AppId. AppId is an application ID with a one-to-one correspondence to the account ID. Some Tencent Cloud products use this AppId.</p>
                     * @param _appid <p>User AppId. AppId is an application ID with a one-to-one correspondence to the account ID. Some Tencent Cloud products use this AppId.</p>
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
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
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
                     * 获取<p>Region ID.<ul><li>1: Guangzhou.</li><li>4: Shanghai.</li><li>5: Hong Kong (China).</li><li>7: Shanghai Finance.</li><li>8: Beijing.</li><li>9: Singapore.</li><li>11: Shenzhen Finance.</li><li>15: Western US (Silicon Valley).</li><li>16: Chengdu.</li><li>17: Frankfurt.</li><li>18: Seoul.</li><li>19: Chongqing.</li><li>22: Eastern US (Virginia).</li><li>23: Bangkok.</li><li>25: Tokyo.</li></ul></p>
                     * @return RegionId <p>Region ID.<ul><li>1: Guangzhou.</li><li>4: Shanghai.</li><li>5: Hong Kong (China).</li><li>7: Shanghai Finance.</li><li>8: Beijing.</li><li>9: Singapore.</li><li>11: Shenzhen Finance.</li><li>15: Western US (Silicon Valley).</li><li>16: Chengdu.</li><li>17: Frankfurt.</li><li>18: Seoul.</li><li>19: Chongqing.</li><li>22: Eastern US (Virginia).</li><li>23: Bangkok.</li><li>25: Tokyo.</li></ul></p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>Region ID.<ul><li>1: Guangzhou.</li><li>4: Shanghai.</li><li>5: Hong Kong (China).</li><li>7: Shanghai Finance.</li><li>8: Beijing.</li><li>9: Singapore.</li><li>11: Shenzhen Finance.</li><li>15: Western US (Silicon Valley).</li><li>16: Chengdu.</li><li>17: Frankfurt.</li><li>18: Seoul.</li><li>19: Chongqing.</li><li>22: Eastern US (Virginia).</li><li>23: Bangkok.</li><li>25: Tokyo.</li></ul></p>
                     * @param _regionId <p>Region ID.<ul><li>1: Guangzhou.</li><li>4: Shanghai.</li><li>5: Hong Kong (China).</li><li>7: Shanghai Finance.</li><li>8: Beijing.</li><li>9: Singapore.</li><li>11: Shenzhen Finance.</li><li>15: Western US (Silicon Valley).</li><li>16: Chengdu.</li><li>17: Frankfurt.</li><li>18: Seoul.</li><li>19: Chongqing.</li><li>22: Eastern US (Virginia).</li><li>23: Bangkok.</li><li>25: Tokyo.</li></ul></p>
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
                     * 获取<p>Region ID.</p>
                     * @return ZoneId <p>Region ID.</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _zoneId <p>Region ID.</p>
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
                     * 获取<p>vpc network ID, such as 75101.</p>
                     * @return VpcId <p>vpc network ID, such as 75101.</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>vpc network ID, such as 75101.</p>
                     * @param _vpcId <p>vpc network ID, such as 75101.</p>
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
                     * 获取<p>Subnet ID under vpc, for example: 46315.</p>
                     * @return SubnetId <p>Subnet ID under vpc, for example: 46315.</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID under vpc, for example: 46315.</p>
                     * @param _subnetId <p>Subnet ID under vpc, for example: 46315.</p>
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
                     * 获取<p>Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul></p>
                     * @return Status <p>Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul></p>
                     * @param _status <p>Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul></p>
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
                     * 获取<p>Instance VIP.</p>
                     * @return WanIp <p>Instance VIP.</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>Instance VIP.</p>
                     * @param _wanIp <p>Instance VIP.</p>
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
                     * 获取<p>Instance port number.</p>
                     * @return Port <p>Instance port number.</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Instance port number.</p>
                     * @param _port <p>Instance port number.</p>
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
                     * 获取<p>Instance creation time, for example, in the format of 2020-01-15 10:20:00.</p>
                     * @return Createtime <p>Instance creation time, for example, in the format of 2020-01-15 10:20:00.</p>
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置<p>Instance creation time, for example, in the format of 2020-01-15 10:20:00.</p>
                     * @param _createtime <p>Instance creation time, for example, in the format of 2020-01-15 10:20:00.</p>
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
                     * 获取<p>Instance memory capacity. Unit: MB (1 MB = 1024 KB).</p>
                     * @return Size <p>Instance memory capacity. Unit: MB (1 MB = 1024 KB).</p>
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置<p>Instance memory capacity. Unit: MB (1 MB = 1024 KB).</p>
                     * @param _size <p>Instance memory capacity. Unit: MB (1 MB = 1024 KB).</p>
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
                     * 获取<p>This field is deprecated. Please use the Tencent Cloud observability platform API interface <a href="https://www.tencentcloud.com/document/product/248/31014?from_cn_redirect=1">GetMonitorData</a> to obtain the memory capacity used by the instance.</p>
                     * @return SizeUsed <p>This field is deprecated. Please use the Tencent Cloud observability platform API interface <a href="https://www.tencentcloud.com/document/product/248/31014?from_cn_redirect=1">GetMonitorData</a> to obtain the memory capacity used by the instance.</p>
                     * @deprecated
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置<p>This field is deprecated. Please use the Tencent Cloud observability platform API interface <a href="https://www.tencentcloud.com/document/product/248/31014?from_cn_redirect=1">GetMonitorData</a> to obtain the memory capacity used by the instance.</p>
                     * @param _sizeUsed <p>This field is deprecated. Please use the Tencent Cloud observability platform API interface <a href="https://www.tencentcloud.com/document/product/248/31014?from_cn_redirect=1">GetMonitorData</a> to obtain the memory capacity used by the instance.</p>
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
                     * 获取<p>Instance type.</p><p>Enumeration value:</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 8.0 memory edition (standard architecture).</li><li>22: Valkey 8.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * @return Type <p>Instance type.</p><p>Enumeration value:</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 8.0 memory edition (standard architecture).</li><li>22: Valkey 8.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Instance type.</p><p>Enumeration value:</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 8.0 memory edition (standard architecture).</li><li>22: Valkey 8.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * @param _type <p>Instance type.</p><p>Enumeration value:</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 8.0 memory edition (standard architecture).</li><li>22: Valkey 8.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
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
                     * 获取<p>Whether the automatic renewal flag is set for an instance.</p><ul><li>1: set auto-renewal.</li><li>0: automatic renewal flag not set.</li></ul>
                     * @return AutoRenewFlag <p>Whether the automatic renewal flag is set for an instance.</p><ul><li>1: set auto-renewal.</li><li>0: automatic renewal flag not set.</li></ul>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Whether the automatic renewal flag is set for an instance.</p><ul><li>1: set auto-renewal.</li><li>0: automatic renewal flag not set.</li></ul>
                     * @param _autoRenewFlag <p>Whether the automatic renewal flag is set for an instance.</p><ul><li>1: set auto-renewal.</li><li>0: automatic renewal flag not set.</li></ul>
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
                     * 获取<p>Expiration time of a monthly subscription instance.</p>
                     * @return DeadlineTime <p>Expiration time of a monthly subscription instance.</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>Expiration time of a monthly subscription instance.</p>
                     * @param _deadlineTime <p>Expiration time of a monthly subscription instance.</p>
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
                     * 获取<p>Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.</p>
                     * @return Engine <p>Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.</p>
                     * @param _engine <p>Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.</p>
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
                     * 获取<p>Product type.<ul><li>standalone: standard version.</li><li>cluster: cluster version.</li></ul></p>
                     * @return ProductType <p>Product type.<ul><li>standalone: standard version.</li><li>cluster: cluster version.</li></ul></p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>Product type.<ul><li>standalone: standard version.</li><li>cluster: cluster version.</li></ul></p>
                     * @param _productType <p>Product type.<ul><li>standalone: standard version.</li><li>cluster: cluster version.</li></ul></p>
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
                     * 获取<p>vpc Network id, such as vpc-fk33jsf43kgv.</p>
                     * @return UniqVpcId <p>vpc Network id, such as vpc-fk33jsf43kgv.</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>vpc Network id, such as vpc-fk33jsf43kgv.</p>
                     * @param _uniqVpcId <p>vpc Network id, such as vpc-fk33jsf43kgv.</p>
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
                     * 获取<p>subnet id under vpc, for example: subnet-fd3j6l35mm0.</p>
                     * @return UniqSubnetId <p>subnet id under vpc, for example: subnet-fd3j6l35mm0.</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>subnet id under vpc, for example: subnet-fd3j6l35mm0.</p>
                     * @param _uniqSubnetId <p>subnet id under vpc, for example: subnet-fd3j6l35mm0.</p>
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
                     * 获取<p>Billing mode.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * @return BillingMode <p>Billing mode.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     * @param _billingMode <p>Billing mode.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
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
                     * 获取<p>Description of instance running status: for example "instance running".</p>
                     * @return InstanceTitle <p>Description of instance running status: for example "instance running".</p>
                     * 
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置<p>Description of instance running status: for example "instance running".</p>
                     * @param _instanceTitle <p>Description of instance running status: for example "instance running".</p>
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
                     * 获取<p>Default termination time of isolated instances. Pay-as-you-go instance offline after isolation. Monthly Subscription instance offline after 7 days. In the format of: 2020-02-15 10:20:00.</p>
                     * @return OfflineTime <p>Default termination time of isolated instances. Pay-as-you-go instance offline after isolation. Monthly Subscription instance offline after 7 days. In the format of: 2020-02-15 10:20:00.</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>Default termination time of isolated instances. Pay-as-you-go instance offline after isolation. Monthly Subscription instance offline after 7 days. In the format of: 2020-02-15 10:20:00.</p>
                     * @param _offlineTime <p>Default termination time of isolated instances. Pay-as-you-go instance offline after isolation. Monthly Subscription instance offline after 7 days. In the format of: 2020-02-15 10:20:00.</p>
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
                     * 获取<p>Substatus of the instance in process returned.</p><ul><li>0: Read and write status of the disk.</li><li>1: Read-only status of the disk due to exceeding limit.</li></ul>
                     * @return SubStatus <p>Substatus of the instance in process returned.</p><ul><li>0: Read and write status of the disk.</li><li>1: Read-only status of the disk due to exceeding limit.</li></ul>
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置<p>Substatus of the instance in process returned.</p><ul><li>0: Read and write status of the disk.</li><li>1: Read-only status of the disk due to exceeding limit.</li></ul>
                     * @param _subStatus <p>Substatus of the instance in process returned.</p><ul><li>0: Read and write status of the disk.</li><li>1: Read-only status of the disk due to exceeding limit.</li></ul>
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
                     * 获取<p>Anti-affinity tag.</p>
                     * @return Tags <p>Anti-affinity tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Anti-affinity tag.</p>
                     * @param _tags <p>Anti-affinity tag.</p>
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
                     * 获取<p>Instance node information.</p>
                     * @return InstanceNode <p>Instance node information.</p>
                     * 
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置<p>Instance node information.</p>
                     * @param _instanceNode <p>Instance node information.</p>
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
                     * 获取<p>Shard size.</p>
                     * @return RedisShardSize <p>Shard size.</p>
                     * 
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置<p>Shard size.</p>
                     * @param _redisShardSize <p>Shard size.</p>
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
                     * 获取<p>Number of shards.</p>
                     * @return RedisShardNum <p>Number of shards.</p>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>Number of shards.</p>
                     * @param _redisShardNum <p>Number of shards.</p>
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
                     * 获取<p>Number of replicas.</p>
                     * @return RedisReplicasNum <p>Number of replicas.</p>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>Number of replicas.</p>
                     * @param _redisReplicasNum <p>Number of replicas.</p>
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
                     * 获取<p>Billing ID.</p>
                     * @return PriceId <p>Billing ID.</p>
                     * 
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置<p>Billing ID.</p>
                     * @param _priceId <p>Billing ID.</p>
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
                     * 获取<p>Time when an instance starts to be isolated.</p>
                     * @return CloseTime <p>Time when an instance starts to be isolated.</p>
                     * 
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置<p>Time when an instance starts to be isolated.</p>
                     * @param _closeTime <p>Time when an instance starts to be isolated.</p>
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
                     * 获取<p>Read weight of the secondary node.</p><ul><li>0: means disable read-only replica.</li><li>100: means enable read-only replica.</li></ul>
                     * @return SlaveReadWeight <p>Read weight of the secondary node.</p><ul><li>0: means disable read-only replica.</li><li>100: means enable read-only replica.</li></ul>
                     * 
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置<p>Read weight of the secondary node.</p><ul><li>0: means disable read-only replica.</li><li>100: means enable read-only replica.</li></ul>
                     * @param _slaveReadWeight <p>Read weight of the secondary node.</p><ul><li>0: means disable read-only replica.</li><li>100: means enable read-only replica.</li></ul>
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
                     * 获取<p>Tag information associated with an instance.</p>
                     * @return InstanceTags <p>Tag information associated with an instance.</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>Tag information associated with an instance.</p>
                     * @param _instanceTags <p>Tag information associated with an instance.</p>
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
                     * 获取<p>Project name.</p>
                     * @return ProjectName <p>Project name.</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>Project name.</p>
                     * @param _projectName <p>Project name.</p>
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
                     * 获取<p>Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul></p>
                     * @return NoAuth <p>Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul></p>
                     * @param _noAuth <p>Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul></p>
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
                     * 获取<p>Number of client connections.</p>
                     * @return ClientLimit <p>Number of client connections.</p>
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置<p>Number of client connections.</p>
                     * @param _clientLimit <p>Number of client connections.</p>
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
                     * 获取<p>DTS status (internal parameter, can be ignored by users).</p>
                     * @return DtsStatus <p>DTS status (internal parameter, can be ignored by users).</p>
                     * 
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置<p>DTS status (internal parameter, can be ignored by users).</p>
                     * @param _dtsStatus <p>DTS status (internal parameter, can be ignored by users).</p>
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
                     * 获取<p>Upper limit of the shard bandwidth. Unit: MB.</p>
                     * @return NetLimit <p>Upper limit of the shard bandwidth. Unit: MB.</p>
                     * 
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置<p>Upper limit of the shard bandwidth. Unit: MB.</p>
                     * @param _netLimit <p>Upper limit of the shard bandwidth. Unit: MB.</p>
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
                     * 获取<p>Password-free instance flag (internal parameter, which can be ignored).</p>
                     * @return PasswordFree <p>Password-free instance flag (internal parameter, which can be ignored).</p>
                     * 
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置<p>Password-free instance flag (internal parameter, which can be ignored).</p>
                     * @param _passwordFree <p>Password-free instance flag (internal parameter, which can be ignored).</p>
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
                     * 获取<p>Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.</p>
                     * @return Vip6 <p>Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.</p>
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置<p>Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.</p>
                     * @param _vip6 <p>Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.</p>
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
                     * 获取<p>Internal parameter, which can be ignored.</p>
                     * @return IPv6 <p>Internal parameter, which can be ignored.</p>
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 设置<p>Internal parameter, which can be ignored.</p>
                     * @param _iPv6 <p>Internal parameter, which can be ignored.</p>
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
                     * 获取<p>Instance read-only flag (internal parameter, which can be ignored).</p>
                     * @return ReadOnly <p>Instance read-only flag (internal parameter, which can be ignored).</p>
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置<p>Instance read-only flag (internal parameter, which can be ignored).</p>
                     * @param _readOnly <p>Instance read-only flag (internal parameter, which can be ignored).</p>
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
                     * 获取<p>Internal parameter, which can be ignored.</p>
                     * @return RemainBandwidthDuration <p>Internal parameter, which can be ignored.</p>
                     * 
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置<p>Internal parameter, which can be ignored.</p>
                     * @param _remainBandwidthDuration <p>Internal parameter, which can be ignored.</p>
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
                     * 获取<p>For Redis instances, ignore this parameter.</p>
                     * @return DiskSize <p>For Redis instances, ignore this parameter.</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>For Redis instances, ignore this parameter.</p>
                     * @param _diskSize <p>For Redis instances, ignore this parameter.</p>
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
                     * 获取<p>Monitoring version.<ul><li>1m: 1-minute granularity monitoring. This monitoring granularity is deprecated. For details, please see <a href="https://www.tencentcloud.com/document/product/239/80653?from_cn_redirect=1">TencentDB for Redis 1-minute granularity deprecation notice</a>.</li><li>5s: 5-second granularity monitoring.</li></ul></p>
                     * @return MonitorVersion <p>Monitoring version.<ul><li>1m: 1-minute granularity monitoring. This monitoring granularity is deprecated. For details, please see <a href="https://www.tencentcloud.com/document/product/239/80653?from_cn_redirect=1">TencentDB for Redis 1-minute granularity deprecation notice</a>.</li><li>5s: 5-second granularity monitoring.</li></ul></p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>Monitoring version.<ul><li>1m: 1-minute granularity monitoring. This monitoring granularity is deprecated. For details, please see <a href="https://www.tencentcloud.com/document/product/239/80653?from_cn_redirect=1">TencentDB for Redis 1-minute granularity deprecation notice</a>.</li><li>5s: 5-second granularity monitoring.</li></ul></p>
                     * @param _monitorVersion <p>Monitoring version.<ul><li>1m: 1-minute granularity monitoring. This monitoring granularity is deprecated. For details, please see <a href="https://www.tencentcloud.com/document/product/239/80653?from_cn_redirect=1">TencentDB for Redis 1-minute granularity deprecation notice</a>.</li><li>5s: 5-second granularity monitoring.</li></ul></p>
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
                     * 获取<p>Minimum value that can be set for the maximum number of client connections.</p>
                     * @return ClientLimitMin <p>Minimum value that can be set for the maximum number of client connections.</p>
                     * 
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 设置<p>Minimum value that can be set for the maximum number of client connections.</p>
                     * @param _clientLimitMin <p>Minimum value that can be set for the maximum number of client connections.</p>
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
                     * 获取<p>Maximum value that can be set for the maximum number of client connections.</p>
                     * @return ClientLimitMax <p>Maximum value that can be set for the maximum number of client connections.</p>
                     * 
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 设置<p>Maximum value that can be set for the maximum number of client connections.</p>
                     * @param _clientLimitMax <p>Maximum value that can be set for the maximum number of client connections.</p>
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
                     * 获取<p>Detailed node information of the instance.<br>Only multi-AZ instances will be returned.</p>
                     * @return NodeSet <p>Detailed node information of the instance.<br>Only multi-AZ instances will be returned.</p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>Detailed node information of the instance.<br>Only multi-AZ instances will be returned.</p>
                     * @param _nodeSet <p>Detailed node information of the instance.<br>Only multi-AZ instances will be returned.</p>
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
                     * 获取<p>Region information of an instance, for example, ap-guangzhou.</p>
                     * @return Region <p>Region information of an instance, for example, ap-guangzhou.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region information of an instance, for example, ap-guangzhou.</p>
                     * @param _region <p>Region information of an instance, for example, ap-guangzhou.</p>
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
                     * 获取<p>Public network address.</p>
                     * @return WanAddress <p>Public network address.</p>
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置<p>Public network address.</p>
                     * @param _wanAddress <p>Public network address.</p>
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
                     * 获取<p>Polaris service address for internal use.</p>
                     * @return PolarisServer <p>Polaris service address for internal use.</p>
                     * 
                     */
                    std::string GetPolarisServer() const;

                    /**
                     * 设置<p>Polaris service address for internal use.</p>
                     * @param _polarisServer <p>Polaris service address for internal use.</p>
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
                     * 获取<p>CDC Redis cluster ID.</p>
                     * @return RedisClusterId <p>CDC Redis cluster ID.</p>
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置<p>CDC Redis cluster ID.</p>
                     * @param _redisClusterId <p>CDC Redis cluster ID.</p>
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
                     * 获取<p>CDC cluster ID.</p>
                     * @return DedicatedClusterId <p>CDC cluster ID.</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>CDC cluster ID.</p>
                     * @param _dedicatedClusterId <p>CDC cluster ID.</p>
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
                     * 获取<p>Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster edition.</li></ul></p>
                     * @return ProductVersion <p>Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster edition.</li></ul></p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster edition.</li></ul></p>
                     * @param _productVersion <p>Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster edition.</li></ul></p>
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
                     * 获取<p>Current Proxy version of the instance.</p>
                     * @return CurrentProxyVersion <p>Current Proxy version of the instance.</p>
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置<p>Current Proxy version of the instance.</p>
                     * @param _currentProxyVersion <p>Current Proxy version of the instance.</p>
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
                     * 获取<p>Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.</p>
                     * @return CurrentRedisVersion <p>Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.</p>
                     * 
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置<p>Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.</p>
                     * @param _currentRedisVersion <p>Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.</p>
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
                     * 获取<p>Upgradable Proxy version of an instance.</p>
                     * @return UpgradeProxyVersion <p>Upgradable Proxy version of an instance.</p>
                     * 
                     */
                    std::string GetUpgradeProxyVersion() const;

                    /**
                     * 设置<p>Upgradable Proxy version of an instance.</p>
                     * @param _upgradeProxyVersion <p>Upgradable Proxy version of an instance.</p>
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
                     * 获取<p>Upgradable Cache minor version of an instance.</p>
                     * @return UpgradeRedisVersion <p>Upgradable Cache minor version of an instance.</p>
                     * 
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置<p>Upgradable Cache minor version of an instance.</p>
                     * @param _upgradeRedisVersion <p>Upgradable Cache minor version of an instance.</p>
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
                     * 获取<p>Backup mode.</p><ul><li>SecondLevelBackup: second-level backup.</li><li>NormalLevelBackup: normal backup.</li></ul>
                     * @return BackupMode <p>Backup mode.</p><ul><li>SecondLevelBackup: second-level backup.</li><li>NormalLevelBackup: normal backup.</li></ul>
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置<p>Backup mode.</p><ul><li>SecondLevelBackup: second-level backup.</li><li>NormalLevelBackup: normal backup.</li></ul>
                     * @param _backupMode <p>Backup mode.</p><ul><li>SecondLevelBackup: second-level backup.</li><li>NormalLevelBackup: normal backup.</li></ul>
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance destruction protection switch.</p><ul><li>0: disabled.</li><li>1: enabled.</li></ul>
                     * @return DeleteProtectionSwitch <p>Instance destruction protection switch.</p><ul><li>0: disabled.</li><li>1: enabled.</li></ul>
                     * 
                     */
                    int64_t GetDeleteProtectionSwitch() const;

                    /**
                     * 设置<p>Instance destruction protection switch.</p><ul><li>0: disabled.</li><li>1: enabled.</li></ul>
                     * @param _deleteProtectionSwitch <p>Instance destruction protection switch.</p><ul><li>0: disabled.</li><li>1: enabled.</li></ul>
                     * 
                     */
                    void SetDeleteProtectionSwitch(const int64_t& _deleteProtectionSwitch);

                    /**
                     * 判断参数 DeleteProtectionSwitch 是否已赋值
                     * @return DeleteProtectionSwitch 是否已赋值
                     * 
                     */
                    bool DeleteProtectionSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>User AppId. AppId is an application ID with a one-to-one correspondence to the account ID. Some Tencent Cloud products use this AppId.</p>
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Region ID.<ul><li>1: Guangzhou.</li><li>4: Shanghai.</li><li>5: Hong Kong (China).</li><li>7: Shanghai Finance.</li><li>8: Beijing.</li><li>9: Singapore.</li><li>11: Shenzhen Finance.</li><li>15: Western US (Silicon Valley).</li><li>16: Chengdu.</li><li>17: Frankfurt.</li><li>18: Seoul.</li><li>19: Chongqing.</li><li>22: Eastern US (Virginia).</li><li>23: Bangkok.</li><li>25: Tokyo.</li></ul></p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>vpc network ID, such as 75101.</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID under vpc, for example: 46315.</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Current instance status. <ul><li>0: to be initialized;</li> <li>1: in process;</li> <li>2: running;</li> <li>-2: isolated;</li> <li>-3: to be deleted.</li></ul></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance VIP.</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>Instance port number.</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Instance creation time, for example, in the format of 2020-01-15 10:20:00.</p>
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * <p>Instance memory capacity. Unit: MB (1 MB = 1024 KB).</p>
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>This field is deprecated. Please use the Tencent Cloud observability platform API interface <a href="https://www.tencentcloud.com/document/product/248/31014?from_cn_redirect=1">GetMonitorData</a> to obtain the memory capacity used by the instance.</p>
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * <p>Instance type.</p><p>Enumeration value:</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 8.0 memory edition (standard architecture).</li><li>22: Valkey 8.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Whether the automatic renewal flag is set for an instance.</p><ul><li>1: set auto-renewal.</li><li>0: automatic renewal flag not set.</li></ul>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Expiration time of a monthly subscription instance.</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>Engine. Valid values: Redis Community Edition and Tencent Cloud CKV.</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>Product type.<ul><li>standalone: standard version.</li><li>cluster: cluster version.</li></ul></p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>vpc Network id, such as vpc-fk33jsf43kgv.</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>subnet id under vpc, for example: subnet-fd3j6l35mm0.</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Billing mode.<ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>Description of instance running status: for example "instance running".</p>
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * <p>Default termination time of isolated instances. Pay-as-you-go instance offline after isolation. Monthly Subscription instance offline after 7 days. In the format of: 2020-02-15 10:20:00.</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>Substatus of the instance in process returned.</p><ul><li>0: Read and write status of the disk.</li><li>1: Read-only status of the disk due to exceeding limit.</li></ul>
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>Anti-affinity tag.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Instance node information.</p>
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * <p>Shard size.</p>
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * <p>Number of shards.</p>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>Number of replicas.</p>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>Billing ID.</p>
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * <p>Time when an instance starts to be isolated.</p>
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * <p>Read weight of the secondary node.</p><ul><li>0: means disable read-only replica.</li><li>100: means enable read-only replica.</li></ul>
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * <p>Tag information associated with an instance.</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>Whether an instance is a password-free instance. <ul><li>true: yes;</li> <li>false: no.</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>Number of client connections.</p>
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * <p>DTS status (internal parameter, can be ignored by users).</p>
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * <p>Upper limit of the shard bandwidth. Unit: MB.</p>
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * <p>Password-free instance flag (internal parameter, which can be ignored).</p>
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * <p>Internal parameter, which can be ignored. This parameter is not properly named. It is recommended to use the IPv6 parameter to replace it.</p>
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * <p>Internal parameter, which can be ignored.</p>
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * <p>Instance read-only flag (internal parameter, which can be ignored).</p>
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>Internal parameter, which can be ignored.</p>
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                    /**
                     * <p>For Redis instances, ignore this parameter.</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Monitoring version.<ul><li>1m: 1-minute granularity monitoring. This monitoring granularity is deprecated. For details, please see <a href="https://www.tencentcloud.com/document/product/239/80653?from_cn_redirect=1">TencentDB for Redis 1-minute granularity deprecation notice</a>.</li><li>5s: 5-second granularity monitoring.</li></ul></p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>Minimum value that can be set for the maximum number of client connections.</p>
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * <p>Maximum value that can be set for the maximum number of client connections.</p>
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                    /**
                     * <p>Detailed node information of the instance.<br>Only multi-AZ instances will be returned.</p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>Region information of an instance, for example, ap-guangzhou.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Public network address.</p>
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * <p>Polaris service address for internal use.</p>
                     */
                    std::string m_polarisServer;
                    bool m_polarisServerHasBeenSet;

                    /**
                     * <p>CDC Redis cluster ID.</p>
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * <p>CDC cluster ID.</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>Product edition. <ul><li>local: local disk;</li> <li>cloud: cloud disk;</li> <li>cdc: CDC cluster edition.</li></ul></p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>Current Proxy version of the instance.</p>
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * <p>Current Cache minor version of an instance. If the instance joins a global replication group, the kernel version of the global replication group will be displayed.</p>
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * <p>Upgradable Proxy version of an instance.</p>
                     */
                    std::string m_upgradeProxyVersion;
                    bool m_upgradeProxyVersionHasBeenSet;

                    /**
                     * <p>Upgradable Cache minor version of an instance.</p>
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

                    /**
                     * <p>Backup mode.</p><ul><li>SecondLevelBackup: second-level backup.</li><li>NormalLevelBackup: normal backup.</li></ul>
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                    /**
                     * <p>Instance destruction protection switch.</p><ul><li>0: disabled.</li><li>1: enabled.</li></ul>
                     */
                    int64_t m_deleteProtectionSwitch;
                    bool m_deleteProtectionSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
