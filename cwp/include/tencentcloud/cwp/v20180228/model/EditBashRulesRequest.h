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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EditBashRules request structure.
                */
                class EditBashRulesRequest : public AbstractModel
                {
                public:
                    EditBashRulesRequest();
                    ~EditBashRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID (leave this parameter blank for addition)
                     * @return Id Rule ID (leave this parameter blank for addition)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID (leave this parameter blank for addition)
                     * @param _id Rule ID (leave this parameter blank for addition)
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
                     * 获取Client ID array
                     * @return Uuids Client ID array
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Client ID array
                     * @param _uuids Client ID array
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
                     * 获取Host IP address
                     * @return HostIp Host IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIp Host IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Rule name, which cannot be modified during editing
                     * @return Name Rule name, which cannot be modified during editing
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name, which cannot be modified during editing
                     * @param _name Rule name, which cannot be modified during editing
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
                     * 获取Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * @return Level Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     * @param _level Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
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
                     * 获取Regular expression, which cannot be modified during editing. Apply the QueryEscape function to the content and then perform Base64 encoding.
                     * @return Rule Regular expression, which cannot be modified during editing. Apply the QueryEscape function to the content and then perform Base64 encoding.
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Regular expression, which cannot be modified during editing. Apply the QueryEscape function to the content and then perform Base64 encoding.
                     * @param _rule Regular expression, which cannot be modified during editing. Apply the QueryEscape function to the content and then perform Base64 encoding.
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
                     * 获取Whether the rule is global. 1: global; 0: not global (default value).
                     * @return IsGlobal Whether the rule is global. 1: global; 0: not global (default value).
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the rule is global. 1: global; 0: not global (default value).
                     * @param _isGlobal Whether the rule is global. 1: global; 0: not global (default value).
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
                     * 获取0: blocklist; 1: allowlist
                     * @return White 0: blocklist; 1: allowlist
                     * 
                     */
                    uint64_t GetWhite() const;

                    /**
                     * 设置0: blocklist; 1: allowlist
                     * @param _white 0: blocklist; 1: allowlist
                     * 
                     */
                    void SetWhite(const uint64_t& _white);

                    /**
                     * 判断参数 White 是否已赋值
                     * @return White 是否已赋值
                     * 
                     */
                    bool WhiteHasBeenSet() const;

                    /**
                     * 获取When it is added to the allowlist, the event ID needs to be passed in.
                     * @return EventId When it is added to the allowlist, the event ID needs to be passed in.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置When it is added to the allowlist, the event ID needs to be passed in.
                     * @param _eventId When it is added to the allowlist, the event ID needs to be passed in.
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Whether to add existing events to the allowlist. 0: no; 1: yes.
                     * @return DealOldEvents Whether to add existing events to the allowlist. 0: no; 1: yes.
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置Whether to add existing events to the allowlist. 0: no; 1: yes.
                     * @param _dealOldEvents Whether to add existing events to the allowlist. 0: no; 1: yes.
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                private:

                    /**
                     * Rule ID (leave this parameter blank for addition)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID array
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Rule name, which cannot be modified during editing
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Risk level (0: none; 1: high-risk; 2: medium-risk; 3: low-risk)
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Regular expression, which cannot be modified during editing. Apply the QueryEscape function to the content and then perform Base64 encoding.
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Whether the rule is global. 1: global; 0: not global (default value).
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 0: blocklist; 1: allowlist
                     */
                    uint64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * When it is added to the allowlist, the event ID needs to be passed in.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Whether to add existing events to the allowlist. 0: no; 1: yes.
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EDITBASHRULESREQUEST_H_
