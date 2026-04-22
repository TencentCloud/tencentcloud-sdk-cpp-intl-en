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
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
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
                     * 获取Approval status. valid values: 1 (processing), 2 (rejected), 3 (approved), 4 (cancelled).
                     * @return ApprovalStatus Approval status. valid values: 1 (processing), 2 (rejected), 3 (approved), 4 (cancelled).
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置Approval status. valid values: 1 (processing), 2 (rejected), 3 (approved), 4 (cancelled).
                     * @param _approvalStatus Approval status. valid values: 1 (processing), 2 (rejected), 3 (approved), 4 (cancelled).
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
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
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
                     * 获取Mini program version ID
                     * @return MNPVersionId Mini program version ID
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
                     * @param _mNPVersionId Mini program version ID
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
                     * @return ApplyUser Applicant
                     * 
                     */
                    std::string GetApplyUser() const;

                    /**
                     * 设置Applicant
                     * @param _applyUser Applicant
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
                     * @return ApplyTime Application time
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
                     * @param _applyTime Application time
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
                     * 获取Mini program icon
                     * @return MNPIcon Mini program icon
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
                     * @param _mNPIcon Mini program icon
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
                     * @return ApplicationName Application name
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
                     * @param _applicationName Application name
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
                     * 获取Specifies the application icon.
                     * @return ApplicationLogo Specifies the application icon.
                     * 
                     */
                    std::string GetApplicationLogo() const;

                    /**
                     * 设置Specifies the application icon.
                     * @param _applicationLogo Specifies the application icon.
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
                     * @return TeamId Team ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
                     * @param _teamId Team ID
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
                     * @return TeamName Team name
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
                     * @param _teamName Team name
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
                     * 获取Mini program review qr code.
                     * @return MNPQrCodeUrl Mini program review qr code.
                     * 
                     */
                    std::string GetMNPQrCodeUrl() const;

                    /**
                     * 设置Mini program review qr code.
                     * @param _mNPQrCodeUrl Mini program review qr code.
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
                     * 获取Specifies the reviewer.
                     * @return ApprovalUser Specifies the reviewer.
                     * 
                     */
                    std::string GetApprovalUser() const;

                    /**
                     * 设置Specifies the reviewer.
                     * @param _approvalUser Specifies the reviewer.
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
                     * 获取Approval time.
                     * @return ApprovalTime Approval time.
                     * 
                     */
                    std::string GetApprovalTime() const;

                    /**
                     * 设置Approval time.
                     * @param _approvalTime Approval time.
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
                     * @return ApprovalNote Approval notes
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置Approval notes
                     * @param _approvalNote Approval notes
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
                     * Approval ticket ID
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Approval status. valid values: 1 (processing), 2 (rejected), 3 (approved), 4 (cancelled).
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program version.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Mini program version ID
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Applicant
                     */
                    std::string m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * Application time
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program icon
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Specifies the application icon.
                     */
                    std::string m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * Team ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Mini program review qr code.
                     */
                    std::string m_mNPQrCodeUrl;
                    bool m_mNPQrCodeUrlHasBeenSet;

                    /**
                     * Mini program type
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Specifies the reviewer.
                     */
                    std::string m_approvalUser;
                    bool m_approvalUserHasBeenSet;

                    /**
                     * Approval time.
                     */
                    std::string m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * Approval notes
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAPPROVALLISTDATA_H_
