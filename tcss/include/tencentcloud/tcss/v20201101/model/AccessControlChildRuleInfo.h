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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLCHILDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLCHILDRULEINFO_H_

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
                * Container runtime security - Information of the access control sub-policy
                */
                class AccessControlChildRuleInfo : public AbstractModel
                {
                public:
                    AccessControlChildRuleInfo();
                    ~AccessControlChildRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     * @return RuleMode Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    std::string GetRuleMode() const;

                    /**
                     * 设置Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     * @param RuleMode Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    void SetRuleMode(const std::string& _ruleMode);

                    /**
                     * 判断参数 RuleMode 是否已赋值
                     * @return RuleMode 是否已赋值
                     */
                    bool RuleModeHasBeenSet() const;

                    /**
                     * 获取Process path
                     * @return ProcessPath Process path
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
                     * @param ProcessPath Process path
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Accessed file path, which is valid only for access control.
                     * @return TargetFilePath Accessed file path, which is valid only for access control.
                     */
                    std::string GetTargetFilePath() const;

                    /**
                     * 设置Accessed file path, which is valid only for access control.
                     * @param TargetFilePath Accessed file path, which is valid only for access control.
                     */
                    void SetTargetFilePath(const std::string& _targetFilePath);

                    /**
                     * 判断参数 TargetFilePath 是否已赋值
                     * @return TargetFilePath 是否已赋值
                     */
                    bool TargetFilePathHasBeenSet() const;

                    /**
                     * 获取Sub-policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Sub-policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Sub-policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleId Sub-policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Policy mode. `RULE_MODE_RELEASE`: Allow.
   `RULE_MODE_ALERT`: Alert.
   `RULE_MODE_HOLDUP`: Block.
                     */
                    std::string m_ruleMode;
                    bool m_ruleModeHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Accessed file path, which is valid only for access control.
                     */
                    std::string m_targetFilePath;
                    bool m_targetFilePathHasBeenSet;

                    /**
                     * Sub-policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLCHILDRULEINFO_H_
