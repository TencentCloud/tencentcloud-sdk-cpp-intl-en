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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTERRULE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTERRULE_H_

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
                * UserAgent blacklist/whitelist rule configuration
                */
                class UserAgentFilterRule : public AbstractModel
                {
                public:
                    UserAgentFilterRule();
                    ~UserAgentFilterRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UA blacklist type: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * @return FilterType UA blacklist type: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置UA blacklist type: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * @param _filterType UA blacklist type: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取UserAgent list.
                     * @return UserAgents UserAgent list.
                     * 
                     */
                    std::vector<std::string> GetUserAgents() const;

                    /**
                     * 设置UserAgent list.
                     * @param _userAgents UserAgent list.
                     * 
                     */
                    void SetUserAgents(const std::vector<std::string>& _userAgents);

                    /**
                     * 判断参数 UserAgents 是否已赋值
                     * @return UserAgents 是否已赋值
                     * 
                     */
                    bool UserAgentsHasBeenSet() const;

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

                private:

                    /**
                     * UA blacklist type: <li>whitelist: whitelist;</li> <li>blacklist: blacklist. </li>
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * UserAgent list.
                     */
                    std::vector<std::string> m_userAgents;
                    bool m_userAgentsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERAGENTFILTERRULE_H_
