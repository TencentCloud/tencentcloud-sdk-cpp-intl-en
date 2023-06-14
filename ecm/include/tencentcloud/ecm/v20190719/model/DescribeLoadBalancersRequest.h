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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Region. If this parameter is not specified, the information of all regions will be queried by default.
                     * @return EcmRegion Region. If this parameter is not specified, the information of all regions will be queried by default.
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置Region. If this parameter is not specified, the information of all regions will be queried by default.
                     * @param _ecmRegion Region. If this parameter is not specified, the information of all regions will be queried by default.
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerIds CLB instance ID.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerIds CLB instance ID.
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
                     * 获取VIP address of the CLB instance. There can be multiple addresses.
                     * @return LoadBalancerVips VIP address of the CLB instance. There can be multiple addresses.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置VIP address of the CLB instance. There can be multiple addresses.
                     * @param _loadBalancerVips VIP address of the CLB instance. There can be multiple addresses.
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
                     * 获取Private IP of the real server bound to the CLB.
                     * @return BackendPrivateIps Private IP of the real server bound to the CLB.
                     * 
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置Private IP of the real server bound to the CLB.
                     * @param _backendPrivateIps Private IP of the real server bound to the CLB.
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
                     * 获取Whether the CLB instance is bound to a real server. 0: no; 1: yes; -1: query all. 
If this parameter is not specified, all will be queried by default.
                     * @return WithBackend Whether the CLB instance is bound to a real server. 0: no; 1: yes; -1: query all. 
If this parameter is not specified, all will be queried by default.
                     * 
                     */
                    int64_t GetWithBackend() const;

                    /**
                     * 设置Whether the CLB instance is bound to a real server. 0: no; 1: yes; -1: query all. 
If this parameter is not specified, all will be queried by default.
                     * @param _withBackend Whether the CLB instance is bound to a real server. 0: no; 1: yes; -1: query all. 
If this parameter is not specified, all will be queried by default.
                     * 
                     */
                    void SetWithBackend(const int64_t& _withBackend);

                    /**
                     * 判断参数 WithBackend 是否已赋值
                     * @return WithBackend 是否已赋值
                     * 
                     */
                    bool WithBackendHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID of the CLB instance, such as `vpc-bhqkbhdx`.
                     * @return VpcId Unique VPC ID of the CLB instance, such as `vpc-bhqkbhdx`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique VPC ID of the CLB instance, such as `vpc-bhqkbhdx`.
                     * @param _vpcId Unique VPC ID of the CLB instance, such as `vpc-bhqkbhdx`.
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
                     * 获取Each request can contain up to 10 `Filters` and 100 `Filter.Values`. The detailed filters are as follows:
tag-key - String - Required: no - (Filter) Filter by tag key.
                     * @return Filters Each request can contain up to 10 `Filters` and 100 `Filter.Values`. The detailed filters are as follows:
tag-key - String - Required: no - (Filter) Filter by tag key.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can contain up to 10 `Filters` and 100 `Filter.Values`. The detailed filters are as follows:
tag-key - String - Required: no - (Filter) Filter by tag key.
                     * @param _filters Each request can contain up to 10 `Filters` and 100 `Filter.Values`. The detailed filters are as follows:
tag-key - String - Required: no - (Filter) Filter by tag key.
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
                     * 获取Security group.
                     * @return SecurityGroup Security group.
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group.
                     * @param _securityGroup Security group.
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                private:

                    /**
                     * Region. If this parameter is not specified, the information of all regions will be queried by default.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * CLB instance ID.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * CLB instance name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * VIP address of the CLB instance. There can be multiple addresses.
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * Private IP of the real server bound to the CLB.
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
                     * Whether the CLB instance is bound to a real server. 0: no; 1: yes; -1: query all. 
If this parameter is not specified, all will be queried by default.
                     */
                    int64_t m_withBackend;
                    bool m_withBackendHasBeenSet;

                    /**
                     * Unique VPC ID of the CLB instance, such as `vpc-bhqkbhdx`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Each request can contain up to 10 `Filters` and 100 `Filter.Values`. The detailed filters are as follows:
tag-key - String - Required: no - (Filter) Filter by tag key.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Security group.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
