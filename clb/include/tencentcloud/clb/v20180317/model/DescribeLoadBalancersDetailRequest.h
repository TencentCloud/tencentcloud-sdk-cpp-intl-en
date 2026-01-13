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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancersDetail request structure.
                */
                class DescribeLoadBalancersDetailRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersDetailRequest();
                    ~DescribeLoadBalancersDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of CLB instance lists returned. Default value: 20; maximum value: 100.
                     * @return Limit Number of CLB instance lists returned. Default value: 20; maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of CLB instance lists returned. Default value: 20; maximum value: 100.
                     * @param _limit Number of CLB instance lists returned. Default value: 20; maximum value: 100.
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
                     * 获取Starting offset of the CLB instance list returned. Default value: 0.
                     * @return Offset Starting offset of the CLB instance list returned. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the CLB instance list returned. Default value: 0.
                     * @param _offset Starting offset of the CLB instance list returned. Default value: 0.
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
                     * 获取List of fields. Only fields specified will be returned. If it’s left blank, `null` is returned. The fields `LoadBalancerId` and `LoadBalancerName` are added by default. For details about fields, see <a href="https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>.
                     * @return Fields List of fields. Only fields specified will be returned. If it’s left blank, `null` is returned. The fields `LoadBalancerId` and `LoadBalancerName` are added by default. For details about fields, see <a href="https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置List of fields. Only fields specified will be returned. If it’s left blank, `null` is returned. The fields `LoadBalancerId` and `LoadBalancerName` are added by default. For details about fields, see <a href="https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>.
                     * @param _fields List of fields. Only fields specified will be returned. If it’s left blank, `null` is returned. The fields `LoadBalancerId` and `LoadBalancerName` are added by default. For details about fields, see <a href="https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>.
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the Target GROUP or a non-Target GROUP. valid values: NODE, GROUP.
                     * @return TargetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the Target GROUP or a non-Target GROUP. valid values: NODE, GROUP.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the Target GROUP or a non-Target GROUP. valid values: NODE, GROUP.
                     * @param _targetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the Target GROUP or a non-Target GROUP. valid values: NODE, GROUP.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Querying conditions for cloud load balancer detailed information list. detailed filter criteria.
- loadbalancer-id
Filter by [clb ID], for example: lb-rbw5skde.
Type: String.
Required: No
Method for obtaining: [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1).
- project-id
Filters by [project ID]. for example: "0", "123".
Type: String.
Required: No
Method for obtaining: [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
- network
Filters by [clb network type]. for example: Public.
Type: String.
Required: No
Valid values: Private (Private network), Public (Public network).
- vip
Filter by [cloud load balancer VIP], such as "1.1.1.1", "2204::22:3".
Type: String.
Required: No
- vpcid
Filter by the vpc to which the cloud load balancer belongs, such as "vpc-12345678".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- target-ip
Filters by the private network IP of the backend destination. for example: "1.1.1.1", "2203::214:4".
Type: String.
Required: No
- zone
Filter by [availability zone of the cloud load balancer]. for example: "ap-guangzhou-1".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- tag-key
Filters by [tag key of the cloud load balancer tag], for example: "name".
Type: String.
Required: No
Method for obtaining: [DescribeTags](https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1).
- tag:*
Filter by [cloud load balancer tag], where ':' is followed by the tag key. for example, to filter by tag key 'name' with tag Values 'zhangsan' and 'lisi', use {"name": "tag:name","Values": ["zhangsan", "lisi"]}.
Type: String.
Required: No
Method for obtaining: [DescribeTagKeys](https://www.tencentcloud.com/document/api/651/35318?from_cn_redirect=1).
- fuzzy-search
Searches by [clb VIP, clb name] using fuzzy search, for example: "1.1".
Type: String.
Required: No
                     * @return Filters Querying conditions for cloud load balancer detailed information list. detailed filter criteria.
- loadbalancer-id
Filter by [clb ID], for example: lb-rbw5skde.
Type: String.
Required: No
Method for obtaining: [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1).
- project-id
Filters by [project ID]. for example: "0", "123".
Type: String.
Required: No
Method for obtaining: [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
- network
Filters by [clb network type]. for example: Public.
Type: String.
Required: No
Valid values: Private (Private network), Public (Public network).
- vip
Filter by [cloud load balancer VIP], such as "1.1.1.1", "2204::22:3".
Type: String.
Required: No
- vpcid
Filter by the vpc to which the cloud load balancer belongs, such as "vpc-12345678".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- target-ip
Filters by the private network IP of the backend destination. for example: "1.1.1.1", "2203::214:4".
Type: String.
Required: No
- zone
Filter by [availability zone of the cloud load balancer]. for example: "ap-guangzhou-1".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- tag-key
Filters by [tag key of the cloud load balancer tag], for example: "name".
Type: String.
Required: No
Method for obtaining: [DescribeTags](https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1).
- tag:*
Filter by [cloud load balancer tag], where ':' is followed by the tag key. for example, to filter by tag key 'name' with tag Values 'zhangsan' and 'lisi', use {"name": "tag:name","Values": ["zhangsan", "lisi"]}.
Type: String.
Required: No
Method for obtaining: [DescribeTagKeys](https://www.tencentcloud.com/document/api/651/35318?from_cn_redirect=1).
- fuzzy-search
Searches by [clb VIP, clb name] using fuzzy search, for example: "1.1".
Type: String.
Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Querying conditions for cloud load balancer detailed information list. detailed filter criteria.
- loadbalancer-id
Filter by [clb ID], for example: lb-rbw5skde.
Type: String.
Required: No
Method for obtaining: [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1).
- project-id
Filters by [project ID]. for example: "0", "123".
Type: String.
Required: No
Method for obtaining: [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
- network
Filters by [clb network type]. for example: Public.
Type: String.
Required: No
Valid values: Private (Private network), Public (Public network).
- vip
Filter by [cloud load balancer VIP], such as "1.1.1.1", "2204::22:3".
Type: String.
Required: No
- vpcid
Filter by the vpc to which the cloud load balancer belongs, such as "vpc-12345678".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- target-ip
Filters by the private network IP of the backend destination. for example: "1.1.1.1", "2203::214:4".
Type: String.
Required: No
- zone
Filter by [availability zone of the cloud load balancer]. for example: "ap-guangzhou-1".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- tag-key
Filters by [tag key of the cloud load balancer tag], for example: "name".
Type: String.
Required: No
Method for obtaining: [DescribeTags](https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1).
- tag:*
Filter by [cloud load balancer tag], where ':' is followed by the tag key. for example, to filter by tag key 'name' with tag Values 'zhangsan' and 'lisi', use {"name": "tag:name","Values": ["zhangsan", "lisi"]}.
Type: String.
Required: No
Method for obtaining: [DescribeTagKeys](https://www.tencentcloud.com/document/api/651/35318?from_cn_redirect=1).
- fuzzy-search
Searches by [clb VIP, clb name] using fuzzy search, for example: "1.1".
Type: String.
Required: No
                     * @param _filters Querying conditions for cloud load balancer detailed information list. detailed filter criteria.
- loadbalancer-id
Filter by [clb ID], for example: lb-rbw5skde.
Type: String.
Required: No
Method for obtaining: [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1).
- project-id
Filters by [project ID]. for example: "0", "123".
Type: String.
Required: No
Method for obtaining: [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
- network
Filters by [clb network type]. for example: Public.
Type: String.
Required: No
Valid values: Private (Private network), Public (Public network).
- vip
Filter by [cloud load balancer VIP], such as "1.1.1.1", "2204::22:3".
Type: String.
Required: No
- vpcid
Filter by the vpc to which the cloud load balancer belongs, such as "vpc-12345678".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- target-ip
Filters by the private network IP of the backend destination. for example: "1.1.1.1", "2203::214:4".
Type: String.
Required: No
- zone
Filter by [availability zone of the cloud load balancer]. for example: "ap-guangzhou-1".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- tag-key
Filters by [tag key of the cloud load balancer tag], for example: "name".
Type: String.
Required: No
Method for obtaining: [DescribeTags](https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1).
- tag:*
Filter by [cloud load balancer tag], where ':' is followed by the tag key. for example, to filter by tag key 'name' with tag Values 'zhangsan' and 'lisi', use {"name": "tag:name","Values": ["zhangsan", "lisi"]}.
Type: String.
Required: No
Method for obtaining: [DescribeTagKeys](https://www.tencentcloud.com/document/api/651/35318?from_cn_redirect=1).
- fuzzy-search
Searches by [clb VIP, clb name] using fuzzy search, for example: "1.1".
Type: String.
Required: No
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Number of CLB instance lists returned. Default value: 20; maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset of the CLB instance list returned. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * List of fields. Only fields specified will be returned. If it’s left blank, `null` is returned. The fields `LoadBalancerId` and `LoadBalancerName` are added by default. For details about fields, see <a href="https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>.
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the Target GROUP or a non-Target GROUP. valid values: NODE, GROUP.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Querying conditions for cloud load balancer detailed information list. detailed filter criteria.
- loadbalancer-id
Filter by [clb ID], for example: lb-rbw5skde.
Type: String.
Required: No
Method for obtaining: [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/1108/48459?from_cn_redirect=1).
- project-id
Filters by [project ID]. for example: "0", "123".
Type: String.
Required: No
Method for obtaining: [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
- network
Filters by [clb network type]. for example: Public.
Type: String.
Required: No
Valid values: Private (Private network), Public (Public network).
- vip
Filter by [cloud load balancer VIP], such as "1.1.1.1", "2204::22:3".
Type: String.
Required: No
- vpcid
Filter by the vpc to which the cloud load balancer belongs, such as "vpc-12345678".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- target-ip
Filters by the private network IP of the backend destination. for example: "1.1.1.1", "2203::214:4".
Type: String.
Required: No
- zone
Filter by [availability zone of the cloud load balancer]. for example: "ap-guangzhou-1".
Type: String.
Required: No
Method for obtaining: [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
- tag-key
Filters by [tag key of the cloud load balancer tag], for example: "name".
Type: String.
Required: No
Method for obtaining: [DescribeTags](https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1).
- tag:*
Filter by [cloud load balancer tag], where ':' is followed by the tag key. for example, to filter by tag key 'name' with tag Values 'zhangsan' and 'lisi', use {"name": "tag:name","Values": ["zhangsan", "lisi"]}.
Type: String.
Required: No
Method for obtaining: [DescribeTagKeys](https://www.tencentcloud.com/document/api/651/35318?from_cn_redirect=1).
- fuzzy-search
Searches by [clb VIP, clb name] using fuzzy search, for example: "1.1".
Type: String.
Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
