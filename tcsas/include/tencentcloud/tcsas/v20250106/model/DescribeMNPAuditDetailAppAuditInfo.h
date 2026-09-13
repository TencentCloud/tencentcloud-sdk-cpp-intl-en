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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITDETAILAPPAUDITINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITDETAILAPPAUDITINFO_H_

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
                * Superapp approval information
                */
                class DescribeMNPAuditDetailAppAuditInfo : public AbstractModel
                {
                public:
                    DescribeMNPAuditDetailAppAuditInfo();
                    ~DescribeMNPAuditDetailAppAuditInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Approval number.</p>
                     * @return AuditNo <p>Approval number.</p>
                     * 
                     */
                    std::string GetAuditNo() const;

                    /**
                     * 设置<p>Approval number.</p>
                     * @param _auditNo <p>Approval number.</p>
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
                     * 获取<p>Approver.</p>
                     * @return AuditUser <p>Approver.</p>
                     * 
                     */
                    std::string GetAuditUser() const;

                    /**
                     * 设置<p>Approver.</p>
                     * @param _auditUser <p>Approver.</p>
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
                     * 获取<p>Creation time.</p>
                     * @return AuditTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetAuditTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _auditTime <p>Creation time.</p>
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
                     * 获取<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @return AuditStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置<p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     * @param _auditStatus <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
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
                     * 获取<p>Approval note.</p>
                     * @return AuditNote <p>Approval note.</p>
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置<p>Approval note.</p>
                     * @param _auditNote <p>Approval note.</p>
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

                private:

                    /**
                     * <p>Approval number.</p>
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * <p>Superapp ID.</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

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
                     * <p>Approver.</p>
                     */
                    std::string m_auditUser;
                    bool m_auditUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_auditTime;
                    bool m_auditTimeHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 0: Pending; 1: Processing; 2: Rejected; 3: Approved; 4: Cancelled.</p>
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * <p>Approval note.</p>
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITDETAILAPPAUDITINFO_H_
