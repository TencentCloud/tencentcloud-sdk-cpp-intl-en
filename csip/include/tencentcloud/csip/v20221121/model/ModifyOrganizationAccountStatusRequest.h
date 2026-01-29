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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyOrganizationAccountStatus request structure.
                */
                class ModifyOrganizationAccountStatusRequest : public AbstractModel
                {
                public:
                    ModifyOrganizationAccountStatusRequest();
                    ~ModifyOrganizationAccountStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Modify Group Account Status. 1: Enabled; 2: Disabled.
                     * @return Status Modify Group Account Status. 1: Enabled; 2: Disabled.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Modify Group Account Status. 1: Enabled; 2: Disabled.
                     * @param _status Modify Group Account Status. 1: Enabled; 2: Disabled.
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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * Modify Group Account Status. 1: Enabled; 2: Disabled.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_
