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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_

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
                * DescribeMNPSensitiveAPIPermissionApproval request structure.
                */
                class DescribeMNPSensitiveAPIPermissionApprovalRequest : public AbstractModel
                {
                public:
                    DescribeMNPSensitiveAPIPermissionApprovalRequest();
                    ~DescribeMNPSensitiveAPIPermissionApprovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval request number
                     * @return ApprovalNo Approval request number
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval request number
                     * @param _approvalNo Approval request number
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

                private:

                    /**
                     * Approval request number
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALREQUEST_H_
