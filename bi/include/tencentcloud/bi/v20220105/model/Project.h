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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ProjectConfigList.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Project description
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
                     * @return Id Project ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Project ID.
                     * @param _id Project ID.
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
                     * 获取Project logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Logo Project logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Project logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logo Project logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Project name.
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
                     * 获取Background color of the logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColorCode Background color of the logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置Background color of the logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _colorCode Background color of the logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColorCode(const std::string& _colorCode);

                    /**
                     * 判断参数 ColorCode 是否已赋值
                     * @return ColorCode 是否已赋值
                     * 
                     */
                    bool ColorCodeHasBeenSet() const;

                    /**
                     * 获取Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Number of members.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberCount Number of members.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of members.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberCount Number of members.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取Number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageCount Number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置Number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageCount Number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageCount(const int64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取Last modified report and dashboard names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyName Last modified report and dashboard names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastModifyName() const;

                    /**
                     * 设置Last modified report and dashboard names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyName Last modified report and dashboard names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastModifyName(const std::string& _lastModifyName);

                    /**
                     * 判断参数 LastModifyName 是否已赋值
                     * @return LastModifyName 是否已赋值
                     * 
                     */
                    bool LastModifyNameHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Source ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _source ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Apply ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetApply() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apply ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApply(const bool& _apply);

                    /**
                     * 判断参数 Apply 是否已赋值
                     * @return Apply 是否已赋值
                     * 
                     */
                    bool ApplyHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedUser ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedUser ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CorpId ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _corpId ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mark ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mark ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Seed ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置""
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _seed ""
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取Permission list in the project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthList Permission list in the project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAuthList() const;

                    /**
                     * 设置Permission list in the project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authList Permission list in the project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthList(const std::vector<std::string>& _authList);

                    /**
                     * 判断参数 AuthList 是否已赋值
                     * @return AuthList 是否已赋值
                     * 
                     */
                    bool AuthListHasBeenSet() const;

                    /**
                     * 获取Default dashboard.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PanelScope Default dashboard.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPanelScope() const;

                    /**
                     * 设置Default dashboard.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _panelScope Default dashboard.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPanelScope(const std::string& _panelScope);

                    /**
                     * 判断参数 PanelScope 是否已赋值
                     * @return PanelScope 是否已赋值
                     * 
                     */
                    bool PanelScopeHasBeenSet() const;

                    /**
                     * 获取Whether it is managed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsExternalManage Whether it is managed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsExternalManage() const;

                    /**
                     * 设置Whether it is managed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isExternalManage Whether it is managed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsExternalManage(const bool& _isExternalManage);

                    /**
                     * 判断参数 IsExternalManage 是否已赋值
                     * @return IsExternalManage 是否已赋值
                     * 
                     */
                    bool IsExternalManageHasBeenSet() const;

                    /**
                     * 获取Management platform name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagePlatform Management platform name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置Management platform name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _managePlatform Management platform name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                    /**
                     * 获取Customization parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigList Customization parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProjectConfigList> GetConfigList() const;

                    /**
                     * 设置Customization parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configList Customization parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigList(const std::vector<ProjectConfigList>& _configList);

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedUserName Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedUserName() const;

                    /**
                     * 设置Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdUserName Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedUserName(const std::string& _createdUserName);

                    /**
                     * 判断参数 CreatedUserName 是否已赋值
                     * @return CreatedUserName 是否已赋值
                     * 
                     */
                    bool CreatedUserNameHasBeenSet() const;

                    /**
                     * 获取Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Owner Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _owner Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Associated person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerName Associated person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置Associated person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerName Associated person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取Number of dashboard pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NormalCount Number of dashboard pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNormalCount() const;

                    /**
                     * 设置Number of dashboard pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _normalCount Number of dashboard pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNormalCount(const int64_t& _normalCount);

                    /**
                     * 判断参数 NormalCount 是否已赋值
                     * @return NormalCount 是否已赋值
                     * 
                     */
                    bool NormalCountHasBeenSet() const;

                    /**
                     * 获取Number of free canvas pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FreeCount Number of free canvas pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFreeCount() const;

                    /**
                     * 设置Number of free canvas pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _freeCount Number of free canvas pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFreeCount(const int64_t& _freeCount);

                    /**
                     * 判断参数 FreeCount 是否已赋值
                     * @return FreeCount 是否已赋值
                     * 
                     */
                    bool FreeCountHasBeenSet() const;

                    /**
                     * 获取Number of ad-hoc analysis pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdhocCount Number of ad-hoc analysis pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAdhocCount() const;

                    /**
                     * 设置Number of ad-hoc analysis pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adhocCount Number of ad-hoc analysis pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdhocCount(const int64_t& _adhocCount);

                    /**
                     * 判断参数 AdhocCount 是否已赋值
                     * @return AdhocCount 是否已赋值
                     * 
                     */
                    bool AdhocCountHasBeenSet() const;

                    /**
                     * 获取Number of pages in the briefing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BriefingCount Number of pages in the briefing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBriefingCount() const;

                    /**
                     * 设置Number of pages in the briefing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _briefingCount Number of pages in the briefing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBriefingCount(const int64_t& _briefingCount);

                    /**
                     * 判断参数 BriefingCount 是否已赋值
                     * @return BriefingCount 是否已赋值
                     * 
                     */
                    bool BriefingCountHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Project logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * Project name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Background color of the logo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Number of members.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * Last modified report and dashboard names.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifyName;
                    bool m_lastModifyNameHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_apply;
                    bool m_applyHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * ""
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * Permission list in the project.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_authList;
                    bool m_authListHasBeenSet;

                    /**
                     * Default dashboard.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_panelScope;
                    bool m_panelScopeHasBeenSet;

                    /**
                     * Whether it is managed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isExternalManage;
                    bool m_isExternalManageHasBeenSet;

                    /**
                     * Management platform name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                    /**
                     * Customization parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProjectConfigList> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdUserName;
                    bool m_createdUserNameHasBeenSet;

                    /**
                     * Associated person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Associated person.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * Number of dashboard pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_normalCount;
                    bool m_normalCountHasBeenSet;

                    /**
                     * Number of free canvas pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_freeCount;
                    bool m_freeCountHasBeenSet;

                    /**
                     * Number of ad-hoc analysis pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_adhocCount;
                    bool m_adhocCountHasBeenSet;

                    /**
                     * Number of pages in the briefing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_briefingCount;
                    bool m_briefingCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_
