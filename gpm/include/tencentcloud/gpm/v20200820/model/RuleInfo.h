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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_

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
                * Rule information
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name. It supports [a-zA-Z0-9-\.]*.
                     * @return RuleName Rule name. It supports [a-zA-Z0-9-\.]*.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name. It supports [a-zA-Z0-9-\.]*.
                     * @param _ruleName Rule name. It supports [a-zA-Z0-9-\.]*.
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
                     * 获取Rule description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return RuleDesc Rule description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置Rule description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _ruleDesc Rule description
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Rule script
                     * @return RuleScript Rule script
                     * 
                     */
                    std::string GetRuleScript() const;

                    /**
                     * 设置Rule script
                     * @param _ruleScript Rule script
                     * 
                     */
                    void SetRuleScript(const std::string& _ruleScript);

                    /**
                     * 判断参数 RuleScript 是否已赋值
                     * @return RuleScript 是否已赋值
                     * 
                     */
                    bool RuleScriptHasBeenSet() const;

                    /**
                     * 获取Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Tags Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _tags Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The associated match
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchCodeList The associated match
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<StringKV> GetMatchCodeList() const;

                    /**
                     * 设置The associated match
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _matchCodeList The associated match
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AppId User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _appId User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Uin User UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _uin User UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取User OwnerUin
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CreateUin User OwnerUin
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置User OwnerUin
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _createUin User OwnerUin
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                private:

                    /**
                     * Rule name. It supports [a-zA-Z0-9-\.]*.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rule description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * Rule script
                     */
                    std::string m_ruleScript;
                    bool m_ruleScriptHasBeenSet;

                    /**
                     * Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The associated match
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<StringKV> m_matchCodeList;
                    bool m_matchCodeListHasBeenSet;

                    /**
                     * RuleCode
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User OwnerUin
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_
