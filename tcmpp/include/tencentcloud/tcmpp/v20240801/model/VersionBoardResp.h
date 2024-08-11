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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_VERSIONBOARDRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_VERSIONBOARDRESP_H_

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
                * Information of the specified version of mini program
                */
                class VersionBoardResp : public AbstractModel
                {
                public:
                    VersionBoardResp();
                    ~VersionBoardResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Mini program category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPType Mini program category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPType Mini program category
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
                     * 获取Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Developer
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Developer
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Developer
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Developer
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The time when the developer created it
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The time when the developer created it
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the developer created it
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The time when the developer created it
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
                     * 获取Version features
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionIntro Version features
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置Version features
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionIntro Version features
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Phase. Values: [Develop,Platform,Online]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Phase Phase. Values: [Develop,Platform,Online]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置Phase. Values: [Develop,Platform,Online]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phase Phase. Values: [Develop,Platform,Online]
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditStatus 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditStatus 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
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
                     * 获取Whether it is a trial version. 
0: Not a trial version; 1: Trial version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowCase Whether it is a trial version. 
0: Not a trial version; 1: Trial version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShowCase() const;

                    /**
                     * 设置Whether it is a trial version. 
0: Not a trial version; 1: Trial version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showCase Whether it is a trial version. 
0: Not a trial version; 1: Trial version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanStatus Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Scanning status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanStatus Scanning status
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
                     * 获取Version number to roll back to
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RollbackVersion Version number to roll back to
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRollbackVersion() const;

                    /**
                     * 设置Version number to roll back to
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rollbackVersion Version number to roll back to
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Release status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Release status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Release status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Release status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address of the scan result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanHtmlPath Address of the scan result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanHtmlPath() const;

                    /**
                     * 设置Address of the scan result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanHtmlPath Address of the scan result
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

                    /**
                     * 获取Version approval status. 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionCurrentStatus Version approval status. 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVersionCurrentStatus() const;

                    /**
                     * 设置Version approval status. 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionCurrentStatus Version approval status. 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

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
                     * Mini program category
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Developer
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * The time when the developer created it
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Version features
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * Phase. Values: [Develop,Platform,Online]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Approval ticket ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * Whether it is a trial version. 
0: Not a trial version; 1: Trial version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_showCase;
                    bool m_showCaseHasBeenSet;

                    /**
                     * Scanning status
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
                     * Version number to roll back to
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rollbackVersion;
                    bool m_rollbackVersionHasBeenSet;

                    /**
                     * Release status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Address of the scan result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanHtmlPath;
                    bool m_scanHtmlPathHasBeenSet;

                    /**
                     * Version approval status. 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_versionCurrentStatus;
                    bool m_versionCurrentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_VERSIONBOARDRESP_H_
