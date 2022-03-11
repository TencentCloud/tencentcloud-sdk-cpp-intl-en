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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Security group quota limit
                */
                class SecurityGroupLimitSet : public AbstractModel
                {
                public:
                    SecurityGroupLimitSet();
                    ~SecurityGroupLimitSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of security groups that can be created
                     * @return SecurityGroupLimit Total number of security groups that can be created
                     */
                    int64_t GetSecurityGroupLimit() const;

                    /**
                     * 设置Total number of security groups that can be created
                     * @param SecurityGroupLimit Total number of security groups that can be created
                     */
                    void SetSecurityGroupLimit(const int64_t& _securityGroupLimit);

                    /**
                     * 判断参数 SecurityGroupLimit 是否已赋值
                     * @return SecurityGroupLimit 是否已赋值
                     */
                    bool SecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of rules under the security group
                     * @return SecurityGroupPolicyLimit Maximum number of rules under the security group
                     */
                    int64_t GetSecurityGroupPolicyLimit() const;

                    /**
                     * 设置Maximum number of rules under the security group
                     * @param SecurityGroupPolicyLimit Maximum number of rules under the security group
                     */
                    void SetSecurityGroupPolicyLimit(const int64_t& _securityGroupPolicyLimit);

                    /**
                     * 判断参数 SecurityGroupPolicyLimit 是否已赋值
                     * @return SecurityGroupPolicyLimit 是否已赋值
                     */
                    bool SecurityGroupPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Number of nested security group rules under the security group
                     * @return ReferedSecurityGroupLimit Number of nested security group rules under the security group
                     */
                    int64_t GetReferedSecurityGroupLimit() const;

                    /**
                     * 设置Number of nested security group rules under the security group
                     * @param ReferedSecurityGroupLimit Number of nested security group rules under the security group
                     */
                    void SetReferedSecurityGroupLimit(const int64_t& _referedSecurityGroupLimit);

                    /**
                     * 判断参数 ReferedSecurityGroupLimit 是否已赋值
                     * @return ReferedSecurityGroupLimit 是否已赋值
                     */
                    bool ReferedSecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取Number of instances associated with the security group
                     * @return SecurityGroupInstanceLimit Number of instances associated with the security group
                     */
                    int64_t GetSecurityGroupInstanceLimit() const;

                    /**
                     * 设置Number of instances associated with the security group
                     * @param SecurityGroupInstanceLimit Number of instances associated with the security group
                     */
                    void SetSecurityGroupInstanceLimit(const int64_t& _securityGroupInstanceLimit);

                    /**
                     * 判断参数 SecurityGroupInstanceLimit 是否已赋值
                     * @return SecurityGroupInstanceLimit 是否已赋值
                     */
                    bool SecurityGroupInstanceLimitHasBeenSet() const;

                    /**
                     * 获取Number of security groups associated with the instance
                     * @return InstanceSecurityGroupLimit Number of security groups associated with the instance
                     */
                    int64_t GetInstanceSecurityGroupLimit() const;

                    /**
                     * 设置Number of security groups associated with the instance
                     * @param InstanceSecurityGroupLimit Number of security groups associated with the instance
                     */
                    void SetInstanceSecurityGroupLimit(const int64_t& _instanceSecurityGroupLimit);

                    /**
                     * 判断参数 InstanceSecurityGroupLimit 是否已赋值
                     * @return InstanceSecurityGroupLimit 是否已赋值
                     */
                    bool InstanceSecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取Number of modules associated with the security group
                     * @return SecurityGroupModuleLimit Number of modules associated with the security group
                     */
                    int64_t GetSecurityGroupModuleLimit() const;

                    /**
                     * 设置Number of modules associated with the security group
                     * @param SecurityGroupModuleLimit Number of modules associated with the security group
                     */
                    void SetSecurityGroupModuleLimit(const int64_t& _securityGroupModuleLimit);

                    /**
                     * 判断参数 SecurityGroupModuleLimit 是否已赋值
                     * @return SecurityGroupModuleLimit 是否已赋值
                     */
                    bool SecurityGroupModuleLimitHasBeenSet() const;

                    /**
                     * 获取Number of security groups associated with the module
                     * @return ModuleSecurityGroupLimit Number of security groups associated with the module
                     */
                    int64_t GetModuleSecurityGroupLimit() const;

                    /**
                     * 设置Number of security groups associated with the module
                     * @param ModuleSecurityGroupLimit Number of security groups associated with the module
                     */
                    void SetModuleSecurityGroupLimit(const int64_t& _moduleSecurityGroupLimit);

                    /**
                     * 判断参数 ModuleSecurityGroupLimit 是否已赋值
                     * @return ModuleSecurityGroupLimit 是否已赋值
                     */
                    bool ModuleSecurityGroupLimitHasBeenSet() const;

                private:

                    /**
                     * Total number of security groups that can be created
                     */
                    int64_t m_securityGroupLimit;
                    bool m_securityGroupLimitHasBeenSet;

                    /**
                     * Maximum number of rules under the security group
                     */
                    int64_t m_securityGroupPolicyLimit;
                    bool m_securityGroupPolicyLimitHasBeenSet;

                    /**
                     * Number of nested security group rules under the security group
                     */
                    int64_t m_referedSecurityGroupLimit;
                    bool m_referedSecurityGroupLimitHasBeenSet;

                    /**
                     * Number of instances associated with the security group
                     */
                    int64_t m_securityGroupInstanceLimit;
                    bool m_securityGroupInstanceLimitHasBeenSet;

                    /**
                     * Number of security groups associated with the instance
                     */
                    int64_t m_instanceSecurityGroupLimit;
                    bool m_instanceSecurityGroupLimitHasBeenSet;

                    /**
                     * Number of modules associated with the security group
                     */
                    int64_t m_securityGroupModuleLimit;
                    bool m_securityGroupModuleLimitHasBeenSet;

                    /**
                     * Number of security groups associated with the module
                     */
                    int64_t m_moduleSecurityGroupLimit;
                    bool m_moduleSecurityGroupLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_
