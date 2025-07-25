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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYSENSITIVEAPIAUDITSTATUSREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYSENSITIVEAPIAUDITSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySensitiveAPIAuditStatus request structure.
                */
                class ModifySensitiveAPIAuditStatusRequest : public AbstractModel
                {
                public:
                    ModifySensitiveAPIAuditStatusRequest();
                    ~ModifySensitiveAPIAuditStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval ticket ID
                     * @return AuditNo Approval ticket ID
                     * 
                     */
                    std::string GetAuditNo() const;

                    /**
                     * 设置Approval ticket ID
                     * @param _auditNo Approval ticket ID
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
                     * 获取Approval status 20 Rejected 30 Approved
                     * @return AuditStatus Approval status 20 Rejected 30 Approved
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Approval status 20 Rejected 30 Approved
                     * @param _auditStatus Approval status 20 Rejected 30 Approved
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
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Approval notes
                     * @return AuditNote Approval notes
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置Approval notes
                     * @param _auditNote Approval notes
                     * 
                     */
                    void SetAuditNote(const std::string& _auditNote);

                    /**
                     * 判断参数 AuditNote 是否已赋值
                     * @return AuditNote 是否已赋值
                     * 
                     */
                    bool AuditNoteHasBeenSet() const;

                private:

                    /**
                     * Approval ticket ID
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * Approval status 20 Rejected 30 Approved
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Approval notes
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYSENSITIVEAPIAUDITSTATUSREQUEST_H_
