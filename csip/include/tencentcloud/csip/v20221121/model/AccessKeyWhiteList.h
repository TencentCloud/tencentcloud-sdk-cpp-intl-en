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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_

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
                * Access key alarm rule allowlist
                */
                class AccessKeyWhiteList : public AbstractModel
                {
                public:
                    AccessKeyWhiteList();
                    ~AccessKeyWhiteList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowlist ID
                     * @return ID Allowlist ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Allowlist ID
                     * @param _iD Allowlist ID
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
                     * 获取Allowlist policy name
                     * @return Name Allowlist policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Allowlist policy name
                     * @param _name Allowlist policy name
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
                     * 获取ak allowlist
                     * @return AKList ak allowlist
                     * 
                     */
                    std::vector<std::string> GetAKList() const;

                    /**
                     * 设置ak allowlist
                     * @param _aKList ak allowlist
                     * 
                     */
                    void SetAKList(const std::vector<std::string>& _aKList);

                    /**
                     * 判断参数 AKList 是否已赋值
                     * @return AKList 是否已赋值
                     * 
                     */
                    bool AKListHasBeenSet() const;

                    /**
                     * 获取ip allowlist
                     * @return IPList ip allowlist
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置ip allowlist
                     * @param _iPList ip allowlist
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                    /**
                     * 获取ip type list IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked). 4: LAN (no remark). 5: LAN (remarked)
                     * @return IPTypeList ip type list IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked). 4: LAN (no remark). 5: LAN (remarked)
                     * 
                     */
                    std::vector<int64_t> GetIPTypeList() const;

                    /**
                     * 设置ip type list IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked). 4: LAN (no remark). 5: LAN (remarked)
                     * @param _iPTypeList ip type list IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked). 4: LAN (no remark). 5: LAN (remarked)
                     * 
                     */
                    void SetIPTypeList(const std::vector<int64_t>& _iPTypeList);

                    /**
                     * 判断参数 IPTypeList 是否已赋值
                     * @return IPTypeList 是否已赋值
                     * 
                     */
                    bool IPTypeListHasBeenSet() const;

                    /**
                     * 获取API allowlist
                     * @return ActionList API allowlist
                     * 
                     */
                    std::vector<std::string> GetActionList() const;

                    /**
                     * 设置API allowlist
                     * @param _actionList API allowlist
                     * 
                     */
                    void SetActionList(const std::vector<std::string>& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                    /**
                     * 获取Add the call method to the allowlist
0: all calling methods
1 Console
2 API
-1 Nonexistent
                     * @return CallType Add the call method to the allowlist
0: all calling methods
1 Console
2 API
-1 Nonexistent
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置Add the call method to the allowlist
0: all calling methods
1 Console
2 API
-1 Nonexistent
                     * @param _callType Add the call method to the allowlist
0: all calling methods
1 Console
2 API
-1 Nonexistent
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Error code allowlist (other error codes to be supplemented)
0: successful.

                     * @return ErrorCodeList Error code allowlist (other error codes to be supplemented)
0: successful.

                     * 
                     */
                    std::vector<int64_t> GetErrorCodeList() const;

                    /**
                     * 设置Error code allowlist (other error codes to be supplemented)
0: successful.

                     * @param _errorCodeList Error code allowlist (other error codes to be supplemented)
0: successful.

                     * 
                     */
                    void SetErrorCodeList(const std::vector<int64_t>& _errorCodeList);

                    /**
                     * 判断参数 ErrorCodeList 是否已赋值
                     * @return ErrorCodeList 是否已赋值
                     * 
                     */
                    bool ErrorCodeListHasBeenSet() const;

                    /**
                     * 获取Policy content/description
                     * @return Remark Policy content/description
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Policy content/description
                     * @param _remark Policy content/description
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * 获取Input type of ak 
0: Select from existing
1: Manually enter
2: Temporary key
3: Persistent key
4: All keys
-1: None
                     * @return AkImportType Input type of ak 
0: Select from existing
1: Manually enter
2: Temporary key
3: Persistent key
4: All keys
-1: None
                     * 
                     */
                    int64_t GetAkImportType() const;

                    /**
                     * 设置Input type of ak 
0: Select from existing
1: Manually enter
2: Temporary key
3: Persistent key
4: All keys
-1: None
                     * @param _akImportType Input type of ak 
0: Select from existing
1: Manually enter
2: Temporary key
3: Persistent key
4: All keys
-1: None
                     * 
                     */
                    void SetAkImportType(const int64_t& _akImportType);

                    /**
                     * 判断参数 AkImportType 是否已赋值
                     * @return AkImportType 是否已赋值
                     * 
                     */
                    bool AkImportTypeHasBeenSet() const;

                    /**
                     * 获取Main account AppID
                     * @return AppID Main account AppID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置Main account AppID
                     * @param _appID Main account AppID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取uin of the main account
                     * @return Uin uin of the main account
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置uin of the main account
                     * @param _uin uin of the main account
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
                     * 获取Main account Nickname
                     * @return Nickname Main account Nickname
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Main account Nickname
                     * @param _nickname Main account Nickname
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
                     * 获取Whether to process past alarms
                     * @return NeedDealPastAlarm Whether to process past alarms
                     * 
                     */
                    bool GetNeedDealPastAlarm() const;

                    /**
                     * 设置Whether to process past alarms
                     * @param _needDealPastAlarm Whether to process past alarms
                     * 
                     */
                    void SetNeedDealPastAlarm(const bool& _needDealPastAlarm);

                    /**
                     * 判断参数 NeedDealPastAlarm 是否已赋值
                     * @return NeedDealPastAlarm 是否已赋值
                     * 
                     */
                    bool NeedDealPastAlarmHasBeenSet() const;

                    /**
                     * 获取Processing status
0: Processing completed
1 Currently processing
                     * @return DealStatus Processing status
0: Processing completed
1 Currently processing
                     * 
                     */
                    int64_t GetDealStatus() const;

                    /**
                     * 设置Processing status
0: Processing completed
1 Currently processing
                     * @param _dealStatus Processing status
0: Processing completed
1 Currently processing
                     * 
                     */
                    void SetDealStatus(const int64_t& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     * 
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取Select an API
0: Custom input
1: Select product+api format interaction
2: All interfaces
                     * @return ActionType Select an API
0: Custom input
1: Select product+api format interaction
2: All interfaces
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置Select an API
0: Custom input
1: Select product+api format interaction
2: All interfaces
                     * @param _actionType Select an API
0: Custom input
1: Select product+api format interaction
2: All interfaces
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取List of binding policy IDs. If this parameter is empty, the policy takes effect globally.
                     * @return AlarmPolicyID List of binding policy IDs. If this parameter is empty, the policy takes effect globally.
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyID() const;

                    /**
                     * 设置List of binding policy IDs. If this parameter is empty, the policy takes effect globally.
                     * @param _alarmPolicyID List of binding policy IDs. If this parameter is empty, the policy takes effect globally.
                     * 
                     */
                    void SetAlarmPolicyID(const std::vector<int64_t>& _alarmPolicyID);

                    /**
                     * 判断参数 AlarmPolicyID 是否已赋值
                     * @return AlarmPolicyID 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIDHasBeenSet() const;

                private:

                    /**
                     * Allowlist ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Allowlist policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ak allowlist
                     */
                    std::vector<std::string> m_aKList;
                    bool m_aKListHasBeenSet;

                    /**
                     * ip allowlist
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                    /**
                     * ip type list IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked). 4: LAN (no remark). 5: LAN (remarked)
                     */
                    std::vector<int64_t> m_iPTypeList;
                    bool m_iPTypeListHasBeenSet;

                    /**
                     * API allowlist
                     */
                    std::vector<std::string> m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * Add the call method to the allowlist
0: all calling methods
1 Console
2 API
-1 Nonexistent
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Error code allowlist (other error codes to be supplemented)
0: successful.

                     */
                    std::vector<int64_t> m_errorCodeList;
                    bool m_errorCodeListHasBeenSet;

                    /**
                     * Policy content/description
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Input type of ak 
0: Select from existing
1: Manually enter
2: Temporary key
3: Persistent key
4: All keys
-1: None
                     */
                    int64_t m_akImportType;
                    bool m_akImportTypeHasBeenSet;

                    /**
                     * Main account AppID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * uin of the main account
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Main account Nickname
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Whether to process past alarms
                     */
                    bool m_needDealPastAlarm;
                    bool m_needDealPastAlarmHasBeenSet;

                    /**
                     * Processing status
0: Processing completed
1 Currently processing
                     */
                    int64_t m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * Select an API
0: Custom input
1: Select product+api format interaction
2: All interfaces
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * List of binding policy IDs. If this parameter is empty, the policy takes effect globally.
                     */
                    std::vector<int64_t> m_alarmPolicyID;
                    bool m_alarmPolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_
