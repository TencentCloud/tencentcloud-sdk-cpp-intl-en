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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPLISTDATA_H_

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
                * Mini program list data.
                */
                class DescribeMNPListData : public AbstractModel
                {
                public:
                    DescribeMNPListData();
                    ~DescribeMNPListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program appid.
                     * @return MNPId Mini program appid.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program appid.
                     * @param _mNPId Mini program appid.
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
                     * 获取Mini program icon.
                     * @return MNPIcon Mini program icon.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon.
                     * @param _mNPIcon Mini program icon.
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
                     * 获取Mini program name.
                     * @return MNPName Mini program name.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name.
                     * @param _mNPName Mini program name.
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
                     * 获取Mini program category.
                     * @return MNPType Mini program category.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program category.
                     * @param _mNPType Mini program category.
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
                     * 获取Mini program available status. Valid values: 1: Available; 2: Removed.
                     * @return Status Mini program available status. Valid values: 1: Available; 2: Removed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Mini program available status. Valid values: 1: Available; 2: Removed.
                     * @param _status Mini program available status. Valid values: 1: Available; 2: Removed.
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
                     * 获取Mini program introduction.
                     * @return MNPIntro Mini program introduction.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction.
                     * @param _mNPIntro Mini program introduction.
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
                     * 获取Superapp name.
                     * @return ApplicationName Superapp name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Superapp name.
                     * @param _applicationName Superapp name.
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
                     * 获取Binding effective status for the superapp. Valid values: 1: Not effective; 2: Effective.
                     * @return EffectStatus Binding effective status for the superapp. Valid values: 1: Not effective; 2: Effective.
                     * 
                     */
                    int64_t GetEffectStatus() const;

                    /**
                     * 设置Binding effective status for the superapp. Valid values: 1: Not effective; 2: Effective.
                     * @param _effectStatus Binding effective status for the superapp. Valid values: 1: Not effective; 2: Effective.
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
                     * 获取Effective mini program version ID bound to the superapp. 
                     * @return EffectMNPVersionId Effective mini program version ID bound to the superapp. 
                     * 
                     */
                    int64_t GetEffectMNPVersionId() const;

                    /**
                     * 设置Effective mini program version ID bound to the superapp. 
                     * @param _effectMNPVersionId Effective mini program version ID bound to the superapp. 
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
                     * 获取Effective mini program version number bound to the superapp. 
                     * @return EffectMNPVersion Effective mini program version number bound to the superapp. 
                     * 
                     */
                    std::string GetEffectMNPVersion() const;

                    /**
                     * 设置Effective mini program version number bound to the superapp. 
                     * @param _effectMNPVersion Effective mini program version number bound to the superapp. 
                     * 
                     */
                    void SetEffectMNPVersion(const std::string& _effectMNPVersion);

                    /**
                     * 判断参数 EffectMNPVersion 是否已赋值
                     * @return EffectMNPVersion 是否已赋值
                     * 
                     */
                    bool EffectMNPVersionHasBeenSet() const;

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
                     * Mini program appid.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program icon.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program name.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Team name. 
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Mini program category.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Mini program available status. Valid values: 1: Available; 2: Removed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Mini program introduction.
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
                     * Superapp name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Binding effective status for the superapp. Valid values: 1: Not effective; 2: Effective.
                     */
                    int64_t m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * Effective mini program version ID bound to the superapp. 
                     */
                    int64_t m_effectMNPVersionId;
                    bool m_effectMNPVersionIdHasBeenSet;

                    /**
                     * Effective mini program version number bound to the superapp. 
                     */
                    std::string m_effectMNPVersion;
                    bool m_effectMNPVersionHasBeenSet;

                    /**
                     * Team ID.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPLISTDATA_H_
