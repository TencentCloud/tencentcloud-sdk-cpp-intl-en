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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterEndpoint request structure.
                */
                class CreateClusterEndpointRequest : public AbstractModel
                {
                public:
                    CreateClusterEndpointRequest();
                    ~CreateClusterEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The ID of the subnet where the cluster's port is located (only needs to be entered when the non-public network access is enabled, and must be within the subnet of the cluster's VPC). 
                     * @return SubnetId The ID of the subnet where the cluster's port is located (only needs to be entered when the non-public network access is enabled, and must be within the subnet of the cluster's VPC). 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The ID of the subnet where the cluster's port is located (only needs to be entered when the non-public network access is enabled, and must be within the subnet of the cluster's VPC). 
                     * @param SubnetId The ID of the subnet where the cluster's port is located (only needs to be entered when the non-public network access is enabled, and must be within the subnet of the cluster's VPC). 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether public network access is enabled or not (True = public network access, FALSE = private network access, with the default value as FALSE).
                     * @return IsExtranet Whether public network access is enabled or not (True = public network access, FALSE = private network access, with the default value as FALSE).
                     */
                    bool GetIsExtranet() const;

                    /**
                     * 设置Whether public network access is enabled or not (True = public network access, FALSE = private network access, with the default value as FALSE).
                     * @param IsExtranet Whether public network access is enabled or not (True = public network access, FALSE = private network access, with the default value as FALSE).
                     */
                    void SetIsExtranet(const bool& _isExtranet);

                    /**
                     * 判断参数 IsExtranet 是否已赋值
                     * @return IsExtranet 是否已赋值
                     */
                    bool IsExtranetHasBeenSet() const;

                    /**
                     * 获取The domain name
                     * @return Domain The domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name
                     * @param Domain The domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The security group in use. Required only for public network access.
                     * @return SecurityGroup The security group in use. Required only for public network access.
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置The security group in use. Required only for public network access.
                     * @param SecurityGroup The security group in use. Required only for public network access.
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取The LB parameter. Required only for public network access.
                     * @return ExtensiveParameters The LB parameter. Required only for public network access.
                     */
                    std::string GetExtensiveParameters() const;

                    /**
                     * 设置The LB parameter. Required only for public network access.
                     * @param ExtensiveParameters The LB parameter. Required only for public network access.
                     */
                    void SetExtensiveParameters(const std::string& _extensiveParameters);

                    /**
                     * 判断参数 ExtensiveParameters 是否已赋值
                     * @return ExtensiveParameters 是否已赋值
                     */
                    bool ExtensiveParametersHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The ID of the subnet where the cluster's port is located (only needs to be entered when the non-public network access is enabled, and must be within the subnet of the cluster's VPC). 
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Whether public network access is enabled or not (True = public network access, FALSE = private network access, with the default value as FALSE).
                     */
                    bool m_isExtranet;
                    bool m_isExtranetHasBeenSet;

                    /**
                     * The domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The security group in use. Required only for public network access.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * The LB parameter. Required only for public network access.
                     */
                    std::string m_extensiveParameters;
                    bool m_extensiveParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
