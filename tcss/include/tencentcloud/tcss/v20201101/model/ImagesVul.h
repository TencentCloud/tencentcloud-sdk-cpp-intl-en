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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Vulnerability in the image
                */
                class ImagesVul : public AbstractModel
                {
                public:
                    ImagesVul();
                    ~ImagesVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return CVEID Vulnerability ID
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param CVEID Vulnerability ID
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param Name Vulnerability name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Component
                     * @return Component Component
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component
                     * @param Component Component
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return Version Version
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
                     * @param Version Version
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Category
                     * @return Category Category
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Category
                     * @param Category Category
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Category 2
                     * @return CategoryType Category 2
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Category 2
                     * @param CategoryType Category 2
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Level Risk level
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param Level Risk level
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Des Description
                     */
                    std::string GetDes() const;

                    /**
                     * 设置Description
                     * @param Des Description
                     */
                    void SetDes(const std::string& _des);

                    /**
                     * 判断参数 Des 是否已赋值
                     * @return Des 是否已赋值
                     */
                    bool DesHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return OfficialSolution Solution
                     */
                    std::string GetOfficialSolution() const;

                    /**
                     * 设置Solution
                     * @param OfficialSolution Solution
                     */
                    void SetOfficialSolution(const std::string& _officialSolution);

                    /**
                     * 判断参数 OfficialSolution 是否已赋值
                     * @return OfficialSolution 是否已赋值
                     */
                    bool OfficialSolutionHasBeenSet() const;

                    /**
                     * 获取Reference
                     * @return Reference Reference
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference
                     * @param Reference Reference
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取Defense solution
                     * @return DefenseSolution Defense solution
                     */
                    std::string GetDefenseSolution() const;

                    /**
                     * 设置Defense solution
                     * @param DefenseSolution Defense solution
                     */
                    void SetDefenseSolution(const std::string& _defenseSolution);

                    /**
                     * 判断参数 DefenseSolution 是否已赋值
                     * @return DefenseSolution 是否已赋值
                     */
                    bool DefenseSolutionHasBeenSet() const;

                    /**
                     * 获取Submission time
                     * @return SubmitTime Submission time
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Submission time
                     * @param SubmitTime Submission time
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取CVSS V3 score
                     * @return CVSSV3Score CVSS V3 score
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置CVSS V3 score
                     * @param CVSSV3Score CVSS V3 score
                     */
                    void SetCVSSV3Score(const double& _cVSSV3Score);

                    /**
                     * 判断参数 CVSSV3Score 是否已赋值
                     * @return CVSSV3Score 是否已赋值
                     */
                    bool CVSSV3ScoreHasBeenSet() const;

                    /**
                     * 获取CVSS V3 description
                     * @return CVSSV3Desc CVSS V3 description
                     */
                    std::string GetCVSSV3Desc() const;

                    /**
                     * 设置CVSS V3 description
                     * @param CVSSV3Desc CVSS V3 description
                     */
                    void SetCVSSV3Desc(const std::string& _cVSSV3Desc);

                    /**
                     * 判断参数 CVSSV3Desc 是否已赋值
                     * @return CVSSV3Desc 是否已赋值
                     */
                    bool CVSSV3DescHasBeenSet() const;

                    /**
                     * 获取Whether it is of high priority. Valid values: `true` (yes); `false` (no).
                     * @return IsSuggest Whether it is of high priority. Valid values: `true` (yes); `false` (no).
                     */
                    bool GetIsSuggest() const;

                    /**
                     * 设置Whether it is of high priority. Valid values: `true` (yes); `false` (no).
                     * @param IsSuggest Whether it is of high priority. Valid values: `true` (yes); `false` (no).
                     */
                    void SetIsSuggest(const bool& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixedVersions Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFixedVersions() const;

                    /**
                     * 设置Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FixedVersions Number of the fixed version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFixedVersions(const std::string& _fixedVersions);

                    /**
                     * 判断参数 FixedVersions 是否已赋值
                     * @return FixedVersions 是否已赋值
                     */
                    bool FixedVersionsHasBeenSet() const;

                    /**
                     * 获取Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Tag Vulnerability tag. Valid values: `CanBeFixed`, `DynamicLevelPoc`, `DynamicLevelExp`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Component
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Category
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
                    uint64_t m_level;
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
                     * Reference
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Defense solution
                     */
                    std::string m_defenseSolution;
                    bool m_defenseSolutionHasBeenSet;

                    /**
                     * Submission time
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * CVSS V3 score
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * CVSS V3 description
                     */
                    std::string m_cVSSV3Desc;
                    bool m_cVSSV3DescHasBeenSet;

                    /**
                     * Whether it is of high priority. Valid values: `true` (yes); `false` (no).
                     */
                    bool m_isSuggest;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESVUL_H_
