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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_AUDITINFOREQ_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_AUDITINFOREQ_H_

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
                * Approval information
                */
                class AuditInfoReq : public AbstractModel
                {
                public:
                    AuditInfoReq();
                    ~AuditInfoReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Approval status 2- Rejected
3 - Approved
                     * @return AuditStatus Approval status 2- Rejected
3 - Approved
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Approval status 2- Rejected
3 - Approved
                     * @param _auditStatus Approval status 2- Rejected
3 - Approved
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

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Approval status 2- Rejected
3 - Approved
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Approval description

                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_AUDITINFOREQ_H_
