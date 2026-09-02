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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomAgentRunModePolicy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAgentRunPolicy request structure.
                */
                class ModifyAgentRunPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAgentRunPolicyRequest();
                    ~ModifyAgentRunPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom running policy (CPU/Memory/NetworkPps). No modification if not passed in</p>
                     * @return CustomPolicy <p>Custom running policy (CPU/Memory/NetworkPps). No modification if not passed in</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 设置<p>Custom running policy (CPU/Memory/NetworkPps). No modification if not passed in</p>
                     * @param _customPolicy <p>Custom running policy (CPU/Memory/NetworkPps). No modification if not passed in</p>
                     * 
                     */
                    void SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy);

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Advanced mode machine instance_id list, automatically convert to quuid for storage in the backend</p>
                     * @return AdvanceModeInstanceIDs <p>Advanced mode machine instance_id list, automatically convert to quuid for storage in the backend</p>
                     * 
                     */
                    std::vector<std::string> GetAdvanceModeInstanceIDs() const;

                    /**
                     * 设置<p>Advanced mode machine instance_id list, automatically convert to quuid for storage in the backend</p>
                     * @param _advanceModeInstanceIDs <p>Advanced mode machine instance_id list, automatically convert to quuid for storage in the backend</p>
                     * 
                     */
                    void SetAdvanceModeInstanceIDs(const std::vector<std::string>& _advanceModeInstanceIDs);

                    /**
                     * 判断参数 AdvanceModeInstanceIDs 是否已赋值
                     * @return AdvanceModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool AdvanceModeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>List of instance_id in custom mode machines, automatically convert to quuid for storage by the backend</p>
                     * @return CustomModeInstanceIDs <p>List of instance_id in custom mode machines, automatically convert to quuid for storage by the backend</p>
                     * 
                     */
                    std::vector<std::string> GetCustomModeInstanceIDs() const;

                    /**
                     * 设置<p>List of instance_id in custom mode machines, automatically convert to quuid for storage by the backend</p>
                     * @param _customModeInstanceIDs <p>List of instance_id in custom mode machines, automatically convert to quuid for storage by the backend</p>
                     * 
                     */
                    void SetCustomModeInstanceIDs(const std::vector<std::string>& _customModeInstanceIDs);

                    /**
                     * 判断参数 CustomModeInstanceIDs 是否已赋值
                     * @return CustomModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool CustomModeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Custom running policy (CPU/Memory/NetworkPps). No modification if not passed in</p>
                     */
                    CustomAgentRunModePolicy m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * <p>Advanced mode machine instance_id list, automatically convert to quuid for storage in the backend</p>
                     */
                    std::vector<std::string> m_advanceModeInstanceIDs;
                    bool m_advanceModeInstanceIDsHasBeenSet;

                    /**
                     * <p>List of instance_id in custom mode machines, automatically convert to quuid for storage by the backend</p>
                     */
                    std::vector<std::string> m_customModeInstanceIDs;
                    bool m_customModeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_
