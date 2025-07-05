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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DeleteUserGroup request structure.
                */
                class DeleteUserGroupRequest : public AbstractModel
                {
                public:
                    DeleteUserGroupRequest();
                    ~DeleteUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID, which is globally unique.
                     * @return UserGroupId User group ID, which is globally unique.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID, which is globally unique.
                     * @param _userGroupId User group ID, which is globally unique.
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                private:

                    /**
                     * User group ID, which is globally unique.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERGROUPREQUEST_H_
