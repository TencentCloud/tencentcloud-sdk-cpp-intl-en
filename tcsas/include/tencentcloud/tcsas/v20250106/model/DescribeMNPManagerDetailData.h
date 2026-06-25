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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/MNPDetailI18nVO.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program details.
                */
                class DescribeMNPManagerDetailData : public AbstractModel
                {
                public:
                    DescribeMNPManagerDetailData();
                    ~DescribeMNPManagerDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini program category.</p>
                     * @return MNPType <p>Mini program category.</p>
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置<p>Mini program category.</p>
                     * @param _mNPType <p>Mini program category.</p>
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取<p>Mini program appid.</p>
                     * @return MNPId <p>Mini program appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program appid.</p>
                     * @param _mNPId <p>Mini program appid.</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini program name.</p>
                     * @return MNPName <p>Mini program name.</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini program name.</p>
                     * @param _mNPName <p>Mini program name.</p>
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取<p>Mini program icon.</p>
                     * @return MNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini program icon.</p>
                     * @param _mNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取<p>Mini program introduction.</p>
                     * @return MNPIntro <p>Mini program introduction.</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini program introduction.</p>
                     * @param _mNPIntro <p>Mini program introduction.</p>
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                    /**
                     * 获取<p>Mini program description.</p>
                     * @return MNPDesc <p>Mini program description.</p>
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置<p>Mini program description.</p>
                     * @param _mNPDesc <p>Mini program description.</p>
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Creator.</p>
                     * @return CreateUser <p>Creator.</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _createUser <p>Creator.</p>
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取<p>Access status. Valid values: 1: Not connected; 2: Connected.</p>
                     * @return AccessStatus <p>Access status. Valid values: 1: Not connected; 2: Connected.</p>
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置<p>Access status. Valid values: 1: Not connected; 2: Connected.</p>
                     * @param _accessStatus <p>Access status. Valid values: 1: Not connected; 2: Connected.</p>
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

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
                     * 获取<p>Mini program available status. Valid values: 1: Available; 2: Not available.</p>
                     * @return Status <p>Mini program available status. Valid values: 1: Available; 2: Not available.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Mini program available status. Valid values: 1: Available; 2: Not available.</p>
                     * @param _status <p>Mini program available status. Valid values: 1: Available; 2: Not available.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>The mini program name and description in multiple languages.</p>
                     * @return I18nList <p>The mini program name and description in multiple languages.</p>
                     * 
                     */
                    std::vector<MNPDetailI18nVO> GetI18nList() const;

                    /**
                     * 设置<p>The mini program name and description in multiple languages.</p>
                     * @param _i18nList <p>The mini program name and description in multiple languages.</p>
                     * 
                     */
                    void SetI18nList(const std::vector<MNPDetailI18nVO>& _i18nList);

                    /**
                     * 判断参数 I18nList 是否已赋值
                     * @return I18nList 是否已赋值
                     * 
                     */
                    bool I18nListHasBeenSet() const;

                    /**
                     * 获取Team type ID. Valid values: 1: Mini program team; 2: Superapp team; 3: Service provider team.
                     * @return TeamTypeId Team type ID. Valid values: 1: Mini program team; 2: Superapp team; 3: Service provider team.
                     * 
                     */
                    int64_t GetTeamTypeId() const;

                    /**
                     * 设置Team type ID. Valid values: 1: Mini program team; 2: Superapp team; 3: Service provider team.
                     * @param _teamTypeId Team type ID. Valid values: 1: Mini program team; 2: Superapp team; 3: Service provider team.
                     * 
                     */
                    void SetTeamTypeId(const int64_t& _teamTypeId);

                    /**
                     * 判断参数 TeamTypeId 是否已赋值
                     * @return TeamTypeId 是否已赋值
                     * 
                     */
                    bool TeamTypeIdHasBeenSet() const;

                private:

                    /**
                     * <p>Mini program category.</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini program name.</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini program icon.</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini program introduction.</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Mini program description.</p>
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Access status. Valid values: 1: Not connected; 2: Connected.</p>
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * <p>Team name.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Team ID.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Mini program available status. Valid values: 1: Available; 2: Not available.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>The mini program name and description in multiple languages.</p>
                     */
                    std::vector<MNPDetailI18nVO> m_i18nList;
                    bool m_i18nListHasBeenSet;

                    /**
                     * Team type ID. Valid values: 1: Mini program team; 2: Superapp team; 3: Service provider team.
                     */
                    int64_t m_teamTypeId;
                    bool m_teamTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_
