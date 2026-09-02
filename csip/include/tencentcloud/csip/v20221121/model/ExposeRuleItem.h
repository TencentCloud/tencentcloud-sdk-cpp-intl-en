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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_

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
                * Cloud boundary rule information
                */
                class ExposeRuleItem : public AbstractModel
                {
                public:
                    ExposeRuleItem();
                    ~ExposeRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type
                     * @return RuleType Rule type
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type
                     * @param _ruleType Rule type
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Severity Risk level
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置Risk level
                     * @param _severity Risk level
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return Title Rule name
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Rule name
                     * @param _title Rule name
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return FixAdvice Fixing suggestion
                     * 
                     */
                    std::string GetFixAdvice() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fixAdvice Fixing suggestion
                     * 
                     */
                    void SetFixAdvice(const std::string& _fixAdvice);

                    /**
                     * 判断参数 FixAdvice 是否已赋值
                     * @return FixAdvice 是否已赋值
                     * 
                     */
                    bool FixAdviceHasBeenSet() const;

                private:

                    /**
                     * Rule type
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fixAdvice;
                    bool m_fixAdviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSERULEITEM_H_
