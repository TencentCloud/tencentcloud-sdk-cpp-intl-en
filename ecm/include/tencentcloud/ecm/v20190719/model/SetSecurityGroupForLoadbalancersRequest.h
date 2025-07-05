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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SETSECURITYGROUPFORLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SETSECURITYGROUPFORLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * SetSecurityGroupForLoadbalancers request structure.
                */
                class SetSecurityGroupForLoadbalancersRequest : public AbstractModel
                {
                public:
                    SetSecurityGroupForLoadbalancersRequest();
                    ~SetSecurityGroupForLoadbalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of CLB instance IDs
                     * @return LoadBalancerIds Array of CLB instance IDs
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Array of CLB instance IDs
                     * @param _loadBalancerIds Array of CLB instance IDs
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
                     * 获取Security group ID, such as `esg-12345678`
                     * @return SecurityGroup Security group ID, such as `esg-12345678`
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Security group ID, such as `esg-12345678`
                     * @param _securityGroup Security group ID, such as `esg-12345678`
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
                     * 获取ADD: bind security group;
DEL: unbind security group
                     * @return OperationType ADD: bind security group;
DEL: unbind security group
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置ADD: bind security group;
DEL: unbind security group
                     * @param _operationType ADD: bind security group;
DEL: unbind security group
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * Array of CLB instance IDs
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Security group ID, such as `esg-12345678`
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * ADD: bind security group;
DEL: unbind security group
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SETSECURITYGROUPFORLOADBALANCERSREQUEST_H_
