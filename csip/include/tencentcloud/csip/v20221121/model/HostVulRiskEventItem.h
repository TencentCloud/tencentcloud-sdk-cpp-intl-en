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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_

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
                * Host vulnerability risk event details
                */
                class HostVulRiskEventItem : public AbstractModel
                {
                public:
                    HostVulRiskEventItem();
                    ~HostVulRiskEventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of a vulnerability risk record.
                     * @return UUID Unique identifier of a vulnerability risk record.
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置Unique identifier of a vulnerability risk record.
                     * @param _uUID Unique identifier of a vulnerability risk record.
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取Risk record ID
                     * @return RiskID Risk record ID
                     * 
                     */
                    uint64_t GetRiskID() const;

                    /**
                     * 设置Risk record ID
                     * @param _riskID Risk record ID
                     * 
                     */
                    void SetRiskID(const uint64_t& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulID Vulnerability ID
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulID Vulnerability ID
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取CVE No.
Parameter format: such as CVE-2024-12345
                     * @return CVEID CVE No.
Parameter format: such as CVE-2024-12345
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE No.
Parameter format: such as CVE-2024-12345
                     * @param _cVEID CVE No.
Parameter format: such as CVE-2024-12345
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch
WEB_CMS: Web-CMS vulnerability
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @return Category Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch
WEB_CMS: Web-CMS vulnerability
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch
WEB_CMS: Web-CMS vulnerability
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @param _category Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch
WEB_CMS: Web-CMS vulnerability
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Vulnerability severity level
Enumeration values:
UNKNOWN: invalid
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * @return Level Vulnerability severity level
Enumeration values:
UNKNOWN: invalid
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability severity level
Enumeration values:
UNKNOWN: invalid
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * @param _level Vulnerability severity level
Enumeration values:
UNKNOWN: invalid
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
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
                     * 获取VPR repair priority
Enumeration values:
DEFERRABLE: Can be repaired later
PLANNED: Planned repair
SOON: Fix as soon as possible
URGENT: urgent repair
                     * @return VPRLevel VPR repair priority
Enumeration values:
DEFERRABLE: Can be repaired later
PLANNED: Planned repair
SOON: Fix as soon as possible
URGENT: urgent repair
                     * 
                     */
                    std::string GetVPRLevel() const;

                    /**
                     * 设置VPR repair priority
Enumeration values:
DEFERRABLE: Can be repaired later
PLANNED: Planned repair
SOON: Fix as soon as possible
URGENT: urgent repair
                     * @param _vPRLevel VPR repair priority
Enumeration values:
DEFERRABLE: Can be repaired later
PLANNED: Planned repair
SOON: Fix as soon as possible
URGENT: urgent repair
                     * 
                     */
                    void SetVPRLevel(const std::string& _vPRLevel);

                    /**
                     * 判断参数 VPRLevel 是否已赋值
                     * @return VPRLevel 是否已赋值
                     * 
                     */
                    bool VPRLevelHasBeenSet() const;

                    /**
                     * 获取Detection mode
Enumeration values:
VersionCompare: version comparison
POC: POC detection
VersionComparePOC: version comparison + POC
                     * @return CheckMethod Detection mode
Enumeration values:
VersionCompare: version comparison
POC: POC detection
VersionComparePOC: version comparison + POC
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置Detection mode
Enumeration values:
VersionCompare: version comparison
POC: POC detection
VersionComparePOC: version comparison + POC
                     * @param _checkMethod Detection mode
Enumeration values:
VersionCompare: version comparison
POC: POC detection
VersionComparePOC: version comparison + POC
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取Risk status
Enumeration value:
PENDING: to be processed.
HANDLED: processed
FIXED: Fixed
SCANNING: Rechecking
IGNORED: ignored
NOT_REQUIRED: No action is required
DELETED: Deleted
FIXING: In remediation
NEED_REBOOT: Fixed and pending restart
FIX_FAILURE: FIX failure
                     * @return RiskStatus Risk status
Enumeration value:
PENDING: to be processed.
HANDLED: processed
FIXED: Fixed
SCANNING: Rechecking
IGNORED: ignored
NOT_REQUIRED: No action is required
DELETED: Deleted
FIXING: In remediation
NEED_REBOOT: Fixed and pending restart
FIX_FAILURE: FIX failure
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置Risk status
Enumeration value:
PENDING: to be processed.
HANDLED: processed
FIXED: Fixed
SCANNING: Rechecking
IGNORED: ignored
NOT_REQUIRED: No action is required
DELETED: Deleted
FIXING: In remediation
NEED_REBOOT: Fixed and pending restart
FIX_FAILURE: FIX failure
                     * @param _riskStatus Risk status
Enumeration value:
PENDING: to be processed.
HANDLED: processed
FIXED: Fixed
SCANNING: Rechecking
IGNORED: ignored
NOT_REQUIRED: No action is required
DELETED: Deleted
FIXING: In remediation
NEED_REBOOT: Fixed and pending restart
FIX_FAILURE: FIX failure
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取Whether one-click repair is supported
                     * @return SupportFix Whether one-click repair is supported
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置Whether one-click repair is supported
                     * @param _supportFix Whether one-click repair is supported
                     * 
                     */
                    void SetSupportFix(const bool& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @return LatestScanTime Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @param _latestScanTime Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取Cloud host instance ID
Parameter format: such as ins-xxxxxxxx
                     * @return InstanceID Cloud host instance ID
Parameter format: such as ins-xxxxxxxx
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Cloud host instance ID
Parameter format: such as ins-xxxxxxxx
                     * @param _instanceID Cloud host instance ID
Parameter format: such as ins-xxxxxxxx
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
                     * 获取Account AppID
                     * @return AppID Account AppID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置Account AppID
                     * @param _appID Account AppID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of a vulnerability risk record.
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * Risk record ID
                     */
                    uint64_t m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * CVE No.
Parameter format: such as CVE-2024-12345
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch
WEB_CMS: Web-CMS vulnerability
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Vulnerability severity level
Enumeration values:
UNKNOWN: invalid
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * VPR repair priority
Enumeration values:
DEFERRABLE: Can be repaired later
PLANNED: Planned repair
SOON: Fix as soon as possible
URGENT: urgent repair
                     */
                    std::string m_vPRLevel;
                    bool m_vPRLevelHasBeenSet;

                    /**
                     * Detection mode
Enumeration values:
VersionCompare: version comparison
POC: POC detection
VersionComparePOC: version comparison + POC
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * Risk status
Enumeration value:
PENDING: to be processed.
HANDLED: processed
FIXED: Fixed
SCANNING: Rechecking
IGNORED: ignored
NOT_REQUIRED: No action is required
DELETED: Deleted
FIXING: In remediation
NEED_REBOOT: Fixed and pending restart
FIX_FAILURE: FIX failure
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * Whether one-click repair is supported
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * Last scan time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * Cloud host instance ID
Parameter format: such as ins-xxxxxxxx
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Account AppID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_
