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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * AttachRolePolicy request structure.
                */
                class AttachRolePolicyRequest : public AbstractModel
                {
                public:
                    AttachRolePolicyRequest();
                    ~AttachRolePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID. Either `PolicyId` or `PolicyName` must be entered
                     * @return PolicyId Policy ID. Either `PolicyId` or `PolicyName` must be entered
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID. Either `PolicyId` or `PolicyName` must be entered
                     * @param _policyId Policy ID. Either `PolicyId` or `PolicyName` must be entered
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Role ID, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * @return AttachRoleId Role ID, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * 
                     */
                    std::string GetAttachRoleId() const;

                    /**
                     * 设置Role ID, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * @param _attachRoleId Role ID, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * 
                     */
                    void SetAttachRoleId(const std::string& _attachRoleId);

                    /**
                     * 判断参数 AttachRoleId 是否已赋值
                     * @return AttachRoleId 是否已赋值
                     * 
                     */
                    bool AttachRoleIdHasBeenSet() const;

                    /**
                     * 获取Role name, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * @return AttachRoleName Role name, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * 
                     */
                    std::string GetAttachRoleName() const;

                    /**
                     * 设置Role name, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * @param _attachRoleName Role name, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     * 
                     */
                    void SetAttachRoleName(const std::string& _attachRoleName);

                    /**
                     * 判断参数 AttachRoleName 是否已赋值
                     * @return AttachRoleName 是否已赋值
                     * 
                     */
                    bool AttachRoleNameHasBeenSet() const;

                    /**
                     * 获取Policy name. Either `PolicyId` or `PolicyName` must be entered
                     * @return PolicyName Policy name. Either `PolicyId` or `PolicyName` must be entered
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name. Either `PolicyId` or `PolicyName` must be entered
                     * @param _policyName Policy name. Either `PolicyId` or `PolicyName` must be entered
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                private:

                    /**
                     * Policy ID. Either `PolicyId` or `PolicyName` must be entered
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Role ID, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     */
                    std::string m_attachRoleId;
                    bool m_attachRoleIdHasBeenSet;

                    /**
                     * Role name, used to specify a role. Input either `AttachRoleId` or `AttachRoleName`
                     */
                    std::string m_attachRoleName;
                    bool m_attachRoleNameHasBeenSet;

                    /**
                     * Policy name. Either `PolicyId` or `PolicyName` must be entered
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_
