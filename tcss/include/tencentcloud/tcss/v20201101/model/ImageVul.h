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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComponentsInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of a vulnerability in the image
                */
                class ImageVul : public AbstractModel
                {
                public:
                    ImageVul();
                    ~ImageVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVEID Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVEID Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取POC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return POCID POC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPOCID() const;

                    /**
                     * 设置POC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pOCID POC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPOCID(const std::string& _pOCID);

                    /**
                     * 判断参数 POCID 是否已赋值
                     * @return POCID 是否已赋值
                     * 
                     */
                    bool POCIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Components Component information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ComponentsInfo> GetComponents() const;

                    /**
                     * 设置Component information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _components Component information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponents(const std::vector<ComponentsInfo>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取Category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Category Category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _category Category
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Category 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CategoryType Category 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Category 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _categoryType Category 2
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
                     * 获取Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Risk level
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
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Des Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDes() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _des Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDes(const std::string& _des);

                    /**
                     * 判断参数 Des 是否已赋值
                     * @return Des 是否已赋值
                     * 
                     */
                    bool DesHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfficialSolution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _officialSolution Solution
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Reference
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reference Reference
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reference Reference
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取Defense solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenseSolution Defense solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置Defense solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenseSolution Defense solution
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubmitTime Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submitTime Submission time
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
                     * 获取CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvssScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 设置CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvssScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CVSS information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvssVector CVSS information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvssVector() const;

                    /**
                     * 设置CVSS information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvssVector CVSS information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCvssVector(const std::string& _cvssVector);

                    /**
                     * 判断参数 CvssVector 是否已赋值
                     * @return CvssVector 是否已赋值
                     * 
                     */
                    bool CvssVectorHasBeenSet() const;

                    /**
                     * 获取Whether fix is suggested
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSuggest Whether fix is suggested
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsSuggest() const;

                    /**
                     * 设置Whether fix is suggested
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSuggest Whether fix is suggested
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsSuggest(const std::string& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixedVersions Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFixedVersions() const;

                    /**
                     * 设置Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixedVersions Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixedVersions(const std::string& _fixedVersions);

                    /**
                     * 判断参数 FixedVersions 是否已赋值
                     * @return FixedVersions 是否已赋值
                     * 
                     */
                    bool FixedVersionsHasBeenSet() const;

                    /**
                     * 获取Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Component Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _component Component name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * POC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pOCID;
                    bool m_pOCIDHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Component information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ComponentsInfo> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * Category
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Category 2
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_des;
                    bool m_desHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * Reference
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Defense solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * Submission time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * CVSS information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvssVector;
                    bool m_cvssVectorHasBeenSet;

                    /**
                     * Whether fix is suggested
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fixedVersions;
                    bool m_fixedVersionsHasBeenSet;

                    /**
                     * Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Component version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_
