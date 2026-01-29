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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmInfo.h>
#include <tencentcloud/csip/v20221121/model/AKInfo.h>
#include <tencentcloud/csip/v20221121/model/SourceIPVpcInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Access key asset information (source IP perspective).
                */
                class SourceIPAsset : public AbstractModel
                {
                public:
                    SourceIPAsset();
                    ~SourceIPAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id of the source IP.
                     * @return ID id of the source IP.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置id of the source IP.
                     * @param _iD id of the source IP.
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
                     * 获取Source IP.
                     * @return SourceIP Source IP.
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Source IP.
                     * @param _sourceIP Source IP.
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

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
                     * 获取IP region.
                     * @return Region IP region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置IP region.
                     * @param _region IP region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取API call method.
-1: uncounted.
0: console invocation.
1:API
                     * @return EventType API call method.
-1: uncounted.
0: console invocation.
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置API call method.
-1: uncounted.
0: console invocation.
1:API
                     * @param _eventType API call method.
-1: uncounted.
0: console invocation.
1:API
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取IP type.
0: within the account (unremarked).
1: external accounts (unremarked).
2: within the account (remarked).
3: external account (remarked).
                     * @return IPType IP type.
0: within the account (unremarked).
1: external accounts (unremarked).
2: within the account (remarked).
3: external account (remarked).
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP type.
0: within the account (unremarked).
1: external accounts (unremarked).
2: within the account (remarked).
3: external account (remarked).
                     * @param _iPType IP type.
0: within the account (unremarked).
1: external accounts (unremarked).
2: within the account (remarked).
3: external account (remarked).
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

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
                     * 获取ak information list.
                     * @return AKInfo ak information list.
                     * 
                     */
                    std::vector<AKInfo> GetAKInfo() const;

                    /**
                     * 设置ak information list.
                     * @param _aKInfo ak information list.
                     * 
                     */
                    void SetAKInfo(const std::vector<AKInfo>& _aKInfo);

                    /**
                     * 判断参数 AKInfo 是否已赋值
                     * @return AKInfo 是否已赋值
                     * 
                     */
                    bool AKInfoHasBeenSet() const;

                    /**
                     * 获取Number of API calls.
                     * @return ActionCount Number of API calls.
                     * 
                     */
                    int64_t GetActionCount() const;

                    /**
                     * 设置Number of API calls.
                     * @param _actionCount Number of API calls.
                     * 
                     */
                    void SetActionCount(const int64_t& _actionCount);

                    /**
                     * 判断参数 ActionCount 是否已赋值
                     * @return ActionCount 是否已赋值
                     * 
                     */
                    bool ActionCountHasBeenSet() const;

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
                     * 获取IP associated instance ID. if an empty string, represents an asset not within the account.
                     * @return InstanceID IP associated instance ID. if an empty string, represents an asset not within the account.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置IP associated instance ID. if an empty string, represents an asset not within the account.
                     * @param _instanceID IP associated instance ID. if an empty string, represents an asset not within the account.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Associated instance name.
                     * @return InstanceName Associated instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Associated instance name.
                     * @param _instanceName Associated instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Account associate Uin.
                     * @return Uin Account associate Uin.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account associate Uin.
                     * @param _uin Account associate Uin.
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
                     * 获取Nickname.
                     * @return Nickname Nickname.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname.
                     * @param _nickname Nickname.
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
                     * 获取Display status.
                     * @return ShowStatus Display status.
                     * 
                     */
                    bool GetShowStatus() const;

                    /**
                     * 设置Display status.
                     * @param _showStatus Display status.
                     * 
                     */
                    void SetShowStatus(const bool& _showStatus);

                    /**
                     * 判断参数 ShowStatus 是否已赋值
                     * @return ShowStatus 是否已赋值
                     * 
                     */
                    bool ShowStatusHasBeenSet() const;

                    /**
                     * 获取ISP field.
                     * @return ISP ISP field.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ISP field.
                     * @param _iSP ISP field.
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
                     * 获取vpc information outside the account.
                     * @return VpcInfo vpc information outside the account.
                     * 
                     */
                    std::vector<SourceIPVpcInfo> GetVpcInfo() const;

                    /**
                     * 设置vpc information outside the account.
                     * @param _vpcInfo vpc information outside the account.
                     * 
                     */
                    void SetVpcInfo(const std::vector<SourceIPVpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取Cloud type.
0 for tencent cloud.
                     * @return CloudType Cloud type.
0 for tencent cloud.
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud type.
0 for tencent cloud.
                     * @param _cloudType Cloud type.
0 for tencent cloud.
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
                     * id of the source IP.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Source IP.
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

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
                     * IP region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * API call method.
-1: uncounted.
0: console invocation.
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * IP type.
0: within the account (unremarked).
1: external accounts (unremarked).
2: within the account (remarked).
3: external account (remarked).
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * Alarm information list.
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyAlarmList;
                    bool m_accessKeyAlarmListHasBeenSet;

                    /**
                     * ak information list.
                     */
                    std::vector<AKInfo> m_aKInfo;
                    bool m_aKInfoHasBeenSet;

                    /**
                     * Number of API calls.
                     */
                    int64_t m_actionCount;
                    bool m_actionCountHasBeenSet;

                    /**
                     * Last access Time
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * IP associated instance ID. if an empty string, represents an asset not within the account.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Associated instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Account associate Uin.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Display status.
                     */
                    bool m_showStatus;
                    bool m_showStatusHasBeenSet;

                    /**
                     * ISP field.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * vpc information outside the account.
                     */
                    std::vector<SourceIPVpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * Cloud type.
0 for tencent cloud.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_
