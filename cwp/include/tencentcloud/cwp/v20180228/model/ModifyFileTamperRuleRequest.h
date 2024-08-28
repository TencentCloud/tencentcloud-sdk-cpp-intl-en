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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyFileTamperRule request structure.
                */
                class ModifyFileTamperRuleRequest : public AbstractModel
                {
                public:
                    ModifyFileTamperRuleRequest();
                    ~ModifyFileTamperRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Rule content
                     * @return Rules Rule content
                     * 
                     */
                    std::vector<FileTamperRule> GetRules() const;

                    /**
                     * 设置Rule content
                     * @param _rules Rule content
                     * 
                     */
                    void SetRules(const std::vector<FileTamperRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Whether the rule is global (not global by default). 0: no; 1: yes. If the value is 1, Uuids can be left blank.
                     * @return IsGlobal Whether the rule is global (not global by default). 0: no; 1: yes. If the value is 1, Uuids can be left blank.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the rule is global (not global by default). 0: no; 1: yes. If the value is 1, Uuids can be left blank.
                     * @param _isGlobal Whether the rule is global (not global by default). 0: no; 1: yes. If the value is 1, Uuids can be left blank.
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Enabling status. 0: enabled; 1: disabled.
                     * @return Status Enabling status. 0: enabled; 1: disabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Enabling status. 0: enabled; 1: disabled.
                     * @param _status Enabling status. 0: enabled; 1: disabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule ID. If this parameter is left blank or set to 0, the rule is to be added.
                     * @return Id Rule ID. If this parameter is left blank or set to 0, the rule is to be added.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID. If this parameter is left blank or set to 0, the rule is to be added.
                     * @param _id Rule ID. If this parameter is left blank or set to 0, the rule is to be added.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取UUID array of affected hosts
                     * @return Uuids UUID array of affected hosts
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置UUID array of affected hosts
                     * @param _uuids UUID array of affected hosts
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @return Level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @param _level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all objects that meet the conditions to the allowlist</li>
                     * @return AddWhiteType Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all objects that meet the conditions to the allowlist</li>
                     * 
                     */
                    std::string GetAddWhiteType() const;

                    /**
                     * 设置Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all objects that meet the conditions to the allowlist</li>
                     * @param _addWhiteType Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all objects that meet the conditions to the allowlist</li>
                     * 
                     */
                    void SetAddWhiteType(const std::string& _addWhiteType);

                    /**
                     * 判断参数 AddWhiteType 是否已赋值
                     * @return AddWhiteType 是否已赋值
                     * 
                     */
                    bool AddWhiteTypeHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule content
                     */
                    std::vector<FileTamperRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Whether the rule is global (not global by default). 0: no; 1: yes. If the value is 1, Uuids can be left blank.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Enabling status. 0: enabled; 1: disabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule ID. If this parameter is left blank or set to 0, the rule is to be added.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * UUID array of affected hosts
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all objects that meet the conditions to the allowlist</li>
                     */
                    std::string m_addWhiteType;
                    bool m_addWhiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULEREQUEST_H_
