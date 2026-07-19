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
#include <tencentcloud/tcsas/v20250106/model/AgeRatingItem.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response for querying all-stage versions of a mini program.
                */
                class DescribeMPAllStageVersionsResp : public AbstractModel
                {
                public:
                    DescribeMPAllStageVersionsResp();
                    ~DescribeMPAllStageVersionsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini program appid.</p>
                     * @return MNPId <p>Mini program appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program appid.</p>
                     * @param _mNPId <p>Mini program appid.</p>
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
                     * 获取<p>Mini program version primary key ID.</p>
                     * @return MNPVersionId <p>Mini program version primary key ID.</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini program version primary key ID.</p>
                     * @param _mNPVersionId <p>Mini program version primary key ID.</p>
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
                     * 获取<p>Mini program name.</p>
                     * @return MNPName <p>Mini program name.</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini program name.</p>
                     * @param _mNPName <p>Mini program name.</p>
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
                     * 获取<p>Mini program icon.</p>
                     * @return MNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini program icon.</p>
                     * @param _mNPIcon <p>Mini program icon.</p>
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
                     * 获取<p>Mini program category.</p>
                     * @return MNPType <p>Mini program category.</p>
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置<p>Mini program category.</p>
                     * @param _mNPType <p>Mini program category.</p>
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
                     * 获取<p>Mini program introduction.</p>
                     * @return MNPIntro <p>Mini program introduction.</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini program introduction.</p>
                     * @param _mNPIntro <p>Mini program introduction.</p>
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
                     * 获取<p>Mini program description.</p>
                     * @return MNPDesc <p>Mini program description.</p>
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置<p>Mini program description.</p>
                     * @param _mNPDesc <p>Mini program description.</p>
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
                     * 获取<p>Creator.</p>
                     * @return CreateUser <p>Creator.</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _createUser <p>Creator.</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Mini program version.</p>
                     * @return MNPVersion <p>Mini program version.</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Mini program version.</p>
                     * @param _mNPVersion <p>Mini program version.</p>
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
                     * 获取<p>Version introduction.</p>
                     * @return MNPVersionIntro <p>Version introduction.</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Version introduction.</p>
                     * @param _mNPVersionIntro <p>Version introduction.</p>
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
                     * 获取<p>Phase:  Valid values: Develop; Platform; Online.</p>
                     * @return Phase <p>Phase:  Valid values: Develop; Platform; Online.</p>
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置<p>Phase:  Valid values: Develop; Platform; Online.</p>
                     * @param _phase <p>Phase:  Valid values: Develop; Platform; Online.</p>
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
                     * 获取<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @return ApprovalStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @param _approvalStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
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
                     * 获取<p>Approval number.</p>
                     * @return ApprovalNo <p>Approval number.</p>
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置<p>Approval number.</p>
                     * @param _approvalNo <p>Approval number.</p>
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
                     * 获取<p>Whether this is a preview. Valid values: 0: No; 1: Yes.</p>
                     * @return ShowCase <p>Whether this is a preview. Valid values: 0: No; 1: Yes.</p>
                     * 
                     */
                    int64_t GetShowCase() const;

                    /**
                     * 设置<p>Whether this is a preview. Valid values: 0: No; 1: Yes.</p>
                     * @param _showCase <p>Whether this is a preview. Valid values: 0: No; 1: Yes.</p>
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
                     * 获取<p>Rollback version number.</p>
                     * @return RollbackVersion <p>Rollback version number.</p>
                     * 
                     */
                    int64_t GetRollbackVersion() const;

                    /**
                     * 设置<p>Rollback version number.</p>
                     * @param _rollbackVersion <p>Rollback version number.</p>
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
                     * 获取<p>Available status. Valid value: 0: All; 1 Available; 2: In canary release.</p>
                     * @return Status <p>Available status. Valid value: 0: All; 1 Available; 2: In canary release.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Available status. Valid value: 0: All; 1 Available; 2: In canary release.</p>
                     * @param _status <p>Available status. Valid value: 0: All; 1 Available; 2: In canary release.</p>
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
                     * 获取<p>Current version approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @return VersionCurrentStatus <p>Current version approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    int64_t GetVersionCurrentStatus() const;

                    /**
                     * 设置<p>Current version approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @param _versionCurrentStatus <p>Current version approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    void SetVersionCurrentStatus(const int64_t& _versionCurrentStatus);

                    /**
                     * 判断参数 VersionCurrentStatus 是否已赋值
                     * @return VersionCurrentStatus 是否已赋值
                     * 
                     */
                    bool VersionCurrentStatusHasBeenSet() const;

                    /**
                     * 获取<p>Age rating information.</p>
                     * @return AgeRatings <p>Age rating information.</p>
                     * 
                     */
                    std::vector<AgeRatingItem> GetAgeRatings() const;

                    /**
                     * 设置<p>Age rating information.</p>
                     * @param _ageRatings <p>Age rating information.</p>
                     * 
                     */
                    void SetAgeRatings(const std::vector<AgeRatingItem>& _ageRatings);

                    /**
                     * 判断参数 AgeRatings 是否已赋值
                     * @return AgeRatings 是否已赋值
                     * 
                     */
                    bool AgeRatingsHasBeenSet() const;

                private:

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini program version primary key ID.</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Mini program name.</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini program icon.</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini program category.</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Mini program introduction.</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Mini program description.</p>
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Mini program version.</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Version introduction.</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * <p>Phase:  Valid values: Develop; Platform; Online.</p>
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>Approval number.</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * <p>Whether this is a preview. Valid values: 0: No; 1: Yes.</p>
                     */
                    int64_t m_showCase;
                    bool m_showCaseHasBeenSet;

                    /**
                     * <p>Rollback version number.</p>
                     */
                    int64_t m_rollbackVersion;
                    bool m_rollbackVersionHasBeenSet;

                    /**
                     * <p>Available status. Valid value: 0: All; 1 Available; 2: In canary release.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Current version approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     */
                    int64_t m_versionCurrentStatus;
                    bool m_versionCurrentStatusHasBeenSet;

                    /**
                     * <p>Age rating information.</p>
                     */
                    std::vector<AgeRatingItem> m_ageRatings;
                    bool m_ageRatingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMPALLSTAGEVERSIONSRESP_H_
