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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_

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
                * DetachRolePolicy request structure.
                */
                class DetachRolePolicyRequest : public AbstractModel
                {
                public:
                    DetachRolePolicyRequest();
                    ~DetachRolePolicyRequest() = default;
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
                     * 获取Role ID, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * @return DetachRoleId Role ID, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * 
                     */
                    std::string GetDetachRoleId() const;

                    /**
                     * 设置Role ID, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * @param _detachRoleId Role ID, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * 
                     */
                    void SetDetachRoleId(const std::string& _detachRoleId);

                    /**
                     * 判断参数 DetachRoleId 是否已赋值
                     * @return DetachRoleId 是否已赋值
                     * 
                     */
                    bool DetachRoleIdHasBeenSet() const;

                    /**
                     * 获取Role name, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * @return DetachRoleName Role name, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * 
                     */
                    std::string GetDetachRoleName() const;

                    /**
                     * 设置Role name, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * @param _detachRoleName Role name, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     * 
                     */
                    void SetDetachRoleName(const std::string& _detachRoleName);

                    /**
                     * 判断参数 DetachRoleName 是否已赋值
                     * @return DetachRoleName 是否已赋值
                     * 
                     */
                    bool DetachRoleNameHasBeenSet() const;

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
                     * Role ID, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     */
                    std::string m_detachRoleId;
                    bool m_detachRoleIdHasBeenSet;

                    /**
                     * Role name, which is used to specify a role. The input parameter is either `DetachRoleId` or `DetachRoleName`.
                     */
                    std::string m_detachRoleName;
                    bool m_detachRoleNameHasBeenSet;

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

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_
