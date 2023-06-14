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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_

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
                * ModifyClusterEndpointSP request structure.
                */
                class ModifyClusterEndpointSPRequest : public AbstractModel
                {
                public:
                    ModifyClusterEndpointSPRequest();
                    ~ModifyClusterEndpointSPRequest() = default;
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
                     * 获取Security policy opens single IP or CIDR block to the Internet (for example: '192.168.1.0/24', with 'reject all' as the default).
                     * @return SecurityPolicies Security policy opens single IP or CIDR block to the Internet (for example: '192.168.1.0/24', with 'reject all' as the default).
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicies() const;

                    /**
                     * 设置Security policy opens single IP or CIDR block to the Internet (for example: '192.168.1.0/24', with 'reject all' as the default).
                     * @param _securityPolicies Security policy opens single IP or CIDR block to the Internet (for example: '192.168.1.0/24', with 'reject all' as the default).
                     * 
                     */
                    void SetSecurityPolicies(const std::vector<std::string>& _securityPolicies);

                    /**
                     * 判断参数 SecurityPolicies 是否已赋值
                     * @return SecurityPolicies 是否已赋值
                     * 
                     */
                    bool SecurityPoliciesHasBeenSet() const;

                    /**
                     * 获取Modify public network security group
                     * @return SecurityGroup Modify public network security group
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Modify public network security group
                     * @param _securityGroup Modify public network security group
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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Security policy opens single IP or CIDR block to the Internet (for example: '192.168.1.0/24', with 'reject all' as the default).
                     */
                    std::vector<std::string> m_securityPolicies;
                    bool m_securityPoliciesHasBeenSet;

                    /**
                     * Modify public network security group
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERENDPOINTSPREQUEST_H_
