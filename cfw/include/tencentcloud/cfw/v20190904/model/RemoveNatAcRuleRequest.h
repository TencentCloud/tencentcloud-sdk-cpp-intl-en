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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_

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
                * RemoveNatAcRule request structure.
                */
                class RemoveNatAcRuleRequest : public AbstractModel
                {
                public:
                    RemoveNatAcRuleRequest();
                    ~RemoveNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UUIDs of the rules to delete, which can be obtained by querying the rule list. Note: If [-1] is passed in, all rules are deleted.
                     * @return RuleUuid UUIDs of the rules to delete, which can be obtained by querying the rule list. Note: If [-1] is passed in, all rules are deleted.
                     */
                    std::vector<int64_t> GetRuleUuid() const;

                    /**
                     * 设置UUIDs of the rules to delete, which can be obtained by querying the rule list. Note: If [-1] is passed in, all rules are deleted.
                     * @param RuleUuid UUIDs of the rules to delete, which can be obtained by querying the rule list. Note: If [-1] is passed in, all rules are deleted.
                     */
                    void SetRuleUuid(const std::vector<int64_t>& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取Rule direction. Valid values: 1: inbound; 0: outbound.
                     * @return Direction Rule direction. Valid values: 1: inbound; 0: outbound.
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Rule direction. Valid values: 1: inbound; 0: outbound.
                     * @param Direction Rule direction. Valid values: 1: inbound; 0: outbound.
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * UUIDs of the rules to delete, which can be obtained by querying the rule list. Note: If [-1] is passed in, all rules are deleted.
                     */
                    std::vector<int64_t> m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * Rule direction. Valid values: 1: inbound; 0: outbound.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_
