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
#include <tencentcloud/tcss/v20201101/model/ImageVulLayerInfo.h>


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
                     * @return CVEID Vulnerability ID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _cVEID Vulnerability ID
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
                     * 获取viewpoint validation program ID
                     * @return POCID viewpoint validation program ID
                     * 
                     */
                    std::string GetPOCID() const;

                    /**
                     * 设置viewpoint validation program ID
                     * @param _pOCID viewpoint validation program ID
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
                     * 获取Component Information
                     * @return Components Component Information
                     * 
                     */
                    std::vector<ComponentsInfo> GetComponents() const;

                    /**
                     * 设置Component Information
                     * @param _components Component Information
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
                     * 获取category
                     * @return Category category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置category
                     * @param _category category
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
                     * @return CategoryType Category 2
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Category 2
                     * @param _categoryType Category 2
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
                     * @return Level Risk level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
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
                     * @return Des Description
                     * 
                     */
                    std::string GetDes() const;

                    /**
                     * 设置Description
                     * @param _des Description
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
                     * @return OfficialSolution Solution
                     * 
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置Solution
                     * @param _officialSolution Solution
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
                     * 获取Refer
                     * @return Reference Refer
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Refer
                     * @param _reference Refer
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
                     * 获取defense solution
                     * @return DefenseSolution defense solution
                     * 
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置defense solution
                     * @param _defenseSolution defense solution
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
                     * @return SubmitTime Submission time
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Submission time
                     * @param _submitTime Submission time
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
                     * 获取CVSS Score
                     * @return CvssScore CVSS Score
                     * 
                     */
                    std::string GetCvssScore() const;

                    /**
                     * 设置CVSS Score
                     * @param _cvssScore CVSS Score
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
                     * 获取CVSS information.
                     * @return CvssVector CVSS information.
                     * 
                     */
                    std::string GetCvssVector() const;

                    /**
                     * 设置CVSS information.
                     * @param _cvssVector CVSS information.
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
                     * 获取Whether repair is suggested.
                     * @return IsSuggest Whether repair is suggested.
                     * 
                     */
                    std::string GetIsSuggest() const;

                    /**
                     * 设置Whether repair is suggested.
                     * @param _isSuggest Whether repair is suggested.
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
                     * 获取Repair Version Number
                     * @return FixedVersions Repair Version Number
                     * 
                     */
                    std::string GetFixedVersions() const;

                    /**
                     * 设置Repair Version Number
                     * @param _fixedVersions Repair Version Number
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
                     * 获取Vulnerability Tag: "CanBeFixed", "DynamicLevelPoc", and "DynamicLevelExp"
                     * @return Tag Vulnerability Tag: "CanBeFixed", "DynamicLevelPoc", and "DynamicLevelExp"
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Vulnerability Tag: "CanBeFixed", "DynamicLevelPoc", and "DynamicLevelExp"
                     * @param _tag Vulnerability Tag: "CanBeFixed", "DynamicLevelPoc", and "DynamicLevelExp"
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
                     * 获取Component name.
                     * @return Component Component name.
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component name.
                     * @param _component Component name.
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
                     * @return Version Component version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version
                     * @param _version Component version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Attack Heat 0-3
                     * @return AttackLevel Attack Heat 0-3
                     * 
                     */
                    int64_t GetAttackLevel() const;

                    /**
                     * 设置Attack Heat 0-3
                     * @param _attackLevel Attack Heat 0-3
                     * 
                     */
                    void SetAttackLevel(const int64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取Image Layer Information List
                     * @return LayerInfos Image Layer Information List
                     * 
                     */
                    std::vector<ImageVulLayerInfo> GetLayerInfos() const;

                    /**
                     * 设置Image Layer Information List
                     * @param _layerInfos Image Layer Information List
                     * 
                     */
                    void SetLayerInfos(const std::vector<ImageVulLayerInfo>& _layerInfos);

                    /**
                     * 判断参数 LayerInfos 是否已赋值
                     * @return LayerInfos 是否已赋值
                     * 
                     */
                    bool LayerInfosHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * viewpoint validation program ID
                     */
                    std::string m_pOCID;
                    bool m_pOCIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Component Information
                     */
                    std::vector<ComponentsInfo> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Category 2
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_des;
                    bool m_desHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_officialSolution;
                    bool m_officialSolutionHasBeenSet;

                    /**
                     * Refer
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * defense solution
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * Submission time
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * CVSS Score
                     */
                    std::string m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * CVSS information.
                     */
                    std::string m_cvssVector;
                    bool m_cvssVectorHasBeenSet;

                    /**
                     * Whether repair is suggested.
                     */
                    std::string m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * Repair Version Number
                     */
                    std::string m_fixedVersions;
                    bool m_fixedVersionsHasBeenSet;

                    /**
                     * Vulnerability Tag: "CanBeFixed", "DynamicLevelPoc", and "DynamicLevelExp"
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Component name.
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Component version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Attack Heat 0-3
                     */
                    int64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * Image Layer Information List
                     */
                    std::vector<ImageVulLayerInfo> m_layerInfos;
                    bool m_layerInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVUL_H_
