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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/OrgNodeChildUserInfo.h>
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
                * ListUsersInOrgNode response structure.
                */
                class ListUsersInOrgNodeResponse : public AbstractModel
                {
                public:
                    ListUsersInOrgNodeResponse();
                    ~ListUsersInOrgNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取User information list under the organization sub-node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeChildUserInfo User information list under the organization sub-node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OrgNodeChildUserInfo> GetOrgNodeChildUserInfo() const;

                    /**
                     * 判断参数 OrgNodeChildUserInfo 是否已赋值
                     * @return OrgNodeChildUserInfo 是否已赋值
                     * 
                     */
                    bool OrgNodeChildUserInfoHasBeenSet() const;

                    /**
                     * 获取Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeId Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserInfo User information list.
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
                     * 获取Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalUserNum Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalUserNum() const;

                    /**
                     * 判断参数 TotalUserNum 是否已赋值
                     * @return TotalUserNum 是否已赋值
                     * 
                     */
                    bool TotalUserNumHasBeenSet() const;

                    /**
                     * 获取Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeIdPath Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgNodeIdPath() const;

                    /**
                     * 判断参数 OrgNodeIdPath 是否已赋值
                     * @return OrgNodeIdPath 是否已赋值
                     * 
                     */
                    bool OrgNodeIdPathHasBeenSet() const;

                    /**
                     * 获取Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeNamePath Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgNodeNamePath() const;

                    /**
                     * 判断参数 OrgNodeNamePath 是否已赋值
                     * @return OrgNodeNamePath 是否已赋值
                     * 
                     */
                    bool OrgNodeNamePathHasBeenSet() const;

                private:

                    /**
                     * User information list under the organization sub-node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgNodeChildUserInfo> m_orgNodeChildUserInfo;
                    bool m_orgNodeChildUserInfoHasBeenSet;

                    /**
                     * Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserInfo> m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalUserNum;
                    bool m_totalUserNumHasBeenSet;

                    /**
                     * Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeIdPath;
                    bool m_orgNodeIdPathHasBeenSet;

                    /**
                     * Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeNamePath;
                    bool m_orgNodeNamePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINORGNODERESPONSE_H_
