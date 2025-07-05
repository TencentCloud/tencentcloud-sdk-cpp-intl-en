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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEAPPLICATIONMNPVERSIONAUDITLISTINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEAPPLICATIONMNPVERSIONAUDITLISTINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mini program review list information
                */
                class DescribeApplicationMNPVersionAuditListInfoResp : public AbstractModel
                {
                public:
                    DescribeApplicationMNPVersionAuditListInfoResp();
                    ~DescribeApplicationMNPVersionAuditListInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditNo Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditNo() const;

                    /**
                     * 设置Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditNo Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditNo(const std::string& _auditNo);

                    /**
                     * 判断参数 AuditNo 是否已赋值
                     * @return AuditNo 是否已赋值
                     * 
                     */
                    bool AuditNoHasBeenSet() const;

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
                     * @return AuditStatus Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditStatus Approval status : 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

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
                     * 获取Android app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationAndUrl Android app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationAndUrl() const;

                    /**
                     * 设置Android app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationAndUrl Android app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationAndUrl(const std::string& _applicationAndUrl);

                    /**
                     * 判断参数 ApplicationAndUrl 是否已赋值
                     * @return ApplicationAndUrl 是否已赋值
                     * 
                     */
                    bool ApplicationAndUrlHasBeenSet() const;

                    /**
                     * 获取iOS app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationIOSUrl iOS app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationIOSUrl() const;

                    /**
                     * 设置iOS app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationIOSUrl iOS app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationIOSUrl(const std::string& _applicationIOSUrl);

                    /**
                     * 判断参数 ApplicationIOSUrl 是否已赋值
                     * @return ApplicationIOSUrl 是否已赋值
                     * 
                     */
                    bool ApplicationIOSUrlHasBeenSet() const;

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
                     * @return AuditUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditUser() const;

                    /**
                     * 设置Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditUser(const std::string& _auditUser);

                    /**
                     * 判断参数 AuditUser 是否已赋值
                     * @return AuditUser 是否已赋值
                     * 
                     */
                    bool AuditUserHasBeenSet() const;

                    /**
                     * 获取Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditTime() const;

                    /**
                     * 设置Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditTime(const std::string& _auditTime);

                    /**
                     * 判断参数 AuditTime 是否已赋值
                     * @return AuditTime 是否已赋值
                     * 
                     */
                    bool AuditTimeHasBeenSet() const;

                    /**
                     * 获取Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditNote(const std::string& _auditNote);

                    /**
                     * 判断参数 AuditNote 是否已赋值
                     * @return AuditNote 是否已赋值
                     * 
                     */
                    bool AuditNoteHasBeenSet() const;

                    /**
                     * 获取Scan result. 0: Scanning, 1: Healthy; 2: Unhealthy; 3: Task failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Scan result. 0: Scanning, 1: Healthy; 2: Unhealthy; 3: Task failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Scan result. 0: Scanning, 1: Healthy; 2: Unhealthy; 3: Task failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanStatus Scan result. 0: Scanning, 1: Healthy; 2: Unhealthy; 3: Task failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Scan score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanScore Scan score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanScore() const;

                    /**
                     * 设置Scan score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanScore Scan score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanScore(const int64_t& _scanScore);

                    /**
                     * 判断参数 ScanScore 是否已赋值
                     * @return ScanScore 是否已赋值
                     * 
                     */
                    bool ScanScoreHasBeenSet() const;

                    /**
                     * 获取Address scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanHtmlPath Address scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanHtmlPath() const;

                    /**
                     * 设置Address scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanHtmlPath Address scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanHtmlPath(const std::string& _scanHtmlPath);

                    /**
                     * 判断参数 ScanHtmlPath 是否已赋值
                     * @return ScanHtmlPath 是否已赋值
                     * 
                     */
                    bool ScanHtmlPathHasBeenSet() const;

                private:

                    /**
                     * Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

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
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

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
                     * Android app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationAndUrl;
                    bool m_applicationAndUrlHasBeenSet;

                    /**
                     * iOS app download address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationIOSUrl;
                    bool m_applicationIOSUrlHasBeenSet;

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
                    std::string m_auditUser;
                    bool m_auditUserHasBeenSet;

                    /**
                     * Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditTime;
                    bool m_auditTimeHasBeenSet;

                    /**
                     * Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                    /**
                     * Scan result. 0: Scanning, 1: Healthy; 2: Unhealthy; 3: Task failed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Scan score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scanScore;
                    bool m_scanScoreHasBeenSet;

                    /**
                     * Address scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanHtmlPath;
                    bool m_scanHtmlPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEAPPLICATIONMNPVERSIONAUDITLISTINFORESP_H_
