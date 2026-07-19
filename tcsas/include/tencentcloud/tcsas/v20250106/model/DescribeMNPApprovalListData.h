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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_

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
                * Mini program approval list information.
                */
                class DescribeMNPApprovalListData : public AbstractModel
                {
                public:
                    DescribeMNPApprovalListData();
                    ~DescribeMNPApprovalListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Superapp ID.</p>
                     * @return ApplicationId <p>Superapp ID.</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Superapp ID.</p>
                     * @param _applicationId <p>Superapp ID.</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

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
                     * 获取<p>Mini program version ID.</p>
                     * @return MNPVersionId <p>Mini program version ID.</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini program version ID.</p>
                     * @param _mNPVersionId <p>Mini program version ID.</p>
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
                     * 获取<p>Applicant.</p>
                     * @return ApplyUser <p>Applicant.</p>
                     * 
                     */
                    std::string GetApplyUser() const;

                    /**
                     * 设置<p>Applicant.</p>
                     * @param _applyUser <p>Applicant.</p>
                     * 
                     */
                    void SetApplyUser(const std::string& _applyUser);

                    /**
                     * 判断参数 ApplyUser 是否已赋值
                     * @return ApplyUser 是否已赋值
                     * 
                     */
                    bool ApplyUserHasBeenSet() const;

                    /**
                     * 获取<p>Application time.</p>
                     * @return ApplyTime <p>Application time.</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>Application time.</p>
                     * @param _applyTime <p>Application time.</p>
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

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
                     * 获取<p>Superapp name.</p>
                     * @return ApplicationName <p>Superapp name.</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Superapp name.</p>
                     * @param _applicationName <p>Superapp name.</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>Superapp icon.</p>
                     * @return ApplicationLogo <p>Superapp icon.</p>
                     * 
                     */
                    std::string GetApplicationLogo() const;

                    /**
                     * 设置<p>Superapp icon.</p>
                     * @param _applicationLogo <p>Superapp icon.</p>
                     * 
                     */
                    void SetApplicationLogo(const std::string& _applicationLogo);

                    /**
                     * 判断参数 ApplicationLogo 是否已赋值
                     * @return ApplicationLogo 是否已赋值
                     * 
                     */
                    bool ApplicationLogoHasBeenSet() const;

                    /**
                     * 获取<p>Team ID.</p>
                     * @return TeamId <p>Team ID.</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Team ID.</p>
                     * @param _teamId <p>Team ID.</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取<p>Team name.</p>
                     * @return TeamName <p>Team name.</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>Team name.</p>
                     * @param _teamName <p>Team name.</p>
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取<p>Mini program approval QR code URL.</p>
                     * @return MNPQrCodeUrl <p>Mini program approval QR code URL.</p>
                     * 
                     */
                    std::string GetMNPQrCodeUrl() const;

                    /**
                     * 设置<p>Mini program approval QR code URL.</p>
                     * @param _mNPQrCodeUrl <p>Mini program approval QR code URL.</p>
                     * 
                     */
                    void SetMNPQrCodeUrl(const std::string& _mNPQrCodeUrl);

                    /**
                     * 判断参数 MNPQrCodeUrl 是否已赋值
                     * @return MNPQrCodeUrl 是否已赋值
                     * 
                     */
                    bool MNPQrCodeUrlHasBeenSet() const;

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
                     * 获取<p>Approver.</p>
                     * @return ApprovalUser <p>Approver.</p>
                     * 
                     */
                    std::string GetApprovalUser() const;

                    /**
                     * 设置<p>Approver.</p>
                     * @param _approvalUser <p>Approver.</p>
                     * 
                     */
                    void SetApprovalUser(const std::string& _approvalUser);

                    /**
                     * 判断参数 ApprovalUser 是否已赋值
                     * @return ApprovalUser 是否已赋值
                     * 
                     */
                    bool ApprovalUserHasBeenSet() const;

                    /**
                     * 获取<p>Approval time.</p>
                     * @return ApprovalTime <p>Approval time.</p>
                     * 
                     */
                    std::string GetApprovalTime() const;

                    /**
                     * 设置<p>Approval time.</p>
                     * @param _approvalTime <p>Approval time.</p>
                     * 
                     */
                    void SetApprovalTime(const std::string& _approvalTime);

                    /**
                     * 判断参数 ApprovalTime 是否已赋值
                     * @return ApprovalTime 是否已赋值
                     * 
                     */
                    bool ApprovalTimeHasBeenSet() const;

                    /**
                     * 获取<p>Approval note.</p>
                     * @return ApprovalNote <p>Approval note.</p>
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置<p>Approval note.</p>
                     * @param _approvalNote <p>Approval note.</p>
                     * 
                     */
                    void SetApprovalNote(const std::string& _approvalNote);

                    /**
                     * 判断参数 ApprovalNote 是否已赋值
                     * @return ApprovalNote 是否已赋值
                     * 
                     */
                    bool ApprovalNoteHasBeenSet() const;

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
                     * <p>Approval number.</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * <p>Superapp ID.</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini program version.</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Mini program version ID.</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Applicant.</p>
                     */
                    std::string m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * <p>Application time.</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

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
                     * <p>Superapp name.</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>Superapp icon.</p>
                     */
                    std::string m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * <p>Team ID.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Mini program approval QR code URL.</p>
                     */
                    std::string m_mNPQrCodeUrl;
                    bool m_mNPQrCodeUrlHasBeenSet;

                    /**
                     * <p>Mini program category.</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Approver.</p>
                     */
                    std::string m_approvalUser;
                    bool m_approvalUserHasBeenSet;

                    /**
                     * <p>Approval time.</p>
                     */
                    std::string m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * <p>Approval note.</p>
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_
