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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/Filter.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeGatewayLoadBalancers request structure.
                */
                class DescribeGatewayLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeGatewayLoadBalancersRequest();
                    ~DescribeGatewayLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取GWLB instance ID. Batch filtering is supported with a maximum of 20 instance IDs.
                     * @return LoadBalancerIds GWLB instance ID. Batch filtering is supported with a maximum of 20 instance IDs.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置GWLB instance ID. Batch filtering is supported with a maximum of 20 instance IDs.
                     * @param _loadBalancerIds GWLB instance ID. Batch filtering is supported with a maximum of 20 instance IDs.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Number of GWLB instances returned in a batch, with a default value of 20 and a maximum value of 100.
                     * @return Limit Number of GWLB instances returned in a batch, with a default value of 20 and a maximum value of 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of GWLB instances returned in a batch, with a default value of 20 and a maximum value of 100.
                     * @param _limit Number of GWLB instances returned in a batch, with a default value of 20 and a maximum value of 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Starting offset for returning the list of GWLB instances, with a default value of 0.
                     * @return Offset Starting offset for returning the list of GWLB instances, with a default value of 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting offset for returning the list of GWLB instances, with a default value of 0.
                     * @param _offset Starting offset for returning the list of GWLB instances, with a default value of 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter criteria for querying the CLB details list. For each request, the maximum value of Filters is 10, and the maximum value of Filter.Values is 100.Filter.Name and Filter.Values are both required. Detailed filter criteria are as follows:- name - String - required: No - (filter criteria) filter by GWLB instance name, such as "gwlb-xxxx".- VpcId - String - required: No - (filter criteria) filter by the VPC to which the GWLB instance belongs, such as "vpc-bhqk****".
                     * @return Filters Filter criteria for querying the CLB details list. For each request, the maximum value of Filters is 10, and the maximum value of Filter.Values is 100.Filter.Name and Filter.Values are both required. Detailed filter criteria are as follows:- name - String - required: No - (filter criteria) filter by GWLB instance name, such as "gwlb-xxxx".- VpcId - String - required: No - (filter criteria) filter by the VPC to which the GWLB instance belongs, such as "vpc-bhqk****".
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria for querying the CLB details list. For each request, the maximum value of Filters is 10, and the maximum value of Filter.Values is 100.Filter.Name and Filter.Values are both required. Detailed filter criteria are as follows:- name - String - required: No - (filter criteria) filter by GWLB instance name, such as "gwlb-xxxx".- VpcId - String - required: No - (filter criteria) filter by the VPC to which the GWLB instance belongs, such as "vpc-bhqk****".
                     * @param _filters Filter criteria for querying the CLB details list. For each request, the maximum value of Filters is 10, and the maximum value of Filter.Values is 100.Filter.Name and Filter.Values are both required. Detailed filter criteria are as follows:- name - String - required: No - (filter criteria) filter by GWLB instance name, such as "gwlb-xxxx".- VpcId - String - required: No - (filter criteria) filter by the VPC to which the GWLB instance belongs, such as "vpc-bhqk****".
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Search field, for fuzzy matching of name and VIP.
                     * @return SearchKey Search field, for fuzzy matching of name and VIP.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search field, for fuzzy matching of name and VIP.
                     * @param _searchKey Search field, for fuzzy matching of name and VIP.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * GWLB instance ID. Batch filtering is supported with a maximum of 20 instance IDs.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Number of GWLB instances returned in a batch, with a default value of 20 and a maximum value of 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset for returning the list of GWLB instances, with a default value of 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria for querying the CLB details list. For each request, the maximum value of Filters is 10, and the maximum value of Filter.Values is 100.Filter.Name and Filter.Values are both required. Detailed filter criteria are as follows:- name - String - required: No - (filter criteria) filter by GWLB instance name, such as "gwlb-xxxx".- VpcId - String - required: No - (filter criteria) filter by the VPC to which the GWLB instance belongs, such as "vpc-bhqk****".
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Search field, for fuzzy matching of name and VIP.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_
