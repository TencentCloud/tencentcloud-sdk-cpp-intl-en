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
                     * 获取<p>AZ to which the cluster instance belongs. All AZs are selected by default if this parameter is not specified.</p>
                     * @return Zone <p>AZ to which the cluster instance belongs. All AZs are selected by default if this parameter is not specified.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ to which the cluster instance belongs. All AZs are selected by default if this parameter is not specified.</p>
                     * @param _zone <p>AZ to which the cluster instance belongs. All AZs are selected by default if this parameter is not specified.</p>
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
                     * 获取<p>Cluster instance ID list</p>
                     * @return InstanceIds <p>Cluster instance ID list</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Cluster instance ID list</p>
                     * @param _instanceIds <p>Cluster instance ID list</p>
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
                     * 获取<p>Cluster instance name list.</p>
                     * @return InstanceNames <p>Cluster instance name list.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置<p>Cluster instance name list.</p>
                     * @param _instanceNames <p>Cluster instance name list.</p>
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
                     * 获取<p>Pagination starting value. Default value: 0</p>
                     * @return Offset <p>Pagination starting value. Default value: 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination starting value. Default value: 0</p>
                     * @param _offset <p>Pagination starting value. Default value: 0</p>
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
                     * 获取<p>Page size. Default value: 20</p>
                     * @return Limit <p>Page size. Default value: 20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Page size. Default value: 20</p>
                     * @param _limit <p>Page size. Default value: 20</p>
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
                     * 获取<p>Sorting field<li>1: Instance ID</li><li>2: Instance name</li><li>3: Availability zone</li><li>4: Creation time</li>If orderByKey is not transmitted, sort by creation time in descending order</p>
                     * @return OrderByKey <p>Sorting field<li>1: Instance ID</li><li>2: Instance name</li><li>3: Availability zone</li><li>4: Creation time</li>If orderByKey is not transmitted, sort by creation time in descending order</p>
                     * 
                     */
                    uint64_t GetOrderByKey() const;

                    /**
                     * 设置<p>Sorting field<li>1: Instance ID</li><li>2: Instance name</li><li>3: Availability zone</li><li>4: Creation time</li>If orderByKey is not transmitted, sort by creation time in descending order</p>
                     * @param _orderByKey <p>Sorting field<li>1: Instance ID</li><li>2: Instance name</li><li>3: Availability zone</li><li>4: Creation time</li>If orderByKey is not transmitted, sort by creation time in descending order</p>
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
                     * 获取<p>Sorting method<li>0: ascending</li><li>1: descending</li>If orderByKey is passed but orderByType is not, ascending by default</p>
                     * @return OrderByType <p>Sorting method<li>0: ascending</li><li>1: descending</li>If orderByKey is passed but orderByType is not, ascending by default</p>
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置<p>Sorting method<li>0: ascending</li><li>1: descending</li>If orderByKey is passed but orderByType is not, ascending by default</p>
                     * @param _orderByType <p>Sorting method<li>0: ascending</li><li>1: descending</li>If orderByKey is passed but orderByType is not, ascending by default</p>
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
                     * 获取<p>Node tag information list</p>
                     * @return TagList <p>Node tag information list</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>Node tag information list</p>
                     * @param _tagList <p>Node tag information list</p>
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
                     * 获取<p>Private network vip list</p>
                     * @return IpList <p>Private network vip list</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>Private network vip list</p>
                     * @param _ipList <p>Private network vip list</p>
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
                     * 获取<p>IP list of cluster nodes</p>
                     * @return NodeIps <p>IP list of cluster nodes</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIps() const;

                    /**
                     * 设置<p>IP list of cluster nodes</p>
                     * @param _nodeIps <p>IP list of cluster nodes</p>
                     * 
                     */
                    void SetNodeIps(const std::vector<std::string>& _nodeIps);

                    /**
                     * 判断参数 NodeIps 是否已赋值
                     * @return NodeIps 是否已赋值
                     * 
                     */
                    bool NodeIpsHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone list</p>
                     * @return ZoneList <p>Availability zone list</p>
                     * 
                     */
                    std::vector<std::string> GetZoneList() const;

                    /**
                     * 设置<p>Availability zone list</p>
                     * @param _zoneList <p>Availability zone list</p>
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
                     * 获取<p>Health status filter list: 0 represents green, 1 represents yellow, 2 represents red, -1 represents unknown</p>
                     * @return HealthStatus <p>Health status filter list: 0 represents green, 1 represents yellow, 2 represents red, -1 represents unknown</p>
                     * 
                     */
                    std::vector<int64_t> GetHealthStatus() const;

                    /**
                     * 设置<p>Health status filter list: 0 represents green, 1 represents yellow, 2 represents red, -1 represents unknown</p>
                     * @param _healthStatus <p>Health status filter list: 0 represents green, 1 represents yellow, 2 represents red, -1 represents unknown</p>
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
                     * 获取<p>Vpc list filter item</p>
                     * @return VpcIds <p>Vpc list filter item</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>Vpc list filter item</p>
                     * @param _vpcIds <p>Vpc list filter item</p>
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
                     * 获取<p>cdc cluster id</p>
                     * @return CdcId <p>cdc cluster id</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdc cluster id</p>
                     * @param _cdcId <p>cdc cluster id</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * <p>AZ to which the cluster instance belongs. All AZs are selected by default if this parameter is not specified.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Cluster instance ID list</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Cluster instance name list.</p>
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * <p>Pagination starting value. Default value: 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Page size. Default value: 20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Sorting field<li>1: Instance ID</li><li>2: Instance name</li><li>3: Availability zone</li><li>4: Creation time</li>If orderByKey is not transmitted, sort by creation time in descending order</p>
                     */
                    uint64_t m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * <p>Sorting method<li>0: ascending</li><li>1: descending</li>If orderByKey is passed but orderByType is not, ascending by default</p>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * <p>Node tag information list</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Private network vip list</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>IP list of cluster nodes</p>
                     */
                    std::vector<std::string> m_nodeIps;
                    bool m_nodeIpsHasBeenSet;

                    /**
                     * <p>Availability zone list</p>
                     */
                    std::vector<std::string> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <p>Health status filter list: 0 represents green, 1 represents yellow, 2 represents red, -1 represents unknown</p>
                     */
                    std::vector<int64_t> m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>Vpc list filter item</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>cdc cluster id</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCESREQUEST_H_
