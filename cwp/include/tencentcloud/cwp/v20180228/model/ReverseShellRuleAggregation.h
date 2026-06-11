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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/UuidHostip.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Reverse shell rule for the aggregated version.
                */
                class ReverseShellRuleAggregation : public AbstractModel
                {
                public:
                    ReverseShellRuleAggregation();
                    ~ReverseShellRuleAggregation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
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
                     * 获取Client ID
                     * @return UuidHostips Client ID
                     * 
                     */
                    std::vector<UuidHostip> GetUuidHostips() const;

                    /**
                     * 设置Client ID
                     * @param _uuidHostips Client ID
                     * 
                     */
                    void SetUuidHostips(const std::vector<UuidHostip>& _uuidHostips);

                    /**
                     * 判断参数 UuidHostips 是否已赋值
                     * @return UuidHostips 是否已赋值
                     * 
                     */
                    bool UuidHostipsHasBeenSet() const;

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
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Whether a global rule
                     * @return IsGlobal Whether a global rule
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether a global rule
                     * @param _isGlobal Whether a global rule
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
                     * 获取Status (0: valid; 1: invalid)
                     * @return Status Status (0: valid; 1: invalid)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status (0: valid; 1: invalid)
                     * @param _status Status (0: valid; 1: invalid)
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

                    /**
                     * 获取Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * @return MachinesNums Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * 
                     */
                    std::string GetMachinesNums() const;

                    /**
                     * 设置Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * @param _machinesNums Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * 
                     */
                    void SetMachinesNums(const std::string& _machinesNums);

                    /**
                     * 判断参数 MachinesNums 是否已赋值
                     * @return MachinesNums 是否已赋值
                     * 
                     */
                    bool MachinesNumsHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::vector<UuidHostip> m_uuidHostips;
                    bool m_uuidHostipsHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

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
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Whether a global rule
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Status (0: valid; 1: invalid)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

                    /**
                     * Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     */
                    std::string m_machinesNums;
                    bool m_machinesNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_
