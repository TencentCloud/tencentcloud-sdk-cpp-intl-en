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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
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
                     * 获取AZ of the cluster instance. If this is not passed in, all AZs are used by default
                     * @return Zone AZ of the cluster instance. If this is not passed in, all AZs are used by default
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ of the cluster instance. If this is not passed in, all AZs are used by default
                     * @param _zone AZ of the cluster instance. If this is not passed in, all AZs are used by default
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取List of cluster instance IDs
                     * @return InstanceIds List of cluster instance IDs
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of cluster instance IDs
                     * @param _instanceIds List of cluster instance IDs
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
                     * 获取List of cluster instance names
                     * @return InstanceNames List of cluster instance names
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置List of cluster instance names
                     * @param _instanceNames List of cluster instance names
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取Pagination start value. Default value: 0
                     * @return Offset Pagination start value. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination start value. Default value: 0
                     * @param _offset Pagination start value. Default value: 0
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
                     * 获取Number of entries per page. Default value: 20
                     * @return Limit Number of entries per page. Default value: 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 20
                     * @param _limit Number of entries per page. Default value: 20
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
                     * 获取The sorting field. <li>1: Instance ID </li><li>2: Instance name </li><li>3: AZ </li><li>4: Creation time </li>If `OrderByKey` is not passed in, sorting is performed by creation time in descending order.
                     * @return OrderByKey The sorting field. <li>1: Instance ID </li><li>2: Instance name </li><li>3: AZ </li><li>4: Creation time </li>If `OrderByKey` is not passed in, sorting is performed by creation time in descending order.
                     * 
                     */
                    uint64_t GetOrderByKey() const;

                    /**
                     * 设置The sorting field. <li>1: Instance ID </li><li>2: Instance name </li><li>3: AZ </li><li>4: Creation time </li>If `OrderByKey` is not passed in, sorting is performed by creation time in descending order.
                     * @param _orderByKey The sorting field. <li>1: Instance ID </li><li>2: Instance name </li><li>3: AZ </li><li>4: Creation time </li>If `OrderByKey` is not passed in, sorting is performed by creation time in descending order.
                     * 
                     */
                    void SetOrderByKey(const uint64_t& _orderByKey);

                    /**
                     * 判断参数 OrderByKey 是否已赋值
                     * @return OrderByKey 是否已赋值
                     * 
                     */
                    bool OrderByKeyHasBeenSet() const;

                    /**
                     * 获取Sorting order <li>0: ascending </li><li>1: descending </li>If orderByKey is passed in but orderByType is not, ascending order is used by default
                     * @return OrderByType Sorting order <li>0: ascending </li><li>1: descending </li>If orderByKey is passed in but orderByType is not, ascending order is used by default
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置Sorting order <li>0: ascending </li><li>1: descending </li>If orderByKey is passed in but orderByType is not, ascending order is used by default
                     * @param _orderByType Sorting order <li>0: ascending </li><li>1: descending </li>If orderByKey is passed in but orderByType is not, ascending order is used by default
                     * 
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Node tag information list
                     * @return TagList Node tag information list
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置Node tag information list
                     * @param _tagList Node tag information list
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取VPC VIP list
                     * @return IpList VPC VIP list
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置VPC VIP list
                     * @param _ipList VPC VIP list
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取List of availability zones
                     * @return ZoneList List of availability zones
                     * 
                     */
                    std::vector<std::string> GetZoneList() const;

                    /**
                     * 设置List of availability zones
                     * @param _zoneList List of availability zones
                     * 
                     */
                    void SetZoneList(const std::vector<std::string>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取The health status filter. Valid values: `0` (green), `1` (yellow), `2` (red), `-1` (unknown).
                     * @return HealthStatus The health status filter. Valid values: `0` (green), `1` (yellow), `2` (red), `-1` (unknown).
                     * 
                     */
                    std::vector<int64_t> GetHealthStatus() const;

                    /**
                     * 设置The health status filter. Valid values: `0` (green), `1` (yellow), `2` (red), `-1` (unknown).
                     * @param _healthStatus The health status filter. Valid values: `0` (green), `1` (yellow), `2` (red), `-1` (unknown).
                     * 
                     */
                    void SetHealthStatus(const std::vector<int64_t>& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取VPC IDs
                     * @return VpcIds VPC IDs
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置VPC IDs
                     * @param _vpcIds VPC IDs
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                private:

                    /**
                     * AZ of the cluster instance. If this is not passed in, all AZs are used by default
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * List of cluster instance IDs
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of cluster instance names
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * Pagination start value. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The sorting field. <li>1: Instance ID </li><li>2: Instance name </li><li>3: AZ </li><li>4: Creation time </li>If `OrderByKey` is not passed in, sorting is performed by creation time in descending order.
                     */
                    uint64_t m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * Sorting order <li>0: ascending </li><li>1: descending </li>If orderByKey is passed in but orderByType is not, ascending order is used by default
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Node tag information list
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * VPC VIP list
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * List of availability zones
                     */
                    std::vector<std::string> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * The health status filter. Valid values: `0` (green), `1` (yellow), `2` (red), `-1` (unknown).
                     */
                    std::vector<int64_t> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * VPC IDs
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
