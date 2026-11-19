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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Last deployment of the project
                */
                class ProjectDeployment : public AbstractModel
                {
                public:
                    ProjectDeployment();
                    ~ProjectDeployment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Deployment ID</p>
                     * @return DeploymentId <p>Deployment ID</p>
                     * 
                     */
                    std::string GetDeploymentId() const;

                    /**
                     * 设置<p>Deployment ID</p>
                     * @param _deploymentId <p>Deployment ID</p>
                     * 
                     */
                    void SetDeploymentId(const std::string& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

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
                     * 获取<p>Deployment state</p>
                     * @return Status <p>Deployment state</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Deployment state</p>
                     * @param _status <p>Deployment state</p>
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
                     * 获取<p>Build duration, in milliseconds.</p>
                     * @return BuildCost <p>Build duration, in milliseconds.</p>
                     * 
                     */
                    std::string GetBuildCost() const;

                    /**
                     * 设置<p>Build duration, in milliseconds.</p>
                     * @param _buildCost <p>Build duration, in milliseconds.</p>
                     * 
                     */
                    void SetBuildCost(const std::string& _buildCost);

                    /**
                     * 判断参数 BuildCost 是否已赋值
                     * @return BuildCost 是否已赋值
                     * 
                     */
                    bool BuildCostHasBeenSet() const;

                    /**
                     * 获取<p>Trigger source.</p>
                     * @return ViaMeta <p>Trigger source.</p>
                     * 
                     */
                    std::string GetViaMeta() const;

                    /**
                     * 设置<p>Trigger source.</p>
                     * @param _viaMeta <p>Trigger source.</p>
                     * 
                     */
                    void SetViaMeta(const std::string& _viaMeta);

                    /**
                     * 判断参数 ViaMeta 是否已赋值
                     * @return ViaMeta 是否已赋值
                     * 
                     */
                    bool ViaMetaHasBeenSet() const;

                    /**
                     * 获取<p>Environment slug</p>
                     * @return Env <p>Environment slug</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>Environment slug</p>
                     * @param _env <p>Environment slug</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>Branch</p>
                     * @return RepoBranch <p>Branch</p>
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>Branch</p>
                     * @param _repoBranch <p>Branch</p>
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
                     * 获取<p>Submit hash</p>
                     * @return RepoCommitHash <p>Submit hash</p>
                     * 
                     */
                    std::string GetRepoCommitHash() const;

                    /**
                     * 设置<p>Submit hash</p>
                     * @param _repoCommitHash <p>Submit hash</p>
                     * 
                     */
                    void SetRepoCommitHash(const std::string& _repoCommitHash);

                    /**
                     * 判断参数 RepoCommitHash 是否已赋值
                     * @return RepoCommitHash 是否已赋值
                     * 
                     */
                    bool RepoCommitHashHasBeenSet() const;

                    /**
                     * 获取<p>Commit description</p>
                     * @return RepoCommitMsg <p>Commit description</p>
                     * 
                     */
                    std::string GetRepoCommitMsg() const;

                    /**
                     * 设置<p>Commit description</p>
                     * @param _repoCommitMsg <p>Commit description</p>
                     * 
                     */
                    void SetRepoCommitMsg(const std::string& _repoCommitMsg);

                    /**
                     * 判断参数 RepoCommitMsg 是否已赋值
                     * @return RepoCommitMsg 是否已赋值
                     * 
                     */
                    bool RepoCommitMsgHasBeenSet() const;

                    /**
                     * 获取<p>Preview address</p>
                     * @return PreviewUrl <p>Preview address</p>
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置<p>Preview address</p>
                     * @param _previewUrl <p>Preview address</p>
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取<p>Address of a cover</p>
                     * @return CoverUrl <p>Address of a cover</p>
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置<p>Address of a cover</p>
                     * @param _coverUrl <p>Address of a cover</p>
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

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

                    /**
                     * 获取<p>Repository address used for this deployment</p>
                     * @return DplRepoUrl <p>Repository address used for this deployment</p>
                     * 
                     */
                    std::string GetDplRepoUrl() const;

                    /**
                     * 设置<p>Repository address used for this deployment</p>
                     * @param _dplRepoUrl <p>Repository address used for this deployment</p>
                     * 
                     */
                    void SetDplRepoUrl(const std::string& _dplRepoUrl);

                    /**
                     * 判断参数 DplRepoUrl 是否已赋值
                     * @return DplRepoUrl 是否已赋值
                     * 
                     */
                    bool DplRepoUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Deployment ID</p>
                     */
                    std::string m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Deployment state</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Build duration, in milliseconds.</p>
                     */
                    std::string m_buildCost;
                    bool m_buildCostHasBeenSet;

                    /**
                     * <p>Trigger source.</p>
                     */
                    std::string m_viaMeta;
                    bool m_viaMetaHasBeenSet;

                    /**
                     * <p>Environment slug</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Branch</p>
                     */
                    std::string m_repoBranch;
                    bool m_repoBranchHasBeenSet;

                    /**
                     * <p>Submit hash</p>
                     */
                    std::string m_repoCommitHash;
                    bool m_repoCommitHashHasBeenSet;

                    /**
                     * <p>Commit description</p>
                     */
                    std::string m_repoCommitMsg;
                    bool m_repoCommitMsgHasBeenSet;

                    /**
                     * <p>Preview address</p>
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * <p>Address of a cover</p>
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

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

                    /**
                     * <p>Repository address used for this deployment</p>
                     */
                    std::string m_dplRepoUrl;
                    bool m_dplRepoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_PROJECTDEPLOYMENT_H_
