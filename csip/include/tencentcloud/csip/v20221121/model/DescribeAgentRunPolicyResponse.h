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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNPOLICYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AgentRunModePolicy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAgentRunPolicy response structure.
                */
                class DescribeAgentRunPolicyResponse : public AbstractModel
                {
                public:
                    DescribeAgentRunPolicyResponse();
                    ~DescribeAgentRunPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Basic running policy</p>
                     * @return BasicPolicy <p>Basic running policy</p>
                     * 
                     */
                    AgentRunModePolicy GetBasicPolicy() const;

                    /**
                     * 判断参数 BasicPolicy 是否已赋值
                     * @return BasicPolicy 是否已赋值
                     * 
                     */
                    bool BasicPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Advanced running policy</p>
                     * @return AdvancePolicy <p>Advanced running policy</p>
                     * 
                     */
                    AgentRunModePolicy GetAdvancePolicy() const;

                    /**
                     * 判断参数 AdvancePolicy 是否已赋值
                     * @return AdvancePolicy 是否已赋值
                     * 
                     */
                    bool AdvancePolicyHasBeenSet() const;

                    /**
                     * 获取<p>Custom running strategy</p>
                     * @return CustomPolicy <p>Custom running strategy</p>
                     * 
                     */
                    AgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取<p>instance id list of machines associated with the custom mode</p>
                     * @return CustomModeInstanceIDs <p>instance id list of machines associated with the custom mode</p>
                     * 
                     */
                    std::vector<std::string> GetCustomModeInstanceIDs() const;

                    /**
                     * 判断参数 CustomModeInstanceIDs 是否已赋值
                     * @return CustomModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool CustomModeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>instance id list of machines associated with the advanced mode</p>
                     * @return AdvanceModeInstanceIDs <p>instance id list of machines associated with the advanced mode</p>
                     * 
                     */
                    std::vector<std::string> GetAdvanceModeInstanceIDs() const;

                    /**
                     * 判断参数 AdvanceModeInstanceIDs 是否已赋值
                     * @return AdvanceModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool AdvanceModeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Basic running policy</p>
                     */
                    AgentRunModePolicy m_basicPolicy;
                    bool m_basicPolicyHasBeenSet;

                    /**
                     * <p>Advanced running policy</p>
                     */
                    AgentRunModePolicy m_advancePolicy;
                    bool m_advancePolicyHasBeenSet;

                    /**
                     * <p>Custom running strategy</p>
                     */
                    AgentRunModePolicy m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * <p>instance id list of machines associated with the custom mode</p>
                     */
                    std::vector<std::string> m_customModeInstanceIDs;
                    bool m_customModeInstanceIDsHasBeenSet;

                    /**
                     * <p>instance id list of machines associated with the advanced mode</p>
                     */
                    std::vector<std::string> m_advanceModeInstanceIDs;
                    bool m_advanceModeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNPOLICYRESPONSE_H_
