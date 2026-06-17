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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

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
                * DescribeLoadBalancers request structure.
                */
                class DescribeLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersRequest();
                    ~DescribeLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID. There can be up to 20 IDs.
                     * @return LoadBalancerIds CLB instance ID. There can be up to 20 IDs.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance ID. There can be up to 20 IDs.
                     * @param _loadBalancerIds CLB instance ID. There can be up to 20 IDs.
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
                     * 获取Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Private network attribute.
                     * @return LoadBalancerType Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Private network attribute.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Private network attribute.
                     * @param _loadBalancerType Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Private network attribute.
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
                     * 获取CLB instance type. 1: General CLB instance; 0: Classic CLB instance. If this parameter is not specified, all types of CLB instances will be queried.
                     * @return Forward CLB instance type. 1: General CLB instance; 0: Classic CLB instance. If this parameter is not specified, all types of CLB instances will be queried.
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置CLB instance type. 1: General CLB instance; 0: Classic CLB instance. If this parameter is not specified, all types of CLB instances will be queried.
                     * @param _forward CLB instance type. 1: General CLB instance; 0: Classic CLB instance. If this parameter is not specified, all types of CLB instances will be queried.
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
                     * 获取Domain name assigned for a CLB instance by the cloud platform.
                     * @return Domain Domain name assigned for a CLB instance by the cloud platform.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name assigned for a CLB instance by the cloud platform.
                     * @param _domain Domain name assigned for a CLB instance by the cloud platform.
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
                     * 获取VIP address of a CLB instance (there can be multiple addresses).
                     * @return LoadBalancerVips VIP address of a CLB instance (there can be multiple addresses).
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置VIP address of a CLB instance (there can be multiple addresses).
                     * @param _loadBalancerVips VIP address of a CLB instance (there can be multiple addresses).
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
                     * 获取The public network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the public IP of Cloud Virtual Machine (CVM).
                     * @return BackendPublicIps The public network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the public IP of Cloud Virtual Machine (CVM).
                     * 
                     */
                    std::vector<std::string> GetBackendPublicIps() const;

                    /**
                     * 设置The public network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the public IP of Cloud Virtual Machine (CVM).
                     * @param _backendPublicIps The public network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the public IP of Cloud Virtual Machine (CVM).
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
                     * 获取The private network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the private IP address of Cloud Virtual Machine (CVM).
                     * @return BackendPrivateIps The private network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the private IP address of Cloud Virtual Machine (CVM).
                     * 
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置The private network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the private IP address of Cloud Virtual Machine (CVM).
                     * @param _backendPrivateIps The private network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the private IP address of Cloud Virtual Machine (CVM).
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
                     * 获取Data offset. Default: 0.
                     * @return Offset Data offset. Default: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default: 0.
                     * @param _offset Data offset. Default: 0.
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
                     * 获取Number of CLB instances returned. Default: 20. Maximum: 100.
                     * @return Limit Number of CLB instances returned. Default: 20. Maximum: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of CLB instances returned. Default: 20. Maximum: 100.
                     * @param _limit Number of CLB instances returned. Default: 20. Maximum: 100.
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
                     * 获取A sorting parameter. Valid values: LoadBalancerName, CreateTime, Domain, and LoadBalancerType.
                     * @return OrderBy A sorting parameter. Valid values: LoadBalancerName, CreateTime, Domain, and LoadBalancerType.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置A sorting parameter. Valid values: LoadBalancerName, CreateTime, Domain, and LoadBalancerType.
                     * @param _orderBy A sorting parameter. Valid values: LoadBalancerName, CreateTime, Domain, and LoadBalancerType.
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
                     * 获取1: Reverse; 0: Sequential. Default: reverse by creation time
                     * @return OrderType 1: Reverse; 0: Sequential. Default: reverse by creation time
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1: Reverse; 0: Sequential. Default: reverse by creation time
                     * @param _orderType 1: Reverse; 0: Sequential. Default: reverse by creation time
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
                     * 获取Search field, supporting fuzzy match by name, domain, and VIP.
                     * @return SearchKey Search field, supporting fuzzy match by name, domain, and VIP.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search field, supporting fuzzy match by name, domain, and VIP.
                     * @param _searchKey Search field, supporting fuzzy match by name, domain, and VIP.
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
                     * 获取The ID of the project to which the CLB instance belongs. This parameter can be obtained through the DescribeProject API.
                     * @return ProjectId The ID of the project to which the CLB instance belongs. This parameter can be obtained through the DescribeProject API.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The ID of the project to which the CLB instance belongs. This parameter can be obtained through the DescribeProject API.
                     * @param _projectId The ID of the project to which the CLB instance belongs. This parameter can be obtained through the DescribeProject API.
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
                     * 获取Whether CLB is bound to a real server. 0: No; 1: Yes; -1: Query all.
                     * @return WithRs Whether CLB is bound to a real server. 0: No; 1: Yes; -1: Query all.
                     * 
                     */
                    int64_t GetWithRs() const;

                    /**
                     * 设置Whether CLB is bound to a real server. 0: No; 1: Yes; -1: Query all.
                     * @param _withRs Whether CLB is bound to a real server. 0: No; 1: Yes; -1: Query all.
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
                     * 获取Unique VPC ID of the CLB instance, such as vpc-bhqkbhdx
Basic network allows input '0'.
                     * @return VpcId Unique VPC ID of the CLB instance, such as vpc-bhqkbhdx
Basic network allows input '0'.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique VPC ID of the CLB instance, such as vpc-bhqkbhdx
Basic network allows input '0'.
                     * @param _vpcId Unique VPC ID of the CLB instance, such as vpc-bhqkbhdx
Basic network allows input '0'.
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
                     * 获取Security group ID, for example sg-m1cc****.
                     * @return SecurityGroup Security group ID, for example sg-m1cc****.
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group ID, for example sg-m1cc****.
                     * @param _securityGroup Security group ID, for example sg-m1cc****.
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
                     * 获取Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * @return MasterZone Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * @param _masterZone Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
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
                     * 获取Each request can have up to 10 `Filters` values and 100 `Filter.Values` values.<br/>`Filter.Name` and `Filter.Values` are required items. The detailed filter criteria are as follows:
<li> charge-type - String - Required: No - (Filter condition) Filter by the CLB instance billing mode, including "PREPAID", "POSTPAID_BY_HOUR".</li>
<li> internet-charge-type - String - Required: No - (Filter condition) Filter by CLB network billing mode, including "BANDWIDTH_PREPAID", "TRAFFIC_POSTPAID_BY_HOUR", "BANDWIDTH_POSTPAID_BY_HOUR", "BANDWIDTH_PACKAGE".</li>
<li> master-zone-id - String - Required: No - (Filter condition) Filter by primary AZ ID of CLB, such as "100001" (corresponding to Guangzhou Zone 1).</li>
<li>tag-key - String - required: no - (filter condition) filter by CLB tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by CLB Tag key-value pair. Replace tag-key with a specific tag key.</li>
<li> function-name - String - Required: No - (Filter condition) Filter by the function name of the Serverless Cloud Function (SCF) bound to the CLB backend.</li>
<li> vip-isp - String - Required: No - (Filter condition) Filter by operator type of CLB VIP, such as "BGP", "INTERNAL", "CMCC", "CTCC", "CUCC".</li>
<li>sla-type - String - required: no - (filter condition) filter by CLB performance capacity specification, including "clb.c2.medium", "clb.c3.small", "clb.c3.medium", "clb.c4.small", "clb.c4.medium", "clb.c4.large", "clb.c4.xlarge".</li>
                     * @return Filters Each request can have up to 10 `Filters` values and 100 `Filter.Values` values.<br/>`Filter.Name` and `Filter.Values` are required items. The detailed filter criteria are as follows:
<li> charge-type - String - Required: No - (Filter condition) Filter by the CLB instance billing mode, including "PREPAID", "POSTPAID_BY_HOUR".</li>
<li> internet-charge-type - String - Required: No - (Filter condition) Filter by CLB network billing mode, including "BANDWIDTH_PREPAID", "TRAFFIC_POSTPAID_BY_HOUR", "BANDWIDTH_POSTPAID_BY_HOUR", "BANDWIDTH_PACKAGE".</li>
<li> master-zone-id - String - Required: No - (Filter condition) Filter by primary AZ ID of CLB, such as "100001" (corresponding to Guangzhou Zone 1).</li>
<li>tag-key - String - required: no - (filter condition) filter by CLB tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by CLB Tag key-value pair. Replace tag-key with a specific tag key.</li>
<li> function-name - String - Required: No - (Filter condition) Filter by the function name of the Serverless Cloud Function (SCF) bound to the CLB backend.</li>
<li> vip-isp - String - Required: No - (Filter condition) Filter by operator type of CLB VIP, such as "BGP", "INTERNAL", "CMCC", "CTCC", "CUCC".</li>
<li>sla-type - String - required: no - (filter condition) filter by CLB performance capacity specification, including "clb.c2.medium", "clb.c3.small", "clb.c3.medium", "clb.c4.small", "clb.c4.medium", "clb.c4.large", "clb.c4.xlarge".</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters` values and 100 `Filter.Values` values.<br/>`Filter.Name` and `Filter.Values` are required items. The detailed filter criteria are as follows:
<li> charge-type - String - Required: No - (Filter condition) Filter by the CLB instance billing mode, including "PREPAID", "POSTPAID_BY_HOUR".</li>
<li> internet-charge-type - String - Required: No - (Filter condition) Filter by CLB network billing mode, including "BANDWIDTH_PREPAID", "TRAFFIC_POSTPAID_BY_HOUR", "BANDWIDTH_POSTPAID_BY_HOUR", "BANDWIDTH_PACKAGE".</li>
<li> master-zone-id - String - Required: No - (Filter condition) Filter by primary AZ ID of CLB, such as "100001" (corresponding to Guangzhou Zone 1).</li>
<li>tag-key - String - required: no - (filter condition) filter by CLB tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by CLB Tag key-value pair. Replace tag-key with a specific tag key.</li>
<li> function-name - String - Required: No - (Filter condition) Filter by the function name of the Serverless Cloud Function (SCF) bound to the CLB backend.</li>
<li> vip-isp - String - Required: No - (Filter condition) Filter by operator type of CLB VIP, such as "BGP", "INTERNAL", "CMCC", "CTCC", "CUCC".</li>
<li>sla-type - String - required: no - (filter condition) filter by CLB performance capacity specification, including "clb.c2.medium", "clb.c3.small", "clb.c3.medium", "clb.c4.small", "clb.c4.medium", "clb.c4.large", "clb.c4.xlarge".</li>
                     * @param _filters Each request can have up to 10 `Filters` values and 100 `Filter.Values` values.<br/>`Filter.Name` and `Filter.Values` are required items. The detailed filter criteria are as follows:
<li> charge-type - String - Required: No - (Filter condition) Filter by the CLB instance billing mode, including "PREPAID", "POSTPAID_BY_HOUR".</li>
<li> internet-charge-type - String - Required: No - (Filter condition) Filter by CLB network billing mode, including "BANDWIDTH_PREPAID", "TRAFFIC_POSTPAID_BY_HOUR", "BANDWIDTH_POSTPAID_BY_HOUR", "BANDWIDTH_PACKAGE".</li>
<li> master-zone-id - String - Required: No - (Filter condition) Filter by primary AZ ID of CLB, such as "100001" (corresponding to Guangzhou Zone 1).</li>
<li>tag-key - String - required: no - (filter condition) filter by CLB tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by CLB Tag key-value pair. Replace tag-key with a specific tag key.</li>
<li> function-name - String - Required: No - (Filter condition) Filter by the function name of the Serverless Cloud Function (SCF) bound to the CLB backend.</li>
<li> vip-isp - String - Required: No - (Filter condition) Filter by operator type of CLB VIP, such as "BGP", "INTERNAL", "CMCC", "CTCC", "CUCC".</li>
<li>sla-type - String - required: no - (filter condition) filter by CLB performance capacity specification, including "clb.c2.medium", "clb.c3.small", "clb.c3.medium", "clb.c4.small", "clb.c4.medium", "clb.c4.large", "clb.c4.xlarge".</li>
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
                     * 获取Select the expansion fields to return. If not specified, expansion fields are not returned by default. The supported expansion fields are as follows:
<li> TargetCount: Number of real servers bound to it</li>
                     * @return AdditionalFields Select the expansion fields to return. If not specified, expansion fields are not returned by default. The supported expansion fields are as follows:
<li> TargetCount: Number of real servers bound to it</li>
                     * 
                     */
                    std::vector<std::string> GetAdditionalFields() const;

                    /**
                     * 设置Select the expansion fields to return. If not specified, expansion fields are not returned by default. The supported expansion fields are as follows:
<li> TargetCount: Number of real servers bound to it</li>
                     * @param _additionalFields Select the expansion fields to return. If not specified, expansion fields are not returned by default. The supported expansion fields are as follows:
<li> TargetCount: Number of real servers bound to it</li>
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
                     * CLB instance ID. There can be up to 20 IDs.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Network type of the CLB instance:
OPEN: Public network attribute. INTERNAL: Private network attribute.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CLB instance type. 1: General CLB instance; 0: Classic CLB instance. If this parameter is not specified, all types of CLB instances will be queried.
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * CLB instance name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Domain name assigned for a CLB instance by the cloud platform.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * VIP address of a CLB instance (there can be multiple addresses).
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * The public network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the public IP of Cloud Virtual Machine (CVM).
                     */
                    std::vector<std::string> m_backendPublicIps;
                    bool m_backendPublicIpsHasBeenSet;

                    /**
                     * The private network IP of the backend service bound to Cloud Load Balancer (CLB) only supports querying the private IP address of Cloud Virtual Machine (CVM).
                     */
                    std::vector<std::string> m_backendPrivateIps;
                    bool m_backendPrivateIpsHasBeenSet;

                    /**
                     * Data offset. Default: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of CLB instances returned. Default: 20. Maximum: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * A sorting parameter. Valid values: LoadBalancerName, CreateTime, Domain, and LoadBalancerType.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1: Reverse; 0: Sequential. Default: reverse by creation time
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Search field, supporting fuzzy match by name, domain, and VIP.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * The ID of the project to which the CLB instance belongs. This parameter can be obtained through the DescribeProject API.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether CLB is bound to a real server. 0: No; 1: Yes; -1: Query all.
                     */
                    int64_t m_withRs;
                    bool m_withRsHasBeenSet;

                    /**
                     * Unique VPC ID of the CLB instance, such as vpc-bhqkbhdx
Basic network allows input '0'.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Security group ID, for example sg-m1cc****.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Primary availability zone ID, such as 100001 (corresponding to Guangzhou Zone 1). You can obtain the list of availability zones through [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters` values and 100 `Filter.Values` values.<br/>`Filter.Name` and `Filter.Values` are required items. The detailed filter criteria are as follows:
<li> charge-type - String - Required: No - (Filter condition) Filter by the CLB instance billing mode, including "PREPAID", "POSTPAID_BY_HOUR".</li>
<li> internet-charge-type - String - Required: No - (Filter condition) Filter by CLB network billing mode, including "BANDWIDTH_PREPAID", "TRAFFIC_POSTPAID_BY_HOUR", "BANDWIDTH_POSTPAID_BY_HOUR", "BANDWIDTH_PACKAGE".</li>
<li> master-zone-id - String - Required: No - (Filter condition) Filter by primary AZ ID of CLB, such as "100001" (corresponding to Guangzhou Zone 1).</li>
<li>tag-key - String - required: no - (filter condition) filter by CLB tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by CLB Tag key-value pair. Replace tag-key with a specific tag key.</li>
<li> function-name - String - Required: No - (Filter condition) Filter by the function name of the Serverless Cloud Function (SCF) bound to the CLB backend.</li>
<li> vip-isp - String - Required: No - (Filter condition) Filter by operator type of CLB VIP, such as "BGP", "INTERNAL", "CMCC", "CTCC", "CUCC".</li>
<li>sla-type - String - required: no - (filter condition) filter by CLB performance capacity specification, including "clb.c2.medium", "clb.c3.small", "clb.c3.medium", "clb.c4.small", "clb.c4.medium", "clb.c4.large", "clb.c4.xlarge".</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Select the expansion fields to return. If not specified, expansion fields are not returned by default. The supported expansion fields are as follows:
<li> TargetCount: Number of real servers bound to it</li>
                     */
                    std::vector<std::string> m_additionalFields;
                    bool m_additionalFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
