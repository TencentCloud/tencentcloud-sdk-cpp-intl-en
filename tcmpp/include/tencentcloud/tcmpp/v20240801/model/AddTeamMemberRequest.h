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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_ADDTEAMMEMBERREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_ADDTEAMMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateTeamMemberInfoReq.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * AddTeamMember request structure.
                */
                class AddTeamMemberRequest : public AbstractModel
                {
                public:
                    AddTeamMemberRequest();
                    ~AddTeamMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Team ID
                     * @return TeamId Team ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
                     * @param _teamId Team ID
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Members to be added
                     * @return MemberList Members to be added
                     * 
                     */
                    std::vector<CreateTeamMemberInfoReq> GetMemberList() const;

                    /**
                     * 设置Members to be added
                     * @param _memberList Members to be added
                     * 
                     */
                    void SetMemberList(const std::vector<CreateTeamMemberInfoReq>& _memberList);

                    /**
                     * 判断参数 MemberList 是否已赋值
                     * @return MemberList 是否已赋值
                     * 
                     */
                    bool MemberListHasBeenSet() const;

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
                     * Team ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Members to be added
                     */
                    std::vector<CreateTeamMemberInfoReq> m_memberList;
                    bool m_memberListHasBeenSet;

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

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_ADDTEAMMEMBERREQUEST_H_
