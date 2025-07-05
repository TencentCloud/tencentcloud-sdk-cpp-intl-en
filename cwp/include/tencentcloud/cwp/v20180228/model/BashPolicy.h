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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * High-risk command policy
                */
                class BashPolicy : public AbstractModel
                {
                public:
                    BashPolicy();
                    ~BashPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * 获取1: valid; 0: invalid
                     * @return Enable 1: valid; 0: invalid
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置1: valid; 0: invalid
                     * @param _enable 1: valid; 0: invalid
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取0: blocklist; 1: allowlist
                     * @return White 0: blocklist; 1: allowlist
                     * 
                     */
                    int64_t GetWhite() const;

                    /**
                     * 设置0: blocklist; 1: allowlist
                     * @param _white 0: blocklist; 1: allowlist
                     * 
                     */
                    void SetWhite(const int64_t& _white);

                    /**
                     * 判断参数 White 是否已赋值
                     * @return White 是否已赋值
                     * 
                     */
                    bool WhiteHasBeenSet() const;

                    /**
                     * 获取0: alarm; 1: allowlist; 2: intercept
                     * @return BashAction 0: alarm; 1: allowlist; 2: intercept
                     * 
                     */
                    int64_t GetBashAction() const;

                    /**
                     * 设置0: alarm; 1: allowlist; 2: intercept
                     * @param _bashAction 0: alarm; 1: allowlist; 2: intercept
                     * 
                     */
                    void SetBashAction(const int64_t& _bashAction);

                    /**
                     * 判断参数 BashAction 是否已赋值
                     * @return BashAction 是否已赋值
                     * 
                     */
                    bool BashActionHasBeenSet() const;

                    /**
                     * 获取Regular expression
                     * @return Rule Regular expression
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Regular expression
                     * @param _rule Regular expression
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * @return Level Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * @param _level Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Effective scope (0: a group of QUUID; 1: all professional editions (including ultimate edition); 2: all ultimate editions; 3: all hosts)
                     * @return Scope Effective scope (0: a group of QUUID; 1: all professional editions (including ultimate edition); 2: all ultimate editions; 3: all hosts)
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置Effective scope (0: a group of QUUID; 1: all professional editions (including ultimate edition); 2: all ultimate editions; 3: all hosts)
                     * @param _scope Effective scope (0: a group of QUUID; 1: all professional editions (including ultimate edition); 2: all ultimate editions; 3: all hosts)
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return Id Policy ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Policy ID
                     * @param _id Policy ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Descript Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _descript Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取When it is added to the allowlist, the EventId needs to be passed in.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventId When it is added to the allowlist, the EventId needs to be passed in.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置When it is added to the allowlist, the EventId needs to be passed in.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventId When it is added to the allowlist, the EventId needs to be passed in.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Whether to process old events as allowlisted ones: 0 - no; 1 - yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealOldEvents Whether to process old events as allowlisted ones: 0 - no; 1 - yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置Whether to process old events as allowlisted ones: 0 - no; 1 - yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealOldEvents Whether to process old events as allowlisted ones: 0 - no; 1 - yes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDealOldEvents(const int64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取A collection of QUUIDs for effective hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids A collection of QUUIDs for effective hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置A collection of QUUIDs for effective hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuids A collection of QUUIDs for effective hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Policy type: 0 - system; 1 - user
                     * @return Category Policy type: 0 - system; 1 - user
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置Policy type: 0 - system; 1 - user
                     * @param _category Policy type: 0 - system; 1 - user
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

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
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Compatibility with older versions may be needed.
                     * @return Uuids Compatibility with older versions may be needed.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Compatibility with older versions may be needed.
                     * @param _uuids Compatibility with older versions may be needed.
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                private:

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 1: valid; 0: invalid
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 0: blocklist; 1: allowlist
                     */
                    int64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * 0: alarm; 1: allowlist; 2: intercept
                     */
                    int64_t m_bashAction;
                    bool m_bashActionHasBeenSet;

                    /**
                     * Regular expression
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Effective scope (0: a group of QUUID; 1: all professional editions (including ultimate edition); 2: all ultimate editions; 3: all hosts)
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * When it is added to the allowlist, the EventId needs to be passed in.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Whether to process old events as allowlisted ones: 0 - no; 1 - yes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * A collection of QUUIDs for effective hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Policy type: 0 - system; 1 - user
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Compatibility with older versions may be needed.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHPOLICY_H_
