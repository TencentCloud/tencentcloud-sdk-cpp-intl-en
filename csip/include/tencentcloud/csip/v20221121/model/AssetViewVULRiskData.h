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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISKDATA_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISKDATA_H_

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
                * Vulnerability Risk Objects from Asset's Perspective
                */
                class AssetViewVULRiskData : public AbstractModel
                {
                public:
                    AssetViewVULRiskData();
                    ~AssetViewVULRiskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Impact assets.
                     * @return AffectAsset Impact assets.
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置Impact assets.
                     * @param _affectAsset Impact assets.
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

                    /**
                     * 获取Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - serious.
                     * @return Level Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - serious.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - serious.
                     * @param _level Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - serious.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Asset type.
                     * @return InstanceType Asset type.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Asset type.
                     * @param _instanceType Asset type.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Component.
                     * @return Component Component.
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component.
                     * @param _component Component.
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取Latest Recognition Time
                     * @return RecentTime Latest Recognition Time
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置Latest Recognition Time
                     * @param _recentTime Latest Recognition Time
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取First Recognition Time
                     * @return FirstTime First Recognition Time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First Recognition Time
                     * @param _firstTime First Recognition Time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Status, 0 unprocessed, 1 tagged, 2 ignored, 3 processed, 4 under disposal, 5 detecting, 6 partially processed.
                     * @return Status Status, 0 unprocessed, 1 tagged, 2 ignored, 3 processed, 4 under disposal, 5 detecting, 6 partially processed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status, 0 unprocessed, 1 tagged, 2 ignored, 3 processed, 4 under disposal, 5 detecting, 6 partially processed.
                     * @param _status Status, 0 unprocessed, 1 tagged, 2 ignored, 3 processed, 4 under disposal, 5 detecting, 6 partially processed.
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
                     * 获取Risk ID
                     * @return RiskId Risk ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置Risk ID
                     * @param _riskId Risk ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User Nickname
                     * @return Nick User Nickname
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User Nickname
                     * @param _nick User Nickname
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
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
                     * 获取Vulnerability type.
                     * @return VULType Vulnerability type.
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置Vulnerability type.
                     * @param _vULType Vulnerability type.
                     * 
                     */
                    void SetVULType(const std::string& _vULType);

                    /**
                     * 判断参数 VULType 是否已赋值
                     * @return VULType 是否已赋值
                     * 
                     */
                    bool VULTypeHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Vulnerability impact component.
                     * @return AppName Vulnerability impact component.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Vulnerability impact component.
                     * @param _appName Vulnerability impact component.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability impact version.
                     * @return AppVersion Vulnerability impact version.
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置Vulnerability impact version.
                     * @param _appVersion Vulnerability impact version.
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取Risks.
                     * @return VULURL Risks.
                     * 
                     */
                    std::string GetVULURL() const;

                    /**
                     * 设置Risks.
                     * @param _vULURL Risks.
                     * 
                     */
                    void SetVULURL(const std::string& _vULURL);

                    /**
                     * 判断参数 VULURL 是否已赋值
                     * @return VULURL 是否已赋值
                     * 
                     */
                    bool VULURLHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VULName Vulnerability name
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vULName Vulnerability name
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取cve
                     * @return CVE cve
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置cve
                     * @param _cVE cve
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取pocid
                     * @return POCId pocid
                     * 
                     */
                    std::string GetPOCId() const;

                    /**
                     * 设置pocid
                     * @param _pOCId pocid
                     * 
                     */
                    void SetPOCId(const std::string& _pOCId);

                    /**
                     * 判断参数 POCId 是否已赋值
                     * @return POCId 是否已赋值
                     * 
                     */
                    bool POCIdHasBeenSet() const;

                    /**
                     * 获取Scan Source
                     * @return From Scan Source
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Scan Source
                     * @param _from Scan Source
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Host version.
                     * @return CWPVersion Host version.
                     * 
                     */
                    int64_t GetCWPVersion() const;

                    /**
                     * 设置Host version.
                     * @param _cWPVersion Host version.
                     * 
                     */
                    void SetCWPVersion(const int64_t& _cWPVersion);

                    /**
                     * 判断参数 CWPVersion 是否已赋值
                     * @return CWPVersion 是否已赋值
                     * 
                     */
                    bool CWPVersionHasBeenSet() const;

                    /**
                     * 获取Instance UUID
                     * @return InstanceUUID Instance UUID
                     * 
                     */
                    std::string GetInstanceUUID() const;

                    /**
                     * 设置Instance UUID
                     * @param _instanceUUID Instance UUID
                     * 
                     */
                    void SetInstanceUUID(const std::string& _instanceUUID);

                    /**
                     * 判断参数 InstanceUUID 是否已赋值
                     * @return InstanceUUID 是否已赋值
                     * 
                     */
                    bool InstanceUUIDHasBeenSet() const;

                    /**
                     * 获取Payload
                     * @return Payload Payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Payload
                     * @param _payload Payload
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * @return EMGCVulType Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * @param _eMGCVulType Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * 
                     */
                    void SetEMGCVulType(const int64_t& _eMGCVulType);

                    /**
                     * 判断参数 EMGCVulType 是否已赋值
                     * @return EMGCVulType 是否已赋值
                     * 
                     */
                    bool EMGCVulTypeHasBeenSet() const;

                    /**
                     * 获取CVSS score
                     * @return CVSS CVSS score
                     * 
                     */
                    double GetCVSS() const;

                    /**
                     * 设置CVSS score
                     * @param _cVSS CVSS score
                     * 
                     */
                    void SetCVSS(const double& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取Frontend index id.
                     * @return Index Frontend index id.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Frontend index id.
                     * @param _index Frontend index id.
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取pcmgrId
                     * @return PCMGRId pcmgrId
                     * 
                     */
                    std::string GetPCMGRId() const;

                    /**
                     * 设置pcmgrId
                     * @param _pCMGRId pcmgrId
                     * 
                     */
                    void SetPCMGRId(const std::string& _pCMGRId);

                    /**
                     * 判断参数 PCMGRId 是否已赋值
                     * @return PCMGRId 是否已赋值
                     * 
                     */
                    bool PCMGRIdHasBeenSet() const;

                    /**
                     * 获取Report ID
                     * @return LogId Report ID
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Report ID
                     * @param _logId Report ID
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability Tag.
                     * @return VulTag Vulnerability Tag.
                     * 
                     */
                    std::vector<std::string> GetVulTag() const;

                    /**
                     * 设置Vulnerability Tag.
                     * @param _vulTag Vulnerability Tag.
                     * 
                     */
                    void SetVulTag(const std::vector<std::string>& _vulTag);

                    /**
                     * 判断参数 VulTag 是否已赋值
                     * @return VulTag 是否已赋值
                     * 
                     */
                    bool VulTagHasBeenSet() const;

                    /**
                     * 获取Vulnerability disclosure time.
                     * @return DisclosureTime Vulnerability disclosure time.
                     * 
                     */
                    std::string GetDisclosureTime() const;

                    /**
                     * 设置Vulnerability disclosure time.
                     * @param _disclosureTime Vulnerability disclosure time.
                     * 
                     */
                    void SetDisclosureTime(const std::string& _disclosureTime);

                    /**
                     * 判断参数 DisclosureTime 是否已赋值
                     * @return DisclosureTime 是否已赋值
                     * 
                     */
                    bool DisclosureTimeHasBeenSet() const;

                    /**
                     * 获取Attack intensity.
                     * @return AttackHeat Attack intensity.
                     * 
                     */
                    uint64_t GetAttackHeat() const;

                    /**
                     * 设置Attack intensity.
                     * @param _attackHeat Attack intensity.
                     * 
                     */
                    void SetAttackHeat(const uint64_t& _attackHeat);

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerability is mandatory. 1 for yes, 0 for no.
                     * @return IsSuggest Whether the vulnerability is mandatory. 1 for yes, 0 for no.
                     * 
                     */
                    int64_t GetIsSuggest() const;

                    /**
                     * 设置Whether the vulnerability is mandatory. 1 for yes, 0 for no.
                     * @param _isSuggest Whether the vulnerability is mandatory. 1 for yes, 0 for no.
                     * 
                     */
                    void SetIsSuggest(const int64_t& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取Disposal task ID.
                     * @return HandleTaskId Disposal task ID.
                     * 
                     */
                    std::string GetHandleTaskId() const;

                    /**
                     * 设置Disposal task ID.
                     * @param _handleTaskId Disposal task ID.
                     * 
                     */
                    void SetHandleTaskId(const std::string& _handleTaskId);

                    /**
                     * 判断参数 HandleTaskId 是否已赋值
                     * @return HandleTaskId 是否已赋值
                     * 
                     */
                    bool HandleTaskIdHasBeenSet() const;

                    /**
                     * 获取Engine source.
                     * @return EngineSource Engine source.
                     * 
                     */
                    std::string GetEngineSource() const;

                    /**
                     * 设置Engine source.
                     * @param _engineSource Engine source.
                     * 
                     */
                    void SetEngineSource(const std::string& _engineSource);

                    /**
                     * 判断参数 EngineSource 是否已赋值
                     * @return EngineSource 是否已赋值
                     * 
                     */
                    bool EngineSourceHasBeenSet() const;

                    /**
                     * 获取New vulnerability risk id (same as RiskId in the network-wide vulnerabilities table).
                     * @return VulRiskId New vulnerability risk id (same as RiskId in the network-wide vulnerabilities table).
                     * 
                     */
                    std::string GetVulRiskId() const;

                    /**
                     * 设置New vulnerability risk id (same as RiskId in the network-wide vulnerabilities table).
                     * @param _vulRiskId New vulnerability risk id (same as RiskId in the network-wide vulnerabilities table).
                     * 
                     */
                    void SetVulRiskId(const std::string& _vulRiskId);

                    /**
                     * 判断参数 VulRiskId 是否已赋值
                     * @return VulRiskId 是否已赋值
                     * 
                     */
                    bool VulRiskIdHasBeenSet() const;

                    /**
                     * 获取New version vulnerability id.
                     * @return TvdID New version vulnerability id.
                     * 
                     */
                    std::string GetTvdID() const;

                    /**
                     * 设置New version vulnerability id.
                     * @param _tvdID New version vulnerability id.
                     * 
                     */
                    void SetTvdID(const std::string& _tvdID);

                    /**
                     * 判断参数 TvdID 是否已赋值
                     * @return TvdID 是否已赋值
                     * 
                     */
                    bool TvdIDHasBeenSet() const;

                    /**
                     * 获取Is it possible to perform a one-click physical examination, 1 - yes, 0 - not allowed.
                     * @return IsOneClick Is it possible to perform a one-click physical examination, 1 - yes, 0 - not allowed.
                     * 
                     */
                    uint64_t GetIsOneClick() const;

                    /**
                     * 设置Is it possible to perform a one-click physical examination, 1 - yes, 0 - not allowed.
                     * @param _isOneClick Is it possible to perform a one-click physical examination, 1 - yes, 0 - not allowed.
                     * 
                     */
                    void SetIsOneClick(const uint64_t& _isOneClick);

                    /**
                     * 判断参数 IsOneClick 是否已赋值
                     * @return IsOneClick 是否已赋值
                     * 
                     */
                    bool IsOneClickHasBeenSet() const;

                    /**
                     * 获取Whether to perform a POC scan. valid values: 0 (not a POC), 1 (POC).
                     * @return IsPOC Whether to perform a POC scan. valid values: 0 (not a POC), 1 (POC).
                     * 
                     */
                    uint64_t GetIsPOC() const;

                    /**
                     * 设置Whether to perform a POC scan. valid values: 0 (not a POC), 1 (POC).
                     * @param _isPOC Whether to perform a POC scan. valid values: 0 (not a POC), 1 (POC).
                     * 
                     */
                    void SetIsPOC(const uint64_t& _isPOC);

                    /**
                     * 判断参数 IsPOC 是否已赋值
                     * @return IsPOC 是否已赋值
                     * 
                     */
                    bool IsPOCHasBeenSet() const;

                private:

                    /**
                     * Impact assets.
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - serious.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Component.
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Latest Recognition Time
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * First Recognition Time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Status, 0 unprocessed, 1 tagged, 2 ignored, 3 processed, 4 under disposal, 5 detecting, 6 partially processed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * User appid.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User Nickname
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Vulnerability type.
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * Port.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Vulnerability impact component.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Vulnerability impact version.
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * Risks.
                     */
                    std::string m_vULURL;
                    bool m_vULURLHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * cve
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * pocid
                     */
                    std::string m_pOCId;
                    bool m_pOCIdHasBeenSet;

                    /**
                     * Scan Source
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Host version.
                     */
                    int64_t m_cWPVersion;
                    bool m_cWPVersionHasBeenSet;

                    /**
                     * Instance UUID
                     */
                    std::string m_instanceUUID;
                    bool m_instanceUUIDHasBeenSet;

                    /**
                     * Payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                    /**
                     * CVSS score
                     */
                    double m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * Frontend index id.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * pcmgrId
                     */
                    std::string m_pCMGRId;
                    bool m_pCMGRIdHasBeenSet;

                    /**
                     * Report ID
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Vulnerability Tag.
                     */
                    std::vector<std::string> m_vulTag;
                    bool m_vulTagHasBeenSet;

                    /**
                     * Vulnerability disclosure time.
                     */
                    std::string m_disclosureTime;
                    bool m_disclosureTimeHasBeenSet;

                    /**
                     * Attack intensity.
                     */
                    uint64_t m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                    /**
                     * Whether the vulnerability is mandatory. 1 for yes, 0 for no.
                     */
                    int64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Disposal task ID.
                     */
                    std::string m_handleTaskId;
                    bool m_handleTaskIdHasBeenSet;

                    /**
                     * Engine source.
                     */
                    std::string m_engineSource;
                    bool m_engineSourceHasBeenSet;

                    /**
                     * New vulnerability risk id (same as RiskId in the network-wide vulnerabilities table).
                     */
                    std::string m_vulRiskId;
                    bool m_vulRiskIdHasBeenSet;

                    /**
                     * New version vulnerability id.
                     */
                    std::string m_tvdID;
                    bool m_tvdIDHasBeenSet;

                    /**
                     * Is it possible to perform a one-click physical examination, 1 - yes, 0 - not allowed.
                     */
                    uint64_t m_isOneClick;
                    bool m_isOneClickHasBeenSet;

                    /**
                     * Whether to perform a POC scan. valid values: 0 (not a POC), 1 (POC).
                     */
                    uint64_t m_isPOC;
                    bool m_isPOCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISKDATA_H_
