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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMPALLSTAGEVERSIONSRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMPALLSTAGEVERSIONSRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * List of all developer versions of a mini program
                */
                class DescribeMPAllStageVersionsResp : public AbstractModel
                {
                public:
                    DescribeMPAllStageVersionsResp();
                    ~DescribeMPAllStageVersionsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID.
                     * @return MNPId Mini program ID.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID.
                     * @param _mNPId Mini program ID.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Specifies the mini program version primary key id.
                     * @return MNPVersionId Specifies the mini program version primary key id.
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Specifies the mini program version primary key id.
                     * @param _mNPVersionId Specifies the mini program version primary key id.
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取Mini program name
                     * @return MNPName Mini program name
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
                     * @param _mNPName Mini program name
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Specifies the mini program avatar.
                     * @return MNPIcon Specifies the mini program avatar.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Specifies the mini program avatar.
                     * @param _mNPIcon Specifies the mini program avatar.
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取Mini program type
                     * @return MNPType Mini program type
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type
                     * @param _mNPType Mini program type
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取Mini program introduction
                     * @return MNPIntro Mini program introduction
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction
                     * @param _mNPIntro Mini program introduction
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                    /**
                     * 获取Mini program description
                     * @return MNPDesc Mini program description
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description
                     * @param _mNPDesc Mini program description
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取Specifies the developer.
                     * @return CreateUser Specifies the developer.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Specifies the developer.
                     * @param _createUser Specifies the developer.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Developer creation time.
                     * @return CreateTime Developer creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Developer creation time.
                     * @param _createTime Developer creation time.
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
                     * 获取Mini program version.
                     * @return MNPVersion Mini program version.
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Mini program version.
                     * @param _mNPVersion Mini program version.
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取Describes version features.
                     * @return MNPVersionIntro Describes version features.
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置Describes version features.
                     * @param _mNPVersionIntro Describes version features.
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                    /**
                     * 获取Development Platform Online.
                     * @return Phase Development Platform Online.
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置Development Platform Online.
                     * @param _phase Development Platform Online.
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取0 pending review; 1 under review; 2 review rejection; 3 pass review; 4 review cancellation.
                     * @return ApprovalStatus 0 pending review; 1 under review; 2 review rejection; 3 pass review; 4 review cancellation.
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置0 pending review; 1 under review; 2 review rejection; 3 pass review; 4 review cancellation.
                     * @param _approvalStatus 0 pending review; 1 under review; 2 review rejection; 3 pass review; 4 review cancellation.
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取Approval ticket ID
                     * @return ApprovalNo Approval ticket ID
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval ticket ID
                     * @param _approvalNo Approval ticket ID
                     * 
                     */
                    void SetApprovalNo(const std::string& _approvalNo);

                    /**
                     * 判断参数 ApprovalNo 是否已赋值
                     * @return ApprovalNo 是否已赋值
                     * 
                     */
                    bool ApprovalNoHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is a trial version.
Specifies the version type. valid values: 0 (non-preview version); 1 (trial version).
                     * @return ShowCase Specifies whether it is a trial version.
Specifies the version type. valid values: 0 (non-preview version); 1 (trial version).
                     * 
                     */
                    int64_t GetShowCase() const;

                    /**
                     * 设置Specifies whether it is a trial version.
Specifies the version type. valid values: 0 (non-preview version); 1 (trial version).
                     * @param _showCase Specifies whether it is a trial version.
Specifies the version type. valid values: 0 (non-preview version); 1 (trial version).
                     * 
                     */
                    void SetShowCase(const int64_t& _showCase);

                    /**
                     * 判断参数 ShowCase 是否已赋值
                     * @return ShowCase 是否已赋值
                     * 
                     */
                    bool ShowCaseHasBeenSet() const;

                    /**
                     * 获取Version number to roll back to.
                     * @return RollbackVersion Version number to roll back to.
                     * 
                     */
                    int64_t GetRollbackVersion() const;

                    /**
                     * 设置Version number to roll back to.
                     * @param _rollbackVersion Version number to roll back to.
                     * 
                     */
                    void SetRollbackVersion(const int64_t& _rollbackVersion);

                    /**
                     * 判断参数 RollbackVersion 是否已赋值
                     * @return RollbackVersion 是否已赋值
                     * 
                     */
                    bool RollbackVersionHasBeenSet() const;

                    /**
                     * 获取Indicates the release status.
                     * @return Status Indicates the release status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Indicates the release status.
                     * @param _status Indicates the release status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies the current main status of the version. valid values: "0" (pending review), "1" (under review), "2" (review rejection), "3" (pass review), "4" (review cancellation).
                     * @return VersionCurrentStatus Specifies the current main status of the version. valid values: "0" (pending review), "1" (under review), "2" (review rejection), "3" (pass review), "4" (review cancellation).
                     * 
                     */
                    int64_t GetVersionCurrentStatus() const;

                    /**
                     * 设置Specifies the current main status of the version. valid values: "0" (pending review), "1" (under review), "2" (review rejection), "3" (pass review), "4" (review cancellation).
                     * @param _versionCurrentStatus Specifies the current main status of the version. valid values: "0" (pending review), "1" (under review), "2" (review rejection), "3" (pass review), "4" (review cancellation).
                     * 
                     */
                    void SetVersionCurrentStatus(const int64_t& _versionCurrentStatus);

                    /**
                     * 判断参数 VersionCurrentStatus 是否已赋值
                     * @return VersionCurrentStatus 是否已赋值
                     * 
                     */
                    bool VersionCurrentStatusHasBeenSet() const;

                private:

                    /**
                     * Mini program ID.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Specifies the mini program version primary key id.
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Specifies the mini program avatar.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program type
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Mini program introduction
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Mini program description
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Specifies the developer.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Developer creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Mini program version.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Describes version features.
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * Development Platform Online.
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 0 pending review; 1 under review; 2 review rejection; 3 pass review; 4 review cancellation.
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * Approval ticket ID
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Specifies whether it is a trial version.
Specifies the version type. valid values: 0 (non-preview version); 1 (trial version).
                     */
                    int64_t m_showCase;
                    bool m_showCaseHasBeenSet;

                    /**
                     * Version number to roll back to.
                     */
                    int64_t m_rollbackVersion;
                    bool m_rollbackVersionHasBeenSet;

                    /**
                     * Indicates the release status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the current main status of the version. valid values: "0" (pending review), "1" (under review), "2" (review rejection), "3" (pass review), "4" (review cancellation).
                     */
                    int64_t m_versionCurrentStatus;
                    bool m_versionCurrentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMPALLSTAGEVERSIONSRESP_H_
