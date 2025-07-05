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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPAPPROVALREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPAPPROVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/ApprovalItem.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * ProcessMNPApproval request structure.
                */
                class ProcessMNPApprovalRequest : public AbstractModel
                {
                public:
                    ProcessMNPApprovalRequest();
                    ~ProcessMNPApprovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval ID
                     * @return ApprovalNo Approval ID
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval ID
                     * @param _approvalNo Approval ID
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
                     * 获取Approval details
                     * @return ApprovalItems Approval details
                     * 
                     */
                    std::vector<ApprovalItem> GetApprovalItems() const;

                    /**
                     * 设置Approval details
                     * @param _approvalItems Approval details
                     * 
                     */
                    void SetApprovalItems(const std::vector<ApprovalItem>& _approvalItems);

                    /**
                     * 判断参数 ApprovalItems 是否已赋值
                     * @return ApprovalItems 是否已赋值
                     * 
                     */
                    bool ApprovalItemsHasBeenSet() const;

                private:

                    /**
                     * Approval ID
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Approval details
                     */
                    std::vector<ApprovalItem> m_approvalItems;
                    bool m_approvalItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_PROCESSMNPAPPROVALREQUEST_H_
