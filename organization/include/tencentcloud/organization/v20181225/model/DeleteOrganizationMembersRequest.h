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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
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
                     * 获取List of UINs of members to be deleted
                     * @return Uins List of UINs of members to be deleted
                     * 
                     */
                    std::vector<uint64_t> GetUins() const;

                    /**
                     * 设置List of UINs of members to be deleted
                     * @param _uins List of UINs of members to be deleted
                     * 
                     */
                    void SetUins(const std::vector<uint64_t>& _uins);

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     * 
                     */
                    bool UinsHasBeenSet() const;

                private:

                    /**
                     * List of UINs of members to be deleted
                     */
                    std::vector<uint64_t> m_uins;
                    bool m_uinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERSREQUEST_H_
