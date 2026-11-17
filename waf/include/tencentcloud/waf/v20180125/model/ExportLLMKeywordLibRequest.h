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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_EXPORTLLMKEYWORDLIBREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_EXPORTLLMKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ExportLLMKeywordLib request structure.
                */
                class ExportLLMKeywordLibRequest : public AbstractModel
                {
                public:
                    ExportLLMKeywordLibRequest();
                    ~ExportLLMKeywordLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of lexicon IDs to export
                     * @return RuleIds List of lexicon IDs to export
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置List of lexicon IDs to export
                     * @param _ruleIds List of lexicon IDs to export
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * List of lexicon IDs to export
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_EXPORTLLMKEYWORDLIBREQUEST_H_
