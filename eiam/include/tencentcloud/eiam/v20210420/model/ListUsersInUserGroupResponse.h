/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUsersInUserGroup response structure.
                */
                class ListUsersInUserGroupResponse : public AbstractModel
                {
                public:
                    ListUsersInUserGroupResponse();
                    ~ListUsersInUserGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupId User group ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取Returned user information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserInfo Returned user information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserInfo> GetUserInfo() const;

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取Total number of returned user information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalNum Total number of returned user information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * User group ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * Returned user information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserInfo> m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * Total number of returned user information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPRESPONSE_H_
