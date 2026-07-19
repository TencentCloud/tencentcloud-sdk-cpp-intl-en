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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/CategoryInfo.h>
#include <tencentcloud/tcsas/v20250106/model/AgeRatingItem.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * The mini program or mini game data associated with a superapp.
                */
                class DescribeApplicationMNPInfoResp : public AbstractModel
                {
                public:
                    DescribeApplicationMNPInfoResp();
                    ~DescribeApplicationMNPInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini program or mini game appid.</p>
                     * @return MNPId <p>Mini program or mini game appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program or mini game appid.</p>
                     * @param _mNPId <p>Mini program or mini game appid.</p>
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
                     * 获取<p>Mini program or mini game icon.</p>
                     * @return MNPIcon <p>Mini program or mini game icon.</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini program or mini game icon.</p>
                     * @param _mNPIcon <p>Mini program or mini game icon.</p>
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
                     * 获取<p>Mini program or mini game name.</p>
                     * @return MNPName <p>Mini program or mini game name.</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini program or mini game name.</p>
                     * @param _mNPName <p>Mini program or mini game name.</p>
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
                     * 获取<p>Mini program or mini game introduction.</p>
                     * @return MNPIntro <p>Mini program or mini game introduction.</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini program or mini game introduction.</p>
                     * @param _mNPIntro <p>Mini program or mini game introduction.</p>
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
                     * 获取<p>Last modifier.</p>
                     * @return UpdateUser <p>Last modifier.</p>
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置<p>Last modifier.</p>
                     * @param _updateUser <p>Last modifier.</p>
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取<p>Last modified time.</p>
                     * @return UpdateTime <p>Last modified time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last modified time.</p>
                     * @param _updateTime <p>Last modified time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.</p>
                     * @return OnlineStatus <p>Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.</p>
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置<p>Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.</p>
                     * @param _onlineStatus <p>Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.</p>
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取<p>Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.</p>
                     * @return EngineType <p>Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.</p>
                     * 
                     */
                    int64_t GetEngineType() const;

                    /**
                     * 设置<p>Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.</p>
                     * @param _engineType <p>Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.</p>
                     * 
                     */
                    void SetEngineType(const int64_t& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取<p>Category information.</p>
                     * @return CategoryList <p>Category information.</p>
                     * 
                     */
                    std::vector<CategoryInfo> GetCategoryList() const;

                    /**
                     * 设置<p>Category information.</p>
                     * @param _categoryList <p>Category information.</p>
                     * 
                     */
                    void SetCategoryList(const std::vector<CategoryInfo>& _categoryList);

                    /**
                     * 判断参数 CategoryList 是否已赋值
                     * @return CategoryList 是否已赋值
                     * 
                     */
                    bool CategoryListHasBeenSet() const;

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
                     * 获取<p>Team type ID.</p>
                     * @return TeamTypeId <p>Team type ID.</p>
                     * 
                     */
                    int64_t GetTeamTypeId() const;

                    /**
                     * 设置<p>Team type ID.</p>
                     * @param _teamTypeId <p>Team type ID.</p>
                     * 
                     */
                    void SetTeamTypeId(const int64_t& _teamTypeId);

                    /**
                     * 判断参数 TeamTypeId 是否已赋值
                     * @return TeamTypeId 是否已赋值
                     * 
                     */
                    bool TeamTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>Age rating information.</p>
                     * @return AgeRatings <p>Age rating information.</p>
                     * 
                     */
                    std::vector<AgeRatingItem> GetAgeRatings() const;

                    /**
                     * 设置<p>Age rating information.</p>
                     * @param _ageRatings <p>Age rating information.</p>
                     * 
                     */
                    void SetAgeRatings(const std::vector<AgeRatingItem>& _ageRatings);

                    /**
                     * 判断参数 AgeRatings 是否已赋值
                     * @return AgeRatings 是否已赋值
                     * 
                     */
                    bool AgeRatingsHasBeenSet() const;

                private:

                    /**
                     * <p>Mini program or mini game appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini program or mini game icon.</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini program or mini game name.</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini program or mini game introduction.</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modifier.</p>
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * <p>Last modified time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.</p>
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * <p>Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.</p>
                     */
                    int64_t m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>Category information.</p>
                     */
                    std::vector<CategoryInfo> m_categoryList;
                    bool m_categoryListHasBeenSet;

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
                     * <p>Team type ID.</p>
                     */
                    int64_t m_teamTypeId;
                    bool m_teamTypeIdHasBeenSet;

                    /**
                     * <p>Age rating information.</p>
                     */
                    std::vector<AgeRatingItem> m_ageRatings;
                    bool m_ageRatingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPINFORESP_H_
