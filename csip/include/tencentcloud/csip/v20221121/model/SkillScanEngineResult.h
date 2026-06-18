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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANENGINERESULT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANENGINERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillScanRuleHit.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Sub-engine scanning result
                */
                class SkillScanEngineResult : public AbstractModel
                {
                public:
                    SkillScanEngineResult();
                    ~SkillScanEngineResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-engine type
Enumeration value:
AI: AI engine
STATIC: Static analysis engine
                     * @return ScanType Sub-engine type
Enumeration value:
AI: AI engine
STATIC: Static analysis engine
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置Sub-engine type
Enumeration value:
AI: AI engine
STATIC: Static analysis engine
                     * @param _scanType Sub-engine type
Enumeration value:
AI: AI engine
STATIC: Static analysis engine
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
                     * 获取The rule list hit by the engine
                     * @return RuleList The rule list hit by the engine
                     * 
                     */
                    std::vector<SkillScanRuleHit> GetRuleList() const;

                    /**
                     * 设置The rule list hit by the engine
                     * @param _ruleList The rule list hit by the engine
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
                     * Sub-engine type
Enumeration value:
AI: AI engine
STATIC: Static analysis engine
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * The rule list hit by the engine
                     */
                    std::vector<SkillScanRuleHit> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANENGINERESULT_H_
