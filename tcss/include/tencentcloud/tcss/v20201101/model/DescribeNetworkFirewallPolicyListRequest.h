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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeNetworkFirewallPolicyList request structure.
                */
                class DescribeNetworkFirewallPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeNetworkFirewallPolicyListRequest();
                    ~DescribeNetworkFirewallPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Maximum number of records per query
                     * @return Limit Maximum number of records per query
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of records per query
                     * @param _limit Maximum number of records per query
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
                     * 获取Name - String
Name. Valid values: `ClusterName`, `ClusterId`, `ClusterType`, `Region`, `ClusterCheckMode`, `ClusterAutoCheck`.
                     * @return Filters Name - String
Name. Valid values: `ClusterName`, `ClusterId`, `ClusterType`, `Region`, `ClusterCheckMode`, `ClusterAutoCheck`.
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Name - String
Name. Valid values: `ClusterName`, `ClusterId`, `ClusterType`, `Region`, `ClusterCheckMode`, `ClusterAutoCheck`.
                     * @param _filters Name - String
Name. Valid values: `ClusterName`, `ClusterId`, `ClusterType`, `Region`, `ClusterCheckMode`, `ClusterAutoCheck`.
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc`, `desc`.
                     * @return Order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`.
                     * @param _order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of records per query
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name - String
Name. Valid values: `ClusterName`, `ClusterId`, `ClusterType`, `Region`, `ClusterCheckMode`, `ClusterAutoCheck`.
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc`, `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYLISTREQUEST_H_
