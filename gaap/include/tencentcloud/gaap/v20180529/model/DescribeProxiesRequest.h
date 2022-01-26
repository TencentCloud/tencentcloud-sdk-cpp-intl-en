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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Filter.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxies request structure.
                */
                class DescribeProxiesRequest : public AbstractModel
                {
                public:
                    DescribeProxiesRequest();
                    ~DescribeProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's an old parameter, please switch to ProxyIds.
                     * @return InstanceIds Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's an old parameter, please switch to ProxyIds.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's an old parameter, please switch to ProxyIds.
                     * @param InstanceIds Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's an old parameter, please switch to ProxyIds.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param Offset Offset. The default value is 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. The default value is 20, and the maximum value is 100.
                     * @return Limit Number of results to be returned. The default value is 20, and the maximum value is 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. The default value is 20, and the maximum value is 100.
                     * @param Limit Number of results to be returned. The default value is 20, and the maximum value is 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter condition   
The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. You cannot specify both `InstanceIds` and `Filters` with this parameter. 
ProjectId - String - Required: No - Filter by project ID.   
AccessRegion - String - Required: No - Filter by access region.    
RealServerRegion - String - Required: No - Filter by origin server region.
GroupId - String - Required: No - Filter by connection group ID.
IPAddressVersion - String - Required: No - Filter by IP version.
PackageType - String - Required: No - Filter by package type of connection groups.
                     * @return Filters Filter condition   
The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. You cannot specify both `InstanceIds` and `Filters` with this parameter. 
ProjectId - String - Required: No - Filter by project ID.   
AccessRegion - String - Required: No - Filter by access region.    
RealServerRegion - String - Required: No - Filter by origin server region.
GroupId - String - Required: No - Filter by connection group ID.
IPAddressVersion - String - Required: No - Filter by IP version.
PackageType - String - Required: No - Filter by package type of connection groups.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition   
The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. You cannot specify both `InstanceIds` and `Filters` with this parameter. 
ProjectId - String - Required: No - Filter by project ID.   
AccessRegion - String - Required: No - Filter by access region.    
RealServerRegion - String - Required: No - Filter by origin server region.
GroupId - String - Required: No - Filter by connection group ID.
IPAddressVersion - String - Required: No - Filter by IP version.
PackageType - String - Required: No - Filter by package type of connection groups.
                     * @param Filters Filter condition   
The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. You cannot specify both `InstanceIds` and `Filters` with this parameter. 
ProjectId - String - Required: No - Filter by project ID.   
AccessRegion - String - Required: No - Filter by access region.    
RealServerRegion - String - Required: No - Filter by origin server region.
GroupId - String - Required: No - Filter by connection group ID.
IPAddressVersion - String - Required: No - Filter by IP version.
PackageType - String - Required: No - Filter by package type of connection groups.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's a new parameter, and replaces InstanceIds.
                     * @return ProxyIds Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's a new parameter, and replaces InstanceIds.
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's a new parameter, and replaces InstanceIds.
                     * @param ProxyIds Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's a new parameter, and replaces InstanceIds.
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connections tagged any of them will be pulled.
                     * @return TagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connections tagged any of them will be pulled.
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connections tagged any of them will be pulled.
                     * @param TagSet Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connections tagged any of them will be pulled.
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取When this field is 1, only not-grouped connections are pulled.
When this field is 0, only grouped connections are pulled.
When this field does not exist, all connections are pulled, including both not-grouped and grouped connections.
                     * @return Independent When this field is 1, only not-grouped connections are pulled.
When this field is 0, only grouped connections are pulled.
When this field does not exist, all connections are pulled, including both not-grouped and grouped connections.
                     */
                    int64_t GetIndependent() const;

                    /**
                     * 设置When this field is 1, only not-grouped connections are pulled.
When this field is 0, only grouped connections are pulled.
When this field does not exist, all connections are pulled, including both not-grouped and grouped connections.
                     * @param Independent When this field is 1, only not-grouped connections are pulled.
When this field is 0, only grouped connections are pulled.
When this field does not exist, all connections are pulled, including both not-grouped and grouped connections.
                     */
                    void SetIndependent(const int64_t& _independent);

                    /**
                     * 判断参数 Independent 是否已赋值
                     * @return Independent 是否已赋值
                     */
                    bool IndependentHasBeenSet() const;

                    /**
                     * 获取Specifies how connections are listed. Valid values:
`asc`: ascending order
`desc`: descending order
Default: `desc`
                     * @return Order Specifies how connections are listed. Valid values:
`asc`: ascending order
`desc`: descending order
Default: `desc`
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Specifies how connections are listed. Valid values:
`asc`: ascending order
`desc`: descending order
Default: `desc`
                     * @param Order Specifies how connections are listed. Valid values:
`asc`: ascending order
`desc`: descending order
Default: `desc`
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values:
`create_time`: sort by the creation time
`proxy_id`: sort by the connection ID
`bandwidth`:sort by the bandwidth limit
`concurrent_connections`: sort by the number of concurrent connections
Default: `create_time`
                     * @return OrderField Sorting field. Valid values:
`create_time`: sort by the creation time
`proxy_id`: sort by the connection ID
`bandwidth`:sort by the bandwidth limit
`concurrent_connections`: sort by the number of concurrent connections
Default: `create_time`
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values:
`create_time`: sort by the creation time
`proxy_id`: sort by the connection ID
`bandwidth`:sort by the bandwidth limit
`concurrent_connections`: sort by the number of concurrent connections
Default: `create_time`
                     * @param OrderField Sorting field. Valid values:
`create_time`: sort by the creation time
`proxy_id`: sort by the connection ID
`bandwidth`:sort by the bandwidth limit
`concurrent_connections`: sort by the number of concurrent connections
Default: `create_time`
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's an old parameter, please switch to ProxyIds.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. The default value is 20, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter condition   
The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. You cannot specify both `InstanceIds` and `Filters` with this parameter. 
ProjectId - String - Required: No - Filter by project ID.   
AccessRegion - String - Required: No - Filter by access region.    
RealServerRegion - String - Required: No - Filter by origin server region.
GroupId - String - Required: No - Filter by connection group ID.
IPAddressVersion - String - Required: No - Filter by IP version.
PackageType - String - Required: No - Filter by package type of connection groups.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Queries by one or multiple instance IDs. The upper limit on the number of instances for each request is 100. This parameter does not support specifying InstanceIds and Filters at the same time. It's a new parameter, and replaces InstanceIds.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * Tag list. If this field exists, the list of the resources with the tag will be pulled.
It supports up to 5 tags. If there are two or more tags, the connections tagged any of them will be pulled.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * When this field is 1, only not-grouped connections are pulled.
When this field is 0, only grouped connections are pulled.
When this field does not exist, all connections are pulled, including both not-grouped and grouped connections.
                     */
                    int64_t m_independent;
                    bool m_independentHasBeenSet;

                    /**
                     * Specifies how connections are listed. Valid values:
`asc`: ascending order
`desc`: descending order
Default: `desc`
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field. Valid values:
`create_time`: sort by the creation time
`proxy_id`: sort by the connection ID
`bandwidth`:sort by the bandwidth limit
`concurrent_connections`: sort by the number of concurrent connections
Default: `create_time`
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXIESREQUEST_H_
