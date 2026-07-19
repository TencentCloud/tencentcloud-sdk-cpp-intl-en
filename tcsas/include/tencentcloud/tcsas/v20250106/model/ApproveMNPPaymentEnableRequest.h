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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVEMNPPAYMENTENABLEREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVEMNPPAYMENTENABLEREQUEST_H_

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
                * ApproveMNPPaymentEnable request structure.
                */
                class ApproveMNPPaymentEnableRequest : public AbstractModel
                {
                public:
                    ApproveMNPPaymentEnableRequest();
                    ~ApproveMNPPaymentEnableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
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
                     * 获取<p>Approval status. Valid values: 10: Approved; 20: Rejected.</p>
                     * @return ApprovalType <p>Approval status. Valid values: 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    int64_t GetApprovalType() const;

                    /**
                     * 设置<p>Approval status. Valid values: 10: Approved; 20: Rejected.</p>
                     * @param _approvalType <p>Approval status. Valid values: 10: Approved; 20: Rejected.</p>
                     * 
                     */
                    void SetApprovalType(const int64_t& _approvalType);

                    /**
                     * 判断参数 ApprovalType 是否已赋值
                     * @return ApprovalType 是否已赋值
                     * 
                     */
                    bool ApprovalTypeHasBeenSet() const;

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

                private:

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Superapp ID.</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Approval number.</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * <p>Approval status. Valid values: 10: Approved; 20: Rejected.</p>
                     */
                    int64_t m_approvalType;
                    bool m_approvalTypeHasBeenSet;

                    /**
                     * <p>Approval note.</p>
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVEMNPPAYMENTENABLEREQUEST_H_
