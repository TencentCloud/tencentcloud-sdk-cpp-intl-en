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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ADDVULIGNORERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ADDVULIGNORERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulIgnoreRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * AddVulIgnoreRule request structure.
                */
                class AddVulIgnoreRuleRequest : public AbstractModel
                {
                public:
                    AddVulIgnoreRuleRequest();
                    ~AddVulIgnoreRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of ignore rules.
                     * @return RuleDetailList Collection of ignore rules.
                     * 
                     */
                    std::vector<VulIgnoreRule> GetRuleDetailList() const;

                    /**
                     * 设置Collection of ignore rules.
                     * @param _ruleDetailList Collection of ignore rules.
                     * 
                     */
                    void SetRuleDetailList(const std::vector<VulIgnoreRule>& _ruleDetailList);

                    /**
                     * 判断参数 RuleDetailList 是否已赋值
                     * @return RuleDetailList 是否已赋值
                     * 
                     */
                    bool RuleDetailListHasBeenSet() const;

                private:

                    /**
                     * Collection of ignore rules.
                     */
                    std::vector<VulIgnoreRule> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDVULIGNORERULEREQUEST_H_
