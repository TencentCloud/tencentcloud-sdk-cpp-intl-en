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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGALLSTAGEVERSIONSRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGALLSTAGEVERSIONSRESP_H_

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
                * Response object for querying the mini game version information
                */
                class DescribeMNGAllStageVersionsResp : public AbstractModel
                {
                public:
                    DescribeMNGAllStageVersionsResp();
                    ~DescribeMNGAllStageVersionsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game appid</p>
                     * @return MNPId <p>Mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid</p>
                     * @param _mNPId <p>Mini game appid</p>
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
                     * 获取<p>Mini game version ID</p>
                     * @return MNPVersionId <p>Mini game version ID</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini game version ID</p>
                     * @param _mNPVersionId <p>Mini game version ID</p>
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
                     * 获取<p>Mini game name</p>
                     * @return MNPName <p>Mini game name</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini game name</p>
                     * @param _mNPName <p>Mini game name</p>
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
                     * 获取<p>Mini game icon</p>
                     * @return MNPIcon <p>Mini game icon</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini game icon</p>
                     * @param _mNPIcon <p>Mini game icon</p>
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
                     * 获取<p>Mini game category</p>
                     * @return MNPType <p>Mini game category</p>
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置<p>Mini game category</p>
                     * @param _mNPType <p>Mini game category</p>
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
                     * 获取<p>Mini game introduction</p>
                     * @return MNPIntro <p>Mini game introduction</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini game introduction</p>
                     * @param _mNPIntro <p>Mini game introduction</p>
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
                     * 获取<p>Mini game description</p>
                     * @return MNPDesc <p>Mini game description</p>
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置<p>Mini game description</p>
                     * @param _mNPDesc <p>Mini game description</p>
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
                     * 获取<p>Developer</p>
                     * @return CreateUser <p>Developer</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Developer</p>
                     * @param _createUser <p>Developer</p>
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
                     * 获取<p>Developer creation time</p>
                     * @return CreateTime <p>Developer creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Developer creation time</p>
                     * @param _createTime <p>Developer creation time</p>
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
                     * 获取<p>Mini game version</p>
                     * @return MNPVersion <p>Mini game version</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Mini game version</p>
                     * @param _mNPVersion <p>Mini game version</p>
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
                     * 获取<p>Version feature description</p>
                     * @return MNPVersionIntro <p>Version feature description</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Version feature description</p>
                     * @param _mNPVersionIntro <p>Version feature description</p>
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
                     * 获取<p>Version:</p> Develop, preview, released</p>
                     * @return Phase <p>Version:</p> Develop, preview, released</p>
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置<p>Version:</p> Develop, preview, released</p>
                     * @param _phase <p>Version:</p> Develop, preview, released</p>
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
                     * 获取<p>Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * @return ApprovalStatus <p>Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置<p>Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * @param _approvalStatus <p>Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
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
                     * 获取<p>Approval number</p>
                     * @return ApprovalNo <p>Approval number</p>
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置<p>Approval number</p>
                     * @param _approvalNo <p>Approval number</p>
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
                     * 获取<p>Whether this is a preview. Valid values: 0: No; 1: Yes</p>
                     * @return ShowCase <p>Whether this is a preview. Valid values: 0: No; 1: Yes</p>
                     * 
                     */
                    int64_t GetShowCase() const;

                    /**
                     * 设置<p>Whether this is a preview. Valid values: 0: No; 1: Yes</p>
                     * @param _showCase <p>Whether this is a preview. Valid values: 0: No; 1: Yes</p>
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
                     * 获取<p>Rollback version number</p>
                     * @return RollbackVersion <p>Rollback version number</p>
                     * 
                     */
                    int64_t GetRollbackVersion() const;

                    /**
                     * 设置<p>Rollback version number</p>
                     * @param _rollbackVersion <p>Rollback version number</p>
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
                     * 获取<p>Available status</p>
                     * @return Status <p>Available status</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Available status</p>
                     * @param _status <p>Available status</p>
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
                     * 获取<p>Primary status of the current version. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * @return VersionCurrentStatus <p>Primary status of the current version. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * 
                     */
                    int64_t GetVersionCurrentStatus() const;

                    /**
                     * 设置<p>Primary status of the current version. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     * @param _versionCurrentStatus <p>Primary status of the current version. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
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
                     * <p>Mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini game version ID</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Mini game name</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini game icon</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini game category</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Mini game introduction</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Mini game description</p>
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * <p>Developer</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Developer creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Mini game version</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Version feature description</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * <p>Version:</p> Develop, preview, released</p>
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>Approval number</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * <p>Whether this is a preview. Valid values: 0: No; 1: Yes</p>
                     */
                    int64_t m_showCase;
                    bool m_showCaseHasBeenSet;

                    /**
                     * <p>Rollback version number</p>
                     */
                    int64_t m_rollbackVersion;
                    bool m_rollbackVersionHasBeenSet;

                    /**
                     * <p>Available status</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Primary status of the current version. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled</p>
                     */
                    int64_t m_versionCurrentStatus;
                    bool m_versionCurrentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGALLSTAGEVERSIONSRESP_H_
