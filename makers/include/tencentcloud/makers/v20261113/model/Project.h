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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/Regions.h>
#include <tencentcloud/makers/v20261113/model/ProjectEnvVar.h>
#include <tencentcloud/makers/v20261113/model/CustomDomainItem.h>
#include <tencentcloud/makers/v20261113/model/ProjectDeployment.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Project. The fields are consistent with the actual return of DescribeProjects.
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Project name.</p>
                     * @return Name <p>Project name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Project name.</p>
                     * @param _name <p>Project name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Project status. Normal, Ban, Unlink, Process, Pending, Offline</p>
                     * @return Status <p>Project status. Normal, Ban, Unlink, Process, Pending, Offline</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Project status. Normal, Ban, Unlink, Process, Pending, Offline</p>
                     * @param _status <p>Project status. Normal, Ban, Unlink, Process, Pending, Offline</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Site ID</p>
                     * @return ZoneId <p>Site ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID</p>
                     * @param _zoneId <p>Site ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Acceleration region. mainland, overseas, global</p>
                     * @return Area <p>Acceleration region. mainland, overseas, global</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Acceleration region. mainland, overseas, global</p>
                     * @param _area <p>Acceleration region. mainland, overseas, global</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Code source. Github, Gitee, Coding, Upload, Gitlab, Bitbucket, Cnb</p>
                     * @return Provider <p>Code source. Github, Gitee, Coding, Upload, Gitlab, Bitbucket, Cnb</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Code source. Github, Gitee, Coding, Upload, Gitlab, Bitbucket, Cnb</p>
                     * @param _provider <p>Code source. Github, Gitee, Coding, Upload, Gitlab, Bitbucket, Cnb</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>Create Source. Template, Custom, CLI, Guest</p>
                     * @return Channel <p>Create Source. Template, Custom, CLI, Guest</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>Create Source. Template, Custom, CLI, Guest</p>
                     * @param _channel <p>Create Source. Template, Custom, CLI, Guest</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>Preset domain name.</p>
                     * @return PresetDomain <p>Preset domain name.</p>
                     * 
                     */
                    std::string GetPresetDomain() const;

                    /**
                     * 设置<p>Preset domain name.</p>
                     * @param _presetDomain <p>Preset domain name.</p>
                     * 
                     */
                    void SetPresetDomain(const std::string& _presetDomain);

                    /**
                     * 判断参数 PresetDomain 是否已赋值
                     * @return PresetDomain 是否已赋值
                     * 
                     */
                    bool PresetDomainHasBeenSet() const;

                    /**
                     * 获取<p>Preset domain name status</p>
                     * @return PresetDomainStatus <p>Preset domain name status</p>
                     * 
                     */
                    std::string GetPresetDomainStatus() const;

                    /**
                     * 设置<p>Preset domain name status</p>
                     * @param _presetDomainStatus <p>Preset domain name status</p>
                     * 
                     */
                    void SetPresetDomainStatus(const std::string& _presetDomainStatus);

                    /**
                     * 判断参数 PresetDomainStatus 是否已赋值
                     * @return PresetDomainStatus 是否已赋值
                     * 
                     */
                    bool PresetDomainStatusHasBeenSet() const;

                    /**
                     * 获取<p>Project root directory</p>
                     * @return RootDir <p>Project root directory</p>
                     * 
                     */
                    std::string GetRootDir() const;

                    /**
                     * 设置<p>Project root directory</p>
                     * @param _rootDir <p>Project root directory</p>
                     * 
                     */
                    void SetRootDir(const std::string& _rootDir);

                    /**
                     * 判断参数 RootDir 是否已赋值
                     * @return RootDir 是否已赋值
                     * 
                     */
                    bool RootDirHasBeenSet() const;

                    /**
                     * 获取<p>Build artifact directory</p>
                     * @return OutputDir <p>Build artifact directory</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>Build artifact directory</p>
                     * @param _outputDir <p>Build artifact directory</p>
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取<p>Build command</p>
                     * @return BuildCmd <p>Build command</p>
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置<p>Build command</p>
                     * @param _buildCmd <p>Build command</p>
                     * 
                     */
                    void SetBuildCmd(const std::string& _buildCmd);

                    /**
                     * 判断参数 BuildCmd 是否已赋值
                     * @return BuildCmd 是否已赋值
                     * 
                     */
                    bool BuildCmdHasBeenSet() const;

                    /**
                     * 获取<p>Installation command</p>
                     * @return InstallCmd <p>Installation command</p>
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置<p>Installation command</p>
                     * @param _installCmd <p>Installation command</p>
                     * 
                     */
                    void SetInstallCmd(const std::string& _installCmd);

                    /**
                     * 判断参数 InstallCmd 是否已赋值
                     * @return InstallCmd 是否已赋值
                     * 
                     */
                    bool InstallCmdHasBeenSet() const;

                    /**
                     * 获取<p>Framework</p>
                     * @return Framework <p>Framework</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>Framework</p>
                     * @param _framework <p>Framework</p>
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>Node.js version</p>
                     * @return NodejsVersion <p>Node.js version</p>
                     * 
                     */
                    std::string GetNodejsVersion() const;

                    /**
                     * 设置<p>Node.js version</p>
                     * @param _nodejsVersion <p>Node.js version</p>
                     * 
                     */
                    void SetNodejsVersion(const std::string& _nodejsVersion);

                    /**
                     * 判断参数 NodejsVersion 是否已赋值
                     * @return NodejsVersion 是否已赋值
                     * 
                     */
                    bool NodejsVersionHasBeenSet() const;

                    /**
                     * 获取<p>Repository address</p>
                     * @return RepoUrl <p>Repository address</p>
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置<p>Repository address</p>
                     * @param _repoUrl <p>Repository address</p>
                     * 
                     */
                    void SetRepoUrl(const std::string& _repoUrl);

                    /**
                     * 判断参数 RepoUrl 是否已赋值
                     * @return RepoUrl 是否已赋值
                     * 
                     */
                    bool RepoUrlHasBeenSet() const;

                    /**
                     * 获取<p>Repository owner</p>
                     * @return RepoOwner <p>Repository owner</p>
                     * 
                     */
                    std::string GetRepoOwner() const;

                    /**
                     * 设置<p>Repository owner</p>
                     * @param _repoOwner <p>Repository owner</p>
                     * 
                     */
                    void SetRepoOwner(const std::string& _repoOwner);

                    /**
                     * 判断参数 RepoOwner 是否已赋值
                     * @return RepoOwner 是否已赋值
                     * 
                     */
                    bool RepoOwnerHasBeenSet() const;

                    /**
                     * 获取<p>Repository name</p>
                     * @return RepoName <p>Repository name</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>Repository name</p>
                     * @param _repoName <p>Repository name</p>
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
                     * 获取<p>Production branch</p>
                     * @return RepoBranch <p>Production branch</p>
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>Production branch</p>
                     * @param _repoBranch <p>Production branch</p>
                     * 
                     */
                    void SetRepoBranch(const std::string& _repoBranch);

                    /**
                     * 判断参数 RepoBranch 是否已赋值
                     * @return RepoBranch 是否已赋值
                     * 
                     */
                    bool RepoBranchHasBeenSet() const;

                    /**
                     * 获取<p>Preview Branch</p>
                     * @return RepoPreBranches <p>Preview Branch</p>
                     * 
                     */
                    std::vector<std::string> GetRepoPreBranches() const;

                    /**
                     * 设置<p>Preview Branch</p>
                     * @param _repoPreBranches <p>Preview Branch</p>
                     * 
                     */
                    void SetRepoPreBranches(const std::vector<std::string>& _repoPreBranches);

                    /**
                     * 判断参数 RepoPreBranches 是否已赋值
                     * @return RepoPreBranches 是否已赋值
                     * 
                     */
                    bool RepoPreBranchesHasBeenSet() const;

                    /**
                     * 获取<p>Deployment region</p>
                     * @return Regions <p>Deployment region</p>
                     * 
                     */
                    Regions GetRegions() const;

                    /**
                     * 设置<p>Deployment region</p>
                     * @param _regions <p>Deployment region</p>
                     * 
                     */
                    void SetRegions(const Regions& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return EnvVars <p>Environment variable.</p>
                     * 
                     */
                    std::vector<ProjectEnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>Environment variable.</p>
                     * @param _envVars <p>Environment variable.</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<ProjectEnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>Custom domain name</p>
                     * @return CustomDomains <p>Custom domain name</p>
                     * 
                     */
                    std::vector<CustomDomainItem> GetCustomDomains() const;

                    /**
                     * 设置<p>Custom domain name</p>
                     * @param _customDomains <p>Custom domain name</p>
                     * 
                     */
                    void SetCustomDomains(const std::vector<CustomDomainItem>& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                    /**
                     * 获取<p>Last deployment</p>
                     * @return Deployment <p>Last deployment</p>
                     * 
                     */
                    ProjectDeployment GetDeployment() const;

                    /**
                     * 设置<p>Last deployment</p>
                     * @param _deployment <p>Last deployment</p>
                     * 
                     */
                    void SetDeployment(const ProjectDeployment& _deployment);

                    /**
                     * 判断参数 Deployment 是否已赋值
                     * @return Deployment 是否已赋值
                     * 
                     */
                    bool DeploymentHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an Agent project. 1: yes, 0: no</p>
                     * @return IsAgent <p>Whether it is an Agent project. 1: yes, 0: no</p>
                     * 
                     */
                    int64_t GetIsAgent() const;

                    /**
                     * 设置<p>Whether it is an Agent project. 1: yes, 0: no</p>
                     * @param _isAgent <p>Whether it is an Agent project. 1: yes, 0: no</p>
                     * 
                     */
                    void SetIsAgent(const int64_t& _isAgent);

                    /**
                     * 判断参数 IsAgent 是否已赋值
                     * @return IsAgent 是否已赋值
                     * 
                     */
                    bool IsAgentHasBeenSet() const;

                    /**
                     * 获取<p>Agent framework. Non-Agent project is empty</p>
                     * @return AgentFramework <p>Agent framework. Non-Agent project is empty</p>
                     * 
                     */
                    std::string GetAgentFramework() const;

                    /**
                     * 设置<p>Agent framework. Non-Agent project is empty</p>
                     * @param _agentFramework <p>Agent framework. Non-Agent project is empty</p>
                     * 
                     */
                    void SetAgentFramework(const std::string& _agentFramework);

                    /**
                     * 判断参数 AgentFramework 是否已赋值
                     * @return AgentFramework 是否已赋值
                     * 
                     */
                    bool AgentFrameworkHasBeenSet() const;

                    /**
                     * 获取<p>Whether it hits a user-level wildcard domain name. 1: yes, 0: no</p>
                     * @return IsTld <p>Whether it hits a user-level wildcard domain name. 1: yes, 0: no</p>
                     * 
                     */
                    int64_t GetIsTld() const;

                    /**
                     * 设置<p>Whether it hits a user-level wildcard domain name. 1: yes, 0: no</p>
                     * @param _isTld <p>Whether it hits a user-level wildcard domain name. 1: yes, 0: no</p>
                     * 
                     */
                    void SetIsTld(const int64_t& _isTld);

                    /**
                     * 判断参数 IsTld 是否已赋值
                     * @return IsTld 是否已赋值
                     * 
                     */
                    bool IsTldHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedOn <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdOn <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return ModifiedOn <p>Update time.</p>
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _modifiedOn <p>Update time.</p>
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * <p>Project ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Project status. Normal, Ban, Unlink, Process, Pending, Offline</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Site ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Acceleration region. mainland, overseas, global</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Code source. Github, Gitee, Coding, Upload, Gitlab, Bitbucket, Cnb</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Create Source. Template, Custom, CLI, Guest</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>Preset domain name.</p>
                     */
                    std::string m_presetDomain;
                    bool m_presetDomainHasBeenSet;

                    /**
                     * <p>Preset domain name status</p>
                     */
                    std::string m_presetDomainStatus;
                    bool m_presetDomainStatusHasBeenSet;

                    /**
                     * <p>Project root directory</p>
                     */
                    std::string m_rootDir;
                    bool m_rootDirHasBeenSet;

                    /**
                     * <p>Build artifact directory</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>Build command</p>
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * <p>Installation command</p>
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * <p>Framework</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>Node.js version</p>
                     */
                    std::string m_nodejsVersion;
                    bool m_nodejsVersionHasBeenSet;

                    /**
                     * <p>Repository address</p>
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * <p>Repository owner</p>
                     */
                    std::string m_repoOwner;
                    bool m_repoOwnerHasBeenSet;

                    /**
                     * <p>Repository name</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>Production branch</p>
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>Preview Branch</p>
                     */
                    std::vector<std::string> m_repoPreBranches;
                    bool m_repoPreBranchesHasBeenSet;

                    /**
                     * <p>Deployment region</p>
                     */
                    Regions m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<ProjectEnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>Custom domain name</p>
                     */
                    std::vector<CustomDomainItem> m_customDomains;
                    bool m_customDomainsHasBeenSet;

                    /**
                     * <p>Last deployment</p>
                     */
                    ProjectDeployment m_deployment;
                    bool m_deploymentHasBeenSet;

                    /**
                     * <p>Whether it is an Agent project. 1: yes, 0: no</p>
                     */
                    int64_t m_isAgent;
                    bool m_isAgentHasBeenSet;

                    /**
                     * <p>Agent framework. Non-Agent project is empty</p>
                     */
                    std::string m_agentFramework;
                    bool m_agentFrameworkHasBeenSet;

                    /**
                     * <p>Whether it hits a user-level wildcard domain name. 1: yes, 0: no</p>
                     */
                    int64_t m_isTld;
                    bool m_isTldHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECT_H_
