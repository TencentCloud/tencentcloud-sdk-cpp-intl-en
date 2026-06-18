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
                     * 获取<p>Alarm name</p>
                     * @return Name <p>Alarm name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Alarm name</p>
                     * @param _name <p>Alarm name</p>
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
                     * 获取<p>Alarm level<br>0-Unavailable 1-Notification 2-Low risk 3-Medium risk 4-High risk 5-Critical</p>
                     * @return Level <p>Alarm level<br>0-Unavailable 1-Notification 2-Low risk 3-Medium risk 4-High risk 5-Critical</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>Alarm level<br>0-Unavailable 1-Notification 2-Low risk 3-Medium risk 4-High risk 5-Critical</p>
                     * @param _level <p>Alarm level<br>0-Unavailable 1-Notification 2-Low risk 3-Medium risk 4-High risk 5-Critical</p>
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
                     * 获取<p>Alarm record ID</p>
                     * @return ID <p>Alarm record ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Alarm record ID</p>
                     * @param _iD <p>Alarm record ID</p>
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
                     * 获取<p>Alarm rule ID</p>
                     * @return AlarmRuleID <p>Alarm rule ID</p>
                     * 
                     */
                    int64_t GetAlarmRuleID() const;

                    /**
                     * 设置<p>Alarm rule ID</p>
                     * @param _alarmRuleID <p>Alarm rule ID</p>
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
                     * 获取<p>Alarm type<br>0 Abnormal call<br>1 Leak monitoring</p>
                     * @return AlarmType <p>Alarm type<br>0 Abnormal call<br>1 Leak monitoring</p>
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置<p>Alarm type<br>0 Abnormal call<br>1 Leak monitoring</p>
                     * @param _alarmType <p>Alarm type<br>0 Abnormal call<br>1 Leak monitoring</p>
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
                     * 获取<p>Access key</p>
                     * @return AccessKey <p>Access key</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>Access key</p>
                     * @param _accessKey <p>Access key</p>
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
                     * 获取<p>Access Key ID</p>
                     * @return AccessKeyID <p>Access Key ID</p>
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置<p>Access Key ID</p>
                     * @param _accessKeyID <p>Access Key ID</p>
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
                     * 获取<p>Access key remark</p>
                     * @return AccessKeyRemark <p>Access key remark</p>
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置<p>Access key remark</p>
                     * @param _accessKeyRemark <p>Access key remark</p>
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
                     * 获取<p>Last alarm time</p>
                     * @return LastAlarmTime <p>Last alarm time</p>
                     * 
                     */
                    std::string GetLastAlarmTime() const;

                    /**
                     * 设置<p>Last alarm time</p>
                     * @param _lastAlarmTime <p>Last alarm time</p>
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
                     * 获取<p>Alarm status<br>0-unprocessed 1-processed 2-ignored</p>
                     * @return Status <p>Alarm status<br>0-unprocessed 1-processed 2-ignored</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Alarm status<br>0-unprocessed 1-processed 2-ignored</p>
                     * @param _status <p>Alarm status<br>0-unprocessed 1-processed 2-ignored</p>
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
                     * 获取<p>Aggregate date</p>
                     * @return Date <p>Aggregate date</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>Aggregate date</p>
                     * @param _date <p>Aggregate date</p>
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
                     * 获取<p>Alarm tag</p>
                     * @return Tag <p>Alarm tag</p>
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置<p>Alarm tag</p>
                     * @param _tag <p>Alarm tag</p>
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
                     * 获取<p>Uin of the main account</p>
                     * @return Uin <p>Uin of the main account</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Uin of the main account</p>
                     * @param _uin <p>Uin of the main account</p>
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
                     * 获取<p>Nickname of the main account</p>
                     * @return Nickname <p>Nickname of the main account</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>Nickname of the main account</p>
                     * @param _nickname <p>Nickname of the main account</p>
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
                     * 获取<p>Sub-account Uin</p>
                     * @return SubUin <p>Sub-account Uin</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>Sub-account Uin</p>
                     * @param _subUin <p>Sub-account Uin</p>
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
                     * 获取<p>Sub-account nickname</p>
                     * @return SubNickname <p>Sub-account nickname</p>
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置<p>Sub-account nickname</p>
                     * @param _subNickname <p>Sub-account nickname</p>
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
                     * 获取<p>Account type<br>0 Root account AK 1 Sub-account AK 2 Temporary key</p>
                     * @return Type <p>Account type<br>0 Root account AK 1 Sub-account AK 2 Temporary key</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Account type<br>0 Root account AK 1 Sub-account AK 2 Temporary key</p>
                     * @param _type <p>Account type<br>0 Root account AK 1 Sub-account AK 2 Temporary key</p>
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
                     * 获取<p>App ID</p>
                     * @return AppID <p>App ID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>App ID</p>
                     * @param _appID <p>App ID</p>
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
                     * 获取<p>Leakage evidence</p>
                     * @return LeakEvidence <p>Leakage evidence</p>
                     * 
                     */
                    std::vector<std::string> GetLeakEvidence() const;

                    /**
                     * 设置<p>Leakage evidence</p>
                     * @param _leakEvidence <p>Leakage evidence</p>
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
                     * 获取<p>Whether support editing trust account</p>
                     * @return IsSupportEditWhiteAccount <p>Whether support editing trust account</p>
                     * 
                     */
                    bool GetIsSupportEditWhiteAccount() const;

                    /**
                     * 设置<p>Whether support editing trust account</p>
                     * @param _isSupportEditWhiteAccount <p>Whether support editing trust account</p>
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
                     * 获取<p>Alert evidence</p>
                     * @return Evidence <p>Alert evidence</p>
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置<p>Alert evidence</p>
                     * @param _evidence <p>Alert evidence</p>
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
                     * 获取<p>Alarm rule flag</p>
                     * @return RuleKey <p>Alarm rule flag</p>
                     * 
                     */
                    std::string GetRuleKey() const;

                    /**
                     * 设置<p>Alarm rule flag</p>
                     * @param _ruleKey <p>Alarm rule flag</p>
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
                     * 获取<p>Cloud vendor type 0:Tencent Cloud 1:Amazon Web Services 2:Microsoft Azure 3:Google Cloud 4:Alibaba Cloud 5:Huawei Cloud</p>
                     * @return CloudType <p>Cloud vendor type 0:Tencent Cloud 1:Amazon Web Services 2:Microsoft Azure 3:Google Cloud 4:Alibaba Cloud 5:Huawei Cloud</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>Cloud vendor type 0:Tencent Cloud 1:Amazon Web Services 2:Microsoft Azure 3:Google Cloud 4:Alibaba Cloud 5:Huawei Cloud</p>
                     * @param _cloudType <p>Cloud vendor type 0:Tencent Cloud 1:Amazon Web Services 2:Microsoft Azure 3:Google Cloud 4:Alibaba Cloud 5:Huawei Cloud</p>
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
                     * 获取<p>Alarm AI analysis status<br>-1 Analysis failed<br>0 Not analyzed<br>1 Under analysis<br>2 Analysis successful, real alarm<br>3 Analysis successful, suspicious alarm</p>
                     * @return AIStatus <p>Alarm AI analysis status<br>-1 Analysis failed<br>0 Not analyzed<br>1 Under analysis<br>2 Analysis successful, real alarm<br>3 Analysis successful, suspicious alarm</p>
                     * 
                     */
                    int64_t GetAIStatus() const;

                    /**
                     * 设置<p>Alarm AI analysis status<br>-1 Analysis failed<br>0 Not analyzed<br>1 Under analysis<br>2 Analysis successful, real alarm<br>3 Analysis successful, suspicious alarm</p>
                     * @param _aIStatus <p>Alarm AI analysis status<br>-1 Analysis failed<br>0 Not analyzed<br>1 Under analysis<br>2 Analysis successful, real alarm<br>3 Analysis successful, suspicious alarm</p>
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
                     * 获取<p>First alarm timestamp (in seconds)</p>
                     * @return FirstAlarmTimestamp <p>First alarm timestamp (in seconds)</p>
                     * 
                     */
                    int64_t GetFirstAlarmTimestamp() const;

                    /**
                     * 设置<p>First alarm timestamp (in seconds)</p>
                     * @param _firstAlarmTimestamp <p>First alarm timestamp (in seconds)</p>
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
                     * 获取<p>Last alarm timestamp (in seconds)</p>
                     * @return LastAlarmTimestamp <p>Last alarm timestamp (in seconds)</p>
                     * 
                     */
                    int64_t GetLastAlarmTimestamp() const;

                    /**
                     * 设置<p>Last alarm timestamp (in seconds)</p>
                     * @param _lastAlarmTimestamp <p>Last alarm timestamp (in seconds)</p>
                     * 
                     */
                    void SetLastAlarmTimestamp(const int64_t& _lastAlarmTimestamp);

                    /**
                     * 判断参数 LastAlarmTimestamp 是否已赋值
                     * @return LastAlarmTimestamp 是否已赋值
                     * 
                     */
                    bool LastAlarmTimestampHasBeenSet() const;

                    /**
                     * 获取<p>AI analysis failure description. Empty string if not failed.</p>
                     * @return AIFailedReason <p>AI analysis failure description. Empty string if not failed.</p>
                     * 
                     */
                    std::string GetAIFailedReason() const;

                    /**
                     * 设置<p>AI analysis failure description. Empty string if not failed.</p>
                     * @param _aIFailedReason <p>AI analysis failure description. Empty string if not failed.</p>
                     * 
                     */
                    void SetAIFailedReason(const std::string& _aIFailedReason);

                    /**
                     * 判断参数 AIFailedReason 是否已赋值
                     * @return AIFailedReason 是否已赋值
                     * 
                     */
                    bool AIFailedReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Alarm level<br>0-Unavailable 1-Notification 2-Low risk 3-Medium risk 4-High risk 5-Critical</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Alarm record ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Alarm rule ID</p>
                     */
                    int64_t m_alarmRuleID;
                    bool m_alarmRuleIDHasBeenSet;

                    /**
                     * <p>Alarm type<br>0 Abnormal call<br>1 Leak monitoring</p>
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * <p>Access key</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>Access Key ID</p>
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * <p>Access key remark</p>
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * <p>Last alarm time</p>
                     */
                    std::string m_lastAlarmTime;
                    bool m_lastAlarmTimeHasBeenSet;

                    /**
                     * <p>Alarm status<br>0-unprocessed 1-processed 2-ignored</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Aggregate date</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>Alarm tag</p>
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Uin of the main account</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Nickname of the main account</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>Sub-account Uin</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>Sub-account nickname</p>
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * <p>Account type<br>0 Root account AK 1 Sub-account AK 2 Temporary key</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>App ID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Leakage evidence</p>
                     */
                    std::vector<std::string> m_leakEvidence;
                    bool m_leakEvidenceHasBeenSet;

                    /**
                     * <p>Whether support editing trust account</p>
                     */
                    bool m_isSupportEditWhiteAccount;
                    bool m_isSupportEditWhiteAccountHasBeenSet;

                    /**
                     * <p>Alert evidence</p>
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * <p>Alarm rule flag</p>
                     */
                    std::string m_ruleKey;
                    bool m_ruleKeyHasBeenSet;

                    /**
                     * <p>Cloud vendor type 0:Tencent Cloud 1:Amazon Web Services 2:Microsoft Azure 3:Google Cloud 4:Alibaba Cloud 5:Huawei Cloud</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Alarm AI analysis status<br>-1 Analysis failed<br>0 Not analyzed<br>1 Under analysis<br>2 Analysis successful, real alarm<br>3 Analysis successful, suspicious alarm</p>
                     */
                    int64_t m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * <p>First alarm timestamp (in seconds)</p>
                     */
                    int64_t m_firstAlarmTimestamp;
                    bool m_firstAlarmTimestampHasBeenSet;

                    /**
                     * <p>Last alarm timestamp (in seconds)</p>
                     */
                    int64_t m_lastAlarmTimestamp;
                    bool m_lastAlarmTimestampHasBeenSet;

                    /**
                     * <p>AI analysis failure description. Empty string if not failed.</p>
                     */
                    std::string m_aIFailedReason;
                    bool m_aIFailedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
