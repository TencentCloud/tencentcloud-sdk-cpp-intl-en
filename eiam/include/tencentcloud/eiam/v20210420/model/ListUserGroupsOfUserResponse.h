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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserGroupInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroupsOfUser response structure.
                */
                class ListUserGroupsOfUserResponse : public AbstractModel
                {
                public:
                    ListUserGroupsOfUserResponse();
                    ~ListUserGroupsOfUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupIds List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取User ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取List of information of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupInfoList List of information of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserGroupInfo> GetUserGroupInfoList() const;

                    /**
                     * 判断参数 UserGroupInfoList 是否已赋值
                     * @return UserGroupInfoList 是否已赋值
                     * 
                     */
                    bool UserGroupInfoListHasBeenSet() const;

                    /**
                     * 获取Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * User ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * List of information of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserGroupInfo> m_userGroupInfoList;
                    bool m_userGroupInfoListHasBeenSet;

                    /**
                     * Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_
