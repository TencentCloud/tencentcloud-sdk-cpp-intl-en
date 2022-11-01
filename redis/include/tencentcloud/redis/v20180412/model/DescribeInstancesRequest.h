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
                     * 获取Number of instances. Default value: 20. Maximum value: 1000.
                     * @return Limit Number of instances. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of instances. Default value: 20. Maximum value: 1000.
                     * @param Limit Number of instances. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which is an integral multiple of `Limit`.
                     * @return Offset Offset, which is an integral multiple of `Limit`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integral multiple of `Limit`.
                     * @param Offset Offset, which is an integral multiple of `Limit`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Instance ID, such as crs-6ubhgouj.
                     * @return InstanceId Instance ID, such as crs-6ubhgouj.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as crs-6ubhgouj.
                     * @param InstanceId Instance ID, such as crs-6ubhgouj.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance sorting criteria. The enumerated values are as listed below: <ul><li>projectId: Project ID. </li><li>createtime: Instance creation time. </li><li>instancename: Instance name. </li><li>type: Instance type. </li><li>curDeadline: Instance expiration time. </li></ul>
                     * @return OrderBy Instance sorting criteria. The enumerated values are as listed below: <ul><li>projectId: Project ID. </li><li>createtime: Instance creation time. </li><li>instancename: Instance name. </li><li>type: Instance type. </li><li>curDeadline: Instance expiration time. </li></ul>
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Instance sorting criteria. The enumerated values are as listed below: <ul><li>projectId: Project ID. </li><li>createtime: Instance creation time. </li><li>instancename: Instance name. </li><li>type: Instance type. </li><li>curDeadline: Instance expiration time. </li></ul>
                     * @param OrderBy Instance sorting criteria. The enumerated values are as listed below: <ul><li>projectId: Project ID. </li><li>createtime: Instance creation time. </li><li>instancename: Instance name. </li><li>type: Instance type. </li><li>curDeadline: Instance expiration time. </li></ul>
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Instance sorting order. <ul><li>`1`: Descending. </li><li>`0`: Ascending. Default value: `1`.</li></ul>
                     * @return OrderType Instance sorting order. <ul><li>`1`: Descending. </li><li>`0`: Ascending. Default value: `1`.</li></ul>
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置Instance sorting order. <ul><li>`1`: Descending. </li><li>`0`: Ascending. Default value: `1`.</li></ul>
                     * @param OrderType Instance sorting order. <ul><li>`1`: Descending. </li><li>`0`: Ascending. Default value: `1`.</li></ul>
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * @return VpcIds Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * @param VpcIds Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * @return SubnetIds Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * @param SubnetIds Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Keywords for fuzzy query. which can be used to fuzzy query an instance by its ID or name.
                     * @return SearchKey Keywords for fuzzy query. which can be used to fuzzy query an instance by its ID or name.
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Keywords for fuzzy query. which can be used to fuzzy query an instance by its ID or name.
                     * @param SearchKey Keywords for fuzzy query. which can be used to fuzzy query an instance by its ID or name.
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Array of project IDs
                     * @return ProjectIds Array of project IDs
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Array of project IDs
                     * @param ProjectIds Array of project IDs
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

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
                     * 获取Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * @return UniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * @param UniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * @return UniqSubnetIds Array of VPC subnet IDs such as subnet-fdj24n34j2
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * @param UniqSubnetIds Array of VPC subnet IDs such as subnet-fdj24n34j2
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * @return RegionIds Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * @param RegionIds Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     * @return Status Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     * @param Status Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance architecture. <ul><li>`1`: Standalone edition. </li><li>`2`: Master-replica edition. </li><li>`3`: Cluster edition. </li></ul>
                     * @return TypeVersion Instance architecture. <ul><li>`1`: Standalone edition. </li><li>`2`: Master-replica edition. </li><li>`3`: Cluster edition. </li></ul>
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置Instance architecture. <ul><li>`1`: Standalone edition. </li><li>`2`: Master-replica edition. </li><li>`3`: Cluster edition. </li></ul>
                     * @param TypeVersion Instance architecture. <ul><li>`1`: Standalone edition. </li><li>`2`: Master-replica edition. </li><li>`3`: Cluster edition. </li></ul>
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * @return EngineName Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * @param EngineName Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Renewal mode. <ul><li>`0`: Manual renewal (default). </li><li>`1`: Auto-renewal. </li><li>`2`: No auto-renewal (set by user)</ul>
                     * @return AutoRenew Renewal mode. <ul><li>`0`: Manual renewal (default). </li><li>`1`: Auto-renewal. </li><li>`2`: No auto-renewal (set by user)</ul>
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置Renewal mode. <ul><li>`0`: Manual renewal (default). </li><li>`1`: Auto-renewal. </li><li>`2`: No auto-renewal (set by user)</ul>
                     * @param AutoRenew Renewal mode. <ul><li>`0`: Manual renewal (default). </li><li>`1`: Auto-renewal. </li><li>`2`: No auto-renewal (set by user)</ul>
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Billing mode. Only pay-as-you-go billing is supported.
                     * @return BillingMode Billing mode. Only pay-as-you-go billing is supported.
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置Billing mode. Only pay-as-you-go billing is supported.
                     * @param BillingMode Billing mode. Only pay-as-you-go billing is supported.
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Instance type. <ul><li>`1`: Legacy Redis cluster edition. </li><li>`2`: Redis 2.8 master-replica edition. </li><li>`3`: CKV master-replica edition. </li><li>`4`: CKV cluster edition. </li><li>`5`: Redis 2.8 standalone edition. </li><li>`6`: Redis 4.0 master-replica edition. </li><li>`7`: Redis 4.0 cluster edition. </li><li>8: Redis 5.0 master-replica edition. </li><li>`9`: Redis 5.0 cluster edition. </li></ul>
                     * @return Type Instance type. <ul><li>`1`: Legacy Redis cluster edition. </li><li>`2`: Redis 2.8 master-replica edition. </li><li>`3`: CKV master-replica edition. </li><li>`4`: CKV cluster edition. </li><li>`5`: Redis 2.8 standalone edition. </li><li>`6`: Redis 4.0 master-replica edition. </li><li>`7`: Redis 4.0 cluster edition. </li><li>8: Redis 5.0 master-replica edition. </li><li>`9`: Redis 5.0 cluster edition. </li></ul>
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type. <ul><li>`1`: Legacy Redis cluster edition. </li><li>`2`: Redis 2.8 master-replica edition. </li><li>`3`: CKV master-replica edition. </li><li>`4`: CKV cluster edition. </li><li>`5`: Redis 2.8 standalone edition. </li><li>`6`: Redis 4.0 master-replica edition. </li><li>`7`: Redis 4.0 cluster edition. </li><li>8: Redis 5.0 master-replica edition. </li><li>`9`: Redis 5.0 cluster edition. </li></ul>
                     * @param Type Instance type. <ul><li>`1`: Legacy Redis cluster edition. </li><li>`2`: Redis 2.8 master-replica edition. </li><li>`3`: CKV master-replica edition. </li><li>`4`: CKV cluster edition. </li><li>`5`: Redis 2.8 standalone edition. </li><li>`6`: Redis 4.0 master-replica edition. </li><li>`7`: Redis 4.0 cluster edition. </li><li>8: Redis 5.0 master-replica edition. </li><li>`9`: Redis 5.0 cluster edition. </li></ul>
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Array of the search keywords, which can query the instance by its ID, name, IP address.
                     * @return SearchKeys Array of the search keywords, which can query the instance by its ID, name, IP address.
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置Array of the search keywords, which can query the instance by its ID, name, IP address.
                     * @param SearchKeys Array of the search keywords, which can query the instance by its ID, name, IP address.
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
                     * @return TypeList Internal parameter, which can be ignored.
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
                     * @param TypeList Internal parameter, which can be ignored.
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
                     * @return MonitorVersion Internal parameter, which can be ignored.
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
                     * @param MonitorVersion Internal parameter, which can be ignored.
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return InstanceTags Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param InstanceTags Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return TagKeys Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param TagKeys Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Instance product version. If this parameter is not passed in or the array is empty, the instances will not be filtered based this parameter by default. <ul><li>`local`: local disk edition. </li><li>`cloud`: Cloud disk edition. </li><li>`cdc`: Dedicated cluster edition. </li></ul>
                     * @return ProductVersions Instance product version. If this parameter is not passed in or the array is empty, the instances will not be filtered based this parameter by default. <ul><li>`local`: local disk edition. </li><li>`cloud`: Cloud disk edition. </li><li>`cdc`: Dedicated cluster edition. </li></ul>
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置Instance product version. If this parameter is not passed in or the array is empty, the instances will not be filtered based this parameter by default. <ul><li>`local`: local disk edition. </li><li>`cloud`: Cloud disk edition. </li><li>`cdc`: Dedicated cluster edition. </li></ul>
                     * @param ProductVersions Instance product version. If this parameter is not passed in or the array is empty, the instances will not be filtered based this parameter by default. <ul><li>`local`: local disk edition. </li><li>`cloud`: Cloud disk edition. </li><li>`cdc`: Dedicated cluster edition. </li></ul>
                     */
                    void SetProductVersions(const std::vector<std::string>& _productVersions);

                    /**
                     * 判断参数 ProductVersions 是否已赋值
                     * @return ProductVersions 是否已赋值
                     */
                    bool ProductVersionsHasBeenSet() const;

                    /**
                     * 获取Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * @return InstanceIds Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * @param InstanceIds Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取AZ deployment mode. <ul><li>`singleaz`: Single-AZ. </li><li>`1`: Multi-AZ. </li></ul>
                     * @return AzMode AZ deployment mode. <ul><li>`singleaz`: Single-AZ. </li><li>`1`: Multi-AZ. </li></ul>
                     */
                    std::string GetAzMode() const;

                    /**
                     * 设置AZ deployment mode. <ul><li>`singleaz`: Single-AZ. </li><li>`1`: Multi-AZ. </li></ul>
                     * @param AzMode AZ deployment mode. <ul><li>`singleaz`: Single-AZ. </li><li>`1`: Multi-AZ. </li></ul>
                     */
                    void SetAzMode(const std::string& _azMode);

                    /**
                     * 判断参数 AzMode 是否已赋值
                     * @return AzMode 是否已赋值
                     */
                    bool AzModeHasBeenSet() const;

                private:

                    /**
                     * Number of instances. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is an integral multiple of `Limit`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Instance ID, such as crs-6ubhgouj.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance sorting criteria. The enumerated values are as listed below: <ul><li>projectId: Project ID. </li><li>createtime: Instance creation time. </li><li>instancename: Instance name. </li><li>type: Instance type. </li><li>curDeadline: Instance expiration time. </li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Instance sorting order. <ul><li>`1`: Descending. </li><li>`0`: Ascending. Default value: `1`.</li></ul>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Keywords for fuzzy query. which can be used to fuzzy query an instance by its ID or name.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Array of project IDs
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * Array of VPC subnet IDs such as subnet-fdj24n34j2
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance architecture. <ul><li>`1`: Standalone edition. </li><li>`2`: Master-replica edition. </li><li>`3`: Cluster edition. </li></ul>
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Renewal mode. <ul><li>`0`: Manual renewal (default). </li><li>`1`: Auto-renewal. </li><li>`2`: No auto-renewal (set by user)</ul>
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Billing mode. Only pay-as-you-go billing is supported.
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Instance type. <ul><li>`1`: Legacy Redis cluster edition. </li><li>`2`: Redis 2.8 master-replica edition. </li><li>`3`: CKV master-replica edition. </li><li>`4`: CKV cluster edition. </li><li>`5`: Redis 2.8 standalone edition. </li><li>`6`: Redis 4.0 master-replica edition. </li><li>`7`: Redis 4.0 cluster edition. </li><li>8: Redis 5.0 master-replica edition. </li><li>`9`: Redis 5.0 cluster edition. </li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Array of the search keywords, which can query the instance by its ID, name, IP address.
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Instance product version. If this parameter is not passed in or the array is empty, the instances will not be filtered based this parameter by default. <ul><li>`local`: local disk edition. </li><li>`cloud`: Cloud disk edition. </li><li>`cdc`: Dedicated cluster edition. </li></ul>
                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                    /**
                     * Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * AZ deployment mode. <ul><li>`singleaz`: Single-AZ. </li><li>`1`: Multi-AZ. </li></ul>
                     */
                    std::string m_azMode;
                    bool m_azModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
