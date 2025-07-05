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
                * Referer blacklist/whitelist configuration rules, which is effective for specific resources.
                */
                class RefererRule : public AbstractModel
                {
                public:
                    RefererRule();
                    ~RefererRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @return RuleType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @param _ruleType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
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
                     * 获取Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * @return RulePaths Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * @param _rulePaths Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
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
                     * 获取rferer configuration type, value: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * @return RefererType rferer configuration type, value: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * 
                     */
                    std::string GetRefererType() const;

                    /**
                     * 设置rferer configuration type, value: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * @param _refererType rferer configuration type, value: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
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
                     * 获取Referer content list
                     * @return Referers Referer content list
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置Referer content list
                     * @param _referers Referer content list
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
                     * 获取Whether to allow empty referers: When the anti-hotlinking type is whitelist, true means that empty referers are allowed, false means that empty referers are not allowed; when the anti-hotlinking type is blacklist, true means that empty referers are rejected, and false means that empty referers are not rejected.
                     * @return AllowEmpty Whether to allow empty referers: When the anti-hotlinking type is whitelist, true means that empty referers are allowed, false means that empty referers are not allowed; when the anti-hotlinking type is blacklist, true means that empty referers are rejected, and false means that empty referers are not rejected.
                     * 
                     */
                    bool GetAllowEmpty() const;

                    /**
                     * 设置Whether to allow empty referers: When the anti-hotlinking type is whitelist, true means that empty referers are allowed, false means that empty referers are not allowed; when the anti-hotlinking type is blacklist, true means that empty referers are rejected, and false means that empty referers are not rejected.
                     * @param _allowEmpty Whether to allow empty referers: When the anti-hotlinking type is whitelist, true means that empty referers are allowed, false means that empty referers are not allowed; when the anti-hotlinking type is blacklist, true means that empty referers are rejected, and false means that empty referers are not rejected.
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
                     * Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * rferer configuration type, value: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     */
                    std::string m_refererType;
                    bool m_refererTypeHasBeenSet;

                    /**
                     * Referer content list
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * Whether to allow empty referers: When the anti-hotlinking type is whitelist, true means that empty referers are allowed, false means that empty referers are not allowed; when the anti-hotlinking type is blacklist, true means that empty referers are rejected, and false means that empty referers are not rejected.
                     */
                    bool m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERRULE_H_
