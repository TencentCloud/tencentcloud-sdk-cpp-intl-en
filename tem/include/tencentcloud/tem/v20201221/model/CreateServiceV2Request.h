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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_CREATESERVICEV2REQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_CREATESERVICEV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * CreateServiceV2 request structure.
                */
                class CreateServiceV2Request : public AbstractModel
                {
                public:
                    CreateServiceV2Request();
                    ~CreateServiceV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service name
                     * @return ServiceName Service name
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param ServiceName Service name
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param Description Description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to use the default image service. 1: yes; 0: no
                     * @return UseDefaultImageService Whether to use the default image service. 1: yes; 0: no
                     */
                    int64_t GetUseDefaultImageService() const;

                    /**
                     * 设置Whether to use the default image service. 1: yes; 0: no
                     * @param UseDefaultImageService Whether to use the default image service. 1: yes; 0: no
                     */
                    void SetUseDefaultImageService(const int64_t& _useDefaultImageService);

                    /**
                     * 判断参数 UseDefaultImageService 是否已赋值
                     * @return UseDefaultImageService 是否已赋值
                     */
                    bool UseDefaultImageServiceHasBeenSet() const;

                    /**
                     * 获取Type of the bound repository. 0: Personal Edition; 1: Enterprise Edition
                     * @return RepoType Type of the bound repository. 0: Personal Edition; 1: Enterprise Edition
                     */
                    int64_t GetRepoType() const;

                    /**
                     * 设置Type of the bound repository. 0: Personal Edition; 1: Enterprise Edition
                     * @param RepoType Type of the bound repository. 0: Personal Edition; 1: Enterprise Edition
                     */
                    void SetRepoType(const int64_t& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID of Enterprise Edition image service
                     * @return InstanceId Instance ID of Enterprise Edition image service
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of Enterprise Edition image service
                     * @param InstanceId Instance ID of Enterprise Edition image service
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Address of the bound image server
                     * @return RepoServer Address of the bound image server
                     */
                    std::string GetRepoServer() const;

                    /**
                     * 设置Address of the bound image server
                     * @param RepoServer Address of the bound image server
                     */
                    void SetRepoServer(const std::string& _repoServer);

                    /**
                     * 判断参数 RepoServer 是否已赋值
                     * @return RepoServer 是否已赋值
                     */
                    bool RepoServerHasBeenSet() const;

                    /**
                     * 获取Name of the bound image repository
                     * @return RepoName Name of the bound image repository
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置Name of the bound image repository
                     * @param RepoName Name of the bound image repository
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param SourceChannel Source channel
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Service subnet
                     * @return SubnetList Service subnet
                     */
                    std::vector<std::string> GetSubnetList() const;

                    /**
                     * 设置Service subnet
                     * @param SubnetList Service subnet
                     */
                    void SetSubnetList(const std::vector<std::string>& _subnetList);

                    /**
                     * 判断参数 SubnetList 是否已赋值
                     * @return SubnetList 是否已赋值
                     */
                    bool SubnetListHasBeenSet() const;

                    /**
                     * 获取Programming language 
- JAVA
- OTHER
                     * @return CodingLanguage Programming language 
- JAVA
- OTHER
                     */
                    std::string GetCodingLanguage() const;

                    /**
                     * 设置Programming language 
- JAVA
- OTHER
                     * @param CodingLanguage Programming language 
- JAVA
- OTHER
                     */
                    void SetCodingLanguage(const std::string& _codingLanguage);

                    /**
                     * 判断参数 CodingLanguage 是否已赋值
                     * @return CodingLanguage 是否已赋值
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
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment mode 
- IMAGE
- JAR
- WAR
                     * @param DeployMode Deployment mode 
- IMAGE
- JAR
- WAR
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                private:

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether to use the default image service. 1: yes; 0: no
                     */
                    int64_t m_useDefaultImageService;
                    bool m_useDefaultImageServiceHasBeenSet;

                    /**
                     * Type of the bound repository. 0: Personal Edition; 1: Enterprise Edition
                     */
                    int64_t m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * Instance ID of Enterprise Edition image service
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
                     * Service subnet
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_CREATESERVICEV2REQUEST_H_
