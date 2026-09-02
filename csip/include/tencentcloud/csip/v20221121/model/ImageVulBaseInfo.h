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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulAffectedComponent.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image vulnerability information
                */
                class ImageVulBaseInfo : public AbstractModel
                {
                public:
                    ImageVulBaseInfo();
                    ~ImageVulBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Affected component information</p>
                     * @return AffectedComponents <p>Affected component information</p>
                     * 
                     */
                    std::vector<VulAffectedComponent> GetAffectedComponents() const;

                    /**
                     * 设置<p>Affected component information</p>
                     * @param _affectedComponents <p>Affected component information</p>
                     * 
                     */
                    void SetAffectedComponents(const std::vector<VulAffectedComponent>& _affectedComponents);

                    /**
                     * 判断参数 AffectedComponents 是否已赋值
                     * @return AffectedComponents 是否已赋值
                     * 
                     */
                    bool AffectedComponentsHasBeenSet() const;

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
                     * 获取<p>Vulnerability CVEID</p>
                     * @return CVEID <p>Vulnerability CVEID</p>
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置<p>Vulnerability CVEID</p>
                     * @param _cVEID <p>Vulnerability CVEID</p>
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
                     * 获取<p>Vulnerability category</p>
                     * @return Category <p>Vulnerability category</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Vulnerability category</p>
                     * @param _category <p>Vulnerability category</p>
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
                     * 获取<p>Vulnerability release time</p>
                     * @return PublishTime <p>Vulnerability release time</p>
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置<p>Vulnerability release time</p>
                     * @param _publishTime <p>Vulnerability release time</p>
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
                     * 获取<p>Vulnerability detection method</p>
                     * @return CheckMethod <p>Vulnerability detection method</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>Vulnerability detection method</p>
                     * @param _checkMethod <p>Vulnerability detection method</p>
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
                     * 获取<p>Whether the defense is supported</p><p>Enumeration value:</p><ul><li>ENABLED: support defense</li><li>NOT_ENABLED: defense not supported</li></ul>
                     * @return DefendStatus <p>Whether the defense is supported</p><p>Enumeration value:</p><ul><li>ENABLED: support defense</li><li>NOT_ENABLED: defense not supported</li></ul>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>Whether the defense is supported</p><p>Enumeration value:</p><ul><li>ENABLED: support defense</li><li>NOT_ENABLED: defense not supported</li></ul>
                     * @param _defendStatus <p>Whether the defense is supported</p><p>Enumeration value:</p><ul><li>ENABLED: support defense</li><li>NOT_ENABLED: defense not supported</li></ul>
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
                     * 获取<p>Whether repair is supported</p>
                     * @return SupportFix <p>Whether repair is supported</p>
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置<p>Whether repair is supported</p>
                     * @param _supportFix <p>Whether repair is supported</p>
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
                     * 获取<p>CVSS score</p>
                     * @return CvssScore <p>CVSS score</p>
                     * 
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 设置<p>CVSS score</p>
                     * @param _cvssScore <p>CVSS score</p>
                     * 
                     */
                    void SetCvssScore(const std::string& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability severity description</p>
                     * @return Remark <p>Vulnerability severity description</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Vulnerability severity description</p>
                     * @param _remark <p>Vulnerability severity description</p>
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
                     * 获取<p>Vulnerability description</p>
                     * @return Summary <p>Vulnerability description</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>Vulnerability description</p>
                     * @param _summary <p>Vulnerability description</p>
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
                     * 获取<p>Severity level</p>
                     * @return CVSSLevel <p>Severity level</p>
                     * 
                     */
                    std::string GetCVSSLevel() const;

                    /**
                     * 设置<p>Severity level</p>
                     * @param _cVSSLevel <p>Severity level</p>
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
                     * 获取<p>Primary impact type</p>
                     * @return VulAffect <p>Primary impact type</p>
                     * 
                     */
                    std::string GetVulAffect() const;

                    /**
                     * 设置<p>Primary impact type</p>
                     * @param _vulAffect <p>Primary impact type</p>
                     * 
                     */
                    void SetVulAffect(const std::string& _vulAffect);

                    /**
                     * 判断参数 VulAffect 是否已赋值
                     * @return VulAffect 是否已赋值
                     * 
                     */
                    bool VulAffectHasBeenSet() const;

                    /**
                     * 获取<p>Existence of exploitation in the wild</p>
                     * @return KVERecord <p>Existence of exploitation in the wild</p>
                     * 
                     */
                    bool GetKVERecord() const;

                    /**
                     * 设置<p>Existence of exploitation in the wild</p>
                     * @param _kVERecord <p>Existence of exploitation in the wild</p>
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
                     * 获取<p>EPSS probability score</p>
                     * @return EPSSScore <p>EPSS probability score</p>
                     * 
                     */
                    double GetEPSSScore() const;

                    /**
                     * 设置<p>EPSS probability score</p>
                     * @param _ePSSScore <p>EPSS probability score</p>
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
                     * 获取<p>Impacted manufacturer</p>
                     * @return AffectVendor <p>Impacted manufacturer</p>
                     * 
                     */
                    std::string GetAffectVendor() const;

                    /**
                     * 设置<p>Impacted manufacturer</p>
                     * @param _affectVendor <p>Impacted manufacturer</p>
                     * 
                     */
                    void SetAffectVendor(const std::string& _affectVendor);

                    /**
                     * 判断参数 AffectVendor 是否已赋值
                     * @return AffectVendor 是否已赋值
                     * 
                     */
                    bool AffectVendorHasBeenSet() const;

                    /**
                     * 获取<p>Impact on the target product</p>
                     * @return AffectProduct <p>Impact on the target product</p>
                     * 
                     */
                    std::string GetAffectProduct() const;

                    /**
                     * 设置<p>Impact on the target product</p>
                     * @param _affectProduct <p>Impact on the target product</p>
                     * 
                     */
                    void SetAffectProduct(const std::string& _affectProduct);

                    /**
                     * 判断参数 AffectProduct 是否已赋值
                     * @return AffectProduct 是否已赋值
                     * 
                     */
                    bool AffectProductHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability principle</p>
                     * @return Mechanism <p>Vulnerability principle</p>
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置<p>Vulnerability principle</p>
                     * @param _mechanism <p>Vulnerability principle</p>
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
                     * 获取<p>Prerequisites for an attack</p>
                     * @return Precondition <p>Prerequisites for an attack</p>
                     * 
                     */
                    std::string GetPrecondition() const;

                    /**
                     * 设置<p>Prerequisites for an attack</p>
                     * @param _precondition <p>Prerequisites for an attack</p>
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
                     * 获取<p>Vulnerability remediation suggestions</p>
                     * @return FixSolution <p>Vulnerability remediation suggestions</p>
                     * 
                     */
                    std::string GetFixSolution() const;

                    /**
                     * 设置<p>Vulnerability remediation suggestions</p>
                     * @param _fixSolution <p>Vulnerability remediation suggestions</p>
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
                     * 获取<p>Vulnerability-related link</p>
                     * @return RefLink <p>Vulnerability-related link</p>
                     * 
                     */
                    std::string GetRefLink() const;

                    /**
                     * 设置<p>Vulnerability-related link</p>
                     * @param _refLink <p>Vulnerability-related link</p>
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
                     * 获取<p>Vulnerability tag</p>
                     * @return Label <p>Vulnerability tag</p>
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置<p>Vulnerability tag</p>
                     * @param _label <p>Vulnerability tag</p>
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability Id</p>
                     * @return PocId <p>Vulnerability Id</p>
                     * 
                     */
                    std::string GetPocId() const;

                    /**
                     * 设置<p>Vulnerability Id</p>
                     * @param _pocId <p>Vulnerability Id</p>
                     * 
                     */
                    void SetPocId(const std::string& _pocId);

                    /**
                     * 判断参数 PocId 是否已赋值
                     * @return PocId 是否已赋值
                     * 
                     */
                    bool PocIdHasBeenSet() const;

                private:

                    /**
                     * <p>Affected component information</p>
                     */
                    std::vector<VulAffectedComponent> m_affectedComponents;
                    bool m_affectedComponentsHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Vulnerability CVEID</p>
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * <p>Vulnerability category</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Vulnerability release time</p>
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>Vulnerability detection method</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>Whether the defense is supported</p><p>Enumeration value:</p><ul><li>ENABLED: support defense</li><li>NOT_ENABLED: defense not supported</li></ul>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>Whether repair is supported</p>
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * <p>CVSS score</p>
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * <p>Vulnerability severity description</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Vulnerability description</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>Severity level</p>
                     */
                    std::string m_cVSSLevel;
                    bool m_cVSSLevelHasBeenSet;

                    /**
                     * <p>Primary impact type</p>
                     */
                    std::string m_vulAffect;
                    bool m_vulAffectHasBeenSet;

                    /**
                     * <p>Existence of exploitation in the wild</p>
                     */
                    bool m_kVERecord;
                    bool m_kVERecordHasBeenSet;

                    /**
                     * <p>EPSS probability score</p>
                     */
                    double m_ePSSScore;
                    bool m_ePSSScoreHasBeenSet;

                    /**
                     * <p>Impacted manufacturer</p>
                     */
                    std::string m_affectVendor;
                    bool m_affectVendorHasBeenSet;

                    /**
                     * <p>Impact on the target product</p>
                     */
                    std::string m_affectProduct;
                    bool m_affectProductHasBeenSet;

                    /**
                     * <p>Vulnerability principle</p>
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * <p>Prerequisites for an attack</p>
                     */
                    std::string m_precondition;
                    bool m_preconditionHasBeenSet;

                    /**
                     * <p>Vulnerability remediation suggestions</p>
                     */
                    std::string m_fixSolution;
                    bool m_fixSolutionHasBeenSet;

                    /**
                     * <p>Vulnerability-related link</p>
                     */
                    std::string m_refLink;
                    bool m_refLinkHasBeenSet;

                    /**
                     * <p>Vulnerability tag</p>
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Vulnerability Id</p>
                     */
                    std::string m_pocId;
                    bool m_pocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVULBASEINFO_H_
