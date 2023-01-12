/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ServiceVersionBrief.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Application details
                */
                class TemService : public AbstractModel
                {
                public:
                    TemService();
                    ~TemService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationId Version ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Version ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationId Version ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Description Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取ID of the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentId ID of the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置ID of the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnvironmentId ID of the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateDate Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreateDate Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ModifyDate Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ModifyDate Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Modifier
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Modifier Modifier
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置Modifier
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Modifier Modifier
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取Creator account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Creator Creator account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Creator Creator account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取TCR Individual or TCR Enterprise
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RepoType TCR Individual or TCR Enterprise
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置TCR Individual or TCR Enterprise
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RepoType TCR Individual or TCR Enterprise
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取ID of the TCR Enterprise instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceId ID of the TCR Enterprise instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the TCR Enterprise instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceId ID of the TCR Enterprise instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the TCR instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RepoName Name of the TCR instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置Name of the TCR instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RepoName Name of the TCR instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CodingLanguage Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CodingLanguage Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取Deployment mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeployMode Deployment mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DeployMode Deployment mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentName Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnvironmentName Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取The instance information where the application is running
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ActiveVersions The instance information where the application is running
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceVersionBrief> GetActiveVersions() const;

                    /**
                     * 设置The instance information where the application is running
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ActiveVersions The instance information where the application is running
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetActiveVersions(const std::vector<ServiceVersionBrief>& _activeVersions);

                    /**
                     * 判断参数 ActiveVersions 是否已赋值
                     * @return ActiveVersions 是否已赋值
                     */
                    bool ActiveVersionsHasBeenSet() const;

                    /**
                     * 获取Whether to enable link tracing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableTracing Whether to enable link tracing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEnableTracing() const;

                    /**
                     * 设置Whether to enable link tracing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnableTracing Whether to enable link tracing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnableTracing(const uint64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasAuthority Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetHasAuthority() const;

                    /**
                     * 设置Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HasAuthority Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHasAuthority(const bool& _hasAuthority);

                    /**
                     * 判断参数 HasAuthority 是否已赋值
                     * @return HasAuthority 是否已赋值
                     */
                    bool HasAuthorityHasBeenSet() const;

                private:

                    /**
                     * Version ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ID of the environment
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Modifier
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * Creator account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * TCR Individual or TCR Enterprise
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * ID of the TCR Enterprise instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the TCR instance
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * Programming Language
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * Deployment mode
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Environment name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * The instance information where the application is running
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceVersionBrief> m_activeVersions;
                    bool m_activeVersionsHasBeenSet;

                    /**
                     * Whether to enable link tracing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasAuthority;
                    bool m_hasAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMSERVICE_H_
