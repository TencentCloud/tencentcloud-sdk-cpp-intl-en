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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Mini program list data
                */
                class DescribeMNGListData : public AbstractModel
                {
                public:
                    DescribeMNGListData();
                    ~DescribeMNGListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game appid</p>
                     * @return MNPId <p>Mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid</p>
                     * @param _mNPId <p>Mini game appid</p>
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
                     * 获取<p>Mini game icon</p>
                     * @return MNPIcon <p>Mini game icon</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini game icon</p>
                     * @param _mNPIcon <p>Mini game icon</p>
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
                     * 获取<p>Mini game name</p>
                     * @return MNPName <p>Mini game name</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini game name</p>
                     * @param _mNPName <p>Mini game name</p>
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
                     * 获取<p>Team name</p>
                     * @return TeamName <p>Team name</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>Team name</p>
                     * @param _teamName <p>Team name</p>
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
                     * 获取<p>Mini game category</p>
                     * @return MNPType <p>Mini game category</p>
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置<p>Mini game category</p>
                     * @param _mNPType <p>Mini game category</p>
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
                     * 获取<p>Mini game available status. Valid values: 1: Available; 2: Not available</p>
                     * @return Status <p>Mini game available status. Valid values: 1: Available; 2: Not available</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Mini game available status. Valid values: 1: Available; 2: Not available</p>
                     * @param _status <p>Mini game available status. Valid values: 1: Available; 2: Not available</p>
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
                     * 获取<p>Mini game introduction</p>
                     * @return MNPIntro <p>Mini game introduction</p>
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置<p>Mini game introduction</p>
                     * @param _mNPIntro <p>Mini game introduction</p>
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
                     * 获取<p>Creator</p>
                     * @return CreateUser <p>Creator</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator</p>
                     * @param _createUser <p>Creator</p>
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
                     * 获取<p>Creation time</p>
                     * @return CreateTime <p>Creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time</p>
                     * @param _createTime <p>Creation time</p>
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
                     * 获取<p>Updater</p>
                     * @return UpdateUser <p>Updater</p>
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置<p>Updater</p>
                     * @param _updateUser <p>Updater</p>
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
                     * 获取<p>Update time</p>
                     * @return UpdateTime <p>Update time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p>
                     * @param _updateTime <p>Update time</p>
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
                     * 获取<p>Superapp name</p>
                     * @return ApplicationName <p>Superapp name</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Superapp name</p>
                     * @param _applicationName <p>Superapp name</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>Effective status of the bound superapp. 1: Not effective; 2: Effective</p>
                     * @return EffectStatus <p>Effective status of the bound superapp. 1: Not effective; 2: Effective</p>
                     * 
                     */
                    int64_t GetEffectStatus() const;

                    /**
                     * 设置<p>Effective status of the bound superapp. 1: Not effective; 2: Effective</p>
                     * @param _effectStatus <p>Effective status of the bound superapp. 1: Not effective; 2: Effective</p>
                     * 
                     */
                    void SetEffectStatus(const int64_t& _effectStatus);

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取<p>Effective version ID of the superapp bound to the mini game</p>
                     * @return EffectMNPVersionId <p>Effective version ID of the superapp bound to the mini game</p>
                     * 
                     */
                    int64_t GetEffectMNPVersionId() const;

                    /**
                     * 设置<p>Effective version ID of the superapp bound to the mini game</p>
                     * @param _effectMNPVersionId <p>Effective version ID of the superapp bound to the mini game</p>
                     * 
                     */
                    void SetEffectMNPVersionId(const int64_t& _effectMNPVersionId);

                    /**
                     * 判断参数 EffectMNPVersionId 是否已赋值
                     * @return EffectMNPVersionId 是否已赋值
                     * 
                     */
                    bool EffectMNPVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Effective version number of the superapp bound to the mini game</p>
                     * @return EffectMNPVersion <p>Effective version number of the superapp bound to the mini game</p>
                     * 
                     */
                    std::string GetEffectMNPVersion() const;

                    /**
                     * 设置<p>Effective version number of the superapp bound to the mini game</p>
                     * @param _effectMNPVersion <p>Effective version number of the superapp bound to the mini game</p>
                     * 
                     */
                    void SetEffectMNPVersion(const std::string& _effectMNPVersion);

                    /**
                     * 判断参数 EffectMNPVersion 是否已赋值
                     * @return EffectMNPVersion 是否已赋值
                     * 
                     */
                    bool EffectMNPVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini game icon</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * <p>Mini game name</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Team name</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Mini game category</p>
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * <p>Mini game available status. Valid values: 1: Available; 2: Not available</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Mini game introduction</p>
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * <p>Creator</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Updater</p>
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * <p>Update time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Superapp name</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>Effective status of the bound superapp. 1: Not effective; 2: Effective</p>
                     */
                    int64_t m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * <p>Effective version ID of the superapp bound to the mini game</p>
                     */
                    int64_t m_effectMNPVersionId;
                    bool m_effectMNPVersionIdHasBeenSet;

                    /**
                     * <p>Effective version number of the superapp bound to the mini game</p>
                     */
                    std::string m_effectMNPVersion;
                    bool m_effectMNPVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGLISTDATA_H_
