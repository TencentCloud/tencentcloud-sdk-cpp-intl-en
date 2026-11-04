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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillClassification.h>
#include <tencentcloud/adp/v20260520/model/SkillVersion.h>
#include <tencentcloud/adp/v20260520/model/SkillProfile.h>
#include <tencentcloud/adp/v20260520/model/SkillNotice.h>
#include <tencentcloud/adp/v20260520/model/SkillShare.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Skill summary in the SkillSummary list.
                */
                class SkillSummary : public AbstractModel
                {
                public:
                    SkillSummary();
                    ~SkillSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Classification information
                     * @return ClassificationInfo Classification information
                     * 
                     */
                    SkillClassification GetClassificationInfo() const;

                    /**
                     * 设置Classification information
                     * @param _classificationInfo Classification information
                     * 
                     */
                    void SetClassificationInfo(const SkillClassification& _classificationInfo);

                    /**
                     * 判断参数 ClassificationInfo 是否已赋值
                     * @return ClassificationInfo 是否已赋值
                     * 
                     */
                    bool ClassificationInfoHasBeenSet() const;

                    /**
                     * 获取Current version information
                     * @return CurrentVersionInfo Current version information
                     * 
                     */
                    SkillVersion GetCurrentVersionInfo() const;

                    /**
                     * 设置Current version information
                     * @param _currentVersionInfo Current version information
                     * 
                     */
                    void SetCurrentVersionInfo(const SkillVersion& _currentVersionInfo);

                    /**
                     * 判断参数 CurrentVersionInfo 是否已赋值
                     * @return CurrentVersionInfo 是否已赋值
                     * 
                     */
                    bool CurrentVersionInfoHasBeenSet() const;

                    /**
                     * 获取Whether the current user collects it
                     * @return IsFavorite Whether the current user collects it
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置Whether the current user collects it
                     * @param _isFavorite Whether the current user collects it
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取Basic information
                     * @return Profile Basic information
                     * 
                     */
                    SkillProfile GetProfile() const;

                    /**
                     * 设置Basic information
                     * @param _profile Basic information
                     * 
                     */
                    void SetProfile(const SkillProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Skill ID
                     * @return SkillId Skill ID
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置Skill ID
                     * @param _skillId Skill ID
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取Skill exception notification list
                     * @return NoticeList Skill exception notification list
                     * 
                     */
                    std::vector<SkillNotice> GetNoticeList() const;

                    /**
                     * 设置Skill exception notification list
                     * @param _noticeList Skill exception notification list
                     * 
                     */
                    void SetNoticeList(const std::vector<SkillNotice>& _noticeList);

                    /**
                     * 判断参数 NoticeList 是否已赋值
                     * @return NoticeList 是否已赋值
                     * 
                     */
                    bool NoticeListHasBeenSet() const;

                    /**
                     * 获取List of resource operation permission bits of the current user for this Skill. This parameter is fixed as an empty array for built-in or shared skills.
                     * @return PermissionIdList List of resource operation permission bits of the current user for this Skill. This parameter is fixed as an empty array for built-in or shared skills.
                     * 
                     */
                    std::vector<std::string> GetPermissionIdList() const;

                    /**
                     * 设置List of resource operation permission bits of the current user for this Skill. This parameter is fixed as an empty array for built-in or shared skills.
                     * @param _permissionIdList List of resource operation permission bits of the current user for this Skill. This parameter is fixed as an empty array for built-in or shared skills.
                     * 
                     */
                    void SetPermissionIdList(const std::vector<std::string>& _permissionIdList);

                    /**
                     * 判断参数 PermissionIdList 是否已赋值
                     * @return PermissionIdList 是否已赋值
                     * 
                     */
                    bool PermissionIdListHasBeenSet() const;

                    /**
                     * 获取Share information; there may be two entries, one is shared and the other is under review.
                     * @return ShareList Share information; there may be two entries, one is shared and the other is under review.
                     * 
                     */
                    std::vector<SkillShare> GetShareList() const;

                    /**
                     * 设置Share information; there may be two entries, one is shared and the other is under review.
                     * @param _shareList Share information; there may be two entries, one is shared and the other is under review.
                     * 
                     */
                    void SetShareList(const std::vector<SkillShare>& _shareList);

                    /**
                     * 判断参数 ShareList 是否已赋值
                     * @return ShareList 是否已赋值
                     * 
                     */
                    bool ShareListHasBeenSet() const;

                    /**
                     * 获取Skill status 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Initialization (no published versions, and the latest version is in INITIALIZED/UNRELEASED) |
Security detection in progress (no published versions, and the latest version is in AUDITING)
| 2 | To be released (no published versions, and the latest version is in PENDING_RELEASE) |
| 3 | Released (any RELEASED version exists, absorbent state) |
                     * @return SkillStatus Skill status 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Initialization (no published versions, and the latest version is in INITIALIZED/UNRELEASED) |
Security detection in progress (no published versions, and the latest version is in AUDITING)
| 2 | To be released (no published versions, and the latest version is in PENDING_RELEASE) |
| 3 | Released (any RELEASED version exists, absorbent state) |
                     * 
                     */
                    int64_t GetSkillStatus() const;

                    /**
                     * 设置Skill status 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Initialization (no published versions, and the latest version is in INITIALIZED/UNRELEASED) |
Security detection in progress (no published versions, and the latest version is in AUDITING)
| 2 | To be released (no published versions, and the latest version is in PENDING_RELEASE) |
| 3 | Released (any RELEASED version exists, absorbent state) |
                     * @param _skillStatus Skill status 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Initialization (no published versions, and the latest version is in INITIALIZED/UNRELEASED) |
Security detection in progress (no published versions, and the latest version is in AUDITING)
| 2 | To be released (no published versions, and the latest version is in PENDING_RELEASE) |
| 3 | Released (any RELEASED version exists, absorbent state) |
                     * 
                     */
                    void SetSkillStatus(const int64_t& _skillStatus);

                    /**
                     * 判断参数 SkillStatus 是否已赋值
                     * @return SkillStatus 是否已赋值
                     * 
                     */
                    bool SkillStatusHasBeenSet() const;

                private:

                    /**
                     * Classification information
                     */
                    SkillClassification m_classificationInfo;
                    bool m_classificationInfoHasBeenSet;

                    /**
                     * Current version information
                     */
                    SkillVersion m_currentVersionInfo;
                    bool m_currentVersionInfoHasBeenSet;

                    /**
                     * Whether the current user collects it
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * Basic information
                     */
                    SkillProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Skill ID
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * Skill exception notification list
                     */
                    std::vector<SkillNotice> m_noticeList;
                    bool m_noticeListHasBeenSet;

                    /**
                     * List of resource operation permission bits of the current user for this Skill. This parameter is fixed as an empty array for built-in or shared skills.
                     */
                    std::vector<std::string> m_permissionIdList;
                    bool m_permissionIdListHasBeenSet;

                    /**
                     * Share information; there may be two entries, one is shared and the other is under review.
                     */
                    std::vector<SkillShare> m_shareList;
                    bool m_shareListHasBeenSet;

                    /**
                     * Skill status 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Initialization (no published versions, and the latest version is in INITIALIZED/UNRELEASED) |
Security detection in progress (no published versions, and the latest version is in AUDITING)
| 2 | To be released (no published versions, and the latest version is in PENDING_RELEASE) |
| 3 | Released (any RELEASED version exists, absorbent state) |
                     */
                    int64_t m_skillStatus;
                    bool m_skillStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_
