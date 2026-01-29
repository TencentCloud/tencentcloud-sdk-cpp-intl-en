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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Access key Alarm record.
                */
                class AccessKeyAlarm : public AbstractModel
                {
                public:
                    AccessKeyAlarm();
                    ~AccessKeyAlarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm name.
                     * @return Name Alarm name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm name.
                     * @param _name Alarm name.
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
                     * 获取Alarm level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * @return Level Alarm level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Alarm level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * @param _level Alarm level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
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
                     * 获取Alarm record ID.
                     * @return ID Alarm record ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Alarm record ID.
                     * @param _iD Alarm record ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Alarm rule ID.
                     * @return AlarmRuleID Alarm rule ID.
                     * 
                     */
                    int64_t GetAlarmRuleID() const;

                    /**
                     * 设置Alarm rule ID.
                     * @param _alarmRuleID Alarm rule ID.
                     * 
                     */
                    void SetAlarmRuleID(const int64_t& _alarmRuleID);

                    /**
                     * 判断参数 AlarmRuleID 是否已赋值
                     * @return AlarmRuleID 是否已赋值
                     * 
                     */
                    bool AlarmRuleIDHasBeenSet() const;

                    /**
                     * 获取Alarm type
Abnormal call.
Leak monitoring.
                     * @return AlarmType Alarm type
Abnormal call.
Leak monitoring.
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置Alarm type
Abnormal call.
Leak monitoring.
                     * @param _alarmType Alarm type
Abnormal call.
Leak monitoring.
                     * 
                     */
                    void SetAlarmType(const int64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Access key.
                     * @return AccessKey Access key.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key.
                     * @param _accessKey Access key.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Access key ID.
                     * @return AccessKeyID Access key ID.
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置Access key ID.
                     * @param _accessKeyID Access key ID.
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取Access key remark.
                     * @return AccessKeyRemark Access key remark.
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置Access key remark.
                     * @param _accessKeyRemark Access key remark.
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

                    /**
                     * 获取Last Alarm Time
                     * @return LastAlarmTime Last Alarm Time
                     * 
                     */
                    std::string GetLastAlarmTime() const;

                    /**
                     * 设置Last Alarm Time
                     * @param _lastAlarmTime Last Alarm Time
                     * 
                     */
                    void SetLastAlarmTime(const std::string& _lastAlarmTime);

                    /**
                     * 判断参数 LastAlarmTime 是否已赋值
                     * @return LastAlarmTime 是否已赋值
                     * 
                     */
                    bool LastAlarmTimeHasBeenSet() const;

                    /**
                     * 获取Alarm status.
0 - unprocessed 1 - processed 2 - ignored.
                     * @return Status Alarm status.
0 - unprocessed 1 - processed 2 - ignored.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Alarm status.
0 - unprocessed 1 - processed 2 - ignored.
                     * @param _status Alarm status.
0 - unprocessed 1 - processed 2 - ignored.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Aggregate date.
                     * @return Date Aggregate date.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Aggregate date.
                     * @param _date Aggregate date.
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
                     * 获取Alarm Tag.
                     * @return Tag Alarm Tag.
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Alarm Tag.
                     * @param _tag Alarm Tag.
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Account associate Uin belonging to main account.
                     * @return Uin Account associate Uin belonging to main account.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account associate Uin belonging to main account.
                     * @param _uin Account associate Uin belonging to main account.
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
                     * 获取Nickname of the main account.
                     * @return Nickname Nickname of the main account.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname of the main account.
                     * @param _nickname Nickname of the main account.
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Sub-Account Uin belonging to.
                     * @return SubUin Sub-Account Uin belonging to.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Sub-Account Uin belonging to.
                     * @param _subUin Sub-Account Uin belonging to.
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Sub-Account nickname.
                     * @return SubNickname Sub-Account nickname.
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置Sub-Account nickname.
                     * @param _subNickname Sub-Account nickname.
                     * 
                     */
                    void SetSubNickname(const std::string& _subNickname);

                    /**
                     * 判断参数 SubNickname 是否已赋值
                     * @return SubNickname 是否已赋值
                     * 
                     */
                    bool SubNicknameHasBeenSet() const;

                    /**
                     * 获取Account type.
0 root account AK 1 sub-account AK 2 temporary key.
                     * @return Type Account type.
0 root account AK 1 sub-account AK 2 temporary key.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Account type.
0 root account AK 1 sub-account AK 2 temporary key.
                     * @param _type Account type.
0 root account AK 1 sub-account AK 2 temporary key.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取App ID
                     * @return AppID App ID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置App ID
                     * @param _appID App ID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Leakage evidence.
                     * @return LeakEvidence Leakage evidence.
                     * 
                     */
                    std::vector<std::string> GetLeakEvidence() const;

                    /**
                     * 设置Leakage evidence.
                     * @param _leakEvidence Leakage evidence.
                     * 
                     */
                    void SetLeakEvidence(const std::vector<std::string>& _leakEvidence);

                    /**
                     * 判断参数 LeakEvidence 是否已赋值
                     * @return LeakEvidence 是否已赋值
                     * 
                     */
                    bool LeakEvidenceHasBeenSet() const;

                    /**
                     * 获取Whether editing a trusted account is supported.
                     * @return IsSupportEditWhiteAccount Whether editing a trusted account is supported.
                     * 
                     */
                    bool GetIsSupportEditWhiteAccount() const;

                    /**
                     * 设置Whether editing a trusted account is supported.
                     * @param _isSupportEditWhiteAccount Whether editing a trusted account is supported.
                     * 
                     */
                    void SetIsSupportEditWhiteAccount(const bool& _isSupportEditWhiteAccount);

                    /**
                     * 判断参数 IsSupportEditWhiteAccount 是否已赋值
                     * @return IsSupportEditWhiteAccount 是否已赋值
                     * 
                     */
                    bool IsSupportEditWhiteAccountHasBeenSet() const;

                    /**
                     * 获取Alarm evidence.
                     * @return Evidence Alarm evidence.
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置Alarm evidence.
                     * @param _evidence Alarm evidence.
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取Alarm rule flag.
                     * @return RuleKey Alarm rule flag.
                     * 
                     */
                    std::string GetRuleKey() const;

                    /**
                     * 设置Alarm rule flag.
                     * @param _ruleKey Alarm rule flag.
                     * 
                     */
                    void SetRuleKey(const std::string& _ruleKey);

                    /**
                     * 判断参数 RuleKey 是否已赋值
                     * @return RuleKey 是否已赋值
                     * 
                     */
                    bool RuleKeyHasBeenSet() const;

                    /**
                     * 获取Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     * @return CloudType Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     * @param _cloudType Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Alarm AI analysis status.
-Analysis failed.
0 not analyzed.
Under analysis.
2 analysis successful, real Alarm.
3 analysis successful, suspicious Alarm.
                     * @return AIStatus Alarm AI analysis status.
-Analysis failed.
0 not analyzed.
Under analysis.
2 analysis successful, real Alarm.
3 analysis successful, suspicious Alarm.
                     * 
                     */
                    int64_t GetAIStatus() const;

                    /**
                     * 设置Alarm AI analysis status.
-Analysis failed.
0 not analyzed.
Under analysis.
2 analysis successful, real Alarm.
3 analysis successful, suspicious Alarm.
                     * @param _aIStatus Alarm AI analysis status.
-Analysis failed.
0 not analyzed.
Under analysis.
2 analysis successful, real Alarm.
3 analysis successful, suspicious Alarm.
                     * 
                     */
                    void SetAIStatus(const int64_t& _aIStatus);

                    /**
                     * 判断参数 AIStatus 是否已赋值
                     * @return AIStatus 是否已赋值
                     * 
                     */
                    bool AIStatusHasBeenSet() const;

                    /**
                     * 获取First Alarm timestamp (in seconds).
                     * @return FirstAlarmTimestamp First Alarm timestamp (in seconds).
                     * 
                     */
                    int64_t GetFirstAlarmTimestamp() const;

                    /**
                     * 设置First Alarm timestamp (in seconds).
                     * @param _firstAlarmTimestamp First Alarm timestamp (in seconds).
                     * 
                     */
                    void SetFirstAlarmTimestamp(const int64_t& _firstAlarmTimestamp);

                    /**
                     * 判断参数 FirstAlarmTimestamp 是否已赋值
                     * @return FirstAlarmTimestamp 是否已赋值
                     * 
                     */
                    bool FirstAlarmTimestampHasBeenSet() const;

                    /**
                     * 获取Last Alarm timestamp (in seconds).
                     * @return LastAlarmTimestamp Last Alarm timestamp (in seconds).
                     * 
                     */
                    int64_t GetLastAlarmTimestamp() const;

                    /**
                     * 设置Last Alarm timestamp (in seconds).
                     * @param _lastAlarmTimestamp Last Alarm timestamp (in seconds).
                     * 
                     */
                    void SetLastAlarmTimestamp(const int64_t& _lastAlarmTimestamp);

                    /**
                     * 判断参数 LastAlarmTimestamp 是否已赋值
                     * @return LastAlarmTimestamp 是否已赋值
                     * 
                     */
                    bool LastAlarmTimestampHasBeenSet() const;

                private:

                    /**
                     * Alarm name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Alarm level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Alarm record ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Alarm rule ID.
                     */
                    int64_t m_alarmRuleID;
                    bool m_alarmRuleIDHasBeenSet;

                    /**
                     * Alarm type
Abnormal call.
Leak monitoring.
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Access key.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Access key ID.
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * Access key remark.
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * Last Alarm Time
                     */
                    std::string m_lastAlarmTime;
                    bool m_lastAlarmTimeHasBeenSet;

                    /**
                     * Alarm status.
0 - unprocessed 1 - processed 2 - ignored.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Aggregate date.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Alarm Tag.
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Account associate Uin belonging to main account.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname of the main account.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Sub-Account Uin belonging to.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Sub-Account nickname.
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * Account type.
0 root account AK 1 sub-account AK 2 temporary key.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * App ID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Leakage evidence.
                     */
                    std::vector<std::string> m_leakEvidence;
                    bool m_leakEvidenceHasBeenSet;

                    /**
                     * Whether editing a trusted account is supported.
                     */
                    bool m_isSupportEditWhiteAccount;
                    bool m_isSupportEditWhiteAccountHasBeenSet;

                    /**
                     * Alarm evidence.
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * Alarm rule flag.
                     */
                    std::string m_ruleKey;
                    bool m_ruleKeyHasBeenSet;

                    /**
                     * Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Alarm AI analysis status.
-Analysis failed.
0 not analyzed.
Under analysis.
2 analysis successful, real Alarm.
3 analysis successful, suspicious Alarm.
                     */
                    int64_t m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * First Alarm timestamp (in seconds).
                     */
                    int64_t m_firstAlarmTimestamp;
                    bool m_firstAlarmTimestampHasBeenSet;

                    /**
                     * Last Alarm timestamp (in seconds).
                     */
                    int64_t m_lastAlarmTimestamp;
                    bool m_lastAlarmTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
