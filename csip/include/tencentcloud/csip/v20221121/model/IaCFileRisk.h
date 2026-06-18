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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILERISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILERISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * IaC detection file risk
                */
                class IaCFileRisk : public AbstractModel
                {
                public:
                    IaCFileRisk();
                    ~IaCFileRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk level (0: low-risk, 1: medium-risk, 2: high-risk, 3: critical)</p>
                     * @return Level <p>Risk level (0: low-risk, 1: medium-risk, 2: high-risk, 3: critical)</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>Risk level (0: low-risk, 1: medium-risk, 2: high-risk, 3: critical)</p>
                     * @param _level <p>Risk level (0: low-risk, 1: medium-risk, 2: high-risk, 3: critical)</p>
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Row count of risk location</p>
                     * @return Line <p>Row count of risk location</p>
                     * 
                     */
                    uint64_t GetLine() const;

                    /**
                     * 设置<p>Row count of risk location</p>
                     * @param _line <p>Row count of risk location</p>
                     * 
                     */
                    void SetLine(const uint64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Problem description</p>
                     * @return Description <p>Problem description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Problem description</p>
                     * @param _description <p>Problem description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Repair recommendation</p>
                     * @return Suggestion <p>Repair recommendation</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>Repair recommendation</p>
                     * @param _suggestion <p>Repair recommendation</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>Risk level (0: low-risk, 1: medium-risk, 2: high-risk, 3: critical)</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Row count of risk location</p>
                     */
                    uint64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Problem description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Repair recommendation</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILERISK_H_
