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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_

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
                * Vulnerability details
                */
                class BugInfoDetail : public AbstractModel
                {
                public:
                    BugInfoDetail();
                    ~BugInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return Id Vulnerability ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _id Vulnerability ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取PocId Corresponding to Vulnerability
                     * @return PatchId PocId Corresponding to Vulnerability
                     * 
                     */
                    std::string GetPatchId() const;

                    /**
                     * 设置PocId Corresponding to Vulnerability
                     * @param _patchId PocId Corresponding to Vulnerability
                     * 
                     */
                    void SetPatchId(const std::string& _patchId);

                    /**
                     * 判断参数 PatchId 是否已赋值
                     * @return PatchId 是否已赋值
                     * 
                     */
                    bool PatchIdHasBeenSet() const;

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
                     * 获取Vulnerability Severity: High, Middle, Low, Info.
                     * @return Level Vulnerability Severity: High, Middle, Low, Info.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability Severity: High, Middle, Low, Info.
                     * @param _level Vulnerability Severity: High, Middle, Low, Info.
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
                     * 获取CVSS Score
                     * @return CVSSScore CVSS Score
                     * 
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置CVSS Score
                     * @param _cVSSScore CVSS Score
                     * 
                     */
                    void SetCVSSScore(const std::string& _cVSSScore);

                    /**
                     * 判断参数 CVSSScore 是否已赋值
                     * @return CVSSScore 是否已赋值
                     * 
                     */
                    bool CVSSScoreHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CVEId CVE ID
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE ID
                     * @param _cVEId CVE ID
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability tag
                     * @return Tag Vulnerability tag
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Vulnerability tag
                     * @param _tag Vulnerability tag
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Vulnerability Type. 1: Web Application; 2: System Component Vulnerabilities; 3: Configuration Risk.
                     * @return VULCategory Vulnerability Type. 1: Web Application; 2: System Component Vulnerabilities; 3: Configuration Risk.
                     * 
                     */
                    uint64_t GetVULCategory() const;

                    /**
                     * 设置Vulnerability Type. 1: Web Application; 2: System Component Vulnerabilities; 3: Configuration Risk.
                     * @param _vULCategory Vulnerability Type. 1: Web Application; 2: System Component Vulnerabilities; 3: Configuration Risk.
                     * 
                     */
                    void SetVULCategory(const uint64_t& _vULCategory);

                    /**
                     * 判断参数 VULCategory 是否已赋值
                     * @return VULCategory 是否已赋值
                     * 
                     */
                    bool VULCategoryHasBeenSet() const;

                    /**
                     * 获取Vulnerability Affected System
                     * @return ImpactOs Vulnerability Affected System
                     * 
                     */
                    std::string GetImpactOs() const;

                    /**
                     * 设置Vulnerability Affected System
                     * @param _impactOs Vulnerability Affected System
                     * 
                     */
                    void SetImpactOs(const std::string& _impactOs);

                    /**
                     * 判断参数 ImpactOs 是否已赋值
                     * @return ImpactOs 是否已赋值
                     * 
                     */
                    bool ImpactOsHasBeenSet() const;

                    /**
                     * 获取Affected component
                     * @return ImpactCOMPENT Affected component
                     * 
                     */
                    std::string GetImpactCOMPENT() const;

                    /**
                     * 设置Affected component
                     * @param _impactCOMPENT Affected component
                     * 
                     */
                    void SetImpactCOMPENT(const std::string& _impactCOMPENT);

                    /**
                     * 判断参数 ImpactCOMPENT 是否已赋值
                     * @return ImpactCOMPENT 是否已赋值
                     * 
                     */
                    bool ImpactCOMPENTHasBeenSet() const;

                    /**
                     * 获取Vulnerability Affected Version
                     * @return ImpactVersion Vulnerability Affected Version
                     * 
                     */
                    std::string GetImpactVersion() const;

                    /**
                     * 设置Vulnerability Affected Version
                     * @param _impactVersion Vulnerability Affected Version
                     * 
                     */
                    void SetImpactVersion(const std::string& _impactVersion);

                    /**
                     * 判断参数 ImpactVersion 是否已赋值
                     * @return ImpactVersion 是否已赋值
                     * 
                     */
                    bool ImpactVersionHasBeenSet() const;

                    /**
                     * 获取Link
                     * @return Reference Link
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Link
                     * @param _reference Link
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
                     * 获取Vulnerability description
                     * @return VULDescribe Vulnerability description
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置Vulnerability description
                     * @param _vULDescribe Vulnerability description
                     * 
                     */
                    void SetVULDescribe(const std::string& _vULDescribe);

                    /**
                     * 判断参数 VULDescribe 是否已赋值
                     * @return VULDescribe 是否已赋值
                     * 
                     */
                    bool VULDescribeHasBeenSet() const;

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
                     * 获取Product Support Status, returned in real time.
                     * @return ProSupport Product Support Status, returned in real time.
                     * 
                     */
                    uint64_t GetProSupport() const;

                    /**
                     * 设置Product Support Status, returned in real time.
                     * @param _proSupport Product Support Status, returned in real time.
                     * 
                     */
                    void SetProSupport(const uint64_t& _proSupport);

                    /**
                     * 判断参数 ProSupport 是否已赋值
                     * @return ProSupport 是否已赋值
                     * 
                     */
                    bool ProSupportHasBeenSet() const;

                    /**
                     * 获取Published or Not. 0 for No, 1 for Yes.
                     * @return IsPublish Published or Not. 0 for No, 1 for Yes.
                     * 
                     */
                    uint64_t GetIsPublish() const;

                    /**
                     * 设置Published or Not. 0 for No, 1 for Yes.
                     * @param _isPublish Published or Not. 0 for No, 1 for Yes.
                     * 
                     */
                    void SetIsPublish(const uint64_t& _isPublish);

                    /**
                     * 判断参数 IsPublish 是否已赋值
                     * @return IsPublish 是否已赋值
                     * 
                     */
                    bool IsPublishHasBeenSet() const;

                    /**
                     * 获取Release time.
                     * @return ReleaseTime Release time.
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Release time.
                     * @param _releaseTime Release time.
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability Subcategory
                     * @return SubCategory Vulnerability Subcategory
                     * 
                     */
                    std::string GetSubCategory() const;

                    /**
                     * 设置Vulnerability Subcategory
                     * @param _subCategory Vulnerability Subcategory
                     * 
                     */
                    void SetSubCategory(const std::string& _subCategory);

                    /**
                     * 判断参数 SubCategory 是否已赋值
                     * @return SubCategory 是否已赋值
                     * 
                     */
                    bool SubCategoryHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * PocId Corresponding to Vulnerability
                     */
                    std::string m_patchId;
                    bool m_patchIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * Vulnerability Severity: High, Middle, Low, Info.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVSS Score
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * Vulnerability tag
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Vulnerability Type. 1: Web Application; 2: System Component Vulnerabilities; 3: Configuration Risk.
                     */
                    uint64_t m_vULCategory;
                    bool m_vULCategoryHasBeenSet;

                    /**
                     * Vulnerability Affected System
                     */
                    std::string m_impactOs;
                    bool m_impactOsHasBeenSet;

                    /**
                     * Affected component
                     */
                    std::string m_impactCOMPENT;
                    bool m_impactCOMPENTHasBeenSet;

                    /**
                     * Vulnerability Affected Version
                     */
                    std::string m_impactVersion;
                    bool m_impactVersionHasBeenSet;

                    /**
                     * Link
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Product Support Status, returned in real time.
                     */
                    uint64_t m_proSupport;
                    bool m_proSupportHasBeenSet;

                    /**
                     * Published or Not. 0 for No, 1 for Yes.
                     */
                    uint64_t m_isPublish;
                    bool m_isPublishHasBeenSet;

                    /**
                     * Release time.
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Vulnerability Subcategory
                     */
                    std::string m_subCategory;
                    bool m_subCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_
