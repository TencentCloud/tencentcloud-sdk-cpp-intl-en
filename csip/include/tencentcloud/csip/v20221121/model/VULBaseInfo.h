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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_

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
                * Basic data of urgent vulnerabilities
                */
                class VULBaseInfo : public AbstractModel
                {
                public:
                    VULBaseInfo();
                    ~VULBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk level
high risk / Medium risk / low risk / Notification
                     * @return Level Risk level
high risk / Medium risk / low risk / Notification
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
high risk / Medium risk / low risk / Notification
                     * @param _level Risk level
high risk / Medium risk / low risk / Notification
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
                     * 获取Component
                     * @return Component Component
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component
                     * @param _component Component
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
                     * 获取Vulnerability release time
                     * @return PublishTime Vulnerability release time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability release time
                     * @param _publishTime Vulnerability release time
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

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
                     * 获取Vulnerability type
                     * @return VULType Vulnerability type
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置Vulnerability type
                     * @param _vULType Vulnerability type
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
                     * 获取Description
                     * @return Describe Description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Description
                     * @param _describe Description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

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
                     * 获取Vulnerability Impact component
                     * @return AppName Vulnerability Impact component
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Vulnerability Impact component
                     * @param _appName Vulnerability Impact component
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
                     * 获取Technical reference
                     * @return References Technical reference
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置Technical reference
                     * @param _references Technical reference
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Vulnerability Impact version
                     * @return AppVersion Vulnerability Impact version
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置Vulnerability Impact version
                     * @param _appVersion Vulnerability Impact version
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
                     * 获取Risk point
                     * @return VULURL Risk point
                     * 
                     */
                    std::string GetVULURL() const;

                    /**
                     * 设置Risk point
                     * @param _vULURL Risk point
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
                     * 获取Fixing suggestion
                     * @return Fix Fixing suggestion
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fix Fixing suggestion
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

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
                     * 获取Attack heat
0/1/2/3 
                     * @return AttackHeat Attack heat
0/1/2/3 
                     * 
                     */
                    int64_t GetAttackHeat() const;

                    /**
                     * 设置Attack heat
0/1/2/3 
                     * @param _attackHeat Attack heat
0/1/2/3 
                     * 
                     */
                    void SetAttackHeat(const int64_t& _attackHeat);

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                    /**
                     * 获取Detection status. 0: unscanned; 1: scan in progress; 2: scan complete
                     * @return ScanStatus Detection status. 0: unscanned; 1: scan in progress; 2: scan complete
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Detection status. 0: unscanned; 1: scan in progress; 2: scan complete
                     * @param _scanStatus Detection status. 0: unscanned; 1: scan in progress; 2: scan complete
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Whether 1/0 is required
                     * @return IsSuggest Whether 1/0 is required
                     * 
                     */
                    int64_t GetIsSuggest() const;

                    /**
                     * 设置Whether 1/0 is required
                     * @param _isSuggest Whether 1/0 is required
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
                     * 获取Tag.
                     * @return VulTag Tag.
                     * 
                     */
                    std::vector<std::string> GetVulTag() const;

                    /**
                     * 设置Tag.
                     * @param _vulTag Tag.
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
                     * 获取Supported products, separate with commas: "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @return SupportProduct Supported products, separate with commas: "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    std::string GetSupportProduct() const;

                    /**
                     * 设置Supported products, separate with commas: "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @param _supportProduct Supported products, separate with commas: "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    void SetSupportProduct(const std::string& _supportProduct);

                    /**
                     * 判断参数 SupportProduct 是否已赋值
                     * @return SupportProduct 是否已赋值
                     * 
                     */
                    bool SupportProductHasBeenSet() const;

                    /**
                     * 获取Vulnerability detection task id
                     * @return TaskId Vulnerability detection task id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Vulnerability detection task id
                     * @param _taskId Vulnerability detection task id
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
                     * 获取Primary key
                     * @return Index Primary key
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Primary key
                     * @param _index Primary key
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
                     * 获取Vulnerability id (legacy version)
                     * @return PcmgrID Vulnerability id (legacy version)
                     * 
                     */
                    std::string GetPcmgrID() const;

                    /**
                     * 设置Vulnerability id (legacy version)
                     * @param _pcmgrID Vulnerability id (legacy version)
                     * 
                     */
                    void SetPcmgrID(const std::string& _pcmgrID);

                    /**
                     * 判断参数 PcmgrID 是否已赋值
                     * @return PcmgrID 是否已赋值
                     * 
                     */
                    bool PcmgrIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability id New version
                     * @return TvdID Vulnerability id New version
                     * 
                     */
                    std::string GetTvdID() const;

                    /**
                     * 设置Vulnerability id New version
                     * @param _tvdID Vulnerability id New version
                     * 
                     */
                    void SetTvdID(const std::string& _tvdID);

                    /**
                     * 判断参数 TvdID 是否已赋值
                     * @return TvdID 是否已赋值
                     * 
                     */
                    bool TvdIDHasBeenSet() const;

                private:

                    /**
                     * Risk level
high risk / Medium risk / low risk / Notification
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Component
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Vulnerability release time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

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
                     * Vulnerability type
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
                     * Description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Vulnerability Payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Vulnerability Impact component
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Technical reference
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Vulnerability Impact version
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * Risk point
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
                     * Fixing suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

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
                     * Attack heat
0/1/2/3 
                     */
                    int64_t m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                    /**
                     * Detection status. 0: unscanned; 1: scan in progress; 2: scan complete
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Whether 1/0 is required
                     */
                    int64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<std::string> m_vulTag;
                    bool m_vulTagHasBeenSet;

                    /**
                     * Supported products, separate with commas: "cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     */
                    std::string m_supportProduct;
                    bool m_supportProductHasBeenSet;

                    /**
                     * Vulnerability detection task id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Primary key
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Vulnerability id (legacy version)
                     */
                    std::string m_pcmgrID;
                    bool m_pcmgrIDHasBeenSet;

                    /**
                     * Vulnerability id New version
                     */
                    std::string m_tvdID;
                    bool m_tvdIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULBASEINFO_H_
