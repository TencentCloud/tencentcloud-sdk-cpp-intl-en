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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYTEAMREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYTEAMREQUEST_H_

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
                * ModifyTeam request structure.
                */
                class ModifyTeamRequest : public AbstractModel
                {
                public:
                    ModifyTeamRequest();
                    ~ModifyTeamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Team ID.</p>
                     * @return TeamId <p>Team ID.</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Team ID.</p>
                     * @param _teamId <p>Team ID.</p>
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
                     * 获取<p>Team name.</p>
                     * @return TeamName <p>Team name.</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>Team name.</p>
                     * @param _teamName <p>Team name.</p>
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
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
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
                     * 获取<p>Team admin.</p>
                     * @return AdminUserId <p>Team admin.</p>
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置<p>Team admin.</p>
                     * @param _adminUserId <p>Team admin.</p>
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
                     * 获取<p>Team admin user IDs.</p>
                     * @return AdminUserIds <p>Team admin user IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetAdminUserIds() const;

                    /**
                     * 设置<p>Team admin user IDs.</p>
                     * @param _adminUserIds <p>Team admin user IDs.</p>
                     * 
                     */
                    void SetAdminUserIds(const std::vector<std::string>& _adminUserIds);

                    /**
                     * 判断参数 AdminUserIds 是否已赋值
                     * @return AdminUserIds 是否已赋值
                     * 
                     */
                    bool AdminUserIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Team ID.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Team admin.</p>
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * <p>Team admin user IDs.</p>
                     */
                    std::vector<std::string> m_adminUserIds;
                    bool m_adminUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYTEAMREQUEST_H_
