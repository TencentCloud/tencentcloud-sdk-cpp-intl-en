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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REFERERRULE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REFERERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Referer blocklist/allowlist rule configuration
                */
                class RefererRule : public AbstractModel
                {
                public:
                    RefererRule();
                    ~RefererRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @return RuleType Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @param _ruleType Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
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
                     * 获取Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @return RulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @param _rulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取referer configuration type. Value:
<li>whitelist: allowlist;</li>
<li>blacklist: blocklist.</li>
                     * @return RefererType referer configuration type. Value:
<li>whitelist: allowlist;</li>
<li>blacklist: blocklist.</li>
                     * 
                     */
                    std::string GetRefererType() const;

                    /**
                     * 设置referer configuration type. Value:
<li>whitelist: allowlist;</li>
<li>blacklist: blocklist.</li>
                     * @param _refererType referer configuration type. Value:
<li>whitelist: allowlist;</li>
<li>blacklist: blocklist.</li>
                     * 
                     */
                    void SetRefererType(const std::string& _refererType);

                    /**
                     * 判断参数 RefererType 是否已赋值
                     * @return RefererType 是否已赋值
                     * 
                     */
                    bool RefererTypeHasBeenSet() const;

                    /**
                     * 获取referer list.
                     * @return Referers referer list.
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置referer list.
                     * @param _referers referer list.
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取Whether to allow empty referer:
When the anti-hotlinking type is allowlist, true indicates that empty referer is allowed, and false indicates that empty referer is not allowed;
If the anti-hotlinking type is blocklist, true indicates to deny empty referers, and false indicates not to deny empty referers.
                     * @return AllowEmpty Whether to allow empty referer:
When the anti-hotlinking type is allowlist, true indicates that empty referer is allowed, and false indicates that empty referer is not allowed;
If the anti-hotlinking type is blocklist, true indicates to deny empty referers, and false indicates not to deny empty referers.
                     * 
                     */
                    bool GetAllowEmpty() const;

                    /**
                     * 设置Whether to allow empty referer:
When the anti-hotlinking type is allowlist, true indicates that empty referer is allowed, and false indicates that empty referer is not allowed;
If the anti-hotlinking type is blocklist, true indicates to deny empty referers, and false indicates not to deny empty referers.
                     * @param _allowEmpty Whether to allow empty referer:
When the anti-hotlinking type is allowlist, true indicates that empty referer is allowed, and false indicates that empty referer is not allowed;
If the anti-hotlinking type is blocklist, true indicates to deny empty referers, and false indicates not to deny empty referers.
                     * 
                     */
                    void SetAllowEmpty(const bool& _allowEmpty);

                    /**
                     * 判断参数 AllowEmpty 是否已赋值
                     * @return AllowEmpty 是否已赋值
                     * 
                     */
                    bool AllowEmptyHasBeenSet() const;

                private:

                    /**
                     * Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * referer configuration type. Value:
<li>whitelist: allowlist;</li>
<li>blacklist: blocklist.</li>
                     */
                    std::string m_refererType;
                    bool m_refererTypeHasBeenSet;

                    /**
                     * referer list.
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * Whether to allow empty referer:
When the anti-hotlinking type is allowlist, true indicates that empty referer is allowed, and false indicates that empty referer is not allowed;
If the anti-hotlinking type is blocklist, true indicates to deny empty referers, and false indicates not to deny empty referers.
                     */
                    bool m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERRULE_H_
