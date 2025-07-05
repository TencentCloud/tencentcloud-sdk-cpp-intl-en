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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPLISTDATA_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mini program list
                */
                class DescribeMNPListData : public AbstractModel
                {
                public:
                    DescribeMNPListData();
                    ~DescribeMNPListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
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
                     * 获取Mini program icon
                     * @return MNPIcon Mini program icon
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
                     * @param _mNPIcon Mini program icon
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
                     * 获取Mini program name
                     * @return MNPName Mini program name
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
                     * @param _mNPName Mini program name
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
                     * 获取Name of the associated team
                     * @return TeamName Name of the associated team
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Name of the associated team
                     * @param _teamName Name of the associated team
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
                     * 获取Mini program type
                     * @return MNPType Mini program type
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type
                     * @param _mNPType Mini program type
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
                     * 获取Whether the mini program is submitted to the application. 1: Submitted; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Whether the mini program is submitted to the application. 1: Submitted; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Whether the mini program is submitted to the application. 1: Submitted; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Whether the mini program is submitted to the application. 1: Submitted; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Effective status of the bound application. 1: Not effective; 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectStatus Effective status of the bound application. 1: Not effective; 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEffectStatus() const;

                    /**
                     * 设置Effective status of the bound application. 1: Not effective; 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectStatus Effective status of the bound application. 1: Not effective; 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the application bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectMNPVersionId ID of the application bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEffectMNPVersionId() const;

                    /**
                     * 设置ID of the application bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectMNPVersionId ID of the application bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Effective version number of the application that bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectMNPVersion Effective version number of the application that bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEffectMNPVersion() const;

                    /**
                     * 设置Effective version number of the application that bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectMNPVersion Effective version number of the application that bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program icon
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Name of the associated team
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Mini program type
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Whether the mini program is submitted to the application. 1: Submitted; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Effective status of the bound application. 1: Not effective; 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * ID of the application bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_effectMNPVersionId;
                    bool m_effectMNPVersionIdHasBeenSet;

                    /**
                     * Effective version number of the application that bound with the mini program
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_effectMNPVersion;
                    bool m_effectMNPVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPLISTDATA_H_
