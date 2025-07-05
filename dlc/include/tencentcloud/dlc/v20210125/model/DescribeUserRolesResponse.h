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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserRole.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserRoles response structure.
                */
                class DescribeUserRolesResponse : public AbstractModel
                {
                public:
                    DescribeUserRolesResponse();
                    ~DescribeUserRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of user roles meeting the enumeration conditions.
                     * @return Total The total number of user roles meeting the enumeration conditions.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The user roles.
                     * @return UserRoles The user roles.
                     * 
                     */
                    std::vector<UserRole> GetUserRoles() const;

                    /**
                     * 判断参数 UserRoles 是否已赋值
                     * @return UserRoles 是否已赋值
                     * 
                     */
                    bool UserRolesHasBeenSet() const;

                private:

                    /**
                     * The total number of user roles meeting the enumeration conditions.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The user roles.
                     */
                    std::vector<UserRole> m_userRoles;
                    bool m_userRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_
