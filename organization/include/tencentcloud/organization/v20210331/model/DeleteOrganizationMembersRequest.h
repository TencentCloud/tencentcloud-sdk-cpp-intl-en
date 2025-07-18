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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DeleteOrganizationMembers request structure.
                */
                class DeleteOrganizationMembersRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationMembersRequest();
                    ~DeleteOrganizationMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Uin list of the deleted members.
                     * @return MemberUin Uin list of the deleted members.
                     * 
                     */
                    std::vector<int64_t> GetMemberUin() const;

                    /**
                     * 设置Uin list of the deleted members.
                     * @param _memberUin Uin list of the deleted members.
                     * 
                     */
                    void SetMemberUin(const std::vector<int64_t>& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * Uin list of the deleted members.
                     */
                    std::vector<int64_t> m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_
