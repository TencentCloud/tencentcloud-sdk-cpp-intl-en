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
                     * 获取When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you should select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * @return TargetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you should select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you should select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     * @param _targetType When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you should select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
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
                     * 获取Filter condition of querying lists describing CLB instance details:
<li> loadbalancer-id - String - Required: no - (Filter condition) CLB instance ID, such as "lb-12345678". </li>
<li> project-id - String - Required: no - (Filter condition) Project ID, such as "0" and "123".</li>
<li> network - String - Required: no - (Filter condition) Network type of the CLB instance, such as "Public" and "Private".</li>
<li> vip - String - Required: no - (Filter condition) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
<li> target-ip - String - Required: no - (Filter condition) Private IP of the target real servers, such as"1.1.1.1" and "2203::214:4".</li>
<li> vpcid - String - Required: no - (Filter condition) Identifier of the VPC instance to which the CLB instance belongs, such as "vpc-12345678".</li>
<li> zone - String - Required: no - (Filter condition) Availability zone where the CLB instance resides, such as "ap-guangzhou-1".</li>
<li> tag-key - String - Required: no - (Filter condition) Tag key of the CLB instance, such as "name".</li>
<li> tag:* - String - Required: no - (Filter condition) CLB instance tag, followed by tag key after the colon ':'. For example, use {"Name": "tag:name","Values": ["zhangsan", "lisi"]} to filter the tag key “name” with the tag value “zhangsan” and “lisi”.</li>
<li> fuzzy-search - String - Required: no - (Filter condition) Fuzzy search for CLB instance VIP and CLB instance name, such as "1.1".</li>
                     * @return Filters Filter condition of querying lists describing CLB instance details:
<li> loadbalancer-id - String - Required: no - (Filter condition) CLB instance ID, such as "lb-12345678". </li>
<li> project-id - String - Required: no - (Filter condition) Project ID, such as "0" and "123".</li>
<li> network - String - Required: no - (Filter condition) Network type of the CLB instance, such as "Public" and "Private".</li>
<li> vip - String - Required: no - (Filter condition) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
<li> target-ip - String - Required: no - (Filter condition) Private IP of the target real servers, such as"1.1.1.1" and "2203::214:4".</li>
<li> vpcid - String - Required: no - (Filter condition) Identifier of the VPC instance to which the CLB instance belongs, such as "vpc-12345678".</li>
<li> zone - String - Required: no - (Filter condition) Availability zone where the CLB instance resides, such as "ap-guangzhou-1".</li>
<li> tag-key - String - Required: no - (Filter condition) Tag key of the CLB instance, such as "name".</li>
<li> tag:* - String - Required: no - (Filter condition) CLB instance tag, followed by tag key after the colon ':'. For example, use {"Name": "tag:name","Values": ["zhangsan", "lisi"]} to filter the tag key “name” with the tag value “zhangsan” and “lisi”.</li>
<li> fuzzy-search - String - Required: no - (Filter condition) Fuzzy search for CLB instance VIP and CLB instance name, such as "1.1".</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition of querying lists describing CLB instance details:
<li> loadbalancer-id - String - Required: no - (Filter condition) CLB instance ID, such as "lb-12345678". </li>
<li> project-id - String - Required: no - (Filter condition) Project ID, such as "0" and "123".</li>
<li> network - String - Required: no - (Filter condition) Network type of the CLB instance, such as "Public" and "Private".</li>
<li> vip - String - Required: no - (Filter condition) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
<li> target-ip - String - Required: no - (Filter condition) Private IP of the target real servers, such as"1.1.1.1" and "2203::214:4".</li>
<li> vpcid - String - Required: no - (Filter condition) Identifier of the VPC instance to which the CLB instance belongs, such as "vpc-12345678".</li>
<li> zone - String - Required: no - (Filter condition) Availability zone where the CLB instance resides, such as "ap-guangzhou-1".</li>
<li> tag-key - String - Required: no - (Filter condition) Tag key of the CLB instance, such as "name".</li>
<li> tag:* - String - Required: no - (Filter condition) CLB instance tag, followed by tag key after the colon ':'. For example, use {"Name": "tag:name","Values": ["zhangsan", "lisi"]} to filter the tag key “name” with the tag value “zhangsan” and “lisi”.</li>
<li> fuzzy-search - String - Required: no - (Filter condition) Fuzzy search for CLB instance VIP and CLB instance name, such as "1.1".</li>
                     * @param _filters Filter condition of querying lists describing CLB instance details:
<li> loadbalancer-id - String - Required: no - (Filter condition) CLB instance ID, such as "lb-12345678". </li>
<li> project-id - String - Required: no - (Filter condition) Project ID, such as "0" and "123".</li>
<li> network - String - Required: no - (Filter condition) Network type of the CLB instance, such as "Public" and "Private".</li>
<li> vip - String - Required: no - (Filter condition) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
<li> target-ip - String - Required: no - (Filter condition) Private IP of the target real servers, such as"1.1.1.1" and "2203::214:4".</li>
<li> vpcid - String - Required: no - (Filter condition) Identifier of the VPC instance to which the CLB instance belongs, such as "vpc-12345678".</li>
<li> zone - String - Required: no - (Filter condition) Availability zone where the CLB instance resides, such as "ap-guangzhou-1".</li>
<li> tag-key - String - Required: no - (Filter condition) Tag key of the CLB instance, such as "name".</li>
<li> tag:* - String - Required: no - (Filter condition) CLB instance tag, followed by tag key after the colon ':'. For example, use {"Name": "tag:name","Values": ["zhangsan", "lisi"]} to filter the tag key “name” with the tag value “zhangsan” and “lisi”.</li>
<li> fuzzy-search - String - Required: no - (Filter condition) Fuzzy search for CLB instance VIP and CLB instance name, such as "1.1".</li>
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
                     * When the Fields include TargetId, TargetAddress, TargetPort, TargetWeight, ListenerId, Protocol, Port, LocationId, Domain, and Url, you should select exporting the Target of the target group or a non-target group. Valid values: NODE, GROUP.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Filter condition of querying lists describing CLB instance details:
<li> loadbalancer-id - String - Required: no - (Filter condition) CLB instance ID, such as "lb-12345678". </li>
<li> project-id - String - Required: no - (Filter condition) Project ID, such as "0" and "123".</li>
<li> network - String - Required: no - (Filter condition) Network type of the CLB instance, such as "Public" and "Private".</li>
<li> vip - String - Required: no - (Filter condition) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
<li> target-ip - String - Required: no - (Filter condition) Private IP of the target real servers, such as"1.1.1.1" and "2203::214:4".</li>
<li> vpcid - String - Required: no - (Filter condition) Identifier of the VPC instance to which the CLB instance belongs, such as "vpc-12345678".</li>
<li> zone - String - Required: no - (Filter condition) Availability zone where the CLB instance resides, such as "ap-guangzhou-1".</li>
<li> tag-key - String - Required: no - (Filter condition) Tag key of the CLB instance, such as "name".</li>
<li> tag:* - String - Required: no - (Filter condition) CLB instance tag, followed by tag key after the colon ':'. For example, use {"Name": "tag:name","Values": ["zhangsan", "lisi"]} to filter the tag key “name” with the tag value “zhangsan” and “lisi”.</li>
<li> fuzzy-search - String - Required: no - (Filter condition) Fuzzy search for CLB instance VIP and CLB instance name, such as "1.1".</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSDETAILREQUEST_H_
