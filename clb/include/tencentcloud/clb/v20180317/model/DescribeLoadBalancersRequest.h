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
                     * 获取Specifies the name of the clb instance. fuzzy query is supported.
                     * @return LoadBalancerName Specifies the name of the clb instance. fuzzy query is supported.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Specifies the name of the clb instance. fuzzy query is supported.
                     * @param _loadBalancerName Specifies the name of the clb instance. fuzzy query is supported.
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
                     * 获取Tencent cloud assigns a domain name to the cloud load balancer instance. fuzzy query is supported.
                     * @return Domain Tencent cloud assigns a domain name to the cloud load balancer instance. fuzzy query is supported.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Tencent cloud assigns a domain name to the cloud load balancer instance. fuzzy query is supported.
                     * @param _domain Tencent cloud assigns a domain name to the cloud load balancer instance. fuzzy query is supported.
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
                     * 获取Sorting parameter. supports the following fields:.
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

Defaults to CreateTime.

                     * @return OrderBy Sorting parameter. supports the following fields:.
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

Defaults to CreateTime.

                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting parameter. supports the following fields:.
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

Defaults to CreateTime.

                     * @param _orderBy Sorting parameter. supports the following fields:.
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

Defaults to CreateTime.

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
                     * 获取1 for descending, 0 for ascending, defaults to 1, sorted by creation time in descending order.
                     * @return OrderType 1 for descending, 0 for ascending, defaults to 1, sorted by creation time in descending order.
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1 for descending, 0 for ascending, defaults to 1, sorted by creation time in descending order.
                     * @param _orderType 1 for descending, 0 for ascending, defaults to 1, sorted by creation time in descending order.
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
                     * 获取Specifies the fuzzy search field for fuzzy matching the name, domain name, VIP address, or ID of a cloud load balancer instance.
                     * @return SearchKey Specifies the fuzzy search field for fuzzy matching the name, domain name, VIP address, or ID of a cloud load balancer instance.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Specifies the fuzzy search field for fuzzy matching the name, domain name, VIP address, or ID of a cloud load balancer instance.
                     * @param _searchKey Specifies the fuzzy search field for fuzzy matching the name, domain name, VIP address, or ID of a cloud load balancer instance.
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
                     * 获取Project ID of the cloud load balancer instance. you can call the [DescribeProject](https://www.tencentcloud.comom/document/api/651/78725?from_cn_redirect=1) api to obtain the ID. defaults to all projects if not passed.
                     * @return ProjectId Project ID of the cloud load balancer instance. you can call the [DescribeProject](https://www.tencentcloud.comom/document/api/651/78725?from_cn_redirect=1) api to obtain the ID. defaults to all projects if not passed.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of the cloud load balancer instance. you can call the [DescribeProject](https://www.tencentcloud.comom/document/api/651/78725?from_cn_redirect=1) api to obtain the ID. defaults to all projects if not passed.
                     * @param _projectId Project ID of the cloud load balancer instance. you can call the [DescribeProject](https://www.tencentcloud.comom/document/api/651/78725?from_cn_redirect=1) api to obtain the ID. defaults to all projects if not passed.
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
                     * 获取Specifies the unique vpc ID of the load balancing instance, such as vpc-bhqkbhdx. you can call the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api to obtain it.
Searches for cloud load balancer of basic network type. allows input '0'.
                     * @return VpcId Specifies the unique vpc ID of the load balancing instance, such as vpc-bhqkbhdx. you can call the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api to obtain it.
Searches for cloud load balancer of basic network type. allows input '0'.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the unique vpc ID of the load balancing instance, such as vpc-bhqkbhdx. you can call the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api to obtain it.
Searches for cloud load balancer of basic network type. allows input '0'.
                     * @param _vpcId Specifies the unique vpc ID of the load balancing instance, such as vpc-bhqkbhdx. you can call the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api to obtain it.
Searches for cloud load balancer of basic network type. allows input '0'.
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
                     * 获取Security group ID, such as sg-m1cc****, can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * @return SecurityGroup Security group ID, such as sg-m1cc****, can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group ID, such as sg-m1cc****, can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
                     * @param _securityGroup Security group ID, such as sg-m1cc****, can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
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

                    /**
                     * 获取Specifies the expanded fields to return. not specified, expanded fields do not return by default. supported expanded fields are as follows:.
<Li>TargetCount: specifies the number of real servers bound to it.</li>.
                     * @return AdditionalFields Specifies the expanded fields to return. not specified, expanded fields do not return by default. supported expanded fields are as follows:.
<Li>TargetCount: specifies the number of real servers bound to it.</li>.
                     * 
                     */
                    std::vector<std::string> GetAdditionalFields() const;

                    /**
                     * 设置Specifies the expanded fields to return. not specified, expanded fields do not return by default. supported expanded fields are as follows:.
<Li>TargetCount: specifies the number of real servers bound to it.</li>.
                     * @param _additionalFields Specifies the expanded fields to return. not specified, expanded fields do not return by default. supported expanded fields are as follows:.
<Li>TargetCount: specifies the number of real servers bound to it.</li>.
                     * 
                     */
                    void SetAdditionalFields(const std::vector<std::string>& _additionalFields);

                    /**
                     * 判断参数 AdditionalFields 是否已赋值
                     * @return AdditionalFields 是否已赋值
                     * 
                     */
                    bool AdditionalFieldsHasBeenSet() const;

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
                     * Specifies the name of the clb instance. fuzzy query is supported.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Tencent cloud assigns a domain name to the cloud load balancer instance. fuzzy query is supported.
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
                     * Sorting parameter. supports the following fields:.
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

Defaults to CreateTime.

                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1 for descending, 0 for ascending, defaults to 1, sorted by creation time in descending order.
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Specifies the fuzzy search field for fuzzy matching the name, domain name, VIP address, or ID of a cloud load balancer instance.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Project ID of the cloud load balancer instance. you can call the [DescribeProject](https://www.tencentcloud.comom/document/api/651/78725?from_cn_redirect=1) api to obtain the ID. defaults to all projects if not passed.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether a CLB instance is bound to a real server. 0: no; 1: yes; -1: query all.
                     */
                    int64_t m_withRs;
                    bool m_withRsHasBeenSet;

                    /**
                     * Specifies the unique vpc ID of the load balancing instance, such as vpc-bhqkbhdx. you can call the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api to obtain it.
Searches for cloud load balancer of basic network type. allows input '0'.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Security group ID, such as sg-m1cc****, can be obtained through the API [DescribeSecurityGroups](https://www.tencentcloud.comom/document/product/215/15808?from_cn_redirect=1).
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

                    /**
                     * Specifies the expanded fields to return. not specified, expanded fields do not return by default. supported expanded fields are as follows:.
<Li>TargetCount: specifies the number of real servers bound to it.</li>.
                     */
                    std::vector<std::string> m_additionalFields;
                    bool m_additionalFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
