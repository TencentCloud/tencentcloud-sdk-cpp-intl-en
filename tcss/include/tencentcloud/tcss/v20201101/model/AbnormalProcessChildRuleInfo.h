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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container runtime security - Sub-policy information
                */
                class AbnormalProcessChildRuleInfo : public AbstractModel
                {
                public:
                    AbnormalProcessChildRuleInfo();
                    ~AbnormalProcessChildRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Process path.</p>
                     * @return ProcessPath <p>Process path.</p>
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置<p>Process path.</p>
                     * @param _processPath <p>Process path.</p>
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>Policy mode: RULE_MODE_RELEASE: allow<br>   RULE_MODE_ALERT: alarm<br>   RULE_MODE_HOLDUP: block</p>
                     * @return RuleMode <p>Policy mode: RULE_MODE_RELEASE: allow<br>   RULE_MODE_ALERT: alarm<br>   RULE_MODE_HOLDUP: block</p>
                     * 
                     */
                    std::string GetRuleMode() const;

                    /**
                     * 设置<p>Policy mode: RULE_MODE_RELEASE: allow<br>   RULE_MODE_ALERT: alarm<br>   RULE_MODE_HOLDUP: block</p>
                     * @param _ruleMode <p>Policy mode: RULE_MODE_RELEASE: allow<br>   RULE_MODE_ALERT: alarm<br>   RULE_MODE_HOLDUP: block</p>
                     * 
                     */
                    void SetRuleMode(const std::string& _ruleMode);

                    /**
                     * 判断参数 RuleMode 是否已赋值
                     * @return RuleMode 是否已赋值
                     * 
                     */
                    bool RuleModeHasBeenSet() const;

                    /**
                     * 获取<p>Command line parameters.</p>
                     * @return CmdLine <p>Command line parameters.</p>
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置<p>Command line parameters.</p>
                     * @param _cmdLine <p>Command line parameters.</p>
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取<p>Sub-policy ID.</p>
                     * @return RuleId <p>Sub-policy ID.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Sub-policy ID.</p>
                     * @param _ruleId <p>Sub-policy ID.</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Threat level: HIGH, MIDDLE, and LOW.</p>
                     * @return RuleLevel <p>Threat level: HIGH, MIDDLE, and LOW.</p>
                     * 
                     */
                    std::string GetRuleLevel() const;

                    /**
                     * 设置<p>Threat level: HIGH, MIDDLE, and LOW.</p>
                     * @param _ruleLevel <p>Threat level: HIGH, MIDDLE, and LOW.</p>
                     * 
                     */
                    void SetRuleLevel(const std::string& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                private:

                    /**
                     * <p>Process path.</p>
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * <p>Policy mode: RULE_MODE_RELEASE: allow<br>   RULE_MODE_ALERT: alarm<br>   RULE_MODE_HOLDUP: block</p>
                     */
                    std::string m_ruleMode;
                    bool m_ruleModeHasBeenSet;

                    /**
                     * <p>Command line parameters.</p>
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * <p>Sub-policy ID.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Threat level: HIGH, MIDDLE, and LOW.</p>
                     */
                    std::string m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_
