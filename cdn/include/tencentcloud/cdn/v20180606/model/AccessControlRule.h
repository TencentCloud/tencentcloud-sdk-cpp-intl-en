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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Access control rule
                */
                class AccessControlRule : public AbstractModel
                {
                public:
                    AccessControlRule();
                    ~AccessControlRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取requestHeader: access control over request header
url: access control over access URL
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleType requestHeader: access control over request header
url: access control over access URL
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置requestHeader: access control over request header
url: access control over access URL
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RuleType requestHeader: access control over request header
url: access control over access URL
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Blocked content
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleContent Blocked content
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置Blocked content
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RuleContent Blocked content
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取on: regular match
off: exact match
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Regex on: regular match
off: exact match
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置on: regular match
off: exact match
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Regex on: regular match
off: exact match
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取This parameter is required only if `RuleType` is `requestHeader`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleHeader This parameter is required only if `RuleType` is `requestHeader`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetRuleHeader() const;

                    /**
                     * 设置This parameter is required only if `RuleType` is `requestHeader`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RuleHeader This parameter is required only if `RuleType` is `requestHeader`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRuleHeader(const std::string& _ruleHeader);

                    /**
                     * 判断参数 RuleHeader 是否已赋值
                     * @return RuleHeader 是否已赋值
                     */
                    bool RuleHeaderHasBeenSet() const;

                private:

                    /**
                     * requestHeader: access control over request header
url: access control over access URL
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Blocked content
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * on: regular match
off: exact match
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * This parameter is required only if `RuleType` is `requestHeader`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleHeader;
                    bool m_ruleHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_
