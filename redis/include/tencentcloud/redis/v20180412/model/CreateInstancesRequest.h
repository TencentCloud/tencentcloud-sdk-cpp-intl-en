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
                     * 获取Instance type. Valid values: 2 (Redis 2.8 Memory Edition in standard architecture), 3 (CKV 3.2 Memory Edition in standard architecture), 4 (CKV 3.2 Memory Edition in cluster architecture), 6 (Redis 4.0 Memory Edition in standard architecture), 7 (Redis 4.0 Memory Edition in cluster architecture), 8 (Redis 5.0 Memory Edition in standard architecture), 9 (Redis 5.0 Memory Edition in cluster architecture).
                     * @return TypeId Instance type. Valid values: 2 (Redis 2.8 Memory Edition in standard architecture), 3 (CKV 3.2 Memory Edition in standard architecture), 4 (CKV 3.2 Memory Edition in cluster architecture), 6 (Redis 4.0 Memory Edition in standard architecture), 7 (Redis 4.0 Memory Edition in cluster architecture), 8 (Redis 5.0 Memory Edition in standard architecture), 9 (Redis 5.0 Memory Edition in cluster architecture).
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置Instance type. Valid values: 2 (Redis 2.8 Memory Edition in standard architecture), 3 (CKV 3.2 Memory Edition in standard architecture), 4 (CKV 3.2 Memory Edition in cluster architecture), 6 (Redis 4.0 Memory Edition in standard architecture), 7 (Redis 4.0 Memory Edition in cluster architecture), 8 (Redis 5.0 Memory Edition in standard architecture), 9 (Redis 5.0 Memory Edition in cluster architecture).
                     * @param TypeId Instance type. Valid values: 2 (Redis 2.8 Memory Edition in standard architecture), 3 (CKV 3.2 Memory Edition in standard architecture), 4 (CKV 3.2 Memory Edition in cluster architecture), 6 (Redis 4.0 Memory Edition in standard architecture), 7 (Redis 4.0 Memory Edition in cluster architecture), 8 (Redis 5.0 Memory Edition in standard architecture), 9 (Redis 5.0 Memory Edition in cluster architecture).
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Instance capacity in MB. The value should be a multiple of 1,024 and is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @return MemSize Instance capacity in MB. The value should be a multiple of 1,024 and is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Instance capacity in MB. The value should be a multiple of 1,024 and is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @param MemSize Instance capacity in MB. The value should be a multiple of 1,024 and is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @return GoodsNum Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     * @param GoodsNum Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Purchased usage period in months. which is required when creating an instance. For pay-as-you-go instances, the valid value is 1; for monthly subscription instances, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
                     * @return Period Purchased usage period in months. which is required when creating an instance. For pay-as-you-go instances, the valid value is 1; for monthly subscription instances, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Purchased usage period in months. which is required when creating an instance. For pay-as-you-go instances, the valid value is 1; for monthly subscription instances, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
                     * @param Period Purchased usage period in months. which is required when creating an instance. For pay-as-you-go instances, the valid value is 1; for monthly subscription instances, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Billing method. 0: pay as you go
                     * @return BillingMode Billing method. 0: pay as you go
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing method. 0: pay as you go
                     * @param BillingMode Billing method. 0: pay as you go
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Availability zone ID of the instance. For more information, please see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @return ZoneId Availability zone ID of the instance. For more information, please see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Availability zone ID of the instance. For more information, please see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     * @param ZoneId Availability zone ID of the instance. For more information, please see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance password. If the input parameter `NoAuth` is `true` and a VPC is used, the `Password` is optional; otherwise, it is required.
If the instance type parameter `TypeId` indicates Redis 2.8, 4.0, or 5.0, the password cannot start with "/" and must contain 8-30 characters which are comprised of at least two of the following: lowercase letters, uppercase letters, digits, and special symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
If the instance type parameter `TypeId` indicates CKV 3.2, the password contains 8-30 characters which must be comprised of only letters and digits.
                     * @return Password Instance password. If the input parameter `NoAuth` is `true` and a VPC is used, the `Password` is optional; otherwise, it is required.
If the instance type parameter `TypeId` indicates Redis 2.8, 4.0, or 5.0, the password cannot start with "/" and must contain 8-30 characters which are comprised of at least two of the following: lowercase letters, uppercase letters, digits, and special symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
If the instance type parameter `TypeId` indicates CKV 3.2, the password contains 8-30 characters which must be comprised of only letters and digits.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password. If the input parameter `NoAuth` is `true` and a VPC is used, the `Password` is optional; otherwise, it is required.
If the instance type parameter `TypeId` indicates Redis 2.8, 4.0, or 5.0, the password cannot start with "/" and must contain 8-30 characters which are comprised of at least two of the following: lowercase letters, uppercase letters, digits, and special symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
If the instance type parameter `TypeId` indicates CKV 3.2, the password contains 8-30 characters which must be comprised of only letters and digits.
                     * @param Password Instance password. If the input parameter `NoAuth` is `true` and a VPC is used, the `Password` is optional; otherwise, it is required.
If the instance type parameter `TypeId` indicates Redis 2.8, 4.0, or 5.0, the password cannot start with "/" and must contain 8-30 characters which are comprised of at least two of the following: lowercase letters, uppercase letters, digits, and special symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
If the instance type parameter `TypeId` indicates CKV 3.2, the password contains 8-30 characters which must be comprised of only letters and digits.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取VPC ID, such as "vpc-sad23jfdfk". If this parameter is not passed in, the classic network will be selected by default. The parameter value can be queried by the `DescribeVpcs` API.
                     * @return VpcId VPC ID, such as "vpc-sad23jfdfk". If this parameter is not passed in, the classic network will be selected by default. The parameter value can be queried by the `DescribeVpcs` API.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, such as "vpc-sad23jfdfk". If this parameter is not passed in, the classic network will be selected by default. The parameter value can be queried by the `DescribeVpcs` API.
                     * @param VpcId VPC ID, such as "vpc-sad23jfdfk". If this parameter is not passed in, the classic network will be selected by default. The parameter value can be queried by the `DescribeVpcs` API.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取In a classic network, `subnetId` is invalid. In a VPC subnet, the value can be queried by the `DescribeSubnets` API, such as "subnet-fdj24n34j2".
                     * @return SubnetId In a classic network, `subnetId` is invalid. In a VPC subnet, the value can be queried by the `DescribeSubnets` API, such as "subnet-fdj24n34j2".
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置In a classic network, `subnetId` is invalid. In a VPC subnet, the value can be queried by the `DescribeSubnets` API, such as "subnet-fdj24n34j2".
                     * @param SubnetId In a classic network, `subnetId` is invalid. In a VPC subnet, the value can be queried by the `DescribeSubnets` API, such as "subnet-fdj24n34j2".
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Project ID. The value is subject to the `projectId` returned by the `DescribeProject` API.
                     * @return ProjectId Project ID. The value is subject to the `projectId` returned by the `DescribeProject` API.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. The value is subject to the `projectId` returned by the `DescribeProject` API.
                     * @param ProjectId Project ID. The value is subject to the `projectId` returned by the `DescribeProject` API.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values: 0 (default status, indicating manual renewal), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     * @return AutoRenew Auto-renewal flag. Valid values: 0 (default status, indicating manual renewal), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: 0 (default status, indicating manual renewal), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     * @param AutoRenew Auto-renewal flag. Valid values: 0 (default status, indicating manual renewal), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Array of security group IDs
                     * @return SecurityGroupIdList Array of security group IDs
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置Array of security group IDs
                     * @param SecurityGroupIdList Array of security group IDs
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取User-defined port. If this parameter is left empty, 6379 will be used by default. Value range: [1024, 65535].
                     * @return VPort User-defined port. If this parameter is left empty, 6379 will be used by default. Value range: [1024, 65535].
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置User-defined port. If this parameter is left empty, 6379 will be used by default. Value range: [1024, 65535].
                     * @param VPort User-defined port. If this parameter is left empty, 6379 will be used by default. Value range: [1024, 65535].
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Number of shards in an instance. This parameter is required for instances in cluster architecture. Value range: [3,5,8,12,16,24,32,64,96,128].
                     * @return RedisShardNum Number of shards in an instance. This parameter is required for instances in cluster architecture. Value range: [3,5,8,12,16,24,32,64,96,128].
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Number of shards in an instance. This parameter is required for instances in cluster architecture. Value range: [3,5,8,12,16,24,32,64,96,128].
                     * @param RedisShardNum Number of shards in an instance. This parameter is required for instances in cluster architecture. Value range: [3,5,8,12,16,24,32,64,96,128].
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas in an instance. Redis 2.8 standard edition and CKV standard edition support 1 replica. Standard/cluster edition 4.0 and 5.0 support 1-5 replicas.
                     * @return RedisReplicasNum Number of replicas in an instance. Redis 2.8 standard edition and CKV standard edition support 1 replica. Standard/cluster edition 4.0 and 5.0 support 1-5 replicas.
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Number of replicas in an instance. Redis 2.8 standard edition and CKV standard edition support 1 replica. Standard/cluster edition 4.0 and 5.0 support 1-5 replicas.
                     * @param RedisReplicasNum Number of replicas in an instance. Redis 2.8 standard edition and CKV standard edition support 1 replica. Standard/cluster edition 4.0 and 5.0 support 1-5 replicas.
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Whether to support read-only replicas. Neither Redis 2.8 in standard architecture nor CKV in standard architecture supports read-only replicas. Read/write separation will be automatically enabled for an instance after it enables read-only replicas. Write requests will be directed to the master node and read requests will be distributed on the replica nodes. To enable read-only replicas, we recommend that you create 2 or more replicas.
                     * @return ReplicasReadonly Whether to support read-only replicas. Neither Redis 2.8 in standard architecture nor CKV in standard architecture supports read-only replicas. Read/write separation will be automatically enabled for an instance after it enables read-only replicas. Write requests will be directed to the master node and read requests will be distributed on the replica nodes. To enable read-only replicas, we recommend that you create 2 or more replicas.
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置Whether to support read-only replicas. Neither Redis 2.8 in standard architecture nor CKV in standard architecture supports read-only replicas. Read/write separation will be automatically enabled for an instance after it enables read-only replicas. Write requests will be directed to the master node and read requests will be distributed on the replica nodes. To enable read-only replicas, we recommend that you create 2 or more replicas.
                     * @param ReplicasReadonly Whether to support read-only replicas. Neither Redis 2.8 in standard architecture nor CKV in standard architecture supports read-only replicas. Read/write separation will be automatically enabled for an instance after it enables read-only replicas. Write requests will be directed to the master node and read requests will be distributed on the replica nodes. To enable read-only replicas, we recommend that you create 2 or more replicas.
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取Instance name. It contains only letters, digits, and symbols (-_) with a length of up to 60 characters.
                     * @return InstanceName Instance name. It contains only letters, digits, and symbols (-_) with a length of up to 60 characters.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. It contains only letters, digits, and symbols (-_) with a length of up to 60 characters.
                     * @param InstanceName Instance name. It contains only letters, digits, and symbols (-_) with a length of up to 60 characters.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Whether to support the password-free feature. Valid values: true (password-free instance), false (password-enabled instance). Default value: false. Only instances in a VPC support the password-free access.
                     * @return NoAuth Whether to support the password-free feature. Valid values: true (password-free instance), false (password-enabled instance). Default value: false. Only instances in a VPC support the password-free access.
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置Whether to support the password-free feature. Valid values: true (password-free instance), false (password-enabled instance). Default value: false. Only instances in a VPC support the password-free access.
                     * @param NoAuth Whether to support the password-free feature. Valid values: true (password-free instance), false (password-enabled instance). Default value: false. Only instances in a VPC support the password-free access.
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取Node information of an instance. Currently, information about the node type (master or replica) and node availability zone can be passed in. This parameter is not required for instances deployed in a single availability zone.
                     * @return NodeSet Node information of an instance. Currently, information about the node type (master or replica) and node availability zone can be passed in. This parameter is not required for instances deployed in a single availability zone.
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置Node information of an instance. Currently, information about the node type (master or replica) and node availability zone can be passed in. This parameter is not required for instances deployed in a single availability zone.
                     * @param NodeSet Node information of an instance. Currently, information about the node type (master or replica) and node availability zone can be passed in. This parameter is not required for instances deployed in a single availability zone.
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取The tag bound with the instance to be purchased
                     * @return ResourceTags The tag bound with the instance to be purchased
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置The tag bound with the instance to be purchased
                     * @param ResourceTags The tag bound with the instance to be purchased
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
                     * 获取ID of the parameter template applied to the created instance. If this parameter is left blank, the default parameter template will be applied.
                     * @return TemplateId ID of the parameter template applied to the created instance. If this parameter is left blank, the default parameter template will be applied.
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置ID of the parameter template applied to the created instance. If this parameter is left blank, the default parameter template will be applied.
                     * @param TemplateId ID of the parameter template applied to the created instance. If this parameter is left blank, the default parameter template will be applied.
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * Instance type. Valid values: 2 (Redis 2.8 Memory Edition in standard architecture), 3 (CKV 3.2 Memory Edition in standard architecture), 4 (CKV 3.2 Memory Edition in cluster architecture), 6 (Redis 4.0 Memory Edition in standard architecture), 7 (Redis 4.0 Memory Edition in cluster architecture), 8 (Redis 5.0 Memory Edition in standard architecture), 9 (Redis 5.0 Memory Edition in cluster architecture).
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Instance capacity in MB. The value should be a multiple of 1,024 and is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1) API.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Purchased usage period in months. which is required when creating an instance. For pay-as-you-go instances, the valid value is 1; for monthly subscription instances, the value range is [1,2,3,4,5,6,7,8,9,10,11,12,24,36].
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Billing method. 0: pay as you go
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Availability zone ID of the instance. For more information, please see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance password. If the input parameter `NoAuth` is `true` and a VPC is used, the `Password` is optional; otherwise, it is required.
If the instance type parameter `TypeId` indicates Redis 2.8, 4.0, or 5.0, the password cannot start with "/" and must contain 8-30 characters which are comprised of at least two of the following: lowercase letters, uppercase letters, digits, and special symbols (()`~!@#$%^&*-+=_|{}[]:;<>,.?/).
If the instance type parameter `TypeId` indicates CKV 3.2, the password contains 8-30 characters which must be comprised of only letters and digits.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * VPC ID, such as "vpc-sad23jfdfk". If this parameter is not passed in, the classic network will be selected by default. The parameter value can be queried by the `DescribeVpcs` API.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * In a classic network, `subnetId` is invalid. In a VPC subnet, the value can be queried by the `DescribeSubnets` API, such as "subnet-fdj24n34j2".
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Project ID. The value is subject to the `projectId` returned by the `DescribeProject` API.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: 0 (default status, indicating manual renewal), 1 (auto-renewal enabled), 2 (auto-renewal disabled)
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Array of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * User-defined port. If this parameter is left empty, 6379 will be used by default. Value range: [1024, 65535].
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Number of shards in an instance. This parameter is required for instances in cluster architecture. Value range: [3,5,8,12,16,24,32,64,96,128].
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Number of replicas in an instance. Redis 2.8 standard edition and CKV standard edition support 1 replica. Standard/cluster edition 4.0 and 5.0 support 1-5 replicas.
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Whether to support read-only replicas. Neither Redis 2.8 in standard architecture nor CKV in standard architecture supports read-only replicas. Read/write separation will be automatically enabled for an instance after it enables read-only replicas. Write requests will be directed to the master node and read requests will be distributed on the replica nodes. To enable read-only replicas, we recommend that you create 2 or more replicas.
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * Instance name. It contains only letters, digits, and symbols (-_) with a length of up to 60 characters.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Whether to support the password-free feature. Valid values: true (password-free instance), false (password-enabled instance). Default value: false. Only instances in a VPC support the password-free access.
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * Node information of an instance. Currently, information about the node type (master or replica) and node availability zone can be passed in. This parameter is not required for instances deployed in a single availability zone.
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * The tag bound with the instance to be purchased
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Name of the AZ where the instance resides. For more information, see [Regions and AZs](https://intl.cloud.tencent.com/document/product/239/4106?from_cn_redirect=1).
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * ID of the parameter template applied to the created instance. If this parameter is left blank, the default parameter template will be applied.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
