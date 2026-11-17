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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SkillScanRuleHit.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Scan result details (grouped by sub-engine)
                */
                class SkillScanItem : public AbstractModel
                {
                public:
                    SkillScanItem();
                    ~SkillScanItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sub-engine type: AI (AI analysis) / STATIC (static analysis)</p>
                     * @return ScanType <p>Sub-engine type: AI (AI analysis) / STATIC (static analysis)</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置<p>Sub-engine type: AI (AI analysis) / STATIC (static analysis)</p>
                     * @param _scanType <p>Sub-engine type: AI (AI analysis) / STATIC (static analysis)</p>
                     * 
                     */
                    void SetScanType(const std::string& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of rules hit by this engine</p>
                     * @return RuleList <p>List of rules hit by this engine</p>
                     * 
                     */
                    std::vector<SkillScanRuleHit> GetRuleList() const;

                    /**
                     * 设置<p>List of rules hit by this engine</p>
                     * @param _ruleList <p>List of rules hit by this engine</p>
                     * 
                     */
                    void SetRuleList(const std::vector<SkillScanRuleHit>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * <p>Sub-engine type: AI (AI analysis) / STATIC (static analysis)</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>List of rules hit by this engine</p>
                     */
                    std::vector<SkillScanRuleHit> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANITEM_H_
