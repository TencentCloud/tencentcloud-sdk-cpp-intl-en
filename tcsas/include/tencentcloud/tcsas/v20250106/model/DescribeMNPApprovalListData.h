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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_

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
                * List of mini program approval requests of the application
                */
                class DescribeMNPApprovalListData : public AbstractModel
                {
                public:
                    DescribeMNPApprovalListData();
                    ~DescribeMNPApprovalListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Approval request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalNo Approval request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalNo Approval request ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalStatus Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalStatus Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionId Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionId Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Applicant
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplyUser Applicant
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplyUser() const;

                    /**
                     * 设置Applicant
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applyUser Applicant
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplyTime Application time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applyTime Application time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationLogo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationLogo() const;

                    /**
                     * 设置Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationLogo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini Program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPQrCodeUrl Mini Program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPQrCodeUrl() const;

                    /**
                     * 设置Mini Program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPQrCodeUrl Mini Program QR code
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPType Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPType Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalUser() const;

                    /**
                     * 设置Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalTime() const;

                    /**
                     * 设置Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApprovalNote(const std::string& _approvalNote);

                    /**
                     * 判断参数 ApprovalNote 是否已赋值
                     * @return ApprovalNote 是否已赋值
                     * 
                     */
                    bool ApprovalNoteHasBeenSet() const;

                private:

                    /**
                     * Approval request ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Applicant
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * Application time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Mini Program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPQrCodeUrl;
                    bool m_mNPQrCodeUrlHasBeenSet;

                    /**
                     * Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalUser;
                    bool m_approvalUserHasBeenSet;

                    /**
                     * Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_
