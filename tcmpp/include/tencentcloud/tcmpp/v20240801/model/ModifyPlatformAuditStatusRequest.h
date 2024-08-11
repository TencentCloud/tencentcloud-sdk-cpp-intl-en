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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYPLATFORMAUDITSTATUSREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYPLATFORMAUDITSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/AuditInfoReq.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyPlatformAuditStatus request structure.
                */
                class ModifyPlatformAuditStatusRequest : public AbstractModel
                {
                public:
                    ModifyPlatformAuditStatusRequest();
                    ~ModifyPlatformAuditStatusRequest() = default;
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
                     * 获取Approval result
                     * @return AuditResult Approval result
                     * 
                     */
                    int64_t GetAuditResult() const;

                    /**
                     * 设置Approval result
                     * @param _auditResult Approval result
                     * 
                     */
                    void SetAuditResult(const int64_t& _auditResult);

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

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
                     * 获取Approval description
                     * @return AuditNote Approval description
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置Approval description
                     * @param _auditNote Approval description
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
                     * 获取Approval details
                     * @return AuditItems Approval details
                     * 
                     */
                    std::vector<AuditInfoReq> GetAuditItems() const;

                    /**
                     * 设置Approval details
                     * @param _auditItems Approval details
                     * 
                     */
                    void SetAuditItems(const std::vector<AuditInfoReq>& _auditItems);

                    /**
                     * 判断参数 AuditItems 是否已赋值
                     * @return AuditItems 是否已赋值
                     * 
                     */
                    bool AuditItemsHasBeenSet() const;

                private:

                    /**
                     * Approval ticket ID
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * Approval result
                     */
                    int64_t m_auditResult;
                    bool m_auditResultHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Approval description
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                    /**
                     * Approval details
                     */
                    std::vector<AuditInfoReq> m_auditItems;
                    bool m_auditItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYPLATFORMAUDITSTATUSREQUEST_H_
