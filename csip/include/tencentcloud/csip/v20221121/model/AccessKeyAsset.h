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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_

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
                * Access key asset information.
                */
                class AccessKeyAsset : public AbstractModel
                {
                public:
                    AccessKeyAsset();
                    ~AccessKeyAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AK id.
                     * @return ID AK id.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置AK id.
                     * @param _iD AK id.
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
                     * 获取AK name.
                     * @return Name AK name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置AK name.
                     * @param _name AK name.
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Root account AK.
Sub-Account AK.
2 temporary key.
                     * @return Type Root account AK.
Sub-Account AK.
2 temporary key.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Root account AK.
Sub-Account AK.
2 temporary key.
                     * @param _type Root account AK.
Sub-Account AK.
2 temporary key.
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
                     * 获取Security advice enumeration.
Normal.
Process now.
2 recommend reinforcement.
                     * @return Advice Security advice enumeration.
Normal.
Process now.
2 recommend reinforcement.
                     * 
                     */
                    int64_t GetAdvice() const;

                    /**
                     * 设置Security advice enumeration.
Normal.
Process now.
2 recommend reinforcement.
                     * @param _advice Security advice enumeration.
Normal.
Process now.
2 recommend reinforcement.
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
                     * 获取Source IP quantity.
                     * @return IPCount Source IP quantity.
                     * 
                     */
                    int64_t GetIPCount() const;

                    /**
                     * 设置Source IP quantity.
                     * @param _iPCount Source IP quantity.
                     * 
                     */
                    void SetIPCount(const int64_t& _iPCount);

                    /**
                     * 判断参数 IPCount 是否已赋值
                     * @return IPCount 是否已赋值
                     * 
                     */
                    bool IPCountHasBeenSet() const;

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
                     * 获取Last access Time
                     * @return LastAccessTime Last access Time
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置Last access Time
                     * @param _lastAccessTime Last access Time
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取AK status. 
0: disabled.
1: enabled.
2: deleted (deleted in cam, the security center still retains the previous log).
                     * @return Status AK status. 
0: disabled.
1: enabled.
2: deleted (deleted in cam, the security center still retains the previous log).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置AK status. 
0: disabled.
1: enabled.
2: deleted (deleted in cam, the security center still retains the previous log).
                     * @param _status AK status. 
0: disabled.
1: enabled.
2: deleted (deleted in cam, the security center still retains the previous log).
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
                     * 获取0 means detected.
1 indicates detecting.
                     * @return CheckStatus 0 means detected.
1 indicates detecting.
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0 means detected.
1 indicates detecting.
                     * @param _checkStatus 0 means detected.
1 indicates detecting.
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
                     * AK id.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * AK name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Account associate APPID.
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

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
                     * Root account AK.
Sub-Account AK.
2 temporary key.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Security advice enumeration.
Normal.
Process now.
2 recommend reinforcement.
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
                     * Source IP quantity.
                     */
                    int64_t m_iPCount;
                    bool m_iPCountHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last access Time
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * AK status. 
0: disabled.
1: enabled.
2: deleted (deleted in cam, the security center still retains the previous log).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0 means detected.
1 indicates detecting.
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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_
