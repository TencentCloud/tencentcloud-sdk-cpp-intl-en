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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_

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
                * ModifyReverseShellRulesAggregation request structure.
                */
                class ModifyReverseShellRulesAggregationRequest : public AbstractModel
                {
                public:
                    ModifyReverseShellRulesAggregationRequest();
                    ~ModifyReverseShellRulesAggregationRequest() = default;
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
                     * 获取Target IP address
                     * @return DestIp Target IP address
                     * 
                     */
                    std::string GetDestIp() const;

                    /**
                     * 设置Target IP address
                     * @param _destIp Target IP address
                     * 
                     */
                    void SetDestIp(const std::string& _destIp);

                    /**
                     * 判断参数 DestIp 是否已赋值
                     * @return DestIp 是否已赋值
                     * 
                     */
                    bool DestIpHasBeenSet() const;

                    /**
                     * 获取Target port
                     * @return DestPort Target port
                     * 
                     */
                    std::string GetDestPort() const;

                    /**
                     * 设置Target port
                     * @param _destPort Target port
                     * 
                     */
                    void SetDestPort(const std::string& _destPort);

                    /**
                     * 判断参数 DestPort 是否已赋值
                     * @return DestPort 是否已赋值
                     * 
                     */
                    bool DestPortHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Whether the rule is global (not global by default)
                     * @return IsGlobal Whether the rule is global (not global by default)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the rule is global (not global by default)
                     * @param _isGlobal Whether the rule is global (not global by default)
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
                     * 获取ID of the associated event when clicking Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * @return EventId ID of the associated event when clicking Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置ID of the associated event when clicking Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * @param _eventId ID of the associated event when clicking Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
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
                     * 获取Allowlisting method. 0: regular allowlisting, 1: regular expression allowlisting.
                     * @return WhiteType Allowlisting method. 0: regular allowlisting, 1: regular expression allowlisting.
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置Allowlisting method. 0: regular allowlisting, 1: regular expression allowlisting.
                     * @param _whiteType Allowlisting method. 0: regular allowlisting, 1: regular expression allowlisting.
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                    /**
                     * 获取Regular expression
                     * @return RuleRegexp Regular expression
                     * 
                     */
                    std::string GetRuleRegexp() const;

                    /**
                     * 设置Regular expression
                     * @param _ruleRegexp Regular expression
                     * 
                     */
                    void SetRuleRegexp(const std::string& _ruleRegexp);

                    /**
                     * 判断参数 RuleRegexp 是否已赋值
                     * @return RuleRegexp 是否已赋值
                     * 
                     */
                    bool RuleRegexpHasBeenSet() const;

                    /**
                     * 获取Whether to process historical events. 0: no, 1: yes.
                     * @return HandleHistory Whether to process historical events. 0: no, 1: yes.
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置Whether to process historical events. 0: no, 1: yes.
                     * @param _handleHistory Whether to process historical events. 0: no, 1: yes.
                     * 
                     */
                    void SetHandleHistory(const uint64_t& _handleHistory);

                    /**
                     * 判断参数 HandleHistory 是否已赋值
                     * @return HandleHistory 是否已赋值
                     * 
                     */
                    bool HandleHistoryHasBeenSet() const;

                    /**
                     * 获取Batch ID.
                     * @return GroupID Batch ID.
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置Batch ID.
                     * @param _groupID Batch ID.
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

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
                     * Target IP address
                     */
                    std::string m_destIp;
                    bool m_destIpHasBeenSet;

                    /**
                     * Target port
                     */
                    std::string m_destPort;
                    bool m_destPortHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Whether the rule is global (not global by default)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * ID of the associated event when clicking Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Allowlisting method. 0: regular allowlisting, 1: regular expression allowlisting.
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                    /**
                     * Regular expression
                     */
                    std::string m_ruleRegexp;
                    bool m_ruleRegexpHasBeenSet;

                    /**
                     * Whether to process historical events. 0: no, 1: yes.
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * Batch ID.
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_
