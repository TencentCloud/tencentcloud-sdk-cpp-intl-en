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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/UseDefaultRepoParameters.h>
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
                * CreateApplication request structure.
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application name
                     * @return ApplicationName Application name
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
                     * @param _applicationName Application name
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to use the default image service. `1`: yes; `0`: no
                     * @return UseDefaultImageService Whether to use the default image service. `1`: yes; `0`: no
                     * 
                     */
                    int64_t GetUseDefaultImageService() const;

                    /**
                     * 设置Whether to use the default image service. `1`: yes; `0`: no
                     * @param _useDefaultImageService Whether to use the default image service. `1`: yes; `0`: no
                     * 
                     */
                    void SetUseDefaultImageService(const int64_t& _useDefaultImageService);

                    /**
                     * 判断参数 UseDefaultImageService 是否已赋值
                     * @return UseDefaultImageService 是否已赋值
                     * 
                     */
                    bool UseDefaultImageServiceHasBeenSet() const;

                    /**
                     * 获取Type of the bound repository. `0`: TCR Personal; `1`: TCR Enterprise
                     * @return RepoType Type of the bound repository. `0`: TCR Personal; `1`: TCR Enterprise
                     * 
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置Type of the bound repository. `0`: TCR Personal; `1`: TCR Enterprise
                     * @param _repoType Type of the bound repository. `0`: TCR Personal; `1`: TCR Enterprise
                     * 
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取TCR Enterprise instance ID
                     * @return InstanceId TCR Enterprise instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TCR Enterprise instance ID
                     * @param _instanceId TCR Enterprise instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Address of the bound image server
                     * @return RepoServer Address of the bound image server
                     * 
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置Address of the bound image server
                     * @param _repoServer Address of the bound image server
                     * 
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     * 
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取Name of the bound image repository
                     * @return RepoName Name of the bound image repository
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置Name of the bound image repository
                     * @param _repoName Name of the bound image repository
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Application subnet
                     * @return SubnetList Application subnet
                     * 
                     */
                    std::vector<std::string> GetSubnetList() const;

                    /**
                     * 设置Application subnet
                     * @param _subnetList Application subnet
                     * 
                     */
                    void SetSubnetList(const std::vector<std::string>& _subnetList);

                    /**
                     * 判断参数 SubnetList 是否已赋值
                     * @return SubnetList 是否已赋值
                     * 
                     */
                    bool SubnetListHasBeenSet() const;

                    /**
                     * 获取Programming language 
- JAVA
- OTHER
                     * @return CodingLanguage Programming language 
- JAVA
- OTHER
                     * 
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置Programming language 
- JAVA
- OTHER
                     * @param _codingLanguage Programming language 
- JAVA
- OTHER
                     * 
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
                     * 
                     */
                    bool CodingLanguageHasBeenSet() const;

                    /**
                     * 获取Deployment mode 
- IMAGE
- JAR
- WAR
                     * @return DeployMode Deployment mode 
- IMAGE
- JAR
- WAR
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment mode 
- IMAGE
- JAR
- WAR
                     * @param _deployMode Deployment mode 
- IMAGE
- JAR
- WAR
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable APM tracing for the Java application. `1`: Enable, `0`: Disable
                     * @return EnableTracing Whether to enable APM tracing for the Java application. `1`: Enable, `0`: Disable
                     * 
                     */
                    int64_t GetEnableTracing() const;

                    /**
                     * 设置Whether to enable APM tracing for the Java application. `1`: Enable, `0`: Disable
                     * @param _enableTracing Whether to enable APM tracing for the Java application. `1`: Enable, `0`: Disable
                     * 
                     */
                    void SetEnableTracing(const int64_t& _enableTracing);

                    /**
                     * 判断参数 EnableTracing 是否已赋值
                     * @return EnableTracing 是否已赋值
                     * 
                     */
                    bool EnableTracingHasBeenSet() const;

                    /**
                     * 获取Parameters of the default image service
                     * @return UseDefaultImageServiceParameters Parameters of the default image service
                     * 
                     */
                    UseDefaultRepoParameters GetUseDefaultImageServiceParameters() const;

                    /**
                     * 设置Parameters of the default image service
                     * @param _useDefaultImageServiceParameters Parameters of the default image service
                     * 
                     */
                    void SetUseDefaultImageServiceParameters(const UseDefaultRepoParameters& _useDefaultImageServiceParameters);

                    /**
                     * 判断参数 UseDefaultImageServiceParameters 是否已赋值
                     * @return UseDefaultImageServiceParameters 是否已赋值
                     * 
                     */
                    bool UseDefaultImageServiceParametersHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Application name
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether to use the default image service. `1`: yes; `0`: no
                     */
                    int64_t m_useDefaultImageService;
                    bool m_useDefaultImageServiceHasBeenSet;

                    /**
                     * Type of the bound repository. `0`: TCR Personal; `1`: TCR Enterprise
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * TCR Enterprise instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Address of the bound image server
                     */
                    std::string m_repoServer;
                    bool m_repoServerHasBeenSet;

                    /**
                     * Name of the bound image repository
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Application subnet
                     */
                    std::vector<std::string> m_subnetList;
                    bool m_subnetListHasBeenSet;

                    /**
                     * Programming language 
- JAVA
- OTHER
                     */
                    std::string m_codingLanguage;
                    bool m_codingLanguageHasBeenSet;

                    /**
                     * Deployment mode 
- IMAGE
- JAR
- WAR
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Whether to enable APM tracing for the Java application. `1`: Enable, `0`: Disable
                     */
                    int64_t m_enableTracing;
                    bool m_enableTracingHasBeenSet;

                    /**
                     * Parameters of the default image service
                     */
                    UseDefaultRepoParameters m_useDefaultImageServiceParameters;
                    bool m_useDefaultImageServiceParametersHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATEAPPLICATIONREQUEST_H_
