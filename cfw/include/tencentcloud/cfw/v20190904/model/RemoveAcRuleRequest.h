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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULEREQUEST_H_

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
                * RemoveAcRule request structure.
                */
                class RemoveAcRuleRequest : public AbstractModel
                {
                public:
                    RemoveAcRuleRequest();
                    ~RemoveAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UUID of the rule, which can be obtained by querying the rule list
                     * @return RuleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置UUID of the rule, which can be obtained by querying the rule list
                     * @param _ruleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                private:

                    /**
                     * UUID of the rule, which can be obtained by querying the rule list
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULEREQUEST_H_
