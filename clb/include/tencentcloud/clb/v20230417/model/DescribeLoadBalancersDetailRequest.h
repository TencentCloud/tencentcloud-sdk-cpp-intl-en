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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
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
                     * 获取Return the number of Cloud Load Balancer (CLB) lists. Default is 20. Maximum value is 100.
                     * @return Limit Return the number of Cloud Load Balancer (CLB) lists. Default is 20. Maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Return the number of Cloud Load Balancer (CLB) lists. Default is 20. Maximum value is 100.
                     * @param _limit Return the number of Cloud Load Balancer (CLB) lists. Default is 20. Maximum value is 100.
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
                     * 获取Starting offset for returning the list of CLB instances, with a default value of 0.
                     * @return Offset Starting offset for returning the list of CLB instances, with a default value of 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset for returning the list of CLB instances, with a default value of 0.
                     * @param _offset Starting offset for returning the list of CLB instances, with a default value of 0.
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
                     * 获取Select the Fields list to return. The system will only return the Fields filled in Fields. For fillable field details, see <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>. If a related field is not in Fields, this field returns null. The LoadBalancerId and LoadBalancerName Fields are added by default in Fields.
                     * @return Fields Select the Fields list to return. The system will only return the Fields filled in Fields. For fillable field details, see <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>. If a related field is not in Fields, this field returns null. The LoadBalancerId and LoadBalancerName Fields are added by default in Fields.
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置Select the Fields list to return. The system will only return the Fields filled in Fields. For fillable field details, see <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>. If a related field is not in Fields, this field returns null. The LoadBalancerId and LoadBalancerName Fields are added by default in Fields.
                     * @param _fields Select the Fields list to return. The system will only return the Fields filled in Fields. For fillable field details, see <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>. If a related field is not in Fields, this field returns null. The LoadBalancerId and LoadBalancerName Fields are added by default in Fields.
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
                     * 获取When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * @return TargetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * @param _targetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
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
                     * 获取Query the detailed information list of Cloud Load Balancer. Detailed filter criteria:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> project-id - String - Required: No - (Filter condition) Filter by project ID, for example: "0", "123".</li>
<li>network - String - Required: No - (Filter condition) Filter by CLB network type, such as "Public" or "Private".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
<li> target-ip - String - Required: No - (Filtering Conditions) Filter by private ip of the target real server, such as "1.1.1.1", "2203::214:4".</li>
<li> vpcid - String - Required: No - (Filter condition) Filter by the associated vpc ID of the Cloud Load Balancer (CLB), such as "vpc-12345678".</li>
<li> zone - String - Required: No - (Filtering Conditions) Filter by the availability zone the load balancing belongs to, such as "ap-guangzhou-1".</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key of Cloud Load Balancer, such as "name".</li>
<li> tag:* - String - Required: No - (Filter criteria) Filter by the tag of Cloud Load Balancer (CLB), where ':' is followed by the tag key. For example, to filter by tag key 'name' and tag values 'zhangsan' and 'lisi', use {"Name": "tag:name","Values": ["zhangsan", "lisi"]}.</li>
<li>fuzzy-search - String - required: no - (filter condition) fuzzy search by CLB Vip and CLB name, for example: "1.1".</li>
                     * @return Filters Query the detailed information list of Cloud Load Balancer. Detailed filter criteria:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> project-id - String - Required: No - (Filter condition) Filter by project ID, for example: "0", "123".</li>
<li>network - String - Required: No - (Filter condition) Filter by CLB network type, such as "Public" or "Private".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
<li> target-ip - String - Required: No - (Filtering Conditions) Filter by private ip of the target real server, such as "1.1.1.1", "2203::214:4".</li>
<li> vpcid - String - Required: No - (Filter condition) Filter by the associated vpc ID of the Cloud Load Balancer (CLB), such as "vpc-12345678".</li>
<li> zone - String - Required: No - (Filtering Conditions) Filter by the availability zone the load balancing belongs to, such as "ap-guangzhou-1".</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key of Cloud Load Balancer, such as "name".</li>
<li> tag:* - String - Required: No - (Filter criteria) Filter by the tag of Cloud Load Balancer (CLB), where ':' is followed by the tag key. For example, to filter by tag key 'name' and tag values 'zhangsan' and 'lisi', use {"Name": "tag:name","Values": ["zhangsan", "lisi"]}.</li>
<li>fuzzy-search - String - required: no - (filter condition) fuzzy search by CLB Vip and CLB name, for example: "1.1".</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query the detailed information list of Cloud Load Balancer. Detailed filter criteria:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> project-id - String - Required: No - (Filter condition) Filter by project ID, for example: "0", "123".</li>
<li>network - String - Required: No - (Filter condition) Filter by CLB network type, such as "Public" or "Private".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
<li> target-ip - String - Required: No - (Filtering Conditions) Filter by private ip of the target real server, such as "1.1.1.1", "2203::214:4".</li>
<li> vpcid - String - Required: No - (Filter condition) Filter by the associated vpc ID of the Cloud Load Balancer (CLB), such as "vpc-12345678".</li>
<li> zone - String - Required: No - (Filtering Conditions) Filter by the availability zone the load balancing belongs to, such as "ap-guangzhou-1".</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key of Cloud Load Balancer, such as "name".</li>
<li> tag:* - String - Required: No - (Filter criteria) Filter by the tag of Cloud Load Balancer (CLB), where ':' is followed by the tag key. For example, to filter by tag key 'name' and tag values 'zhangsan' and 'lisi', use {"Name": "tag:name","Values": ["zhangsan", "lisi"]}.</li>
<li>fuzzy-search - String - required: no - (filter condition) fuzzy search by CLB Vip and CLB name, for example: "1.1".</li>
                     * @param _filters Query the detailed information list of Cloud Load Balancer. Detailed filter criteria:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> project-id - String - Required: No - (Filter condition) Filter by project ID, for example: "0", "123".</li>
<li>network - String - Required: No - (Filter condition) Filter by CLB network type, such as "Public" or "Private".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
<li> target-ip - String - Required: No - (Filtering Conditions) Filter by private ip of the target real server, such as "1.1.1.1", "2203::214:4".</li>
<li> vpcid - String - Required: No - (Filter condition) Filter by the associated vpc ID of the Cloud Load Balancer (CLB), such as "vpc-12345678".</li>
<li> zone - String - Required: No - (Filtering Conditions) Filter by the availability zone the load balancing belongs to, such as "ap-guangzhou-1".</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key of Cloud Load Balancer, such as "name".</li>
<li> tag:* - String - Required: No - (Filter criteria) Filter by the tag of Cloud Load Balancer (CLB), where ':' is followed by the tag key. For example, to filter by tag key 'name' and tag values 'zhangsan' and 'lisi', use {"Name": "tag:name","Values": ["zhangsan", "lisi"]}.</li>
<li>fuzzy-search - String - required: no - (filter condition) fuzzy search by CLB Vip and CLB name, for example: "1.1".</li>
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
                     * Return the number of Cloud Load Balancer (CLB) lists. Default is 20. Maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset for returning the list of CLB instances, with a default value of 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Select the Fields list to return. The system will only return the Fields filled in Fields. For fillable field details, see <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#LoadBalancerDetail">LoadBalancerDetail</a>. If a related field is not in Fields, this field returns null. The LoadBalancerId and LoadBalancerName Fields are added by default in Fields.
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you must select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Query the detailed information list of Cloud Load Balancer. Detailed filter criteria:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> project-id - String - Required: No - (Filter condition) Filter by project ID, for example: "0", "123".</li>
<li>network - String - Required: No - (Filter condition) Filter by CLB network type, such as "Public" or "Private".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
<li> target-ip - String - Required: No - (Filtering Conditions) Filter by private ip of the target real server, such as "1.1.1.1", "2203::214:4".</li>
<li> vpcid - String - Required: No - (Filter condition) Filter by the associated vpc ID of the Cloud Load Balancer (CLB), such as "vpc-12345678".</li>
<li> zone - String - Required: No - (Filtering Conditions) Filter by the availability zone the load balancing belongs to, such as "ap-guangzhou-1".</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key of Cloud Load Balancer, such as "name".</li>
<li> tag:* - String - Required: No - (Filter criteria) Filter by the tag of Cloud Load Balancer (CLB), where ':' is followed by the tag key. For example, to filter by tag key 'name' and tag values 'zhangsan' and 'lisi', use {"Name": "tag:name","Values": ["zhangsan", "lisi"]}.</li>
<li>fuzzy-search - String - required: no - (filter condition) fuzzy search by CLB Vip and CLB name, for example: "1.1".</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
