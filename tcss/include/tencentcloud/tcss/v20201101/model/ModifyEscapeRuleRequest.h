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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPERULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/EscapeRuleEnabled.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyEscapeRule request structure.
                */
                class ModifyEscapeRuleRequest : public AbstractModel
                {
                public:
                    ModifyEscapeRuleRequest();
                    ~ModifyEscapeRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array to be modified
                     * @return RuleSet Array to be modified
                     * 
                     */
                    std::vector<EscapeRuleEnabled> GetRuleSet() const;

                    /**
                     * 设置Array to be modified
                     * @param _ruleSet Array to be modified
                     * 
                     */
                    void SetRuleSet(const std::vector<EscapeRuleEnabled>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * 
                     */
                    bool RuleSetHasBeenSet() const;

                private:

                    /**
                     * Array to be modified
                     */
                    std::vector<EscapeRuleEnabled> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPERULEREQUEST_H_
