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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Vulnerability details
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVE No.
                     * @return CVEID CVE No.
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE No.
                     * @param _cVEID CVE No.
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
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _name Vulnerability name
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
                     * 获取vulnerability tag
                     * @return Tags vulnerability tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置vulnerability tag
                     * @param _tags vulnerability tag
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Vulnerability type
                     * @return CategoryType Vulnerability type
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Vulnerability type
                     * @param _categoryType Vulnerability type
                     * 
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取Vulnerability threat level
                     * @return Level Vulnerability threat level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability threat level
                     * @param _level Vulnerability threat level
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
                     * 获取Vulnerability disclosure time
                     * @return SubmitTime Vulnerability disclosure time
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Vulnerability disclosure time
                     * @param _submitTime Vulnerability disclosure time
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability description
                     * @return Description Vulnerability description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vulnerability description
                     * @param _description Vulnerability description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CVSS V3 description
                     * @return CVSSV3Desc CVSS V3 description
                     * 
                     */
                    std::string GetCVSSV3Desc() const;

                    /**
                     * 设置CVSS V3 description
                     * @param _cVSSV3Desc CVSS V3 description
                     * 
                     */
                    void SetCVSSV3Desc(const std::string& _cVSSV3Desc);

                    /**
                     * 判断参数 CVSSV3Desc 是否已赋值
                     * @return CVSSV3Desc 是否已赋值
                     * 
                     */
                    bool CVSSV3DescHasBeenSet() const;

                    /**
                     * 获取Vulnerability fix suggestion
                     * @return OfficialSolution Vulnerability fix suggestion
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置Vulnerability fix suggestion
                     * @param _officialSolution Vulnerability fix suggestion
                     * 
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     * 
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取Mitigation measure
                     * @return DefenseSolution Mitigation measure
                     * 
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置Mitigation measure
                     * @param _defenseSolution Mitigation measure
                     * 
                     */
                    void SetDefenseSolution(const std::string& _defenseSolution);

                    /**
                     * 判断参数 DefenseSolution 是否已赋值
                     * @return DefenseSolution 是否已赋值
                     * 
                     */
                    bool DefenseSolutionHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return Reference Reference link
                     * 
                     */
                    std::vector<std::string> GetReference() const;

                    /**
                     * 设置Reference link
                     * @param _reference Reference link
                     * 
                     */
                    void SetReference(const std::vector<std::string>& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取CVSS V3 score
                     * @return CVSSV3Score CVSS V3 score
                     * 
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置CVSS V3 score
                     * @param _cVSSV3Score CVSS V3 score
                     * 
                     */
                    void SetCVSSV3Score(const double& _cVSSV3Score);

                    /**
                     * 判断参数 CVSSV3Score 是否已赋值
                     * @return CVSSV3Score 是否已赋值
                     * 
                     */
                    bool CVSSV3ScoreHasBeenSet() const;

                    /**
                     * 获取List of components affected by vulnerabilities
                     * @return ComponentList List of components affected by vulnerabilities
                     * 
                     */
                    std::vector<VulAffectedComponentInfo> GetComponentList() const;

                    /**
                     * 设置List of components affected by vulnerabilities
                     * @param _componentList List of components affected by vulnerabilities
                     * 
                     */
                    void SetComponentList(const std::vector<VulAffectedComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取Number of affected local images
                     * @return LocalImageCount Number of affected local images
                     * 
                     */
                    int64_t GetLocalImageCount() const;

                    /**
                     * 设置Number of affected local images
                     * @param _localImageCount Number of affected local images
                     * 
                     */
                    void SetLocalImageCount(const int64_t& _localImageCount);

                    /**
                     * 判断参数 LocalImageCount 是否已赋值
                     * @return LocalImageCount 是否已赋值
                     * 
                     */
                    bool LocalImageCountHasBeenSet() const;

                    /**
                     * 获取Number of affected containers
                     * @return ContainerCount Number of affected containers
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置Number of affected containers
                     * @param _containerCount Number of affected containers
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取Number of affected repository images
                     * @return RegistryImageCount Number of affected repository images
                     * 
                     */
                    int64_t GetRegistryImageCount() const;

                    /**
                     * 设置Number of affected repository images
                     * @param _registryImageCount Number of affected repository images
                     * 
                     */
                    void SetRegistryImageCount(const int64_t& _registryImageCount);

                    /**
                     * 判断参数 RegistryImageCount 是否已赋值
                     * @return RegistryImageCount 是否已赋值
                     * 
                     */
                    bool RegistryImageCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability sub-category
                     * @return Category Vulnerability sub-category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Vulnerability sub-category
                     * @param _category Vulnerability sub-category
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
                     * 获取Number of affected local images on the latest version
                     * @return LocalNewestImageCount Number of affected local images on the latest version
                     * 
                     */
                    int64_t GetLocalNewestImageCount() const;

                    /**
                     * 设置Number of affected local images on the latest version
                     * @param _localNewestImageCount Number of affected local images on the latest version
                     * 
                     */
                    void SetLocalNewestImageCount(const int64_t& _localNewestImageCount);

                    /**
                     * 判断参数 LocalNewestImageCount 是否已赋值
                     * @return LocalNewestImageCount 是否已赋值
                     * 
                     */
                    bool LocalNewestImageCountHasBeenSet() const;

                    /**
                     * 获取Number of affected repository images on the latest version
                     * @return RegistryNewestImageCount Number of affected repository images on the latest version
                     * 
                     */
                    int64_t GetRegistryNewestImageCount() const;

                    /**
                     * 设置Number of affected repository images on the latest version
                     * @param _registryNewestImageCount Number of affected repository images on the latest version
                     * 
                     */
                    void SetRegistryNewestImageCount(const int64_t& _registryNewestImageCount);

                    /**
                     * 判断参数 RegistryNewestImageCount 是否已赋值
                     * @return RegistryNewestImageCount 是否已赋值
                     * 
                     */
                    bool RegistryNewestImageCountHasBeenSet() const;

                    /**
                     * 获取POC ID
                     * @return PocID POC ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置POC ID
                     * @param _pocID POC ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * @return DefenceStatus Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * 
                     */
                    std::string GetDefenceStatus() const;

                    /**
                     * 设置Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * @param _defenceStatus Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * 
                     */
                    void SetDefenceStatus(const std::string& _defenceStatus);

                    /**
                     * 判断参数 DefenceStatus 是否已赋值
                     * @return DefenceStatus 是否已赋值
                     * 
                     */
                    bool DefenceStatusHasBeenSet() const;

                    /**
                     * 获取Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * @return DefenceScope Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * 
                     */
                    std::string GetDefenceScope() const;

                    /**
                     * 设置Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * @param _defenceScope Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * 
                     */
                    void SetDefenceScope(const std::string& _defenceScope);

                    /**
                     * 判断参数 DefenceScope 是否已赋值
                     * @return DefenceScope 是否已赋值
                     * 
                     */
                    bool DefenceScopeHasBeenSet() const;

                    /**
                     * 获取Number of Hosts Defended Against Vulnerabilities
                     * @return DefenceHostCount Number of Hosts Defended Against Vulnerabilities
                     * 
                     */
                    int64_t GetDefenceHostCount() const;

                    /**
                     * 设置Number of Hosts Defended Against Vulnerabilities
                     * @param _defenceHostCount Number of Hosts Defended Against Vulnerabilities
                     * 
                     */
                    void SetDefenceHostCount(const int64_t& _defenceHostCount);

                    /**
                     * 判断参数 DefenceHostCount 是否已赋值
                     * @return DefenceHostCount 是否已赋值
                     * 
                     */
                    bool DefenceHostCountHasBeenSet() const;

                    /**
                     * 获取Number of Attacks Defended
                     * @return DefendedCount Number of Attacks Defended
                     * 
                     */
                    int64_t GetDefendedCount() const;

                    /**
                     * 设置Number of Attacks Defended
                     * @param _defendedCount Number of Attacks Defended
                     * 
                     */
                    void SetDefendedCount(const int64_t& _defendedCount);

                    /**
                     * 判断参数 DefendedCount 是否已赋值
                     * @return DefendedCount 是否已赋值
                     * 
                     */
                    bool DefendedCountHasBeenSet() const;

                    /**
                     * 获取Scanned. NOT_SCAN: Not Scanned; SCANNED: Scanned
                     * @return ScanStatus Scanned. NOT_SCAN: Not Scanned; SCANNED: Scanned
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Scanned. NOT_SCAN: Not Scanned; SCANNED: Scanned
                     * @param _scanStatus Scanned. NOT_SCAN: Not Scanned; SCANNED: Scanned
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                private:

                    /**
                     * CVE No.
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * vulnerability tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Vulnerability type
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * Vulnerability threat level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability disclosure time
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CVSS V3 description
                     */
                    std::string m_cVSSV3Desc;
                    bool m_cVSSV3DescHasBeenSet;

                    /**
                     * Vulnerability fix suggestion
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * Mitigation measure
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::vector<std::string> m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS V3 score
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * List of components affected by vulnerabilities
                     */
                    std::vector<VulAffectedComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * Number of affected local images
                     */
                    int64_t m_localImageCount;
                    bool m_localImageCountHasBeenSet;

                    /**
                     * Number of affected containers
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * Number of affected repository images
                     */
                    int64_t m_registryImageCount;
                    bool m_registryImageCountHasBeenSet;

                    /**
                     * Vulnerability sub-category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Number of affected local images on the latest version
                     */
                    int64_t m_localNewestImageCount;
                    bool m_localNewestImageCountHasBeenSet;

                    /**
                     * Number of affected repository images on the latest version
                     */
                    int64_t m_registryNewestImageCount;
                    bool m_registryNewestImageCountHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     */
                    std::string m_defenceStatus;
                    bool m_defenceStatusHasBeenSet;

                    /**
                     * Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     */
                    std::string m_defenceScope;
                    bool m_defenceScopeHasBeenSet;

                    /**
                     * Number of Hosts Defended Against Vulnerabilities
                     */
                    int64_t m_defenceHostCount;
                    bool m_defenceHostCountHasBeenSet;

                    /**
                     * Number of Attacks Defended
                     */
                    int64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                    /**
                     * Scanned. NOT_SCAN: Not Scanned; SCANNED: Scanned
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_
