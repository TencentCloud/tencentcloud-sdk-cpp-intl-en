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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Tag immutability rule
                */
                class ImmutableTagRule : public AbstractModel
                {
                public:
                    ImmutableTagRule();
                    ~ImmutableTagRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Repository matching rule
                     * @return RepositoryPattern Repository matching rule
                     * 
                     */
                    std::string GetRepositoryPattern() const;

                    /**
                     * 设置Repository matching rule
                     * @param _repositoryPattern Repository matching rule
                     * 
                     */
                    void SetRepositoryPattern(const std::string& _repositoryPattern);

                    /**
                     * 判断参数 RepositoryPattern 是否已赋值
                     * @return RepositoryPattern 是否已赋值
                     * 
                     */
                    bool RepositoryPatternHasBeenSet() const;

                    /**
                     * 获取Tag matching rule
                     * @return TagPattern Tag matching rule
                     * 
                     */
                    std::string GetTagPattern() const;

                    /**
                     * 设置Tag matching rule
                     * @param _tagPattern Tag matching rule
                     * 
                     */
                    void SetTagPattern(const std::string& _tagPattern);

                    /**
                     * 判断参数 TagPattern 是否已赋值
                     * @return TagPattern 是否已赋值
                     * 
                     */
                    bool TagPatternHasBeenSet() const;

                    /**
                     * 获取repoMatches or repoExcludes
                     * @return RepositoryDecoration repoMatches or repoExcludes
                     * 
                     */
                    std::string GetRepositoryDecoration() const;

                    /**
                     * 设置repoMatches or repoExcludes
                     * @param _repositoryDecoration repoMatches or repoExcludes
                     * 
                     */
                    void SetRepositoryDecoration(const std::string& _repositoryDecoration);

                    /**
                     * 判断参数 RepositoryDecoration 是否已赋值
                     * @return RepositoryDecoration 是否已赋值
                     * 
                     */
                    bool RepositoryDecorationHasBeenSet() const;

                    /**
                     * 获取matches or excludes
                     * @return TagDecoration matches or excludes
                     * 
                     */
                    std::string GetTagDecoration() const;

                    /**
                     * 设置matches or excludes
                     * @param _tagDecoration matches or excludes
                     * 
                     */
                    void SetTagDecoration(const std::string& _tagDecoration);

                    /**
                     * 判断参数 TagDecoration 是否已赋值
                     * @return TagDecoration 是否已赋值
                     * 
                     */
                    bool TagDecorationHasBeenSet() const;

                    /**
                     * 获取Disabling rule
                     * @return Disabled Disabling rule
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置Disabling rule
                     * @param _disabled Disabling rule
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return NsName Namespace
                     * 
                     */
                    std::string GetNsName() const;

                    /**
                     * 设置Namespace
                     * @param _nsName Namespace
                     * 
                     */
                    void SetNsName(const std::string& _nsName);

                    /**
                     * 判断参数 NsName 是否已赋值
                     * @return NsName 是否已赋值
                     * 
                     */
                    bool NsNameHasBeenSet() const;

                private:

                    /**
                     * Repository matching rule
                     */
                    std::string m_repositoryPattern;
                    bool m_repositoryPatternHasBeenSet;

                    /**
                     * Tag matching rule
                     */
                    std::string m_tagPattern;
                    bool m_tagPatternHasBeenSet;

                    /**
                     * repoMatches or repoExcludes
                     */
                    std::string m_repositoryDecoration;
                    bool m_repositoryDecorationHasBeenSet;

                    /**
                     * matches or excludes
                     */
                    std::string m_tagDecoration;
                    bool m_tagDecorationHasBeenSet;

                    /**
                     * Disabling rule
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * Rule ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_nsName;
                    bool m_nsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_
