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
                     * 获取<p>Administrator name.</p>
                     * @return AdminUserId <p>Administrator name.</p>
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置<p>Administrator name.</p>
                     * @param _adminUserId <p>Administrator name.</p>
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
                     * 获取<p>Team role type. Valid values: 1: Mini program; 2: Superapp (only one type is currently supported).</p>
                     * @return TeamRoleTypeList <p>Team role type. Valid values: 1: Mini program; 2: Superapp (only one type is currently supported).</p>
                     * 
                     */
                    std::vector<int64_t> GetTeamRoleTypeList() const;

                    /**
                     * 设置<p>Team role type. Valid values: 1: Mini program; 2: Superapp (only one type is currently supported).</p>
                     * @param _teamRoleTypeList <p>Team role type. Valid values: 1: Mini program; 2: Superapp (only one type is currently supported).</p>
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
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
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
                     * 获取<p>Platform ID, required for API call.</p>
                     * @return PlatformId <p>Platform ID, required for API call.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID, required for API call.</p>
                     * @param _platformId <p>Platform ID, required for API call.</p>
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
                     * 获取<p>Associated team ID.</p>
                     * @return RelatedTeamId <p>Associated team ID.</p>
                     * 
                     */
                    std::string GetRelatedTeamId() const;

                    /**
                     * 设置<p>Associated team ID.</p>
                     * @param _relatedTeamId <p>Associated team ID.</p>
                     * 
                     */
                    void SetRelatedTeamId(const std::string& _relatedTeamId);

                    /**
                     * 判断参数 RelatedTeamId 是否已赋值
                     * @return RelatedTeamId 是否已赋值
                     * 
                     */
                    bool RelatedTeamIdHasBeenSet() const;

                    /**
                     * 获取<p>Team expiration time as a Unix timestamp in seconds. 0 indicates no expiration. This parameter takes effect only when creating a mini program team.</p>
                     * @return ExpiryTime <p>Team expiration time as a Unix timestamp in seconds. 0 indicates no expiration. This parameter takes effect only when creating a mini program team.</p>
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 设置<p>Team expiration time as a Unix timestamp in seconds. 0 indicates no expiration. This parameter takes effect only when creating a mini program team.</p>
                     * @param _expiryTime <p>Team expiration time as a Unix timestamp in seconds. 0 indicates no expiration. This parameter takes effect only when creating a mini program team.</p>
                     * 
                     */
                    void SetExpiryTime(const int64_t& _expiryTime);

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取<p>Administrator user IDs.</p>
                     * @return AdminUserIds <p>Administrator user IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetAdminUserIds() const;

                    /**
                     * 设置<p>Administrator user IDs.</p>
                     * @param _adminUserIds <p>Administrator user IDs.</p>
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
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Administrator name.</p>
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * <p>Team role type. Valid values: 1: Mini program; 2: Superapp (only one type is currently supported).</p>
                     */
                    std::vector<int64_t> m_teamRoleTypeList;
                    bool m_teamRoleTypeListHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Platform ID, required for API call.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Associated team ID.</p>
                     */
                    std::string m_relatedTeamId;
                    bool m_relatedTeamIdHasBeenSet;

                    /**
                     * <p>Team expiration time as a Unix timestamp in seconds. 0 indicates no expiration. This parameter takes effect only when creating a mini program team.</p>
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * <p>Administrator user IDs.</p>
                     */
                    std::vector<std::string> m_adminUserIds;
                    bool m_adminUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMREQUEST_H_
