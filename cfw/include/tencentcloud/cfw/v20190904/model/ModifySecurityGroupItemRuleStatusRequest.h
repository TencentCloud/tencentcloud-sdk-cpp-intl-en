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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupItemRuleStatus request structure.
                */
                class ModifySecurityGroupItemRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupItemRuleStatusRequest();
                    ~ModifySecurityGroupItemRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 1 by default
                     * @return Direction Direction. 0: outbound; 1: inbound. 1 by default
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 1 by default
                     * @param _direction Direction. 0: outbound; 1: inbound. 1 by default
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Toggle status. 0: off; 1: on
                     * @return Status Toggle status. 0: off; 1: on
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Toggle status. 0: off; 1: on
                     * @param _status Toggle status. 0: off; 1: on
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Modified priority of enterprise security group rules
                     * @return RuleSequence Modified priority of enterprise security group rules
                     * 
                     */
                    uint64_t GetRuleSequence() const;

                    /**
                     * 设置Modified priority of enterprise security group rules
                     * @param _ruleSequence Modified priority of enterprise security group rules
                     * 
                     */
                    void SetRuleSequence(const uint64_t& _ruleSequence);

                    /**
                     * 判断参数 RuleSequence 是否已赋值
                     * @return RuleSequence 是否已赋值
                     * 
                     */
                    bool RuleSequenceHasBeenSet() const;

                private:

                    /**
                     * Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Toggle status. 0: off; 1: on
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Modified priority of enterprise security group rules
                     */
                    uint64_t m_ruleSequence;
                    bool m_ruleSequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_
