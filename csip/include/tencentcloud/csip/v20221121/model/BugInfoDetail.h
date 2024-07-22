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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取POC ID of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PatchId POC ID of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPatchId() const;

                    /**
                     * 设置POC ID of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _patchId POC ID of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VULName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vULName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability severity: `high`, `middle`, `low`, `info`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Vulnerability severity: `high`, `middle`, `low`, `info`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability severity: `high`, `middle`, `low`, `info`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Vulnerability severity: `high`, `middle`, `low`, `info`
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
                     * 获取CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVSSScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVSSScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CVE number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVEId CVE number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVEId CVE number
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability category: `1`: Web application vulnerabilities, `2`: System component vulnerabilities, `3`: Configuration risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VULCategory Vulnerability category: `1`: Web application vulnerabilities, `2`: System component vulnerabilities, `3`: Configuration risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVULCategory() const;

                    /**
                     * 设置Vulnerability category: `1`: Web application vulnerabilities, `2`: System component vulnerabilities, `3`: Configuration risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vULCategory Vulnerability category: `1`: Web application vulnerabilities, `2`: System component vulnerabilities, `3`: Configuration risks
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operating systems affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImpactOs Operating systems affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImpactOs() const;

                    /**
                     * 设置Operating systems affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _impactOs Operating systems affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Components affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImpactCOMPENT Components affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImpactCOMPENT() const;

                    /**
                     * 设置Components affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _impactCOMPENT Components affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Versions affected by the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImpactVersion Versions affected by the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImpactVersion() const;

                    /**
                     * 设置Versions affected by the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _impactVersion Versions affected by the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Reference information of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reference Reference information of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference information of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reference Reference information of the vulnerability
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
                     * 获取Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VULDescribe Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vULDescribe Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fix Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fix Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Product support status. The real-time status is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProSupport Product support status. The real-time status is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProSupport() const;

                    /**
                     * 设置Product support status. The real-time status is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proSupport Product support status. The real-time status is returned.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specify whether the vulnerability is published as an emergency vulnerability. `1`: Published as an emergency vulnerability; `0`: Not an emergency vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPublish Specify whether the vulnerability is published as an emergency vulnerability. `1`: Published as an emergency vulnerability; `0`: Not an emergency vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsPublish() const;

                    /**
                     * 设置Specify whether the vulnerability is published as an emergency vulnerability. `1`: Published as an emergency vulnerability; `0`: Not an emergency vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPublish Specify whether the vulnerability is published as an emergency vulnerability. `1`: Published as an emergency vulnerability; `0`: Not an emergency vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Disclosure time of the vulnerability. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReleaseTime Disclosure time of the vulnerability. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Disclosure time of the vulnerability. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _releaseTime Disclosure time of the vulnerability. 
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The time when the vulnerability is added to the vulnerability database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The time when the vulnerability is added to the vulnerability database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the vulnerability is added to the vulnerability database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The time when the vulnerability is added to the vulnerability database.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The last update time of the vulnerability in the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The last update time of the vulnerability in the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last update time of the vulnerability in the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime The last update time of the vulnerability in the database
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Sub-category of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubCategory Sub-category of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubCategory() const;

                    /**
                     * 设置Sub-category of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subCategory Sub-category of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * POC ID of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_patchId;
                    bool m_patchIdHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * Vulnerability severity: `high`, `middle`, `low`, `info`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * CVE number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Vulnerability category: `1`: Web application vulnerabilities, `2`: System component vulnerabilities, `3`: Configuration risks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vULCategory;
                    bool m_vULCategoryHasBeenSet;

                    /**
                     * Operating systems affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_impactOs;
                    bool m_impactOsHasBeenSet;

                    /**
                     * Components affected by the vulnerability 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_impactCOMPENT;
                    bool m_impactCOMPENTHasBeenSet;

                    /**
                     * Versions affected by the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_impactVersion;
                    bool m_impactVersionHasBeenSet;

                    /**
                     * Reference information of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Product support status. The real-time status is returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_proSupport;
                    bool m_proSupportHasBeenSet;

                    /**
                     * Specify whether the vulnerability is published as an emergency vulnerability. `1`: Published as an emergency vulnerability; `0`: Not an emergency vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isPublish;
                    bool m_isPublishHasBeenSet;

                    /**
                     * Disclosure time of the vulnerability. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * The time when the vulnerability is added to the vulnerability database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last update time of the vulnerability in the database
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Sub-category of the vulnerability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subCategory;
                    bool m_subCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_
