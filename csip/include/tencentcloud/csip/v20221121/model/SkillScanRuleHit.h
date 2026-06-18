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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_

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
                * hit rule
                */
                class SkillScanRuleHit : public AbstractModel
                {
                public:
                    SkillScanRuleHit();
                    ~SkillScanRuleHit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fusion rule number (9xxxx) can be cross-referenced with RuleCatalog.
                     * @return RuleID Fusion rule number (9xxxx) can be cross-referenced with RuleCatalog.
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Fusion rule number (9xxxx) can be cross-referenced with RuleCatalog.
                     * @param _ruleID Fusion rule number (9xxxx) can be cross-referenced with RuleCatalog.
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Current description of the specific detection for the matched rule, including file location, behavioral features, risks, etc.
                     * @return Description Current description of the specific detection for the matched rule, including file location, behavioral features, risks, etc.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Current description of the specific detection for the matched rule, including file location, behavioral features, risks, etc.
                     * @param _description Current description of the specific detection for the matched rule, including file location, behavioral features, risks, etc.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Fusion rule number (9xxxx) can be cross-referenced with RuleCatalog.
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Current description of the specific detection for the matched rule, including file location, behavioral features, risks, etc.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_
