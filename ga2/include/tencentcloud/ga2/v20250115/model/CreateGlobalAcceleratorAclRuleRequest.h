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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/AclEntries.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateGlobalAcceleratorAclRule request structure.
                */
                class CreateGlobalAcceleratorAclRuleRequest : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorAclRuleRequest();
                    ~CreateGlobalAcceleratorAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取Security policy ID
                     * @return GlobalAcceleratorAclPolicyId Security policy ID
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置Security policy ID
                     * @param _globalAcceleratorAclPolicyId Security policy ID
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取Acl information.
                     * @return AclEntries Acl information.
                     * 
                     */
                    std::vector<AclEntries> GetAclEntries() const;

                    /**
                     * 设置Acl information.
                     * @param _aclEntries Acl information.
                     * 
                     */
                    void SetAclEntries(const std::vector<AclEntries>& _aclEntries);

                    /**
                     * 判断参数 AclEntries 是否已赋值
                     * @return AclEntries 是否已赋值
                     * 
                     */
                    bool AclEntriesHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Security policy ID
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * Acl information.
                     */
                    std::vector<AclEntries> m_aclEntries;
                    bool m_aclEntriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULEREQUEST_H_
