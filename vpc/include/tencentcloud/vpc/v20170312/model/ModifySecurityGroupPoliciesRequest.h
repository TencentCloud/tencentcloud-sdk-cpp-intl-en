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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicySet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupPolicies request structure.
                */
                class ModifySecurityGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupPoliciesRequest();
                    ~ModifySecurityGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @return SecurityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * @param _securityGroupId The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取The security group policy set. SecurityGroupPolicySet object must specify new egress and ingress policies at the same time. SecurityGroupPolicy object does not support custom index (PolicyIndex).
                     * @return SecurityGroupPolicySet The security group policy set. SecurityGroupPolicySet object must specify new egress and ingress policies at the same time. SecurityGroupPolicy object does not support custom index (PolicyIndex).
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 设置The security group policy set. SecurityGroupPolicySet object must specify new egress and ingress policies at the same time. SecurityGroupPolicy object does not support custom index (PolicyIndex).
                     * @param _securityGroupPolicySet The security group policy set. SecurityGroupPolicySet object must specify new egress and ingress policies at the same time. SecurityGroupPolicy object does not support custom index (PolicyIndex).
                     * 
                     */
                    void SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                    /**
                     * 获取Whether the security group rule is sorted. Default value: False. If it is set to `True`, security group rules will be strictly sorted according to the sequence specified in the `SecurityGroupPolicySet` parameter. Manual entry may cause omission, so we recommend sorting security group rules in the console.
                     * @return SortPolicys Whether the security group rule is sorted. Default value: False. If it is set to `True`, security group rules will be strictly sorted according to the sequence specified in the `SecurityGroupPolicySet` parameter. Manual entry may cause omission, so we recommend sorting security group rules in the console.
                     * 
                     */
                    bool GetSortPolicys() const;

                    /**
                     * 设置Whether the security group rule is sorted. Default value: False. If it is set to `True`, security group rules will be strictly sorted according to the sequence specified in the `SecurityGroupPolicySet` parameter. Manual entry may cause omission, so we recommend sorting security group rules in the console.
                     * @param _sortPolicys Whether the security group rule is sorted. Default value: False. If it is set to `True`, security group rules will be strictly sorted according to the sequence specified in the `SecurityGroupPolicySet` parameter. Manual entry may cause omission, so we recommend sorting security group rules in the console.
                     * 
                     */
                    void SetSortPolicys(const bool& _sortPolicys);

                    /**
                     * 判断参数 SortPolicys 是否已赋值
                     * @return SortPolicys 是否已赋值
                     * 
                     */
                    bool SortPolicysHasBeenSet() const;

                private:

                    /**
                     * The security group instance ID, such as `sg-33ocnj9n`. This can be obtained through DescribeSecurityGroups.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * The security group policy set. SecurityGroupPolicySet object must specify new egress and ingress policies at the same time. SecurityGroupPolicy object does not support custom index (PolicyIndex).
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                    /**
                     * Whether the security group rule is sorted. Default value: False. If it is set to `True`, security group rules will be strictly sorted according to the sequence specified in the `SecurityGroupPolicySet` parameter. Manual entry may cause omission, so we recommend sorting security group rules in the console.
                     */
                    bool m_sortPolicys;
                    bool m_sortPolicysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSECURITYGROUPPOLICIESREQUEST_H_
