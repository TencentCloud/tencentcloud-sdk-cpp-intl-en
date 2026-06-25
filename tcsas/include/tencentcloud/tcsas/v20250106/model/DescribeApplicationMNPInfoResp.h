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
                     * 获取Mini program or mini game appid.
                     * @return MNPId Mini program or mini game appid.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program or mini game appid.
                     * @param _mNPId Mini program or mini game appid.
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
                     * 获取Mini program or mini game icon.
                     * @return MNPIcon Mini program or mini game icon.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program or mini game icon.
                     * @param _mNPIcon Mini program or mini game icon.
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
                     * 获取Mini program or mini game name.
                     * @return MNPName Mini program or mini game name.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program or mini game name.
                     * @param _mNPName Mini program or mini game name.
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
                     * 获取Mini program or mini game information.
                     * @return MNPIntro Mini program or mini game information.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program or mini game information.
                     * @param _mNPIntro Mini program or mini game information.
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
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Last modifier.
                     * @return UpdateUser Last modifier.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Last modifier.
                     * @param _updateUser Last modifier.
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
                     * 获取Last modified time.
                     * @return UpdateTime Last modified time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time.
                     * @param _updateTime Last modified time.
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
                     * 获取Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.
                     * @return OnlineStatus Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.
                     * @param _onlineStatus Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.
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
                     * 获取Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.
                     * @return EngineType Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.
                     * 
                     */
                    int64_t GetEngineType() const;

                    /**
                     * 设置Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.
                     * @param _engineType Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.
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
                     * 获取Category information.
                     * @return CategoryList Category information.
                     * 
                     */
                    std::vector<CategoryInfo> GetCategoryList() const;

                    /**
                     * 设置Category information.
                     * @param _categoryList Category information.
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
                     * 获取Team ID.
                     * @return TeamId Team ID.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID.
                     * @param _teamId Team ID.
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
                     * 获取Team name.
                     * @return TeamName Team name.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name.
                     * @param _teamName Team name.
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
                     * 获取Team type ID.
                     * @return TeamTypeId Team type ID.
                     * 
                     */
                    int64_t GetTeamTypeId() const;

                    /**
                     * 设置Team type ID.
                     * @param _teamTypeId Team type ID.
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
                     * Mini program or mini game appid.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program or mini game icon.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program or mini game name.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program or mini game information.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modifier.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Last modified time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Available status. Valid value: 0: Not available; 1 Available; 2: In canary release.
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * Engine type. Specifies the runtime engine by product type. Valid values: 0: Mini program; 1: Mini game.
                     */
                    int64_t m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Category information.
                     */
                    std::vector<CategoryInfo> m_categoryList;
                    bool m_categoryListHasBeenSet;

                    /**
                     * Team ID.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Team type ID.
                     */
                    int64_t m_teamTypeId;
                    bool m_teamTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPINFORESP_H_
