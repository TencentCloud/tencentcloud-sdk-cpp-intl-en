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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFOREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryInvitationInfo request structure.
                */
                class QueryInvitationInfoRequest : public AbstractModel
                {
                public:
                    QueryInvitationInfoRequest();
                    ~QueryInvitationInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Invite token. array member quantity value: [1, 100].
                     * @return InvitationToken Invite token. array member quantity value: [1, 100].
                     * 
                     */
                    std::vector<std::string> GetInvitationToken() const;

                    /**
                     * 设置Invite token. array member quantity value: [1, 100].
                     * @param _invitationToken Invite token. array member quantity value: [1, 100].
                     * 
                     */
                    void SetInvitationToken(const std::vector<std::string>& _invitationToken);

                    /**
                     * 判断参数 InvitationToken 是否已赋值
                     * @return InvitationToken 是否已赋值
                     * 
                     */
                    bool InvitationTokenHasBeenSet() const;

                private:

                    /**
                     * Invite token. array member quantity value: [1, 100].
                     */
                    std::vector<std::string> m_invitationToken;
                    bool m_invitationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFOREQUEST_H_
