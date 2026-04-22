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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * CreateTeam request structure.
                */
                class CreateTeamRequest : public AbstractModel
                {
                public:
                    CreateTeamRequest();
                    ~CreateTeamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Team name
                     * @return TeamName Team name
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
                     * @param _teamName Team name
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Admin name
                     * @return AdminUserId Admin name
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置Admin name
                     * @param _adminUserId Admin name
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取Permission assigned to the team. 1: Mini program; 2: Application (only one of these types is supported)
                     * @return TeamRoleTypeList Permission assigned to the team. 1: Mini program; 2: Application (only one of these types is supported)
                     * 
                     */
                    std::vector<int64_t> GetTeamRoleTypeList() const;

                    /**
                     * 设置Permission assigned to the team. 1: Mini program; 2: Application (only one of these types is supported)
                     * @param _teamRoleTypeList Permission assigned to the team. 1: Mini program; 2: Application (only one of these types is supported)
                     * 
                     */
                    void SetTeamRoleTypeList(const std::vector<int64_t>& _teamRoleTypeList);

                    /**
                     * 判断参数 TeamRoleTypeList 是否已赋值
                     * @return TeamRoleTypeList 是否已赋值
                     * 
                     */
                    bool TeamRoleTypeListHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Platform ID, required for API call
                     * @return PlatformId Platform ID, required for API call
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID, required for API call
                     * @param _platformId Platform ID, required for API call
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Associated team ID
                     * @return RelatedTeamId Associated team ID
                     * 
                     */
                    std::string GetRelatedTeamId() const;

                    /**
                     * 设置Associated team ID
                     * @param _relatedTeamId Associated team ID
                     * 
                     */
                    void SetRelatedTeamId(const std::string& _relatedTeamId);

                    /**
                     * 判断参数 RelatedTeamId 是否已赋值
                     * @return RelatedTeamId 是否已赋值
                     * 
                     */
                    bool RelatedTeamIdHasBeenSet() const;

                private:

                    /**
                     * Team name
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Admin name
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * Permission assigned to the team. 1: Mini program; 2: Application (only one of these types is supported)
                     */
                    std::vector<int64_t> m_teamRoleTypeList;
                    bool m_teamRoleTypeListHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Platform ID, required for API call
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Associated team ID
                     */
                    std::string m_relatedTeamId;
                    bool m_relatedTeamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMREQUEST_H_
