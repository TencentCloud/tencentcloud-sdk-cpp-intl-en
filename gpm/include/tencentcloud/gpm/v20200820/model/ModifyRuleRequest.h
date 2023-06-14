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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/StringKV.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * ModifyRule request structure.
                */
                class ModifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyRuleRequest();
                    ~ModifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RuleCode
                     * @return RuleCode RuleCode
                     * 
                     */
                    std::string GetRuleCode() const;

                    /**
                     * 设置RuleCode
                     * @param _ruleCode RuleCode
                     * 
                     */
                    void SetRuleCode(const std::string& _ruleCode);

                    /**
                     * 判断参数 RuleCode 是否已赋值
                     * @return RuleCode 是否已赋值
                     * 
                     */
                    bool RuleCodeHasBeenSet() const;

                    /**
                     * 获取Rule name. It can only contain numbers, letters, ".", and "-".
                     * @return RuleName Rule name. It can only contain numbers, letters, ".", and "-".
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. It can only contain numbers, letters, ".", and "-".
                     * @param _ruleName Rule name. It can only contain numbers, letters, ".", and "-".
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
                     * 获取Rule description. Up to 1024 bytes are allowed.
                     * @return RuleDesc Rule description. Up to 1024 bytes are allowed.
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置Rule description. Up to 1024 bytes are allowed.
                     * @param _ruleDesc Rule description. Up to 1024 bytes are allowed.
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取Tag. It is an array of key-value structure. Up to 50 tags can be associated.
                     * @return Tags Tag. It is an array of key-value structure. Up to 50 tags can be associated.
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置Tag. It is an array of key-value structure. Up to 50 tags can be associated.
                     * @param _tags Tag. It is an array of key-value structure. Up to 50 tags can be associated.
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * RuleCode
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * Rule name. It can only contain numbers, letters, ".", and "-".
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule description. Up to 1024 bytes are allowed.
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * Tag. It is an array of key-value structure. Up to 50 tags can be associated.
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYRULEREQUEST_H_
