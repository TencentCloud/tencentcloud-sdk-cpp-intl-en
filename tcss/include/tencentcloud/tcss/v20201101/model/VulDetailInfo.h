/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CategoryType Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _categoryType Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability severity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Vulnerability severity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability severity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Vulnerability severity
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubmitTime Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submitTime Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceStatus Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefenceStatus() const;

                    /**
                     * 设置Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceStatus Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceScope Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefenceScope() const;

                    /**
                     * 设置Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceScope Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceHostCount Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefenceHostCount() const;

                    /**
                     * 设置Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceHostCount Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefendedCount Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefendedCount() const;

                    /**
                     * 设置Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defendedCount Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is scanned. Valid values: `NOT_SCAN` (not scanned); `SCANNED` (scanned).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Whether it is scanned. Valid values: `NOT_SCAN` (not scanned); `SCANNED` (scanned).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Whether it is scanned. Valid values: `NOT_SCAN` (not scanned); `SCANNED` (scanned).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanStatus Whether it is scanned. Valid values: `NOT_SCAN` (not scanned); `SCANNED` (scanned).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * Vulnerability severity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defenceStatus;
                    bool m_defenceStatusHasBeenSet;

                    /**
                     * Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defenceScope;
                    bool m_defenceScopeHasBeenSet;

                    /**
                     * Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defenceHostCount;
                    bool m_defenceHostCountHasBeenSet;

                    /**
                     * Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                    /**
                     * Whether it is scanned. Valid values: `NOT_SCAN` (not scanned); `SCANNED` (scanned).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDETAILINFO_H_
