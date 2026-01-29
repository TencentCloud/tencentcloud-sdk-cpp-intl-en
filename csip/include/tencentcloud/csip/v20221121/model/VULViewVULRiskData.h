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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISKDATA_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISKDATA_H_

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
                * Vulnerability Risk Objects from Vulnerability's Perspective
                */
                class VULViewVULRiskData : public AbstractModel
                {
                public:
                    VULViewVULRiskData();
                    ~VULViewVULRiskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Impact assets.
                     * @return NoHandleCount Impact assets.
                     * 
                     */
                    int64_t GetNoHandleCount() const;

                    /**
                     * 设置Impact assets.
                     * @param _noHandleCount Impact assets.
                     * 
                     */
                    void SetNoHandleCount(const int64_t& _noHandleCount);

                    /**
                     * 判断参数 NoHandleCount 是否已赋值
                     * @return NoHandleCount 是否已赋值
                     * 
                     */
                    bool NoHandleCountHasBeenSet() const;

                    /**
                     * 获取Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - critical.
                     * @return Level Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - critical.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - critical.
                     * @param _level Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - critical.
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
                     * 获取Number of Affected Assets
                     * @return AffectAssetCount Number of Affected Assets
                     * 
                     */
                    uint64_t GetAffectAssetCount() const;

                    /**
                     * 设置Number of Affected Assets
                     * @param _affectAssetCount Number of Affected Assets
                     * 
                     */
                    void SetAffectAssetCount(const uint64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

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
                     * 获取Scan Source. See API Return Enumeration Type for details.
                     * @return From Scan Source. See API Return Enumeration Type for details.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Scan Source. See API Return Enumeration Type for details.
                     * @param _from Scan Source. See API Return Enumeration Type for details.
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
                     * 获取Front-end Index
                     * @return Index Front-end Index
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Front-end Index
                     * @param _index Front-end Index
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
                     * 获取Vulnerability Payload
                     * @return Payload Vulnerability Payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Vulnerability Payload
                     * @param _payload Vulnerability Payload
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
                     * 获取PCMGRId
                     * @return PCMGRId PCMGRId
                     * 
                     */
                    std::string GetPCMGRId() const;

                    /**
                     * 设置PCMGRId
                     * @param _pCMGRId PCMGRId
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
                     * 获取Vulnerability tag. during searching, emergency mandatory parameter VulTag=SuggestRepair/EMGCVul.
                     * @return VulTag Vulnerability tag. during searching, emergency mandatory parameter VulTag=SuggestRepair/EMGCVul.
                     * 
                     */
                    std::vector<std::string> GetVulTag() const;

                    /**
                     * 设置Vulnerability tag. during searching, emergency mandatory parameter VulTag=SuggestRepair/EMGCVul.
                     * @param _vulTag Vulnerability tag. during searching, emergency mandatory parameter VulTag=SuggestRepair/EMGCVul.
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
                     * 获取Whether a mandatory vulnerability: 1 - yes; 0 - no.
                     * @return IsSuggest Whether a mandatory vulnerability: 1 - yes; 0 - no.
                     * 
                     */
                    int64_t GetIsSuggest() const;

                    /**
                     * 设置Whether a mandatory vulnerability: 1 - yes; 0 - no.
                     * @param _isSuggest Whether a mandatory vulnerability: 1 - yes; 0 - no.
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
                     * 获取Disposal task id.
                     * @return HandleTaskId Disposal task id.
                     * 
                     */
                    std::string GetHandleTaskId() const;

                    /**
                     * 设置Disposal task id.
                     * @param _handleTaskId Disposal task id.
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
                     * 获取New vulnerability risk id.
                     * @return VulRiskId New vulnerability risk id.
                     * 
                     */
                    std::string GetVulRiskId() const;

                    /**
                     * 设置New vulnerability risk id.
                     * @param _vulRiskId New vulnerability risk id.
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
                     * 获取Is it possible to perform a one-click physical examination. valid values: 1-yes, 0-not allowed.
                     * @return IsOneClick Is it possible to perform a one-click physical examination. valid values: 1-yes, 0-not allowed.
                     * 
                     */
                    uint64_t GetIsOneClick() const;

                    /**
                     * 设置Is it possible to perform a one-click physical examination. valid values: 1-yes, 0-not allowed.
                     * @param _isOneClick Is it possible to perform a one-click physical examination. valid values: 1-yes, 0-not allowed.
                     * 
                     */
                    void SetIsOneClick(const uint64_t& _isOneClick);

                    /**
                     * 判断参数 IsOneClick 是否已赋值
                     * @return IsOneClick 是否已赋值
                     * 
                     */
                    bool IsOneClickHasBeenSet() const;

                private:

                    /**
                     * Port.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Impact assets.
                     */
                    int64_t m_noHandleCount;
                    bool m_noHandleCountHasBeenSet;

                    /**
                     * Risk level: low - low risk, high - high risk, middle - medium risk, info - note, extreme - critical.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

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
                     * Number of Affected Assets
                     */
                    uint64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * Risk ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * Scan Source. See API Return Enumeration Type for details.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Front-end Index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Vulnerability type.
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

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
                     * Vulnerability Payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

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
                     * User Nickname
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User appid.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                     * PCMGRId
                     */
                    std::string m_pCMGRId;
                    bool m_pCMGRIdHasBeenSet;

                    /**
                     * Vulnerability tag. during searching, emergency mandatory parameter VulTag=SuggestRepair/EMGCVul.
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
                     * Whether a mandatory vulnerability: 1 - yes; 0 - no.
                     */
                    int64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Disposal task id.
                     */
                    std::string m_handleTaskId;
                    bool m_handleTaskIdHasBeenSet;

                    /**
                     * Engine source.
                     */
                    std::string m_engineSource;
                    bool m_engineSourceHasBeenSet;

                    /**
                     * New vulnerability risk id.
                     */
                    std::string m_vulRiskId;
                    bool m_vulRiskIdHasBeenSet;

                    /**
                     * New version vulnerability id.
                     */
                    std::string m_tvdID;
                    bool m_tvdIDHasBeenSet;

                    /**
                     * Is it possible to perform a one-click physical examination. valid values: 1-yes, 0-not allowed.
                     */
                    uint64_t m_isOneClick;
                    bool m_isOneClickHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISKDATA_H_
