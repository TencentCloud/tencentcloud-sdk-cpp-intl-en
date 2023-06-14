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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_RULEBRIEFINFO_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_RULEBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Brief rule information
                */
                class RuleBriefInfo : public AbstractModel
                {
                public:
                    RuleBriefInfo();
                    ~RuleBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name. It supports [a-zA-Z\d-\.]*.
                     * @return RuleName Rule name. It supports [a-zA-Z\d-\.]*.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. It supports [a-zA-Z\d-\.]*.
                     * @param _ruleName Rule name. It supports [a-zA-Z\d-\.]*.
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
                     * 获取The associated match
                     * @return MatchCodeList The associated match
                     * 
                     */
                    std::vector<StringKV> GetMatchCodeList() const;

                    /**
                     * 设置The associated match
                     * @param _matchCodeList The associated match
                     * 
                     */
                    void SetMatchCodeList(const std::vector<StringKV>& _matchCodeList);

                    /**
                     * 判断参数 MatchCodeList 是否已赋值
                     * @return MatchCodeList 是否已赋值
                     * 
                     */
                    bool MatchCodeListHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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

                private:

                    /**
                     * Rule name. It supports [a-zA-Z\d-\.]*.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The associated match
                     */
                    std::vector<StringKV> m_matchCodeList;
                    bool m_matchCodeListHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * RuleCode
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_RULEBRIEFINFO_H_
