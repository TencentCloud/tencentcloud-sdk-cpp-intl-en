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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>
#include <tencentcloud/csip/v20221121/model/VPRLabel.h>
#include <tencentcloud/csip/v20221121/model/VulSpreadTrend.h>
#include <tencentcloud/csip/v20221121/model/VulVendorProduct.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * All vulnerability information
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability ID</p>
                     * @return ID <p>Vulnerability ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Vulnerability ID</p>
                     * @param _iD <p>Vulnerability ID</p>
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
                     * 获取<p>Vulnerability name</p>
                     * @return Name <p>Vulnerability name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Vulnerability name</p>
                     * @param _name <p>Vulnerability name</p>
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
                     * 获取<p>CveID</p>
                     * @return CVEID <p>CveID</p>
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置<p>CveID</p>
                     * @param _cVEID <p>CveID</p>
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
WINDOWS: Windows systems patch
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @return Category Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows systems patch
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows systems patch
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @param _category Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows systems patch
WEB_CMS: Web-CMS vulnerabilities
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
                     * 获取Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @return PublishTime Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @param _publishTime Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
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
                     * 获取<p>Detection mode</p><p>Enumeration value:</p><ul><li>VersionCompare: Version comparison</li><li>POC: POC detection</li></ul>
                     * @return CheckMethod <p>Detection mode</p><p>Enumeration value:</p><ul><li>VersionCompare: Version comparison</li><li>POC: POC detection</li></ul>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>Detection mode</p><p>Enumeration value:</p><ul><li>VersionCompare: Version comparison</li><li>POC: POC detection</li></ul>
                     * @param _checkMethod <p>Detection mode</p><p>Enumeration value:</p><ul><li>VersionCompare: Version comparison</li><li>POC: POC detection</li></ul>
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
                     * 获取Vulnerability defense status
Enumeration values:
ENABLED: On
NOT_SUPPORTED: Not supported
NOT_ENABLED: not enabled
                     * @return DefendStatus Vulnerability defense status
Enumeration values:
ENABLED: On
NOT_SUPPORTED: Not supported
NOT_ENABLED: not enabled
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置Vulnerability defense status
Enumeration values:
ENABLED: On
NOT_SUPPORTED: Not supported
NOT_ENABLED: not enabled
                     * @param _defendStatus Vulnerability defense status
Enumeration values:
ENABLED: On
NOT_SUPPORTED: Not supported
NOT_ENABLED: not enabled
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取Whether one-click repair is supported
Enumeration values:
true: Support
false: Not supported
                     * @return SupportFix Whether one-click repair is supported
Enumeration values:
true: Support
false: Not supported
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置Whether one-click repair is supported
Enumeration values:
true: Support
false: Not supported
                     * @param _supportFix Whether one-click repair is supported
Enumeration values:
true: Support
false: Not supported
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
                     * 获取VPR rating information (including rating result, description, and phased score)
                     * @return VRPRatingInfo VPR rating information (including rating result, description, and phased score)
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置VPR rating information (including rating result, description, and phased score)
                     * @param _vRPRatingInfo VPR rating information (including rating result, description, and phased score)
                     * 
                     */
                    void SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo);

                    /**
                     * 判断参数 VRPRatingInfo 是否已赋值
                     * @return VRPRatingInfo 是否已赋值
                     * 
                     */
                    bool VRPRatingInfoHasBeenSet() const;

                    /**
                     * 获取CVSS score
Valid values: [0.0, 10.0]
                     * @return CvssScore CVSS score
Valid values: [0.0, 10.0]
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS score
Valid values: [0.0, 10.0]
                     * @param _cvssScore CVSS score
Valid values: [0.0, 10.0]
                     * 
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取VPR risk tag list (such as exploitation in the wild, EXP available, POC available, public network exposure, no restart required)
                     * @return Label VPR risk tag list (such as exploitation in the wild, EXP available, POC available, public network exposure, no restart required)
                     * 
                     */
                    std::vector<VPRLabel> GetLabel() const;

                    /**
                     * 设置VPR risk tag list (such as exploitation in the wild, EXP available, POC available, public network exposure, no restart required)
                     * @param _label VPR risk tag list (such as exploitation in the wild, EXP available, POC available, public network exposure, no restart required)
                     * 
                     */
                    void SetLabel(const std::vector<VPRLabel>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Vulnerability remark
                     * @return Remark Vulnerability remark
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Vulnerability remark
                     * @param _remark Vulnerability remark
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
                     * 获取Vulnerability overview
                     * @return Summary Vulnerability overview
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Vulnerability overview
                     * @param _summary Vulnerability overview
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Number of hosts with vulnerability protection enabled
                     * @return DefendHostCount Number of hosts with vulnerability protection enabled
                     * 
                     */
                    uint64_t GetDefendHostCount() const;

                    /**
                     * 设置Number of hosts with vulnerability protection enabled
                     * @param _defendHostCount Number of hosts with vulnerability protection enabled
                     * 
                     */
                    void SetDefendHostCount(const uint64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts with vulnerability defense disabled
                     * @return NotDefendHostCount Number of hosts with vulnerability defense disabled
                     * 
                     */
                    uint64_t GetNotDefendHostCount() const;

                    /**
                     * 设置Number of hosts with vulnerability defense disabled
                     * @param _notDefendHostCount Number of hosts with vulnerability defense disabled
                     * 
                     */
                    void SetNotDefendHostCount(const uint64_t& _notDefendHostCount);

                    /**
                     * 判断参数 NotDefendHostCount 是否已赋值
                     * @return NotDefendHostCount 是否已赋值
                     * 
                     */
                    bool NotDefendHostCountHasBeenSet() const;

                    /**
                     * 获取Last scan time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @return LatestScanTime Last scan time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置Last scan time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @param _latestScanTime Last scan time
Parameter format: YYYY-MM-DD HH:mm:ss
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
                     * 获取CVSS severity level
Enumeration values:
INVALID: Invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * @return CVSSLevel CVSS severity level
Enumeration values:
INVALID: Invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * 
                     */
                    std::string GetCVSSLevel() const;

                    /**
                     * 设置CVSS severity level
Enumeration values:
INVALID: Invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * @param _cVSSLevel CVSS severity level
Enumeration values:
INVALID: Invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * 
                     */
                    void SetCVSSLevel(const std::string& _cVSSLevel);

                    /**
                     * 判断参数 CVSSLevel 是否已赋值
                     * @return CVSSLevel 是否已赋值
                     * 
                     */
                    bool CVSSLevelHasBeenSet() const;

                    /**
                     * 获取Description list of affected software (each item such as openssl < 1.1.1k)
                     * @return VulAffect Description list of affected software (each item such as openssl < 1.1.1k)
                     * 
                     */
                    std::vector<std::string> GetVulAffect() const;

                    /**
                     * 设置Description list of affected software (each item such as openssl < 1.1.1k)
                     * @param _vulAffect Description list of affected software (each item such as openssl < 1.1.1k)
                     * 
                     */
                    void SetVulAffect(const std::vector<std::string>& _vulAffect);

                    /**
                     * 判断参数 VulAffect 是否已赋值
                     * @return VulAffect 是否已赋值
                     * 
                     */
                    bool VulAffectHasBeenSet() const;

                    /**
                     * 获取Whether included in the KVE (Known Vulnerability Exploitation) library
Enumeration values:
true: Recorded
false: Not recorded
                     * @return KVERecord Whether included in the KVE (Known Vulnerability Exploitation) library
Enumeration values:
true: Recorded
false: Not recorded
                     * 
                     */
                    bool GetKVERecord() const;

                    /**
                     * 设置Whether included in the KVE (Known Vulnerability Exploitation) library
Enumeration values:
true: Recorded
false: Not recorded
                     * @param _kVERecord Whether included in the KVE (Known Vulnerability Exploitation) library
Enumeration values:
true: Recorded
false: Not recorded
                     * 
                     */
                    void SetKVERecord(const bool& _kVERecord);

                    /**
                     * 判断参数 KVERecord 是否已赋值
                     * @return KVERecord 是否已赋值
                     * 
                     */
                    bool KVERecordHasBeenSet() const;

                    /**
                     * 获取KVE collection time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @return KVERecordTime KVE collection time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetKVERecordTime() const;

                    /**
                     * 设置KVE collection time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @param _kVERecordTime KVE collection time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetKVERecordTime(const std::string& _kVERecordTime);

                    /**
                     * 判断参数 KVERecordTime 是否已赋值
                     * @return KVERecordTime 是否已赋值
                     * 
                     */
                    bool KVERecordTimeHasBeenSet() const;

                    /**
                     * 获取EPSS score (vulnerability type probability prediction)
Valid values: [0.0, 1.0]
                     * @return EPSSScore EPSS score (vulnerability type probability prediction)
Valid values: [0.0, 1.0]
                     * 
                     */
                    double GetEPSSScore() const;

                    /**
                     * 设置EPSS score (vulnerability type probability prediction)
Valid values: [0.0, 1.0]
                     * @param _ePSSScore EPSS score (vulnerability type probability prediction)
Valid values: [0.0, 1.0]
                     * 
                     */
                    void SetEPSSScore(const double& _ePSSScore);

                    /**
                     * 判断参数 EPSSScore 是否已赋值
                     * @return EPSSScore 是否已赋值
                     * 
                     */
                    bool EPSSScoreHasBeenSet() const;

                    /**
                     * 获取Affected vendor list
                     * @return AffectVendor Affected vendor list
                     * 
                     */
                    std::vector<std::string> GetAffectVendor() const;

                    /**
                     * 设置Affected vendor list
                     * @param _affectVendor Affected vendor list
                     * 
                     */
                    void SetAffectVendor(const std::vector<std::string>& _affectVendor);

                    /**
                     * 判断参数 AffectVendor 是否已赋值
                     * @return AffectVendor 是否已赋值
                     * 
                     */
                    bool AffectVendorHasBeenSet() const;

                    /**
                     * 获取List of affected products
                     * @return AffectProduct List of affected products
                     * 
                     */
                    std::vector<std::string> GetAffectProduct() const;

                    /**
                     * 设置List of affected products
                     * @param _affectProduct List of affected products
                     * 
                     */
                    void SetAffectProduct(const std::vector<std::string>& _affectProduct);

                    /**
                     * 判断参数 AffectProduct 是否已赋值
                     * @return AffectProduct 是否已赋值
                     * 
                     */
                    bool AffectProductHasBeenSet() const;

                    /**
                     * 获取Vulnerability type mechanism description
                     * @return Mechanism Vulnerability type mechanism description
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置Vulnerability type mechanism description
                     * @param _mechanism Vulnerability type mechanism description
                     * 
                     */
                    void SetMechanism(const std::string& _mechanism);

                    /**
                     * 判断参数 Mechanism 是否已赋值
                     * @return Mechanism 是否已赋值
                     * 
                     */
                    bool MechanismHasBeenSet() const;

                    /**
                     * 获取Pre-deployment instructions for vulnerability type
                     * @return Precondition Pre-deployment instructions for vulnerability type
                     * 
                     */
                    std::string GetPrecondition() const;

                    /**
                     * 设置Pre-deployment instructions for vulnerability type
                     * @param _precondition Pre-deployment instructions for vulnerability type
                     * 
                     */
                    void SetPrecondition(const std::string& _precondition);

                    /**
                     * 判断参数 Precondition 是否已赋值
                     * @return Precondition 是否已赋值
                     * 
                     */
                    bool PreconditionHasBeenSet() const;

                    /**
                     * 获取Latest vulnerability spread trend data list (by date)
                     * @return LatestTrend Latest vulnerability spread trend data list (by date)
                     * 
                     */
                    std::vector<VulSpreadTrend> GetLatestTrend() const;

                    /**
                     * 设置Latest vulnerability spread trend data list (by date)
                     * @param _latestTrend Latest vulnerability spread trend data list (by date)
                     * 
                     */
                    void SetLatestTrend(const std::vector<VulSpreadTrend>& _latestTrend);

                    /**
                     * 判断参数 LatestTrend 是否已赋值
                     * @return LatestTrend 是否已赋值
                     * 
                     */
                    bool LatestTrendHasBeenSet() const;

                    /**
                     * 获取<p>Solution</p>
                     * @return FixSolution <p>Solution</p>
                     * 
                     */
                    std::string GetFixSolution() const;

                    /**
                     * 设置<p>Solution</p>
                     * @param _fixSolution <p>Solution</p>
                     * 
                     */
                    void SetFixSolution(const std::string& _fixSolution);

                    /**
                     * 判断参数 FixSolution 是否已赋值
                     * @return FixSolution 是否已赋值
                     * 
                     */
                    bool FixSolutionHasBeenSet() const;

                    /**
                     * 获取<p>Reference link</p>
                     * @return RefLink <p>Reference link</p>
                     * 
                     */
                    std::string GetRefLink() const;

                    /**
                     * 设置<p>Reference link</p>
                     * @param _refLink <p>Reference link</p>
                     * 
                     */
                    void SetRefLink(const std::string& _refLink);

                    /**
                     * 判断参数 RefLink 是否已赋值
                     * @return RefLink 是否已赋值
                     * 
                     */
                    bool RefLinkHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability severity description</p>
                     * @return HarmDescription <p>Vulnerability severity description</p>
                     * 
                     */
                    std::string GetHarmDescription() const;

                    /**
                     * 设置<p>Vulnerability severity description</p>
                     * @param _harmDescription <p>Vulnerability severity description</p>
                     * 
                     */
                    void SetHarmDescription(const std::string& _harmDescription);

                    /**
                     * 判断参数 HarmDescription 是否已赋值
                     * @return HarmDescription 是否已赋值
                     * 
                     */
                    bool HarmDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability Impact product</p>
                     * @return AffectVendorProduct <p>Vulnerability Impact product</p>
                     * 
                     */
                    std::vector<VulVendorProduct> GetAffectVendorProduct() const;

                    /**
                     * 设置<p>Vulnerability Impact product</p>
                     * @param _affectVendorProduct <p>Vulnerability Impact product</p>
                     * 
                     */
                    void SetAffectVendorProduct(const std::vector<VulVendorProduct>& _affectVendorProduct);

                    /**
                     * 判断参数 AffectVendorProduct 是否已赋值
                     * @return AffectVendorProduct 是否已赋值
                     * 
                     */
                    bool AffectVendorProductHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>CveID</p>
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability category
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows systems patch
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>Detection mode</p><p>Enumeration value:</p><ul><li>VersionCompare: Version comparison</li><li>POC: POC detection</li></ul>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * Vulnerability defense status
Enumeration values:
ENABLED: On
NOT_SUPPORTED: Not supported
NOT_ENABLED: not enabled
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * Whether one-click repair is supported
Enumeration values:
true: Support
false: Not supported
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * VPR rating information (including rating result, description, and phased score)
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * CVSS score
Valid values: [0.0, 10.0]
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * VPR risk tag list (such as exploitation in the wild, EXP available, POC available, public network exposure, no restart required)
                     */
                    std::vector<VPRLabel> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Vulnerability remark
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Vulnerability overview
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Number of hosts with vulnerability protection enabled
                     */
                    uint64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * Number of hosts with vulnerability defense disabled
                     */
                    uint64_t m_notDefendHostCount;
                    bool m_notDefendHostCountHasBeenSet;

                    /**
                     * Last scan time
Parameter format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * CVSS severity level
Enumeration values:
INVALID: Invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     */
                    std::string m_cVSSLevel;
                    bool m_cVSSLevelHasBeenSet;

                    /**
                     * Description list of affected software (each item such as openssl < 1.1.1k)
                     */
                    std::vector<std::string> m_vulAffect;
                    bool m_vulAffectHasBeenSet;

                    /**
                     * Whether included in the KVE (Known Vulnerability Exploitation) library
Enumeration values:
true: Recorded
false: Not recorded
                     */
                    bool m_kVERecord;
                    bool m_kVERecordHasBeenSet;

                    /**
                     * KVE collection time
Parameter format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_kVERecordTime;
                    bool m_kVERecordTimeHasBeenSet;

                    /**
                     * EPSS score (vulnerability type probability prediction)
Valid values: [0.0, 1.0]
                     */
                    double m_ePSSScore;
                    bool m_ePSSScoreHasBeenSet;

                    /**
                     * Affected vendor list
                     */
                    std::vector<std::string> m_affectVendor;
                    bool m_affectVendorHasBeenSet;

                    /**
                     * List of affected products
                     */
                    std::vector<std::string> m_affectProduct;
                    bool m_affectProductHasBeenSet;

                    /**
                     * Vulnerability type mechanism description
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * Pre-deployment instructions for vulnerability type
                     */
                    std::string m_precondition;
                    bool m_preconditionHasBeenSet;

                    /**
                     * Latest vulnerability spread trend data list (by date)
                     */
                    std::vector<VulSpreadTrend> m_latestTrend;
                    bool m_latestTrendHasBeenSet;

                    /**
                     * <p>Solution</p>
                     */
                    std::string m_fixSolution;
                    bool m_fixSolutionHasBeenSet;

                    /**
                     * <p>Reference link</p>
                     */
                    std::string m_refLink;
                    bool m_refLinkHasBeenSet;

                    /**
                     * <p>Vulnerability severity description</p>
                     */
                    std::string m_harmDescription;
                    bool m_harmDescriptionHasBeenSet;

                    /**
                     * <p>Vulnerability Impact product</p>
                     */
                    std::vector<VulVendorProduct> m_affectVendorProduct;
                    bool m_affectVendorProductHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULDETAILINFO_H_
