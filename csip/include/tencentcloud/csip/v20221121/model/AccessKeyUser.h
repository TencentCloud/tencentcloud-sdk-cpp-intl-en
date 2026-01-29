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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Access key account information.
                */
                class AccessKeyUser : public AbstractModel
                {
                public:
                    AccessKeyUser();
                    ~AccessKeyUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account ID.
                     * @return ID Account ID.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Account ID.
                     * @param _iD Account ID.
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return Name Account name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account name
                     * @param _name Account name
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
                     * 获取0 root account 1 sub-account.
                     * @return Type 0 root account 1 sub-account.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 root account 1 sub-account.
                     * @param _type 0 root account 1 sub-account.
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
                     * 获取Access method.
0 API
1 console and API.
                     * @return AccessType Access method.
0 API
1 console and API.
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置Access method.
0 API
1 console and API.
                     * @param _accessType Access method.
0 API
1 console and API.
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Security recommendation enumerate 0 normal 1 process immediately 2 recommend reinforcement.
                     * @return Advice Security recommendation enumerate 0 normal 1 process immediately 2 recommend reinforcement.
                     * 
                     */
                    int64_t GetAdvice() const;

                    /**
                     * 设置Security recommendation enumerate 0 normal 1 process immediately 2 recommend reinforcement.
                     * @param _advice Security recommendation enumerate 0 normal 1 process immediately 2 recommend reinforcement.
                     * 
                     */
                    void SetAdvice(const int64_t& _advice);

                    /**
                     * 判断参数 Advice 是否已赋值
                     * @return Advice 是否已赋值
                     * 
                     */
                    bool AdviceHasBeenSet() const;

                    /**
                     * 获取Alarm information list.
                     * @return AccessKeyAlarmList Alarm information list.
                     * 
                     */
                    std::vector<AccessKeyAlarmInfo> GetAccessKeyAlarmList() const;

                    /**
                     * 设置Alarm information list.
                     * @param _accessKeyAlarmList Alarm information list.
                     * 
                     */
                    void SetAccessKeyAlarmList(const std::vector<AccessKeyAlarmInfo>& _accessKeyAlarmList);

                    /**
                     * 判断参数 AccessKeyAlarmList 是否已赋值
                     * @return AccessKeyAlarmList 是否已赋值
                     * 
                     */
                    bool AccessKeyAlarmListHasBeenSet() const;

                    /**
                     * 获取Risk information list.
                     * @return AccessKeyRiskList Risk information list.
                     * 
                     */
                    std::vector<AccessKeyAlarmInfo> GetAccessKeyRiskList() const;

                    /**
                     * 设置Risk information list.
                     * @param _accessKeyRiskList Risk information list.
                     * 
                     */
                    void SetAccessKeyRiskList(const std::vector<AccessKeyAlarmInfo>& _accessKeyRiskList);

                    /**
                     * 判断参数 AccessKeyRiskList 是否已赋值
                     * @return AccessKeyRiskList 是否已赋值
                     * 
                     */
                    bool AccessKeyRiskListHasBeenSet() const;

                    /**
                     * 获取Account associate APPID.
                     * @return AppID Account associate APPID.
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置Account associate APPID.
                     * @param _appID Account associate APPID.
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
                     * 获取Account Uin belonging to main account.
                     * @return Uin Account Uin belonging to main account.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account Uin belonging to main account.
                     * @param _uin Account Uin belonging to main account.
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
                     * 获取Account self uin, same as root account uin when it is the root account.
                     * @return SubUin Account self uin, same as root account uin when it is the root account.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Account self uin, same as root account uin when it is the root account.
                     * @param _subUin Account self uin, same as root account uin when it is the root account.
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
                     * 获取Login IP.
                     * @return LoginIP Login IP.
                     * 
                     */
                    std::string GetLoginIP() const;

                    /**
                     * 设置Login IP.
                     * @param _loginIP Login IP.
                     * 
                     */
                    void SetLoginIP(const std::string& _loginIP);

                    /**
                     * 判断参数 LoginIP 是否已赋值
                     * @return LoginIP 是否已赋值
                     * 
                     */
                    bool LoginIPHasBeenSet() const;

                    /**
                     * 获取Login address.
                     * @return LoginLocation Login address.
                     * 
                     */
                    std::string GetLoginLocation() const;

                    /**
                     * 设置Login address.
                     * @param _loginLocation Login address.
                     * 
                     */
                    void SetLoginLocation(const std::string& _loginLocation);

                    /**
                     * 判断参数 LoginLocation 是否已赋值
                     * @return LoginLocation 是否已赋值
                     * 
                     */
                    bool LoginLocationHasBeenSet() const;

                    /**
                     * 获取Log-In time.
                     * @return LoginTime Log-In time.
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置Log-In time.
                     * @param _loginTime Log-In time.
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取ISP name
                     * @return ISP ISP name
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ISP name
                     * @param _iSP ISP name
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取Whether operation protection is enabled.
0 not enabled.
1: enabled.
                     * @return ActionFlag Whether operation protection is enabled.
0 not enabled.
1: enabled.
                     * 
                     */
                    int64_t GetActionFlag() const;

                    /**
                     * 设置Whether operation protection is enabled.
0 not enabled.
1: enabled.
                     * @param _actionFlag Whether operation protection is enabled.
0 not enabled.
1: enabled.
                     * 
                     */
                    void SetActionFlag(const int64_t& _actionFlag);

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取Is login protection enabled?.
0 not enabled.
1: enabled.
                     * @return LoginFlag Is login protection enabled?.
0 not enabled.
1: enabled.
                     * 
                     */
                    int64_t GetLoginFlag() const;

                    /**
                     * 设置Is login protection enabled?.
0 not enabled.
1: enabled.
                     * @param _loginFlag Is login protection enabled?.
0 not enabled.
1: enabled.
                     * 
                     */
                    void SetLoginFlag(const int64_t& _loginFlag);

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取0 means detected. 1 means detecting.
                     * @return CheckStatus 0 means detected. 1 means detecting.
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0 means detected. 1 means detecting.
                     * @param _checkStatus 0 means detected. 1 means detecting.
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

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

                private:

                    /**
                     * Account ID.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 0 root account 1 sub-account.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Access method.
0 API
1 console and API.
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Security recommendation enumerate 0 normal 1 process immediately 2 recommend reinforcement.
                     */
                    int64_t m_advice;
                    bool m_adviceHasBeenSet;

                    /**
                     * Alarm information list.
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyAlarmList;
                    bool m_accessKeyAlarmListHasBeenSet;

                    /**
                     * Risk information list.
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyRiskList;
                    bool m_accessKeyRiskListHasBeenSet;

                    /**
                     * Account associate APPID.
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Nickname of the main account.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Sub-Account nickname.
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * Account Uin belonging to main account.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Account self uin, same as root account uin when it is the root account.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Login IP.
                     */
                    std::string m_loginIP;
                    bool m_loginIPHasBeenSet;

                    /**
                     * Login address.
                     */
                    std::string m_loginLocation;
                    bool m_loginLocationHasBeenSet;

                    /**
                     * Log-In time.
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * ISP name
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * Whether operation protection is enabled.
0 not enabled.
1: enabled.
                     */
                    int64_t m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * Is login protection enabled?.
0 not enabled.
1: enabled.
                     */
                    int64_t m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * 0 means detected. 1 means detecting.
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * Cloud vendor type 0: tencent cloud 1: amazon web services 2: microsoft azure 3: google cloud 4: alibaba cloud 5: huawei cloud.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_
