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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateInstances request structure.
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type
<ul><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li><li>`15`: Redis 6.2 Memory Edition (Standard Architecture). </li><li>`16`: Redis 6.2 Memory Edition (Cluster Architecture).</li></ul>
                     * @return TypeId Instance type
<ul><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li><li>`15`: Redis 6.2 Memory Edition (Standard Architecture). </li><li>`16`: Redis 6.2 Memory Edition (Cluster Architecture).</li></ul>
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置Instance type
<ul><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li><li>`15`: Redis 6.2 Memory Edition (Standard Architecture). </li><li>`16`: Redis 6.2 Memory Edition (Cluster Architecture).</li></ul>
                     * @param TypeId Instance type
<ul><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li><li>`15`: Redis 6.2 Memory Edition (Standard Architecture). </li><li>`16`: Redis 6.2 Memory Edition (Cluster Architecture).</li></ul>
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Memory capacity in MB, which must be an integer multiple of 1024. For specific specifications, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
- When **TypeId** is a standard architecture, **MemSize** is the total memory capacity of the instance;
- When **TypeId** is a cluster architecture, **MemSize** is the single-shard memory capacity.
                     * @return MemSize Memory capacity in MB, which must be an integer multiple of 1024. For specific specifications, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
- When **TypeId** is a standard architecture, **MemSize** is the total memory capacity of the instance;
- When **TypeId** is a cluster architecture, **MemSize** is the single-shard memory capacity.
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Memory capacity in MB, which must be an integer multiple of 1024. For specific specifications, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
- When **TypeId** is a standard architecture, **MemSize** is the total memory capacity of the instance;
- When **TypeId** is a cluster architecture, **MemSize** is the single-shard memory capacity.
                     * @param MemSize Memory capacity in MB, which must be an integer multiple of 1024. For specific specifications, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
- When **TypeId** is a standard architecture, **MemSize** is the total memory capacity of the instance;
- When **TypeId** is a cluster architecture, **MemSize** is the single-shard memory capacity.
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取The number of instances for each purchase. For details, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @return GoodsNum The number of instances for each purchase. For details, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置The number of instances for each purchase. For details, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @param GoodsNum The number of instances for each purchase. For details, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取The purchase duration of an instance
- If `BillingMode` is `1`, that is, when the billing mode is monthly subscription, you need to set this parameter to specify the duration of the purchased instance. Unit: month. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
- If `BillingMode` is `0`, that is, when the billing mode is pay-as-you-go, you need to set this parameter to `1`.
                     * @return Period The purchase duration of an instance
- If `BillingMode` is `1`, that is, when the billing mode is monthly subscription, you need to set this parameter to specify the duration of the purchased instance. Unit: month. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
- If `BillingMode` is `0`, that is, when the billing mode is pay-as-you-go, you need to set this parameter to `1`.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置The purchase duration of an instance
- If `BillingMode` is `1`, that is, when the billing mode is monthly subscription, you need to set this parameter to specify the duration of the purchased instance. Unit: month. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
- If `BillingMode` is `0`, that is, when the billing mode is pay-as-you-go, you need to set this parameter to `1`.
                     * @param Period The purchase duration of an instance
- If `BillingMode` is `1`, that is, when the billing mode is monthly subscription, you need to set this parameter to specify the duration of the purchased instance. Unit: month. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
- If `BillingMode` is `0`, that is, when the billing mode is pay-as-you-go, you need to set this parameter to `1`.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: pay-as-you-go
                     * @return BillingMode Billing mode. 0: pay-as-you-go
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing mode. 0: pay-as-you-go
                     * @param BillingMode Billing mode. 0: pay-as-you-go
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取ID of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @return ZoneId ID of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置ID of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @param ZoneId ID of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance access password
- When the input parameter `NoAuth` is `true`, it means that the instance access is set to be password-free, and the `Password` field does not need to be configured; otherwise, `Password` is a required parameter.
- When the instance type `TypeId` is Redis 2.8 Memory Edition (Standard Architecture), Redis 4.0, 5.0, 6.0 (regardless of architecture), the password must contains 8-30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
- When the instance type **TypeId** is CKV 3.2 Memory Edition (regardless of architecture), the password contains 8-30 letters and digits and excludes other characters.
                     * @return Password Instance access password
- When the input parameter `NoAuth` is `true`, it means that the instance access is set to be password-free, and the `Password` field does not need to be configured; otherwise, `Password` is a required parameter.
- When the instance type `TypeId` is Redis 2.8 Memory Edition (Standard Architecture), Redis 4.0, 5.0, 6.0 (regardless of architecture), the password must contains 8-30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
- When the instance type **TypeId** is CKV 3.2 Memory Edition (regardless of architecture), the password contains 8-30 letters and digits and excludes other characters.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance access password
- When the input parameter `NoAuth` is `true`, it means that the instance access is set to be password-free, and the `Password` field does not need to be configured; otherwise, `Password` is a required parameter.
- When the instance type `TypeId` is Redis 2.8 Memory Edition (Standard Architecture), Redis 4.0, 5.0, 6.0 (regardless of architecture), the password must contains 8-30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
- When the instance type **TypeId** is CKV 3.2 Memory Edition (regardless of architecture), the password contains 8-30 letters and digits and excludes other characters.
                     * @param Password Instance access password
- When the input parameter `NoAuth` is `true`, it means that the instance access is set to be password-free, and the `Password` field does not need to be configured; otherwise, `Password` is a required parameter.
- When the instance type `TypeId` is Redis 2.8 Memory Edition (Standard Architecture), Redis 4.0, 5.0, 6.0 (regardless of architecture), the password must contains 8-30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
- When the instance type **TypeId** is CKV 3.2 Memory Edition (regardless of architecture), the password contains 8-30 letters and digits and excludes other characters.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is not passed in, the classic network will be selected by default. You can query the specific VPC ID in the [VPC console](https://console.cloud.tencent.com/vpc).
                     * @return VpcId VPC ID. If this parameter is not passed in, the classic network will be selected by default. You can query the specific VPC ID in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not passed in, the classic network will be selected by default. You can query the specific VPC ID in the [VPC console](https://console.cloud.tencent.com/vpc).
                     * @param VpcId VPC ID. If this parameter is not passed in, the classic network will be selected by default. You can query the specific VPC ID in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. This parameter is not required for the classic network. You can get the specific subnet ID by querying the subnet list in the [VPC console](https://console.cloud.tencent.com/vpc).
                     * @return SubnetId VPC subnet ID. This parameter is not required for the classic network. You can get the specific subnet ID by querying the subnet list in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID. This parameter is not required for the classic network. You can get the specific subnet ID by querying the subnet list in the [VPC console](https://console.cloud.tencent.com/vpc).
                     * @param SubnetId VPC subnet ID. This parameter is not required for the classic network. You can get the specific subnet ID by querying the subnet list in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Project ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * @return ProjectId Project ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     * @param ProjectId Project ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
- `0`: Manual renewal (default).
- `1`: Auto-renewal.
- `2`: Not auto-renewal (set by user).
                     * @return AutoRenew Auto-renewal flag
- `0`: Manual renewal (default).
- `1`: Auto-renewal.
- `2`: Not auto-renewal (set by user).
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag
- `0`: Manual renewal (default).
- `1`: Auto-renewal.
- `2`: Not auto-renewal (set by user).
                     * @param AutoRenew Auto-renewal flag
- `0`: Manual renewal (default).
- `1`: Auto-renewal.
- `2`: Not auto-renewal (set by user).
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Array of security group IDs. Get the security group ID of the instance through the [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1) API.
                     * @return SecurityGroupIdList Array of security group IDs. Get the security group ID of the instance through the [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置Array of security group IDs. Get the security group ID of the instance through the [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1) API.
                     * @param SecurityGroupIdList Array of security group IDs. Get the security group ID of the instance through the [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1) API.
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取User-defined network port. Default value: `6379`. Range: [1024,65535].
                     * @return VPort User-defined network port. Default value: `6379`. Range: [1024,65535].
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置User-defined network port. Default value: `6379`. Range: [1024,65535].
                     * @param VPort User-defined network port. Default value: `6379`. Range: [1024,65535].
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Quantity of instance shards
- This parameter is not required for instances of Standard Edition.
- For instances of Cluster Edition, the range of shard quantity is [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].
                     * @return RedisShardNum Quantity of instance shards
- This parameter is not required for instances of Standard Edition.
- For instances of Cluster Edition, the range of shard quantity is [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Quantity of instance shards
- This parameter is not required for instances of Standard Edition.
- For instances of Cluster Edition, the range of shard quantity is [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].
                     * @param RedisShardNum Quantity of instance shards
- This parameter is not required for instances of Standard Edition.
- For instances of Cluster Edition, the range of shard quantity is [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取Quantity of instance replicas
- For Redis Memory Edition 4.0, 5.0, 6.2 (regardless of architecture), the range of replica quantity is [1,5].
- For Redis 2.8 Standard Edition and CKV Standard Edition, the replica quantity is `1`.
                     * @return RedisReplicasNum Quantity of instance replicas
- For Redis Memory Edition 4.0, 5.0, 6.2 (regardless of architecture), the range of replica quantity is [1,5].
- For Redis 2.8 Standard Edition and CKV Standard Edition, the replica quantity is `1`.
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Quantity of instance replicas
- For Redis Memory Edition 4.0, 5.0, 6.2 (regardless of architecture), the range of replica quantity is [1,5].
- For Redis 2.8 Standard Edition and CKV Standard Edition, the replica quantity is `1`.
                     * @param RedisReplicasNum Quantity of instance replicas
- For Redis Memory Edition 4.0, 5.0, 6.2 (regardless of architecture), the range of replica quantity is [1,5].
- For Redis 2.8 Standard Edition and CKV Standard Edition, the replica quantity is `1`.
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Whether to support read-only replicas.
- Redis 2.8 Standard Edition and CKV Standard Edition don’t support read-only replicas.
- If read-only replicas are enabled, read/write separation will be automatically enabled for an instance, with write requests routed to the master node and read requests to the replica node.
- To enable read-only replicas, we recommend that you create two or more replicas.
                     * @return ReplicasReadonly Whether to support read-only replicas.
- Redis 2.8 Standard Edition and CKV Standard Edition don’t support read-only replicas.
- If read-only replicas are enabled, read/write separation will be automatically enabled for an instance, with write requests routed to the master node and read requests to the replica node.
- To enable read-only replicas, we recommend that you create two or more replicas.
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置Whether to support read-only replicas.
- Redis 2.8 Standard Edition and CKV Standard Edition don’t support read-only replicas.
- If read-only replicas are enabled, read/write separation will be automatically enabled for an instance, with write requests routed to the master node and read requests to the replica node.
- To enable read-only replicas, we recommend that you create two or more replicas.
                     * @param ReplicasReadonly Whether to support read-only replicas.
- Redis 2.8 Standard Edition and CKV Standard Edition don’t support read-only replicas.
- If read-only replicas are enabled, read/write separation will be automatically enabled for an instance, with write requests routed to the master node and read requests to the replica node.
- To enable read-only replicas, we recommend that you create two or more replicas.
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取Instance name, which can contain up to 60 letters, digits, hyphens, and underscores.
                     * @return InstanceName Instance name, which can contain up to 60 letters, digits, hyphens, and underscores.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can contain up to 60 letters, digits, hyphens, and underscores.
                     * @param InstanceName Instance name, which can contain up to 60 letters, digits, hyphens, and underscores.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Whether to support password-free access for an instance
- `true`: The instance access is password-free.
- `false`: The instance access is password-enabled. Default value: `false`. Only instances in a VPC support the password-free access.
                     * @return NoAuth Whether to support password-free access for an instance
- `true`: The instance access is password-free.
- `false`: The instance access is password-enabled. Default value: `false`. Only instances in a VPC support the password-free access.
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether to support password-free access for an instance
- `true`: The instance access is password-free.
- `false`: The instance access is password-enabled. Default value: `false`. Only instances in a VPC support the password-free access.
                     * @param NoAuth Whether to support password-free access for an instance
- `true`: The instance access is password-free.
- `false`: The instance access is password-enabled. Default value: `false`. Only instances in a VPC support the password-free access.
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取The node information of the instance, including node ID, type, and AZ. For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
Node information of an instance. Currently, information about the node type (master or replica) and node AZ can be passed in. This parameter is not required for instances deployed in a single AZ.
                     * @return NodeSet The node information of the instance, including node ID, type, and AZ. For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
Node information of an instance. Currently, information about the node type (master or replica) and node AZ can be passed in. This parameter is not required for instances deployed in a single AZ.
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置The node information of the instance, including node ID, type, and AZ. For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
Node information of an instance. Currently, information about the node type (master or replica) and node AZ can be passed in. This parameter is not required for instances deployed in a single AZ.
                     * @param NodeSet The node information of the instance, including node ID, type, and AZ. For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
Node information of an instance. Currently, information about the node type (master or replica) and node AZ can be passed in. This parameter is not required for instances deployed in a single AZ.
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取The tag for an instance
                     * @return ResourceTags The tag for an instance
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置The tag for an instance
                     * @param ResourceTags The tag for an instance
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @return ZoneName Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @param ZoneName Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The parameter template ID associated with the instance
- If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.
- Query the list of parameter templates of an instance to get the template ID through the [DescribeParamTemplates](https://intl.cloud.tencent.com/document/product/239/58750?from_cn_redirect=1) API.
                     * @return TemplateId The parameter template ID associated with the instance
- If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.
- Query the list of parameter templates of an instance to get the template ID through the [DescribeParamTemplates](https://intl.cloud.tencent.com/document/product/239/58750?from_cn_redirect=1) API.
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The parameter template ID associated with the instance
- If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.
- Query the list of parameter templates of an instance to get the template ID through the [DescribeParamTemplates](https://intl.cloud.tencent.com/document/product/239/58750?from_cn_redirect=1) API.
                     * @param TemplateId The parameter template ID associated with the instance
- If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.
- Query the list of parameter templates of an instance to get the template ID through the [DescribeParamTemplates](https://intl.cloud.tencent.com/document/product/239/58750?from_cn_redirect=1) API.
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取An internal parameter used to indicate whether to check when creating an instance.
- `false`: Default value. Send a normal request and create an instance if all the requirements are met.
- `true`: Send a check request and create no instance.
                     * @return DryRun An internal parameter used to indicate whether to check when creating an instance.
- `false`: Default value. Send a normal request and create an instance if all the requirements are met.
- `true`: Send a check request and create no instance.
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置An internal parameter used to indicate whether to check when creating an instance.
- `false`: Default value. Send a normal request and create an instance if all the requirements are met.
- `true`: Send a check request and create no instance.
                     * @param DryRun An internal parameter used to indicate whether to check when creating an instance.
- `false`: Default value. Send a normal request and create an instance if all the requirements are met.
- `true`: Send a check request and create no instance.
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取The product edition of the instance
- `local`: Local Disk Edition.
- `cloud`: Cloud Disk Edition.
- `cdc`: Dedicated Cluster Edition. Default value: `local`.
                     * @return ProductVersion The product edition of the instance
- `local`: Local Disk Edition.
- `cloud`: Cloud Disk Edition.
- `cdc`: Dedicated Cluster Edition. Default value: `local`.
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置The product edition of the instance
- `local`: Local Disk Edition.
- `cloud`: Cloud Disk Edition.
- `cdc`: Dedicated Cluster Edition. Default value: `local`.
                     * @param ProductVersion The product edition of the instance
- `local`: Local Disk Edition.
- `cloud`: Cloud Disk Edition.
- `cdc`: Dedicated Cluster Edition. Default value: `local`.
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster ID. When `ProductVersion` is set to `cdc`, this parameter is required.
                     * @return RedisClusterId Exclusive cluster ID. When `ProductVersion` is set to `cdc`, this parameter is required.
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置Exclusive cluster ID. When `ProductVersion` is set to `cdc`, this parameter is required.
                     * @param RedisClusterId Exclusive cluster ID. When `ProductVersion` is set to `cdc`, this parameter is required.
                     */
                    void SetRedisClusterId(const std::string& _redisClusterId);

                    /**
                     * 判断参数 RedisClusterId 是否已赋值
                     * @return RedisClusterId 是否已赋值
                     */
                    bool RedisClusterIdHasBeenSet() const;

                private:

                    /**
                     * Instance type
<ul><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li><li>`15`: Redis 6.2 Memory Edition (Standard Architecture). </li><li>`16`: Redis 6.2 Memory Edition (Cluster Architecture).</li></ul>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Memory capacity in MB, which must be an integer multiple of 1024. For specific specifications, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
- When **TypeId** is a standard architecture, **MemSize** is the total memory capacity of the instance;
- When **TypeId** is a cluster architecture, **MemSize** is the single-shard memory capacity.
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * The number of instances for each purchase. For details, query the sales specifications in all regions through the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * The purchase duration of an instance
- If `BillingMode` is `1`, that is, when the billing mode is monthly subscription, you need to set this parameter to specify the duration of the purchased instance. Unit: month. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
- If `BillingMode` is `0`, that is, when the billing mode is pay-as-you-go, you need to set this parameter to `1`.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Billing mode. 0: pay-as-you-go
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * ID of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance access password
- When the input parameter `NoAuth` is `true`, it means that the instance access is set to be password-free, and the `Password` field does not need to be configured; otherwise, `Password` is a required parameter.
- When the instance type `TypeId` is Redis 2.8 Memory Edition (Standard Architecture), Redis 4.0, 5.0, 6.0 (regardless of architecture), the password must contains 8-30 characters in at least two of the following types: lowercase letters, uppercase letters, digits, and symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/), and it cannot start with a slash (/).
- When the instance type **TypeId** is CKV 3.2 Memory Edition (regardless of architecture), the password contains 8-30 letters and digits and excludes other characters.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not passed in, the classic network will be selected by default. You can query the specific VPC ID in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. This parameter is not required for the classic network. You can get the specific subnet ID by querying the subnet list in the [VPC console](https://console.cloud.tencent.com/vpc).
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Project ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), go to the account information menu in the top-right corner, and select **Project Management** to query the project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Auto-renewal flag
- `0`: Manual renewal (default).
- `1`: Auto-renewal.
- `2`: Not auto-renewal (set by user).
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Array of security group IDs. Get the security group ID of the instance through the [DescribeInstanceSecurityGroup](https://intl.cloud.tencent.com/document/product/239/34447?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * User-defined network port. Default value: `6379`. Range: [1024,65535].
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Quantity of instance shards
- This parameter is not required for instances of Standard Edition.
- For instances of Cluster Edition, the range of shard quantity is [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Quantity of instance replicas
- For Redis Memory Edition 4.0, 5.0, 6.2 (regardless of architecture), the range of replica quantity is [1,5].
- For Redis 2.8 Standard Edition and CKV Standard Edition, the replica quantity is `1`.
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Whether to support read-only replicas.
- Redis 2.8 Standard Edition and CKV Standard Edition don’t support read-only replicas.
- If read-only replicas are enabled, read/write separation will be automatically enabled for an instance, with write requests routed to the master node and read requests to the replica node.
- To enable read-only replicas, we recommend that you create two or more replicas.
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * Instance name, which can contain up to 60 letters, digits, hyphens, and underscores.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Whether to support password-free access for an instance
- `true`: The instance access is password-free.
- `false`: The instance access is password-enabled. Default value: `false`. Only instances in a VPC support the password-free access.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * The node information of the instance, including node ID, type, and AZ. For more information, see [RedisNodeInfo](https://intl.cloud.tencent.com/document/product/239/20022?from_cn_redirect=1).
Node information of an instance. Currently, information about the node type (master or replica) and node AZ can be passed in. This parameter is not required for instances deployed in a single AZ.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * The tag for an instance
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The parameter template ID associated with the instance
- If this parameter is not configured, the system will automatically adapt the corresponding default template based on the selected compatible version and architecture.
- Query the list of parameter templates of an instance to get the template ID through the [DescribeParamTemplates](https://intl.cloud.tencent.com/document/product/239/58750?from_cn_redirect=1) API.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * An internal parameter used to indicate whether to check when creating an instance.
- `false`: Default value. Send a normal request and create an instance if all the requirements are met.
- `true`: Send a check request and create no instance.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * The product edition of the instance
- `local`: Local Disk Edition.
- `cloud`: Cloud Disk Edition.
- `cdc`: Dedicated Cluster Edition. Default value: `local`.
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * Exclusive cluster ID. When `ProductVersion` is set to `cdc`, this parameter is required.
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
