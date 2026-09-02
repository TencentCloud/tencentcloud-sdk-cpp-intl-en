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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CommandSandboxFileRuleBase.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Command sandbox file access rule basic information
                */
                class CommandSandboxFileRule : public AbstractModel
                {
                public:
                    CommandSandboxFileRule();
                    ~CommandSandboxFileRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleID <p>Rule ID.</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleID <p>Rule ID.</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Rule source type</p><p>Enumeration values:</p><ul><li>SYSTEM: system preset rule</li><li>CUSTOM: custom rule</li></ul>
                     * @return RuleType <p>Rule source type</p><p>Enumeration values:</p><ul><li>SYSTEM: system preset rule</li><li>CUSTOM: custom rule</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>Rule source type</p><p>Enumeration values:</p><ul><li>SYSTEM: system preset rule</li><li>CUSTOM: custom rule</li></ul>
                     * @param _ruleType <p>Rule source type</p><p>Enumeration values:</p><ul><li>SYSTEM: system preset rule</li><li>CUSTOM: custom rule</li></ul>
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
                     * 获取<p>Rule update time</p>
                     * @return UpdateTime <p>Rule update time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Rule update time</p>
                     * @param _updateTime <p>Rule update time</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Rule content</p>
                     * @return RuleContent <p>Rule content</p>
                     * 
                     */
                    CommandSandboxFileRuleBase GetRuleContent() const;

                    /**
                     * 设置<p>Rule content</p>
                     * @param _ruleContent <p>Rule content</p>
                     * 
                     */
                    void SetRuleContent(const CommandSandboxFileRuleBase& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID.</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Rule source type</p><p>Enumeration values:</p><ul><li>SYSTEM: system preset rule</li><li>CUSTOM: custom rule</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Rule update time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Rule content</p>
                     */
                    CommandSandboxFileRuleBase m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_
