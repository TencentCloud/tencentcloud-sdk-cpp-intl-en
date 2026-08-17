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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>
#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>


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
                     * 获取<p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 9.0 memory edition (standard architecture).</li><li>22: Valkey 9.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).<br><strong>Note</strong>: CKV editions are currently used by some users and are temporarily retained.</li></ul>
                     * @return TypeId <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 9.0 memory edition (standard architecture).</li><li>22: Valkey 9.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).<br><strong>Note</strong>: CKV editions are currently used by some users and are temporarily retained.</li></ul>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置<p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 9.0 memory edition (standard architecture).</li><li>22: Valkey 9.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).<br><strong>Note</strong>: CKV editions are currently used by some users and are temporarily retained.</li></ul>
                     * @param _typeId <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 9.0 memory edition (standard architecture).</li><li>22: Valkey 9.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).<br><strong>Note</strong>: CKV editions are currently used by some users and are temporarily retained.</li></ul>
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, query the sales specifications for all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p><ul><li>When <strong>TypeId</strong> is standard architecture, <strong>MemSize</strong> is the total memory capacity of the instance.</li><li>When <strong>TypeId</strong> is cluster architecture, <strong>MemSize</strong> is the sharded memory capacity.</li></ul>
                     * @return MemSize <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, query the sales specifications for all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p><ul><li>When <strong>TypeId</strong> is standard architecture, <strong>MemSize</strong> is the total memory capacity of the instance.</li><li>When <strong>TypeId</strong> is cluster architecture, <strong>MemSize</strong> is the sharded memory capacity.</li></ul>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, query the sales specifications for all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p><ul><li>When <strong>TypeId</strong> is standard architecture, <strong>MemSize</strong> is the total memory capacity of the instance.</li><li>When <strong>TypeId</strong> is cluster architecture, <strong>MemSize</strong> is the sharded memory capacity.</li></ul>
                     * @param _memSize <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, query the sales specifications for all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p><ul><li>When <strong>TypeId</strong> is standard architecture, <strong>MemSize</strong> is the total memory capacity of the instance.</li><li>When <strong>TypeId</strong> is cluster architecture, <strong>MemSize</strong> is the sharded memory capacity.</li></ul>
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Instance count. Number of instances to purchase at a time. For details, query sales specifications in all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p>
                     * @return GoodsNum <p>Instance count. Number of instances to purchase at a time. For details, query sales specifications in all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Instance count. Number of instances to purchase at a time. For details, query sales specifications in all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p>
                     * @param _goodsNum <p>Instance count. Number of instances to purchase at a time. For details, query sales specifications in all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p>
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>Duration of instance purchase.</p><ul><li>If <strong>BillingMode</strong> is <strong>1</strong>, that is, the billing mode is monthly subscription, you need to set this parameter to specify the duration of instance purchase. Measurement unit: month, permissible range [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</li><li>If <strong>BillingMode</strong> is <strong>0</strong>, that is, the billing mode is pay-as-you-go, set this parameter to 1.</li></ul>
                     * @return Period <p>Duration of instance purchase.</p><ul><li>If <strong>BillingMode</strong> is <strong>1</strong>, that is, the billing mode is monthly subscription, you need to set this parameter to specify the duration of instance purchase. Measurement unit: month, permissible range [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</li><li>If <strong>BillingMode</strong> is <strong>0</strong>, that is, the billing mode is pay-as-you-go, set this parameter to 1.</li></ul>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Duration of instance purchase.</p><ul><li>If <strong>BillingMode</strong> is <strong>1</strong>, that is, the billing mode is monthly subscription, you need to set this parameter to specify the duration of instance purchase. Measurement unit: month, permissible range [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</li><li>If <strong>BillingMode</strong> is <strong>0</strong>, that is, the billing mode is pay-as-you-go, set this parameter to 1.</li></ul>
                     * @param _period <p>Duration of instance purchase.</p><ul><li>If <strong>BillingMode</strong> is <strong>1</strong>, that is, the billing mode is monthly subscription, you need to set this parameter to specify the duration of instance purchase. Measurement unit: month, permissible range [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</li><li>If <strong>BillingMode</strong> is <strong>0</strong>, that is, the billing mode is pay-as-you-go, set this parameter to 1.</li></ul>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode.</p><ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul>
                     * @return BillingMode <p>Billing mode.</p><ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode.</p><ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul>
                     * @param _billingMode <p>Billing mode.</p><ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul>
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
                     * 获取<p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * @return ZoneId <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * @param _zoneId <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Password for accessing instances.</p><ul><li>When the input parameter <strong>NoAuth</strong> is <strong>true</strong>, it means setting instances to Password-free access, and Password does not need to be configured. Otherwise, Password is required.</li><li>When the instance type <strong>TypeId</strong> is Redis 2.8 memory edition standard architecture, Redis 4.0, 5.0, 6.2, or 7.0 memory edition standard architecture or cluster architecture, the Password complexity requirements are: 8-64 characters, containing at least lowercase letters, uppercase letters, digits, and 2 of the following characters: ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>When the instance type <strong>TypeId</strong> is CKV 3.2 memory edition standard architecture or cluster architecture, the Password complexity is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul>
                     * @return Password <p>Password for accessing instances.</p><ul><li>When the input parameter <strong>NoAuth</strong> is <strong>true</strong>, it means setting instances to Password-free access, and Password does not need to be configured. Otherwise, Password is required.</li><li>When the instance type <strong>TypeId</strong> is Redis 2.8 memory edition standard architecture, Redis 4.0, 5.0, 6.2, or 7.0 memory edition standard architecture or cluster architecture, the Password complexity requirements are: 8-64 characters, containing at least lowercase letters, uppercase letters, digits, and 2 of the following characters: ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>When the instance type <strong>TypeId</strong> is CKV 3.2 memory edition standard architecture or cluster architecture, the Password complexity is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password for accessing instances.</p><ul><li>When the input parameter <strong>NoAuth</strong> is <strong>true</strong>, it means setting instances to Password-free access, and Password does not need to be configured. Otherwise, Password is required.</li><li>When the instance type <strong>TypeId</strong> is Redis 2.8 memory edition standard architecture, Redis 4.0, 5.0, 6.2, or 7.0 memory edition standard architecture or cluster architecture, the Password complexity requirements are: 8-64 characters, containing at least lowercase letters, uppercase letters, digits, and 2 of the following characters: ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>When the instance type <strong>TypeId</strong> is CKV 3.2 memory edition standard architecture or cluster architecture, the Password complexity is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul>
                     * @param _password <p>Password for accessing instances.</p><ul><li>When the input parameter <strong>NoAuth</strong> is <strong>true</strong>, it means setting instances to Password-free access, and Password does not need to be configured. Otherwise, Password is required.</li><li>When the instance type <strong>TypeId</strong> is Redis 2.8 memory edition standard architecture, Redis 4.0, 5.0, 6.2, or 7.0 memory edition standard architecture or cluster architecture, the Password complexity requirements are: 8-64 characters, containing at least lowercase letters, uppercase letters, digits, and 2 of the following characters: ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>When the instance type <strong>TypeId</strong> is CKV 3.2 memory edition standard architecture or cluster architecture, the Password complexity is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID. If you do not configure this parameter, the basic network is selected by default. Log in to the <a href="https://console.cloud.tencent.com/vpc">private network</a> console to query the specific ID.</p>
                     * @return VpcId <p>VPC ID. If you do not configure this parameter, the basic network is selected by default. Log in to the <a href="https://console.cloud.tencent.com/vpc">private network</a> console to query the specific ID.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID. If you do not configure this parameter, the basic network is selected by default. Log in to the <a href="https://console.cloud.tencent.com/vpc">private network</a> console to query the specific ID.</p>
                     * @param _vpcId <p>VPC ID. If you do not configure this parameter, the basic network is selected by default. Log in to the <a href="https://console.cloud.tencent.com/vpc">private network</a> console to query the specific ID.</p>
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
                     * 获取<p>Subnet of the private network VPC. In the basic network, this parameter requires no configuration. Log in to the <a href="https://console.cloud.tencent.com/vpc">Private Network</a> console to query the subnet list and obtain the specific ID.</p>
                     * @return SubnetId <p>Subnet of the private network VPC. In the basic network, this parameter requires no configuration. Log in to the <a href="https://console.cloud.tencent.com/vpc">Private Network</a> console to query the subnet list and obtain the specific ID.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet of the private network VPC. In the basic network, this parameter requires no configuration. Log in to the <a href="https://console.cloud.tencent.com/vpc">Private Network</a> console to query the subnet list and obtain the specific ID.</p>
                     * @param _subnetId <p>Subnet of the private network VPC. In the basic network, this parameter requires no configuration. Log in to the <a href="https://console.cloud.tencent.com/vpc">Private Network</a> console to query the subnet list and obtain the specific ID.</p>
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
                     * 获取<p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>, select <strong>Project Management</strong> from the account information menu in the top-right corner, and query the project ID.</p>
                     * @return ProjectId <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>, select <strong>Project Management</strong> from the account information menu in the top-right corner, and query the project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>, select <strong>Project Management</strong> from the account information menu in the top-right corner, and query the project ID.</p>
                     * @param _projectId <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>, select <strong>Project Management</strong> from the account information menu in the top-right corner, and query the project ID.</p>
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
                     * 获取<p>Automatic renewal flag.</p><ul><li>0: default status (manual renewal).</li><li>1: automatic renewal.</li><li>2: non-renewal upon expiration.</li></ul>
                     * @return AutoRenew <p>Automatic renewal flag.</p><ul><li>0: default status (manual renewal).</li><li>1: automatic renewal.</li><li>2: non-renewal upon expiration.</li></ul>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Automatic renewal flag.</p><ul><li>0: default status (manual renewal).</li><li>1: automatic renewal.</li><li>2: non-renewal upon expiration.</li></ul>
                     * @param _autoRenew <p>Automatic renewal flag.</p><ul><li>0: default status (manual renewal).</li><li>1: automatic renewal.</li><li>2: non-renewal upon expiration.</li></ul>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Security group ID array.</p><ul><li>A security group is a virtual firewall that controls network access to a cloud database instance. When creating an instance, it is recommended to bind the corresponding security group.</li><li>Get the security group ID of an instance through the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API.</li></ul>
                     * @return SecurityGroupIdList <p>Security group ID array.</p><ul><li>A security group is a virtual firewall that controls network access to a cloud database instance. When creating an instance, it is recommended to bind the corresponding security group.</li><li>Get the security group ID of an instance through the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置<p>Security group ID array.</p><ul><li>A security group is a virtual firewall that controls network access to a cloud database instance. When creating an instance, it is recommended to bind the corresponding security group.</li><li>Get the security group ID of an instance through the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API.</li></ul>
                     * @param _securityGroupIdList <p>Security group ID array.</p><ul><li>A security group is a virtual firewall that controls network access to a cloud database instance. When creating an instance, it is recommended to bind the corresponding security group.</li><li>Get the security group ID of an instance through the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API.</li></ul>
                     * 
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取<p>User-defined network port. Defaults to 6379, range [1024,65535].</p>
                     * @return VPort <p>User-defined network port. Defaults to 6379, range [1024,65535].</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>User-defined network port. Defaults to 6379, range [1024,65535].</p>
                     * @param _vPort <p>User-defined network port. Defaults to 6379, range [1024,65535].</p>
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取<p>Number of instance shards.</p><ul><li>No need to configure this parameter for standard edition instances.</li><li>For cluster edition instances, the shard quantity range is: [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].</li></ul>
                     * @return RedisShardNum <p>Number of instance shards.</p><ul><li>No need to configure this parameter for standard edition instances.</li><li>For cluster edition instances, the shard quantity range is: [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].</li></ul>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>Number of instance shards.</p><ul><li>No need to configure this parameter for standard edition instances.</li><li>For cluster edition instances, the shard quantity range is: [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].</li></ul>
                     * @param _redisShardNum <p>Number of instance shards.</p><ul><li>No need to configure this parameter for standard edition instances.</li><li>For cluster edition instances, the shard quantity range is: [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].</li></ul>
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
                     * 获取<p>Instance replica number.</p><ul><li>Redis Memory Edition 4.0, 5.0, 6.2, and 7.0 cluster architecture supports a replica quantity range of [1,5].</li><li>Redis 2.8 Standard Edition and CKV Standard Edition support only 1 replica.</li></ul>
                     * @return RedisReplicasNum <p>Instance replica number.</p><ul><li>Redis Memory Edition 4.0, 5.0, 6.2, and 7.0 cluster architecture supports a replica quantity range of [1,5].</li><li>Redis 2.8 Standard Edition and CKV Standard Edition support only 1 replica.</li></ul>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>Instance replica number.</p><ul><li>Redis Memory Edition 4.0, 5.0, 6.2, and 7.0 cluster architecture supports a replica quantity range of [1,5].</li><li>Redis 2.8 Standard Edition and CKV Standard Edition support only 1 replica.</li></ul>
                     * @param _redisReplicasNum <p>Instance replica number.</p><ul><li>Redis Memory Edition 4.0, 5.0, 6.2, and 7.0 cluster architecture supports a replica quantity range of [1,5].</li><li>Redis 2.8 Standard Edition and CKV Standard Edition support only 1 replica.</li></ul>
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
                     * 获取<p>Flag whether the instance needs to support read-only replica.</p><ul><li>Redis 2.8 Standard Edition and CKV Standard Edition do not support read-only replica.</li><li>If read-only replica is enabled, the instance will automatically separate read and write operations, with write requests routed to the primary node and read requests routed to replica nodes.</li><li>If needed to enable read-only replica, it is recommended to have at least 2 replicas.</li></ul>
                     * @return ReplicasReadonly <p>Flag whether the instance needs to support read-only replica.</p><ul><li>Redis 2.8 Standard Edition and CKV Standard Edition do not support read-only replica.</li><li>If read-only replica is enabled, the instance will automatically separate read and write operations, with write requests routed to the primary node and read requests routed to replica nodes.</li><li>If needed to enable read-only replica, it is recommended to have at least 2 replicas.</li></ul>
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置<p>Flag whether the instance needs to support read-only replica.</p><ul><li>Redis 2.8 Standard Edition and CKV Standard Edition do not support read-only replica.</li><li>If read-only replica is enabled, the instance will automatically separate read and write operations, with write requests routed to the primary node and read requests routed to replica nodes.</li><li>If needed to enable read-only replica, it is recommended to have at least 2 replicas.</li></ul>
                     * @param _replicasReadonly <p>Flag whether the instance needs to support read-only replica.</p><ul><li>Redis 2.8 Standard Edition and CKV Standard Edition do not support read-only replica.</li><li>If read-only replica is enabled, the instance will automatically separate read and write operations, with write requests routed to the primary node and read requests routed to replica nodes.</li><li>If needed to enable read-only replica, it is recommended to have at least 2 replicas.</li></ul>
                     * 
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     * 
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取<p>Instance name. Naming requirement: It only supports Chinese characters, letters, numbers, hyphens ("-"), or underscores ("_"), with a length of less than 60.</p>
                     * @return InstanceName <p>Instance name. Naming requirement: It only supports Chinese characters, letters, numbers, hyphens ("-"), or underscores ("_"), with a length of less than 60.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name. Naming requirement: It only supports Chinese characters, letters, numbers, hyphens ("-"), or underscores ("_"), with a length of less than 60.</p>
                     * @param _instanceName <p>Instance name. Naming requirement: It only supports Chinese characters, letters, numbers, hyphens ("-"), or underscores ("_"), with a length of less than 60.</p>
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
                     * 获取<p>Configure whether the instance supports password-free access.</p><ul><li>true: Access the instance without a password.</li><li>false: Access the instance with a password. By default, password access is enabled. Only instances in a VPC network support password-free access.</li></ul>
                     * @return NoAuth <p>Configure whether the instance supports password-free access.</p><ul><li>true: Access the instance without a password.</li><li>false: Access the instance with a password. By default, password access is enabled. Only instances in a VPC network support password-free access.</li></ul>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>Configure whether the instance supports password-free access.</p><ul><li>true: Access the instance without a password.</li><li>false: Access the instance with a password. By default, password access is enabled. Only instances in a VPC network support password-free access.</li></ul>
                     * @param _noAuth <p>Configure whether the instance supports password-free access.</p><ul><li>true: Access the instance without a password.</li><li>false: Access the instance with a password. By default, password access is enabled. Only instances in a VPC network support password-free access.</li></ul>
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
                     * 获取<p>Node information of instance, including node ID, node type, node availability zone ID. For details, please see <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1">RedisNodeInfo</a>.<br>Currently support inputting node type (primary node or replica node) and availability zone. When this parameter is not specified, in regions that support multi-availability zone deployment, the system defaults to creating instances with multi-availability zone architecture.</p>
                     * @return NodeSet <p>Node information of instance, including node ID, node type, node availability zone ID. For details, please see <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1">RedisNodeInfo</a>.<br>Currently support inputting node type (primary node or replica node) and availability zone. When this parameter is not specified, in regions that support multi-availability zone deployment, the system defaults to creating instances with multi-availability zone architecture.</p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>Node information of instance, including node ID, node type, node availability zone ID. For details, please see <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1">RedisNodeInfo</a>.<br>Currently support inputting node type (primary node or replica node) and availability zone. When this parameter is not specified, in regions that support multi-availability zone deployment, the system defaults to creating instances with multi-availability zone architecture.</p>
                     * @param _nodeSet <p>Node information of instance, including node ID, node type, node availability zone ID. For details, please see <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1">RedisNodeInfo</a>.<br>Currently support inputting node type (primary node or replica node) and availability zone. When this parameter is not specified, in regions that support multi-availability zone deployment, the system defaults to creating instances with multi-availability zone architecture.</p>
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
                     * 获取<p>Set a tag for the instance.</p>
                     * @return ResourceTags <p>Set a tag for the instance.</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>Set a tag for the instance.</p>
                     * @param _resourceTags <p>Set a tag for the instance.</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Specify the name of the AZ to which the instance belongs. For details, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * @return ZoneName <p>Specify the name of the AZ to which the instance belongs. For details, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Specify the name of the AZ to which the instance belongs. For details, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * @param _zoneName <p>Specify the name of the AZ to which the instance belongs. For details, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template ID of the specified instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt to the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * @return TemplateId <p>Parameter template ID of the specified instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt to the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID of the specified instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt to the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * @param _templateId <p>Parameter template ID of the specified instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt to the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Internal parameter to identify whether creating an instance needs to check.</p><ul><li>false: Default value. Send a normal request and create the instance directly after passing the check.</li><li>true: Send a check request without creating an instance.</li></ul>
                     * @return DryRun <p>Internal parameter to identify whether creating an instance needs to check.</p><ul><li>false: Default value. Send a normal request and create the instance directly after passing the check.</li><li>true: Send a check request without creating an instance.</li></ul>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Internal parameter to identify whether creating an instance needs to check.</p><ul><li>false: Default value. Send a normal request and create the instance directly after passing the check.</li><li>true: Send a check request without creating an instance.</li></ul>
                     * @param _dryRun <p>Internal parameter to identify whether creating an instance needs to check.</p><ul><li>false: Default value. Send a normal request and create the instance directly after passing the check.</li><li>true: Send a check request without creating an instance.</li></ul>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>Indicates the instance deployment mode.</p><ul><li>local: traditional architecture, defaults to local.</li><li>cdc: dedicated cluster.</li><li>cloud: cloud native, currently not available for sale.</li></ul>
                     * @return ProductVersion <p>Indicates the instance deployment mode.</p><ul><li>local: traditional architecture, defaults to local.</li><li>cdc: dedicated cluster.</li><li>cloud: cloud native, currently not available for sale.</li></ul>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>Indicates the instance deployment mode.</p><ul><li>local: traditional architecture, defaults to local.</li><li>cdc: dedicated cluster.</li><li>cloud: cloud native, currently not available for sale.</li></ul>
                     * @param _productVersion <p>Indicates the instance deployment mode.</p><ul><li>local: traditional architecture, defaults to local.</li><li>cdc: dedicated cluster.</li><li>cloud: cloud native, currently not available for sale.</li></ul>
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
                     * 获取<p>Dedicated cluster ID.</p><ul><li>When <strong>ProductVersion</strong> is set to <strong>cdc</strong>, this parameter must be set.</li><li>Get cluster ID through the API <a href="https://www.tencentcloud.com/document/product/239/109628?from_cn_redirect=1">DescribeRedisClusters</a>.</li></ul>
                     * @return RedisClusterId <p>Dedicated cluster ID.</p><ul><li>When <strong>ProductVersion</strong> is set to <strong>cdc</strong>, this parameter must be set.</li><li>Get cluster ID through the API <a href="https://www.tencentcloud.com/document/product/239/109628?from_cn_redirect=1">DescribeRedisClusters</a>.</li></ul>
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置<p>Dedicated cluster ID.</p><ul><li>When <strong>ProductVersion</strong> is set to <strong>cdc</strong>, this parameter must be set.</li><li>Get cluster ID through the API <a href="https://www.tencentcloud.com/document/product/239/109628?from_cn_redirect=1">DescribeRedisClusters</a>.</li></ul>
                     * @param _redisClusterId <p>Dedicated cluster ID.</p><ul><li>When <strong>ProductVersion</strong> is set to <strong>cdc</strong>, this parameter must be set.</li><li>Get cluster ID through the API <a href="https://www.tencentcloud.com/document/product/239/109628?from_cn_redirect=1">DescribeRedisClusters</a>.</li></ul>
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
                     * 获取<p>Alarm policy ID array.</p><ul><li>Log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to get alarm policy ID.</li><li>If this parameter is not configured, the default alarm policy will be bound. For the default alarm policy details, log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to view.</li></ul>
                     * @return AlarmPolicyList <p>Alarm policy ID array.</p><ul><li>Log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to get alarm policy ID.</li><li>If this parameter is not configured, the default alarm policy will be bound. For the default alarm policy details, log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to view.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>Alarm policy ID array.</p><ul><li>Log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to get alarm policy ID.</li><li>If this parameter is not configured, the default alarm policy will be bound. For the default alarm policy details, log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to view.</li></ul>
                     * @param _alarmPolicyList <p>Alarm policy ID array.</p><ul><li>Log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to get alarm policy ID.</li><li>If this parameter is not configured, the default alarm policy will be bound. For the default alarm policy details, log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to view.</li></ul>
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<std::string>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * @return EncryptPassword <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置<p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * @param _encryptPassword <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Instance-level password complexity policy. When not passed in or Enabled=false, deem as not enabling policy, validate by system default rule.</p>
                     * @return PasswordPolicy <p>Instance-level password complexity policy. When not passed in or Enabled=false, deem as not enabling policy, validate by system default rule.</p>
                     * 
                     */
                    PasswordPolicy GetPasswordPolicy() const;

                    /**
                     * 设置<p>Instance-level password complexity policy. When not passed in or Enabled=false, deem as not enabling policy, validate by system default rule.</p>
                     * @param _passwordPolicy <p>Instance-level password complexity policy. When not passed in or Enabled=false, deem as not enabling policy, validate by system default rule.</p>
                     * 
                     */
                    void SetPasswordPolicy(const PasswordPolicy& _passwordPolicy);

                    /**
                     * 判断参数 PasswordPolicy 是否已赋值
                     * @return PasswordPolicy 是否已赋值
                     * 
                     */
                    bool PasswordPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable SSL encryption.</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul>
                     * @return EnableSSL <p>Whether to enable SSL encryption.</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul>
                     * 
                     */
                    bool GetEnableSSL() const;

                    /**
                     * 设置<p>Whether to enable SSL encryption.</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul>
                     * @param _enableSSL <p>Whether to enable SSL encryption.</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul>
                     * 
                     */
                    void SetEnableSSL(const bool& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取<p>Whether to write the private IPv4 address of an instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><ul><li>true: Allows using private IP to perform SSL certificate verification.</li><li>false: Does not add the SAN extended information to the certificate.</li></ul>
                     * @return SSLBindPrivateIPv4 <p>Whether to write the private IPv4 address of an instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><ul><li>true: Allows using private IP to perform SSL certificate verification.</li><li>false: Does not add the SAN extended information to the certificate.</li></ul>
                     * 
                     */
                    bool GetSSLBindPrivateIPv4() const;

                    /**
                     * 设置<p>Whether to write the private IPv4 address of an instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><ul><li>true: Allows using private IP to perform SSL certificate verification.</li><li>false: Does not add the SAN extended information to the certificate.</li></ul>
                     * @param _sSLBindPrivateIPv4 <p>Whether to write the private IPv4 address of an instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><ul><li>true: Allows using private IP to perform SSL certificate verification.</li><li>false: Does not add the SAN extended information to the certificate.</li></ul>
                     * 
                     */
                    void SetSSLBindPrivateIPv4(const bool& _sSLBindPrivateIPv4);

                    /**
                     * 判断参数 SSLBindPrivateIPv4 是否已赋值
                     * @return SSLBindPrivateIPv4 是否已赋值
                     * 
                     */
                    bool SSLBindPrivateIPv4HasBeenSet() const;

                    /**
                     * 获取<p>Instance connectivity access Mode.</p><ul><li>0: Proxy Mode (default value).</li><li>1: Direct access Mode.</li></ul>
                     * @return ConnectionMode <p>Instance connectivity access Mode.</p><ul><li>0: Proxy Mode (default value).</li><li>1: Direct access Mode.</li></ul>
                     * 
                     */
                    int64_t GetConnectionMode() const;

                    /**
                     * 设置<p>Instance connectivity access Mode.</p><ul><li>0: Proxy Mode (default value).</li><li>1: Direct access Mode.</li></ul>
                     * @param _connectionMode <p>Instance connectivity access Mode.</p><ul><li>0: Proxy Mode (default value).</li><li>1: Direct access Mode.</li></ul>
                     * 
                     */
                    void SetConnectionMode(const int64_t& _connectionMode);

                    /**
                     * 判断参数 ConnectionMode 是否已赋值
                     * @return ConnectionMode 是否已赋值
                     * 
                     */
                    bool ConnectionModeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>19: Valkey 8.0 memory edition (standard architecture).</li><li>20: Valkey 8.0 memory edition (cluster architecture).</li><li>21: Valkey 9.0 memory edition (standard architecture).</li><li>22: Valkey 9.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).<br><strong>Note</strong>: CKV editions are currently used by some users and are temporarily retained.</li></ul>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, query the sales specifications for all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p><ul><li>When <strong>TypeId</strong> is standard architecture, <strong>MemSize</strong> is the total memory capacity of the instance.</li><li>When <strong>TypeId</strong> is cluster architecture, <strong>MemSize</strong> is the sharded memory capacity.</li></ul>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Instance count. Number of instances to purchase at a time. For details, query sales specifications in all regions via the <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">DescribeProductInfo</a> API.</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Duration of instance purchase.</p><ul><li>If <strong>BillingMode</strong> is <strong>1</strong>, that is, the billing mode is monthly subscription, you need to set this parameter to specify the duration of instance purchase. Measurement unit: month, permissible range [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</li><li>If <strong>BillingMode</strong> is <strong>0</strong>, that is, the billing mode is pay-as-you-go, set this parameter to 1.</li></ul>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Billing mode.</p><ul><li>0: Pay-As-You-Go.</li><li>1: Monthly Subscription.</li></ul>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Password for accessing instances.</p><ul><li>When the input parameter <strong>NoAuth</strong> is <strong>true</strong>, it means setting instances to Password-free access, and Password does not need to be configured. Otherwise, Password is required.</li><li>When the instance type <strong>TypeId</strong> is Redis 2.8 memory edition standard architecture, Redis 4.0, 5.0, 6.2, or 7.0 memory edition standard architecture or cluster architecture, the Password complexity requirements are: 8-64 characters, containing at least lowercase letters, uppercase letters, digits, and 2 of the following characters: ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/, and cannot start with "/".</li><li>When the instance type <strong>TypeId</strong> is CKV 3.2 memory edition standard architecture or cluster architecture, the Password complexity is: 8-30 characters, must include letters and digits, and exclude other characters.</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>VPC ID. If you do not configure this parameter, the basic network is selected by default. Log in to the <a href="https://console.cloud.tencent.com/vpc">private network</a> console to query the specific ID.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet of the private network VPC. In the basic network, this parameter requires no configuration. Log in to the <a href="https://console.cloud.tencent.com/vpc">Private Network</a> console to query the subnet list and obtain the specific ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Project ID. Log in to the <a href="https://console.cloud.tencent.com/redis#/">Redis console</a>, select <strong>Project Management</strong> from the account information menu in the top-right corner, and query the project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Automatic renewal flag.</p><ul><li>0: default status (manual renewal).</li><li>1: automatic renewal.</li><li>2: non-renewal upon expiration.</li></ul>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Security group ID array.</p><ul><li>A security group is a virtual firewall that controls network access to a cloud database instance. When creating an instance, it is recommended to bind the corresponding security group.</li><li>Get the security group ID of an instance through the <a href="https://www.tencentcloud.com/document/product/239/34447?from_cn_redirect=1">DescribeInstanceSecurityGroup</a> API.</li></ul>
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * <p>User-defined network port. Defaults to 6379, range [1024,65535].</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>Number of instance shards.</p><ul><li>No need to configure this parameter for standard edition instances.</li><li>For cluster edition instances, the shard quantity range is: [1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, 128].</li></ul>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>Instance replica number.</p><ul><li>Redis Memory Edition 4.0, 5.0, 6.2, and 7.0 cluster architecture supports a replica quantity range of [1,5].</li><li>Redis 2.8 Standard Edition and CKV Standard Edition support only 1 replica.</li></ul>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>Flag whether the instance needs to support read-only replica.</p><ul><li>Redis 2.8 Standard Edition and CKV Standard Edition do not support read-only replica.</li><li>If read-only replica is enabled, the instance will automatically separate read and write operations, with write requests routed to the primary node and read requests routed to replica nodes.</li><li>If needed to enable read-only replica, it is recommended to have at least 2 replicas.</li></ul>
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * <p>Instance name. Naming requirement: It only supports Chinese characters, letters, numbers, hyphens ("-"), or underscores ("_"), with a length of less than 60.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Configure whether the instance supports password-free access.</p><ul><li>true: Access the instance without a password.</li><li>false: Access the instance with a password. By default, password access is enabled. Only instances in a VPC network support password-free access.</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>Node information of instance, including node ID, node type, node availability zone ID. For details, please see <a href="https://www.tencentcloud.com/document/product/239/20022?from_cn_redirect=1">RedisNodeInfo</a>.<br>Currently support inputting node type (primary node or replica node) and availability zone. When this parameter is not specified, in regions that support multi-availability zone deployment, the system defaults to creating instances with multi-availability zone architecture.</p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>Set a tag for the instance.</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Specify the name of the AZ to which the instance belongs. For details, see <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>Parameter template ID of the specified instance.</p><ul><li>If this parameter is not configured, the system will automatically adapt to the corresponding default template based on the selected compatible version and architecture.</li><li>Query the parameter template list of the instance through the <a href="https://www.tencentcloud.com/document/product/239/58750?from_cn_redirect=1">DescribeParamTemplates</a> API to obtain the template ID number.</li></ul>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Internal parameter to identify whether creating an instance needs to check.</p><ul><li>false: Default value. Send a normal request and create the instance directly after passing the check.</li><li>true: Send a check request without creating an instance.</li></ul>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Indicates the instance deployment mode.</p><ul><li>local: traditional architecture, defaults to local.</li><li>cdc: dedicated cluster.</li><li>cloud: cloud native, currently not available for sale.</li></ul>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>Dedicated cluster ID.</p><ul><li>When <strong>ProductVersion</strong> is set to <strong>cdc</strong>, this parameter must be set.</li><li>Get cluster ID through the API <a href="https://www.tencentcloud.com/document/product/239/109628?from_cn_redirect=1">DescribeRedisClusters</a>.</li></ul>
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * <p>Alarm policy ID array.</p><ul><li>Log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to get alarm policy ID.</li><li>If this parameter is not configured, the default alarm policy will be bound. For the default alarm policy details, log in to <a href="https://console.cloud.tencent.com/monitor/alarm/policy">Tencent Cloud Observability Platform - Alarm Management - Policy Management</a> to view.</li></ul>
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>Whether to enable password encryption for transmission.</p><ul><li>true: Encrypted.</li><li>false: Not encrypted (default value).</li></ul>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                    /**
                     * <p>Instance-level password complexity policy. When not passed in or Enabled=false, deem as not enabling policy, validate by system default rule.</p>
                     */
                    PasswordPolicy m_passwordPolicy;
                    bool m_passwordPolicyHasBeenSet;

                    /**
                     * <p>Whether to enable SSL encryption.</p><ul><li>true: Enable.</li><li>false: Disable (default value).</li></ul>
                     */
                    bool m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * <p>Whether to write the private IPv4 address of an instance to the domain alias (SAN) of the certificate when SSL is enabled. This parameter is valid only when EnableSSL is true.</p><ul><li>true: Allows using private IP to perform SSL certificate verification.</li><li>false: Does not add the SAN extended information to the certificate.</li></ul>
                     */
                    bool m_sSLBindPrivateIPv4;
                    bool m_sSLBindPrivateIPv4HasBeenSet;

                    /**
                     * <p>Instance connectivity access Mode.</p><ul><li>0: Proxy Mode (default value).</li><li>1: Direct access Mode.</li></ul>
                     */
                    int64_t m_connectionMode;
                    bool m_connectionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
