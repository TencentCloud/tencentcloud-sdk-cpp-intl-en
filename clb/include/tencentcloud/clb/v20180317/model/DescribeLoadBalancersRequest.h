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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

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
                * DescribeLoadBalancers request structure.
                */
                class DescribeLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersRequest();
                    ~DescribeLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance IDs. There can be up to 20 IDs.
                     * @return LoadBalancerIds CLB instance IDs. There can be up to 20 IDs.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance IDs. There can be up to 20 IDs.
                     * @param _loadBalancerIds CLB instance IDs. There can be up to 20 IDs.
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
                     * 获取CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @return LoadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * @param _loadBalancerType CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取CLB instance type. 1: generic CLB instance; 0: classic CLB instance
                     * @return Forward CLB instance type. 1: generic CLB instance; 0: classic CLB instance
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置CLB instance type. 1: generic CLB instance; 0: classic CLB instance
                     * @param _forward CLB instance type. 1: generic CLB instance; 0: classic CLB instance
                     * 
                     */
                    void SetForward(const int64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取CLB instance name.
                     * @return LoadBalancerName CLB instance name.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name.
                     * @param _loadBalancerName CLB instance name.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取The domain name that Tencent Cloud assigned for the CLB instance.
                     * @return Domain The domain name that Tencent Cloud assigned for the CLB instance.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name that Tencent Cloud assigned for the CLB instance.
                     * @param _domain The domain name that Tencent Cloud assigned for the CLB instance.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取VIP address of a CLB instance (there can be multiple addresses)
                     * @return LoadBalancerVips VIP address of a CLB instance (there can be multiple addresses)
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置VIP address of a CLB instance (there can be multiple addresses)
                     * @param _loadBalancerVips VIP address of a CLB instance (there can be multiple addresses)
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取Public IPs of the backend services bound with the load balancer. Only the public IPs of CVMs are supported now.
                     * @return BackendPublicIps Public IPs of the backend services bound with the load balancer. Only the public IPs of CVMs are supported now.
                     * 
                     */
                    std::vector<std::string> GetBackendPublicIps() const;

                    /**
                     * 设置Public IPs of the backend services bound with the load balancer. Only the public IPs of CVMs are supported now.
                     * @param _backendPublicIps Public IPs of the backend services bound with the load balancer. Only the public IPs of CVMs are supported now.
                     * 
                     */
                    void SetBackendPublicIps(const std::vector<std::string>& _backendPublicIps);

                    /**
                     * 判断参数 BackendPublicIps 是否已赋值
                     * @return BackendPublicIps 是否已赋值
                     * 
                     */
                    bool BackendPublicIpsHasBeenSet() const;

                    /**
                     * 获取Private IPs of the backend services bound with the load balancer. Only the private IPs of CVMs are supported now.
                     * @return BackendPrivateIps Private IPs of the backend services bound with the load balancer. Only the private IPs of CVMs are supported now.
                     * 
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置Private IPs of the backend services bound with the load balancer. Only the private IPs of CVMs are supported now.
                     * @param _backendPrivateIps Private IPs of the backend services bound with the load balancer. Only the private IPs of CVMs are supported now.
                     * 
                     */
                    void SetBackendPrivateIps(const std::vector<std::string>& _backendPrivateIps);

                    /**
                     * 判断参数 BackendPrivateIps 是否已赋值
                     * @return BackendPrivateIps 是否已赋值
                     * 
                     */
                    bool BackendPrivateIpsHasBeenSet() const;

                    /**
                     * 获取Data offset. Default value: 0.
                     * @return Offset Data offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0.
                     * @param _offset Data offset. Default value: 0.
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
                     * 获取Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned CLB instances. Default value: 20. Maximum value: 100.
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
                     * 获取Sort by parameter. Value range: LoadBalancerName, CreateTime, Domain, LoadBalancerType.
                     * @return OrderBy Sort by parameter. Value range: LoadBalancerName, CreateTime, Domain, LoadBalancerType.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by parameter. Value range: LoadBalancerName, CreateTime, Domain, LoadBalancerType.
                     * @param _orderBy Sort by parameter. Value range: LoadBalancerName, CreateTime, Domain, LoadBalancerType.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取1: reverse; 0: sequential. Default value: reverse by creation time |
                     * @return OrderType 1: reverse; 0: sequential. Default value: reverse by creation time |
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1: reverse; 0: sequential. Default value: reverse by creation time |
                     * @param _orderType 1: reverse; 0: sequential. Default value: reverse by creation time |
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Search field which fuzzy matches name, domain name, or VIP.
                     * @return SearchKey Search field which fuzzy matches name, domain name, or VIP.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search field which fuzzy matches name, domain name, or VIP.
                     * @param _searchKey Search field which fuzzy matches name, domain name, or VIP.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取ID of the project to which a CLB instance belongs, which can be obtained through the DescribeProject API.
                     * @return ProjectId ID of the project to which a CLB instance belongs, which can be obtained through the DescribeProject API.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which a CLB instance belongs, which can be obtained through the DescribeProject API.
                     * @param _projectId ID of the project to which a CLB instance belongs, which can be obtained through the DescribeProject API.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     * @return WithRs Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     * 
                     */
                    int64_t GetWithRs() const;

                    /**
                     * 设置Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     * @param _withRs Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     * 
                     */
                    void SetWithRs(const int64_t& _withRs);

                    /**
                     * 判断参数 WithRs 是否已赋值
                     * @return WithRs 是否已赋值
                     * 
                     */
                    bool WithRsHasBeenSet() const;

                    /**
                     * 获取VPC where a CLB instance resides, such as vpc-bhqkbhdx.
Basic network does not support queries by VpcId.
                     * @return VpcId VPC where a CLB instance resides, such as vpc-bhqkbhdx.
Basic network does not support queries by VpcId.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC where a CLB instance resides, such as vpc-bhqkbhdx.
Basic network does not support queries by VpcId.
                     * @param _vpcId VPC where a CLB instance resides, such as vpc-bhqkbhdx.
Basic network does not support queries by VpcId.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Security group ID, e.g., `sg-m1cc****`.
                     * @return SecurityGroup Security group ID, e.g., `sg-m1cc****`.
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group ID, e.g., `sg-m1cc****`.
                     * @param _securityGroup Security group ID, e.g., `sg-m1cc****`.
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * @return MasterZone Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * @param _masterZone Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters` and 100 `Filter.Values`. Detailed filter conditions:
<li> internet-charge-type - Type: String - Required: No - Filter by CLB network billing mode, including `TRAFFIC_POSTPAID_BY_HOUR`</li>
                     * @return Filters Each request can have up to 10 `Filters` and 100 `Filter.Values`. Detailed filter conditions:
<li> internet-charge-type - Type: String - Required: No - Filter by CLB network billing mode, including `TRAFFIC_POSTPAID_BY_HOUR`</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters` and 100 `Filter.Values`. Detailed filter conditions:
<li> internet-charge-type - Type: String - Required: No - Filter by CLB network billing mode, including `TRAFFIC_POSTPAID_BY_HOUR`</li>
                     * @param _filters Each request can have up to 10 `Filters` and 100 `Filter.Values`. Detailed filter conditions:
<li> internet-charge-type - Type: String - Required: No - Filter by CLB network billing mode, including `TRAFFIC_POSTPAID_BY_HOUR`</li>
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
                     * CLB instance IDs. There can be up to 20 IDs.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * CLB instance network type:
OPEN: public network; INTERNAL: private network.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB instance type. 1: generic CLB instance; 0: classic CLB instance
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * CLB instance name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * The domain name that Tencent Cloud assigned for the CLB instance.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * VIP address of a CLB instance (there can be multiple addresses)
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * Public IPs of the backend services bound with the load balancer. Only the public IPs of CVMs are supported now.
                     */
                    std::vector<std::string> m_backendPublicIps;
                    bool m_backendPublicIpsHasBeenSet;

                    /**
                     * Private IPs of the backend services bound with the load balancer. Only the private IPs of CVMs are supported now.
                     */
                    std::vector<std::string> m_backendPrivateIps;
                    bool m_backendPrivateIpsHasBeenSet;

                    /**
                     * Data offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned CLB instances. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sort by parameter. Value range: LoadBalancerName, CreateTime, Domain, LoadBalancerType.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1: reverse; 0: sequential. Default value: reverse by creation time |
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Search field which fuzzy matches name, domain name, or VIP.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * ID of the project to which a CLB instance belongs, which can be obtained through the DescribeProject API.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     */
                    int64_t m_withRs;
                    bool m_withRsHasBeenSet;

                    /**
                     * VPC where a CLB instance resides, such as vpc-bhqkbhdx.
Basic network does not support queries by VpcId.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Security group ID, e.g., `sg-m1cc****`.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters` and 100 `Filter.Values`. Detailed filter conditions:
<li> internet-charge-type - Type: String - Required: No - Filter by CLB network billing mode, including `TRAFFIC_POSTPAID_BY_HOUR`</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
