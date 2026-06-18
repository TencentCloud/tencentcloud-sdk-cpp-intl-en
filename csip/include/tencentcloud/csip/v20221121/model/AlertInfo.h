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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RoleInfo.h>
#include <tencentcloud/csip/v20221121/model/AlertExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Full Alarm List Data from Alarm Center
                */
                class AlertInfo : public AbstractModel
                {
                public:
                    AlertInfo();
                    ~AlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取alarm ID
                     * @return ID alarm ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置alarm ID
                     * @param _iD alarm ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取alarm name
                     * @return Name alarm name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置alarm name
                     * @param _name alarm name
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
                     * 获取Alarm source
CFW: Cloud Firewall
WAF: Web application firewall
CWP: Host Security
CSIP: Cloud Security Center
                     * @return Source Alarm source
CFW: Cloud Firewall
WAF: Web application firewall
CWP: Host Security
CSIP: Cloud Security Center
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Alarm source
CFW: Cloud Firewall
WAF: Web application firewall
CWP: Host Security
CSIP: Cloud Security Center
                     * @param _source Alarm source
CFW: Cloud Firewall
WAF: Web application firewall
CWP: Host Security
CSIP: Cloud Security Center
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取alarm level
Prompt.
2: Low risk
3: Medium risk
4: High risk
5: Critical
                     * @return Level alarm level
Prompt.
2: Low risk
3: Medium risk
4: High risk
5: Critical
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置alarm level
Prompt.
2: Low risk
3: Medium risk
4: High risk
5: Critical
                     * @param _level alarm level
Prompt.
2: Low risk
3: Medium risk
4: High risk
5: Critical
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
                     * 获取attacker
                     * @return Attacker attacker
                     * 
                     */
                    RoleInfo GetAttacker() const;

                    /**
                     * 设置attacker
                     * @param _attacker attacker
                     * 
                     */
                    void SetAttacker(const RoleInfo& _attacker);

                    /**
                     * 判断参数 Attacker 是否已赋值
                     * @return Attacker 是否已赋值
                     * 
                     */
                    bool AttackerHasBeenSet() const;

                    /**
                     * 获取victim
                     * @return Victim victim
                     * 
                     */
                    RoleInfo GetVictim() const;

                    /**
                     * 设置victim
                     * @param _victim victim
                     * 
                     */
                    void SetVictim(const RoleInfo& _victim);

                    /**
                     * 判断参数 Victim 是否已赋值
                     * @return Victim 是否已赋值
                     * 
                     */
                    bool VictimHasBeenSet() const;

                    /**
                     * 获取Evidence data (such as attack content, base64 encoded)
                     * @return EvidenceData Evidence data (such as attack content, base64 encoded)
                     * 
                     */
                    std::string GetEvidenceData() const;

                    /**
                     * 设置Evidence data (such as attack content, base64 encoded)
                     * @param _evidenceData Evidence data (such as attack content, base64 encoded)
                     * 
                     */
                    void SetEvidenceData(const std::string& _evidenceData);

                    /**
                     * 判断参数 EvidenceData 是否已赋值
                     * @return EvidenceData 是否已赋值
                     * 
                     */
                    bool EvidenceDataHasBeenSet() const;

                    /**
                     * 获取evidence location (for example protocol port)
                     * @return EvidenceLocation evidence location (for example protocol port)
                     * 
                     */
                    std::string GetEvidenceLocation() const;

                    /**
                     * 设置evidence location (for example protocol port)
                     * @param _evidenceLocation evidence location (for example protocol port)
                     * 
                     */
                    void SetEvidenceLocation(const std::string& _evidenceLocation);

                    /**
                     * 判断参数 EvidenceLocation 是否已赋值
                     * @return EvidenceLocation 是否已赋值
                     * 
                     */
                    bool EvidenceLocationHasBeenSet() const;

                    /**
                     * 获取Evidence Path
                     * @return EvidencePath Evidence Path
                     * 
                     */
                    std::string GetEvidencePath() const;

                    /**
                     * 设置Evidence Path
                     * @param _evidencePath Evidence Path
                     * 
                     */
                    void SetEvidencePath(const std::string& _evidencePath);

                    /**
                     * 判断参数 EvidencePath 是否已赋值
                     * @return EvidencePath 是否已赋值
                     * 
                     */
                    bool EvidencePathHasBeenSet() const;

                    /**
                     * 获取Initial alarm time
                     * @return CreateTime Initial alarm time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Initial alarm time
                     * @param _createTime Initial alarm time
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
                     * 获取Latest Alarm Time
                     * @return UpdateTime Latest Alarm Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest Alarm Time
                     * @param _updateTime Latest Alarm Time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Alarm count
                     * @return Count Alarm count
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Alarm count
                     * @param _count Alarm count
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Emergency Mitigation Suggestions
                     * @return UrgentSuggestion Emergency Mitigation Suggestions
                     * 
                     */
                    std::string GetUrgentSuggestion() const;

                    /**
                     * 设置Emergency Mitigation Suggestions
                     * @param _urgentSuggestion Emergency Mitigation Suggestions
                     * 
                     */
                    void SetUrgentSuggestion(const std::string& _urgentSuggestion);

                    /**
                     * 判断参数 UrgentSuggestion 是否已赋值
                     * @return UrgentSuggestion 是否已赋值
                     * 
                     */
                    bool UrgentSuggestionHasBeenSet() const;

                    /**
                     * 获取Radical Treatment Suggestion
                     * @return RemediationSuggestion Radical Treatment Suggestion
                     * 
                     */
                    std::string GetRemediationSuggestion() const;

                    /**
                     * 设置Radical Treatment Suggestion
                     * @param _remediationSuggestion Radical Treatment Suggestion
                     * 
                     */
                    void SetRemediationSuggestion(const std::string& _remediationSuggestion);

                    /**
                     * 判断参数 RemediationSuggestion 是否已赋值
                     * @return RemediationSuggestion 是否已赋值
                     * 
                     */
                    bool RemediationSuggestionHasBeenSet() const;

                    /**
                     * 获取Processing status
0: unprocessed, 1: ignored, 2: processed
                     * @return Status Processing status
0: unprocessed, 1: ignored, 2: processed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Processing status
0: unprocessed, 1: ignored, 2: processed
                     * @param _status Processing status
0: unprocessed, 1: ignored, 2: processed
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
                     * 获取Alarm Handling Type
                     * @return ProcessType Alarm Handling Type
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置Alarm Handling Type
                     * @param _processType Alarm Handling Type
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取Major Category of Alarm
                     * @return Type Major Category of Alarm
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Major Category of Alarm
                     * @param _type Major Category of Alarm
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm Subcategory
                     * @return SubType Alarm Subcategory
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置Alarm Subcategory
                     * @param _subType Alarm Subcategory
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取Dropdown Field
                     * @return ExtraInfo Dropdown Field
                     * 
                     */
                    AlertExtraInfo GetExtraInfo() const;

                    /**
                     * 设置Dropdown Field
                     * @param _extraInfo Dropdown Field
                     * 
                     */
                    void SetExtraInfo(const AlertExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Aggregate Fields
                     * @return Key Aggregate Fields
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Aggregate Fields
                     * @param _key Aggregate Fields
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Alarm Date
                     * @return Date Alarm Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Alarm Date
                     * @param _date Alarm Date
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppID appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置appid
                     * @param _appID appid
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return NickName Account name
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account name
                     * @param _nickName Account name
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取account ID
                     * @return Uin account ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置account ID
                     * @param _uin account ID
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
                     * 获取Behavior
                     * @return Action Behavior
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置Behavior
                     * @param _action Behavior
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取risk detection
                     * @return RiskInvestigation risk detection
                     * 
                     */
                    std::string GetRiskInvestigation() const;

                    /**
                     * 设置risk detection
                     * @param _riskInvestigation risk detection
                     * 
                     */
                    void SetRiskInvestigation(const std::string& _riskInvestigation);

                    /**
                     * 判断参数 RiskInvestigation 是否已赋值
                     * @return RiskInvestigation 是否已赋值
                     * 
                     */
                    bool RiskInvestigationHasBeenSet() const;

                    /**
                     * 获取Risk handling
                     * @return RiskTreatment Risk handling
                     * 
                     */
                    std::string GetRiskTreatment() const;

                    /**
                     * 设置Risk handling
                     * @param _riskTreatment Risk handling
                     * 
                     */
                    void SetRiskTreatment(const std::string& _riskTreatment);

                    /**
                     * 判断参数 RiskTreatment 是否已赋值
                     * @return RiskTreatment 是否已赋值
                     * 
                     */
                    bool RiskTreatmentHasBeenSet() const;

                    /**
                     * 获取log type
                     * @return LogType log type
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置log type
                     * @param _logType log type
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Statement retrieval
                     * @return LogSearch Statement retrieval
                     * 
                     */
                    std::string GetLogSearch() const;

                    /**
                     * 设置Statement retrieval
                     * @param _logSearch Statement retrieval
                     * 
                     */
                    void SetLogSearch(const std::string& _logSearch);

                    /**
                     * 判断参数 LogSearch 是否已赋值
                     * @return LogSearch 是否已赋值
                     * 
                     */
                    bool LogSearchHasBeenSet() const;

                private:

                    /**
                     * alarm ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * alarm name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Alarm source
CFW: Cloud Firewall
WAF: Web application firewall
CWP: Host Security
CSIP: Cloud Security Center
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * alarm level
Prompt.
2: Low risk
3: Medium risk
4: High risk
5: Critical
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * attacker
                     */
                    RoleInfo m_attacker;
                    bool m_attackerHasBeenSet;

                    /**
                     * victim
                     */
                    RoleInfo m_victim;
                    bool m_victimHasBeenSet;

                    /**
                     * Evidence data (such as attack content, base64 encoded)
                     */
                    std::string m_evidenceData;
                    bool m_evidenceDataHasBeenSet;

                    /**
                     * evidence location (for example protocol port)
                     */
                    std::string m_evidenceLocation;
                    bool m_evidenceLocationHasBeenSet;

                    /**
                     * Evidence Path
                     */
                    std::string m_evidencePath;
                    bool m_evidencePathHasBeenSet;

                    /**
                     * Initial alarm time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest Alarm Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Alarm count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Emergency Mitigation Suggestions
                     */
                    std::string m_urgentSuggestion;
                    bool m_urgentSuggestionHasBeenSet;

                    /**
                     * Radical Treatment Suggestion
                     */
                    std::string m_remediationSuggestion;
                    bool m_remediationSuggestionHasBeenSet;

                    /**
                     * Processing status
0: unprocessed, 1: ignored, 2: processed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Alarm Handling Type
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Major Category of Alarm
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm Subcategory
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * Dropdown Field
                     */
                    AlertExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Aggregate Fields
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Alarm Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * account ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Behavior
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * risk detection
                     */
                    std::string m_riskInvestigation;
                    bool m_riskInvestigationHasBeenSet;

                    /**
                     * Risk handling
                     */
                    std::string m_riskTreatment;
                    bool m_riskTreatmentHasBeenSet;

                    /**
                     * log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Statement retrieval
                     */
                    std::string m_logSearch;
                    bool m_logSearchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_
