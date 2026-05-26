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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ProcessMNPSensitiveAPIPermissionApproval request structure.
                */
                class ProcessMNPSensitiveAPIPermissionApprovalRequest : public AbstractModel
                {
                public:
                    ProcessMNPSensitiveAPIPermissionApprovalRequest();
                    ~ProcessMNPSensitiveAPIPermissionApprovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval number.
                     * @return ApprovalNo Approval number.
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval number.
                     * @param _approvalNo Approval number.
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
                     * 获取Approval status. Valid values: 1: Processing; 20: Rejected; 30: Approved.
                     * @return ApprovalStatus Approval status. Valid values: 1: Processing; 20: Rejected; 30: Approved.
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置Approval status. Valid values: 1: Processing; 20: Rejected; 30: Approved.
                     * @param _approvalStatus Approval status. Valid values: 1: Processing; 20: Rejected; 30: Approved.
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
                     * 获取Platform ID.
                     * @return PlatformId Platform ID.
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID.
                     * @param _platformId Platform ID.
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
                     * 获取Approval note.
                     * @return ApprovalNote Approval note.
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置Approval note.
                     * @param _approvalNote Approval note.
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
                     * Approval number.
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Approval status. Valid values: 1: Processing; 20: Rejected; 30: Approved.
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * Platform ID.
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Approval note.
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_
