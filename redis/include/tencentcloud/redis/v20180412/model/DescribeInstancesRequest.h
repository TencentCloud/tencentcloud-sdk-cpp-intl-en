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
                     * 获取Number of returned results. Default value: 20. Maximum value: 1000.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 1000.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 1000.
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
                     * 获取Instance ID, such as crs-6ubhgouj
                     * @return InstanceId Instance ID, such as crs-6ubhgouj
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as crs-6ubhgouj
                     * @param InstanceId Instance ID, such as crs-6ubhgouj
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Enumerated values: projectId, createtime, instancename, type, curDeadline
                     * @return OrderBy Enumerated values: projectId, createtime, instancename, type, curDeadline
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Enumerated values: projectId, createtime, instancename, type, curDeadline
                     * @param OrderBy Enumerated values: projectId, createtime, instancename, type, curDeadline
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取1: reverse; 0: sequential; reverse by default
                     * @return OrderType 1: reverse; 0: sequential; reverse by default
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1: reverse; 0: sequential; reverse by default
                     * @param OrderType 1: reverse; 0: sequential; reverse by default
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Array of VPC IDs such as 47525. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     * @return VpcIds Array of VPC IDs such as 47525. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as 47525. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     * @param VpcIds Array of VPC IDs such as 47525. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of subnet IDs such as 56854. The array subscript starts from 0.
                     * @return SubnetIds Array of subnet IDs such as 56854. The array subscript starts from 0.
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of subnet IDs such as 56854. The array subscript starts from 0.
                     * @param SubnetIds Array of subnet IDs such as 56854. The array subscript starts from 0.
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Array of project IDs. The array subscript starts from 0.
                     * @return ProjectIds Array of project IDs. The array subscript starts from 0.
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Array of project IDs. The array subscript starts from 0.
                     * @param ProjectIds Array of project IDs. The array subscript starts from 0.
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取ID of the instance to be searched for.
                     * @return SearchKey ID of the instance to be searched for.
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置ID of the instance to be searched for.
                     * @param SearchKey ID of the instance to be searched for.
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

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
                     * 获取Array of VPC IDs such as vpc-sad23jfdfk. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     * @return UniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as vpc-sad23jfdfk. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     * @param UniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of subnet IDs such as subnet-fdj24n34j2. The array subscript starts from 0.
                     * @return UniqSubnetIds Array of subnet IDs such as subnet-fdj24n34j2. The array subscript starts from 0.
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置Array of subnet IDs such as subnet-fdj24n34j2. The array subscript starts from 0.
                     * @param UniqSubnetIds Array of subnet IDs such as subnet-fdj24n34j2. The array subscript starts from 0.
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取Region ID, which has already been disused. The corresponding region can be queried through the common parameter `Region`.
                     * @return RegionIds Region ID, which has already been disused. The corresponding region can be queried through the common parameter `Region`.
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置Region ID, which has already been disused. The corresponding region can be queried through the common parameter `Region`.
                     * @param RegionIds Region ID, which has already been disused. The corresponding region can be queried through the common parameter `Region`.
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     * @return Status Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     * @param Status Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Type edition. 1: Standalone Edition; 2: Master-Replica Edition; 3: Cluster Edition
                     * @return TypeVersion Type edition. 1: Standalone Edition; 2: Master-Replica Edition; 3: Cluster Edition
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置Type edition. 1: Standalone Edition; 2: Master-Replica Edition; 3: Cluster Edition
                     * @param TypeVersion Type edition. 1: Standalone Edition; 2: Master-Replica Edition; 3: Cluster Edition
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取Engine information: Redis-2.8, Redis-4.0, CKV
                     * @return EngineName Engine information: Redis-2.8, Redis-4.0, CKV
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Engine information: Redis-2.8, Redis-4.0, CKV
                     * @param EngineName Engine information: Redis-2.8, Redis-4.0, CKV
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Renewal mode. 0: default status (manual renewal); 1: auto-renewal enabled; 2: auto-renewal disabled
                     * @return AutoRenew Renewal mode. 0: default status (manual renewal); 1: auto-renewal enabled; 2: auto-renewal disabled
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置Renewal mode. 0: default status (manual renewal); 1: auto-renewal enabled; 2: auto-renewal disabled
                     * @param AutoRenew Renewal mode. 0: default status (manual renewal); 1: auto-renewal enabled; 2: auto-renewal disabled
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Billing mode. postpaid: pay-as-you-go; prepaid: monthly subscription
                     * @return BillingMode Billing mode. postpaid: pay-as-you-go; prepaid: monthly subscription
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置Billing mode. postpaid: pay-as-you-go; prepaid: monthly subscription
                     * @param BillingMode Billing mode. postpaid: pay-as-you-go; prepaid: monthly subscription
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Instance type. 1: legacy Redis Cluster Edition, 2: Redis 2.8 Master-Replica Edition, 3: CKV Master-Replica Edition, 4: CKV Cluster Edition, 5: Redis 2.8 Standalone Edition, 6: Redis 4.0 Master-Replica Edition, 7: Redis 4.0 Cluster Edition, 8: Redis 5.0 Master-Replica Edition, 9: Redis 5.0 Cluster Edition
                     * @return Type Instance type. 1: legacy Redis Cluster Edition, 2: Redis 2.8 Master-Replica Edition, 3: CKV Master-Replica Edition, 4: CKV Cluster Edition, 5: Redis 2.8 Standalone Edition, 6: Redis 4.0 Master-Replica Edition, 7: Redis 4.0 Cluster Edition, 8: Redis 5.0 Master-Replica Edition, 9: Redis 5.0 Cluster Edition
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type. 1: legacy Redis Cluster Edition, 2: Redis 2.8 Master-Replica Edition, 3: CKV Master-Replica Edition, 4: CKV Cluster Edition, 5: Redis 2.8 Standalone Edition, 6: Redis 4.0 Master-Replica Edition, 7: Redis 4.0 Cluster Edition, 8: Redis 5.0 Master-Replica Edition, 9: Redis 5.0 Cluster Edition
                     * @param Type Instance type. 1: legacy Redis Cluster Edition, 2: Redis 2.8 Master-Replica Edition, 3: CKV Master-Replica Edition, 4: CKV Cluster Edition, 5: Redis 2.8 Standalone Edition, 6: Redis 4.0 Master-Replica Edition, 7: Redis 4.0 Cluster Edition, 8: Redis 5.0 Master-Replica Edition, 9: Redis 5.0 Cluster Edition
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Search keywords, which can be instance ID, instance name, or complete IP.
                     * @return SearchKeys Search keywords, which can be instance ID, instance name, or complete IP.
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置Search keywords, which can be instance ID, instance name, or complete IP.
                     * @param SearchKeys Search keywords, which can be instance ID, instance name, or complete IP.
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
                     * 获取Filters resources by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return InstanceTags Filters resources by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置Filters resources by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param InstanceTags Filters resources by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Filters resources by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return TagKeys Filters resources by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Filters resources by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param TagKeys Filters resources by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Product editions to be filtered. Valid values: `local` (local disk edition), `cloud` (cloud disk edition), `cdc` (dedicated cluster edition). If this parameter is not passed in, the product will not be filtered by default.
                     * @return ProductVersions Product editions to be filtered. Valid values: `local` (local disk edition), `cloud` (cloud disk edition), `cdc` (dedicated cluster edition). If this parameter is not passed in, the product will not be filtered by default.
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置Product editions to be filtered. Valid values: `local` (local disk edition), `cloud` (cloud disk edition), `cdc` (dedicated cluster edition). If this parameter is not passed in, the product will not be filtered by default.
                     * @param ProductVersions Product editions to be filtered. Valid values: `local` (local disk edition), `cloud` (cloud disk edition), `cdc` (dedicated cluster edition). If this parameter is not passed in, the product will not be filtered by default.
                     */
                    void SetProductVersions(const std::vector<std::string>& _productVersions);

                    /**
                     * 判断参数 ProductVersions 是否已赋值
                     * @return ProductVersions 是否已赋值
                     */
                    bool ProductVersionsHasBeenSet() const;

                private:

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is an integral multiple of `Limit`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Instance ID, such as crs-6ubhgouj
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Enumerated values: projectId, createtime, instancename, type, curDeadline
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1: reverse; 0: sequential; reverse by default
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Array of VPC IDs such as 47525. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * Array of subnet IDs such as 56854. The array subscript starts from 0.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Array of project IDs. The array subscript starts from 0.
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * ID of the instance to be searched for.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Array of VPC IDs such as vpc-sad23jfdfk. The array subscript starts from 0. If this parameter is not passed in, the classic network will be selected by default
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * Array of subnet IDs such as subnet-fdj24n34j2. The array subscript starts from 0.
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * Region ID, which has already been disused. The corresponding region can be queried through the common parameter `Region`.
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Type edition. 1: Standalone Edition; 2: Master-Replica Edition; 3: Cluster Edition
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * Engine information: Redis-2.8, Redis-4.0, CKV
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Renewal mode. 0: default status (manual renewal); 1: auto-renewal enabled; 2: auto-renewal disabled
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Billing mode. postpaid: pay-as-you-go; prepaid: monthly subscription
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Instance type. 1: legacy Redis Cluster Edition, 2: Redis 2.8 Master-Replica Edition, 3: CKV Master-Replica Edition, 4: CKV Cluster Edition, 5: Redis 2.8 Standalone Edition, 6: Redis 4.0 Master-Replica Edition, 7: Redis 4.0 Cluster Edition, 8: Redis 5.0 Master-Replica Edition, 9: Redis 5.0 Cluster Edition
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Search keywords, which can be instance ID, instance name, or complete IP.
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
                     * Filters resources by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Filters resources by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Product editions to be filtered. Valid values: `local` (local disk edition), `cloud` (cloud disk edition), `cdc` (dedicated cluster edition). If this parameter is not passed in, the product will not be filtered by default.
                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
