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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of instances output per page. Default parameter value: 20. Maximum value: 1000.</p>
                     * @return Limit <p>Number of instances output per page. Default parameter value: 20. Maximum value: 1000.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of instances output per page. Default parameter value: 20. Maximum value: 1000.</p>
                     * @param _limit <p>Number of instances output per page. Default parameter value: 20. Maximum value: 1000.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset, which is an integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @return Offset <p>Pagination offset, which is an integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, which is an integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @param _offset <p>Pagination offset, which is an integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Instance list sorting criteria. Enumeration values are as follows:</p><ul><li>projectId: by project ID.</li><li>createtime: sort by instance creation time.</li><li>instancename: by instance name sorting.</li><li>type: by instance type.</li><li>curDeadline: by instance expiration time.</li></ul>
                     * @return OrderBy <p>Instance list sorting criteria. Enumeration values are as follows:</p><ul><li>projectId: by project ID.</li><li>createtime: sort by instance creation time.</li><li>instancename: by instance name sorting.</li><li>type: by instance type.</li><li>curDeadline: by instance expiration time.</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Instance list sorting criteria. Enumeration values are as follows:</p><ul><li>projectId: by project ID.</li><li>createtime: sort by instance creation time.</li><li>instancename: by instance name sorting.</li><li>type: by instance type.</li><li>curDeadline: by instance expiration time.</li></ul>
                     * @param _orderBy <p>Instance list sorting criteria. Enumeration values are as follows:</p><ul><li>projectId: by project ID.</li><li>createtime: sort by instance creation time.</li><li>instancename: by instance name sorting.</li><li>type: by instance type.</li><li>curDeadline: by instance expiration time.</li></ul>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Instance sorting order, with a default value of reverse sorting.</p><ul><li>1: Reverse order.</li><li>0: Sequential order.</li></ul>
                     * @return OrderType <p>Instance sorting order, with a default value of reverse sorting.</p><ul><li>1: Reverse order.</li><li>0: Sequential order.</li></ul>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>Instance sorting order, with a default value of reverse sorting.</p><ul><li>1: Reverse order.</li><li>0: Sequential order.</li></ul>
                     * @param _orderType <p>Instance sorting order, with a default value of reverse sorting.</p><ul><li>1: Reverse order.</li><li>0: Sequential order.</li></ul>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default. For example: 47525. This parameter is temporarily reserved and can be ignored. Set the VPC ID array according to the format of the UniqVpcIds parameter.</p>
                     * @return VpcIds <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default. For example: 47525. This parameter is temporarily reserved and can be ignored. Set the VPC ID array according to the format of the UniqVpcIds parameter.</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default. For example: 47525. This parameter is temporarily reserved and can be ignored. Set the VPC ID array according to the format of the UniqVpcIds parameter.</p>
                     * @param _vpcIds <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default. For example: 47525. This parameter is temporarily reserved and can be ignored. Set the VPC ID array according to the format of the UniqVpcIds parameter.</p>
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>Array of subnet IDs belonging to the private network, for example: 56854. This parameter is temporarily reserved and can be ignored. Set the private network subnet ID array according to the format of the UniqSubnetIds parameter.</p>
                     * @return SubnetIds <p>Array of subnet IDs belonging to the private network, for example: 56854. This parameter is temporarily reserved and can be ignored. Set the private network subnet ID array according to the format of the UniqSubnetIds parameter.</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>Array of subnet IDs belonging to the private network, for example: 56854. This parameter is temporarily reserved and can be ignored. Set the private network subnet ID array according to the format of the UniqSubnetIds parameter.</p>
                     * @param _subnetIds <p>Array of subnet IDs belonging to the private network, for example: 56854. This parameter is temporarily reserved and can be ignored. Set the private network subnet ID array according to the format of the UniqSubnetIds parameter.</p>
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>Set the key field for fuzzy query. Only instance names support fuzzy query.</p>
                     * @return SearchKey <p>Set the key field for fuzzy query. Only instance names support fuzzy query.</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>Set the key field for fuzzy query. Only instance names support fuzzy query.</p>
                     * @param _searchKey <p>Set the key field for fuzzy query. Only instance names support fuzzy query.</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<p>Array of project IDs.</p>
                     * @return ProjectIds <p>Array of project IDs.</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>Array of project IDs.</p>
                     * @param _projectIds <p>Array of project IDs.</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

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
                     * 获取<p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default, for example: vpc-sad23jfdfk.</p>
                     * @return UniqVpcIds <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default, for example: vpc-sad23jfdfk.</p>
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置<p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default, for example: vpc-sad23jfdfk.</p>
                     * @param _uniqVpcIds <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default, for example: vpc-sad23jfdfk.</p>
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID array belonging to the private network, for example: subnet-fdj24n34j2.</p>
                     * @return UniqSubnetIds <p>Subnet ID array belonging to the private network, for example: subnet-fdj24n34j2.</p>
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置<p>Subnet ID array belonging to the private network, for example: subnet-fdj24n34j2.</p>
                     * @param _uniqSubnetIds <p>Subnet ID array belonging to the private network, for example: subnet-fdj24n34j2.</p>
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>Region ID array. This parameter has been deprecated. Use the common parameter Region to query the corresponding region.</p>
                     * @return RegionIds <p>Region ID array. This parameter has been deprecated. Use the common parameter Region to query the corresponding region.</p>
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置<p>Region ID array. This parameter has been deprecated. Use the common parameter Region to query the corresponding region.</p>
                     * @param _regionIds <p>Region ID array. This parameter has been deprecated. Use the common parameter Region to query the corresponding region.</p>
                     * 
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取<p>Instance status.</p><ul><li>0: pending initialization.</li><li>1: in process.</li><li>2: running.</li><li>-2: isolated.</li><li>-3: pending deletion.</li></ul>
                     * @return Status <p>Instance status.</p><ul><li>0: pending initialization.</li><li>1: in process.</li><li>2: running.</li><li>-2: isolated.</li><li>-3: pending deletion.</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>Instance status.</p><ul><li>0: pending initialization.</li><li>1: in process.</li><li>2: running.</li><li>-2: isolated.</li><li>-3: pending deletion.</li></ul>
                     * @param _status <p>Instance status.</p><ul><li>0: pending initialization.</li><li>1: in process.</li><li>2: running.</li><li>-2: isolated.</li><li>-3: pending deletion.</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance architecture version.</p><ul><li>1: standalone edition.</li><li>2: primary/secondary edition.</li><li>3: cluster version.</li></ul>
                     * @return TypeVersion <p>Instance architecture version.</p><ul><li>1: standalone edition.</li><li>2: primary/secondary edition.</li><li>3: cluster version.</li></ul>
                     * 
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置<p>Instance architecture version.</p><ul><li>1: standalone edition.</li><li>2: primary/secondary edition.</li><li>3: cluster version.</li></ul>
                     * @param _typeVersion <p>Instance architecture version.</p><ul><li>1: standalone edition.</li><li>2: primary/secondary edition.</li><li>3: cluster version.</li></ul>
                     * 
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     * 
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取<p>Storage engine info. It can be set to Redis-2.8, Redis-4.0, Redis-5.0, Redis-6.0, or CKV.</p>
                     * @return EngineName <p>Storage engine info. It can be set to Redis-2.8, Redis-4.0, Redis-5.0, Redis-6.0, or CKV.</p>
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置<p>Storage engine info. It can be set to Redis-2.8, Redis-4.0, Redis-5.0, Redis-6.0, or CKV.</p>
                     * @param _engineName <p>Storage engine info. It can be set to Redis-2.8, Redis-4.0, Redis-5.0, Redis-6.0, or CKV.</p>
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取<p>Renewal mode.</p><ul><li>0: Manual renewal.</li><li>1: Automatic renewal.</li><li>2: No renewal after expiry.</li></ul>
                     * @return AutoRenew <p>Renewal mode.</p><ul><li>0: Manual renewal.</li><li>1: Automatic renewal.</li><li>2: No renewal after expiry.</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置<p>Renewal mode.</p><ul><li>0: Manual renewal.</li><li>1: Automatic renewal.</li><li>2: No renewal after expiry.</li></ul>
                     * @param _autoRenew <p>Renewal mode.</p><ul><li>0: Manual renewal.</li><li>1: Automatic renewal.</li><li>2: No renewal after expiry.</li></ul>
                     * 
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode.</p><ul><li>postpaid: pay-as-you-go billing.</li><li>prepaid: annual/monthly subscription.</li></ul>
                     * @return BillingMode <p>Billing mode.</p><ul><li>postpaid: pay-as-you-go billing.</li><li>prepaid: annual/monthly subscription.</li></ul>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置<p>Billing mode.</p><ul><li>postpaid: pay-as-you-go billing.</li><li>prepaid: annual/monthly subscription.</li></ul>
                     * @param _billingMode <p>Billing mode.</p><ul><li>postpaid: pay-as-you-go billing.</li><li>prepaid: annual/monthly subscription.</li></ul>
                     * 
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * @return Type <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     * @param _type <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
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
                     * 获取<p>This parameter is an array type and supports configuring instance name, instance ID, and IP address. Among them, instance name uses fuzzy matching, while instance ID and IP address use exact matching.</p><ul><li>Each element in the array uses union for match query.</li><li>If <strong>InstanceId</strong> and <strong>SearchKeys</strong> are configured concurrently, their intersection is used for matching query.</li></ul>
                     * @return SearchKeys <p>This parameter is an array type and supports configuring instance name, instance ID, and IP address. Among them, instance name uses fuzzy matching, while instance ID and IP address use exact matching.</p><ul><li>Each element in the array uses union for match query.</li><li>If <strong>InstanceId</strong> and <strong>SearchKeys</strong> are configured concurrently, their intersection is used for matching query.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>This parameter is an array type and supports configuring instance name, instance ID, and IP address. Among them, instance name uses fuzzy matching, while instance ID and IP address use exact matching.</p><ul><li>Each element in the array uses union for match query.</li><li>If <strong>InstanceId</strong> and <strong>SearchKeys</strong> are configured concurrently, their intersection is used for matching query.</li></ul>
                     * @param _searchKeys <p>This parameter is an array type and supports configuring instance name, instance ID, and IP address. Among them, instance name uses fuzzy matching, while instance ID and IP address use exact matching.</p><ul><li>Each element in the array uses union for match query.</li><li>If <strong>InstanceId</strong> and <strong>SearchKeys</strong> are configured concurrently, their intersection is used for matching query.</li></ul>
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取<p>Internal parameter, which can be ignored.</p>
                     * @return TypeList <p>Internal parameter, which can be ignored.</p>
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置<p>Internal parameter, which can be ignored.</p>
                     * @param _typeList <p>Internal parameter, which can be ignored.</p>
                     * 
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取<p>Internal parameter, which can be ignored.</p>
                     * @return MonitorVersion <p>Internal parameter, which can be ignored.</p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>Internal parameter, which can be ignored.</p>
                     * @param _monitorVersion <p>Internal parameter, which can be ignored.</p>
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
                     * 获取<p>Filter resources by tag Key and Value. If this parameter is not configured or the array is set to empty, no tag-based filtering is applied.</p>
                     * @return InstanceTags <p>Filter resources by tag Key and Value. If this parameter is not configured or the array is set to empty, no tag-based filtering is applied.</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>Filter resources by tag Key and Value. If this parameter is not configured or the array is set to empty, no tag-based filtering is applied.</p>
                     * @param _instanceTags <p>Filter resources by tag Key and Value. If this parameter is not configured or the array is set to empty, no tag-based filtering is applied.</p>
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
                     * 获取<p>Filter resources by tag Key. If this parameter is not configured or the array is set to empty, no filtering by tag Key is performed.</p>
                     * @return TagKeys <p>Filter resources by tag Key. If this parameter is not configured or the array is set to empty, no filtering by tag Key is performed.</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置<p>Filter resources by tag Key. If this parameter is not configured or the array is set to empty, no filtering by tag Key is performed.</p>
                     * @param _tagKeys <p>Filter resources by tag Key. If this parameter is not configured or the array is set to empty, no filtering by tag Key is performed.</p>
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取<p>Deployment type of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.</p><p>Enumeration values:</p><ul><li>local: Common I.</li><li>localv2: Common II.</li><li>cdc: Dedicated cluster.</li></ul>
                     * @return ProductVersions <p>Deployment type of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.</p><p>Enumeration values:</p><ul><li>local: Common I.</li><li>localv2: Common II.</li><li>cdc: Dedicated cluster.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置<p>Deployment type of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.</p><p>Enumeration values:</p><ul><li>local: Common I.</li><li>localv2: Common II.</li><li>cdc: Dedicated cluster.</li></ul>
                     * @param _productVersions <p>Deployment type of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.</p><p>Enumeration values:</p><ul><li>local: Common I.</li><li>localv2: Common II.</li><li>cdc: Dedicated cluster.</li></ul>
                     * 
                     */
                    void SetProductVersions(const std::vector<std::string>& _productVersions);

                    /**
                     * 判断参数 ProductVersions 是否已赋值
                     * @return ProductVersions 是否已赋值
                     * 
                     */
                    bool ProductVersionsHasBeenSet() const;

                    /**
                     * 获取<p>Batch query the specified instance IDs. The returned results are mainly limited by Limit.</p>
                     * @return InstanceIds <p>Batch query the specified instance IDs. The returned results are mainly limited by Limit.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Batch query the specified instance IDs. The returned results are mainly limited by Limit.</p>
                     * @param _instanceIds <p>Batch query the specified instance IDs. The returned results are mainly limited by Limit.</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone mode.</p><ul><li>singleaz: single availability zone.</li><li>multiaz: multi-availability zone.</li></ul>
                     * @return AzMode <p>Availability zone mode.</p><ul><li>singleaz: single availability zone.</li><li>multiaz: multi-availability zone.</li></ul>
                     * 
                     */
                    std::string GetAzMode() const;

                    /**
                     * 设置<p>Availability zone mode.</p><ul><li>singleaz: single availability zone.</li><li>multiaz: multi-availability zone.</li></ul>
                     * @param _azMode <p>Availability zone mode.</p><ul><li>singleaz: single availability zone.</li><li>multiaz: multi-availability zone.</li></ul>
                     * 
                     */
                    void SetAzMode(const std::string& _azMode);

                    /**
                     * 判断参数 AzMode 是否已赋值
                     * @return AzMode 是否已赋值
                     * 
                     */
                    bool AzModeHasBeenSet() const;

                private:

                    /**
                     * <p>Number of instances output per page. Default parameter value: 20. Maximum value: 1000.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset, which is an integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Specifies the instance ID. Example: crs-xjhsdj****. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance list sorting criteria. Enumeration values are as follows:</p><ul><li>projectId: by project ID.</li><li>createtime: sort by instance creation time.</li><li>instancename: by instance name sorting.</li><li>type: by instance type.</li><li>curDeadline: by instance expiration time.</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Instance sorting order, with a default value of reverse sorting.</p><ul><li>1: Reverse order.</li><li>0: Sequential order.</li></ul>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default. For example: 47525. This parameter is temporarily reserved and can be ignored. Set the VPC ID array according to the format of the UniqVpcIds parameter.</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>Array of subnet IDs belonging to the private network, for example: 56854. This parameter is temporarily reserved and can be ignored. Set the private network subnet ID array according to the format of the UniqSubnetIds parameter.</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>Set the key field for fuzzy query. Only instance names support fuzzy query.</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>Array of project IDs.</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>VPC ID array. If this parameter is not configured or the array is empty, the basic network is selected by default, for example: vpc-sad23jfdfk.</p>
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * <p>Subnet ID array belonging to the private network, for example: subnet-fdj24n34j2.</p>
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * <p>Region ID array. This parameter has been deprecated. Use the common parameter Region to query the corresponding region.</p>
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>Instance status.</p><ul><li>0: pending initialization.</li><li>1: in process.</li><li>2: running.</li><li>-2: isolated.</li><li>-3: pending deletion.</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance architecture version.</p><ul><li>1: standalone edition.</li><li>2: primary/secondary edition.</li><li>3: cluster version.</li></ul>
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * <p>Storage engine info. It can be set to Redis-2.8, Redis-4.0, Redis-5.0, Redis-6.0, or CKV.</p>
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * <p>Renewal mode.</p><ul><li>0: Manual renewal.</li><li>1: Automatic renewal.</li><li>2: No renewal after expiry.</li></ul>
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Billing mode.</p><ul><li>postpaid: pay-as-you-go billing.</li><li>prepaid: annual/monthly subscription.</li></ul>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>Instance type.</p><ul><li>2: Redis 2.8 memory edition (standard architecture).</li><li>3: CKV 3.2 memory edition (standard architecture).</li><li>4: CKV 3.2 memory edition (cluster architecture).</li><li>5: Redis 2.8 memory edition (standalone).</li><li>6: Redis 4.0 memory edition (standard architecture).</li><li>7: Redis 4.0 memory edition (cluster architecture).</li><li>8: Redis 5.0 memory edition (standard architecture).</li><li>9: Redis 5.0 memory edition (cluster architecture).</li><li>15: Redis 6.2 memory edition (standard architecture).</li><li>16: Redis 6.2 memory edition (cluster architecture).</li><li>17: Redis 7.0 memory edition (standard architecture).</li><li>18: Redis 7.0 memory edition (cluster architecture).</li><li>200: Memcached 1.6 memory edition (cluster architecture).</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>This parameter is an array type and supports configuring instance name, instance ID, and IP address. Among them, instance name uses fuzzy matching, while instance ID and IP address use exact matching.</p><ul><li>Each element in the array uses union for match query.</li><li>If <strong>InstanceId</strong> and <strong>SearchKeys</strong> are configured concurrently, their intersection is used for matching query.</li></ul>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>Internal parameter, which can be ignored.</p>
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * <p>Internal parameter, which can be ignored.</p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>Filter resources by tag Key and Value. If this parameter is not configured or the array is set to empty, no tag-based filtering is applied.</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Filter resources by tag Key. If this parameter is not configured or the array is set to empty, no filtering by tag Key is performed.</p>
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * <p>Deployment type of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.</p><p>Enumeration values:</p><ul><li>local: Common I.</li><li>localv2: Common II.</li><li>cdc: Dedicated cluster.</li></ul>
                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                    /**
                     * <p>Batch query the specified instance IDs. The returned results are mainly limited by Limit.</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Availability zone mode.</p><ul><li>singleaz: single availability zone.</li><li>multiaz: multi-availability zone.</li></ul>
                     */
                    std::string m_azMode;
                    bool m_azModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
