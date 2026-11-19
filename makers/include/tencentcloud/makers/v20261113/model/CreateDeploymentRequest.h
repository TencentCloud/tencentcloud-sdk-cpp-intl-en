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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDeployment request structure.
                */
                class CreateDeploymentRequest : public AbstractModel
                {
                public:
                    CreateDeploymentRequest();
                    ~CreateDeploymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers site ID</p>
                     * @return ZoneId <p>Makers site ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers site ID</p>
                     * @param _zoneId <p>Makers site ID</p>
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
                     * 获取<p>Trigger source. Github, ReDeploy, Api, Webhook, Upload, Coding, Gitee, Gitlab</p>
                     * @return ViaMeta <p>Trigger source. Github, ReDeploy, Api, Webhook, Upload, Coding, Gitee, Gitlab</p>
                     * 
                     */
                    std::string GetViaMeta() const;

                    /**
                     * 设置<p>Trigger source. Github, ReDeploy, Api, Webhook, Upload, Coding, Gitee, Gitlab</p>
                     * @param _viaMeta <p>Trigger source. Github, ReDeploy, Api, Webhook, Upload, Coding, Gitee, Gitlab</p>
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
                     * 获取<p>Environment slug. Production, Preview, or custom environment</p>
                     * @return Env <p>Environment slug. Production, Preview, or custom environment</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>Environment slug. Production, Preview, or custom environment</p>
                     * @param _env <p>Environment slug. Production, Preview, or custom environment</p>
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
                     * 获取<p>Code source. For upload artifact, pass Upload.</p>
                     * @return Provider <p>Code source. For upload artifact, pass Upload.</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Code source. For upload artifact, pass Upload.</p>
                     * @param _provider <p>Code source. For upload artifact, pass Upload.</p>
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
                     * 获取<p>Artifact type. Zip or Folder</p>
                     * @return DistType <p>Artifact type. Zip or Folder</p>
                     * 
                     */
                    std::string GetDistType() const;

                    /**
                     * 设置<p>Artifact type. Zip or Folder</p>
                     * @param _distType <p>Artifact type. Zip or Folder</p>
                     * 
                     */
                    void SetDistType(const std::string& _distType);

                    /**
                     * 判断参数 DistType 是否已赋值
                     * @return DistType 是否已赋值
                     * 
                     */
                    bool DistTypeHasBeenSet() const;

                    /**
                     * 获取<p>Object path of the uploaded artifact in the temporary bucket</p>
                     * @return TempBucketPath <p>Object path of the uploaded artifact in the temporary bucket</p>
                     * 
                     */
                    std::string GetTempBucketPath() const;

                    /**
                     * 设置<p>Object path of the uploaded artifact in the temporary bucket</p>
                     * @param _tempBucketPath <p>Object path of the uploaded artifact in the temporary bucket</p>
                     * 
                     */
                    void SetTempBucketPath(const std::string& _tempBucketPath);

                    /**
                     * 判断参数 TempBucketPath 是否已赋值
                     * @return TempBucketPath 是否已赋值
                     * 
                     */
                    bool TempBucketPathHasBeenSet() const;

                    /**
                     * 获取<p>Build branch</p>
                     * @return RepoBranch <p>Build branch</p>
                     * 
                     */
                    std::string GetRepoBranch() const;

                    /**
                     * 设置<p>Build branch</p>
                     * @param _repoBranch <p>Build branch</p>
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
                     * 获取<p>Build source</p>
                     * @return BuildFrom <p>Build source</p>
                     * 
                     */
                    std::string GetBuildFrom() const;

                    /**
                     * 设置<p>Build source</p>
                     * @param _buildFrom <p>Build source</p>
                     * 
                     */
                    void SetBuildFrom(const std::string& _buildFrom);

                    /**
                     * 判断参数 BuildFrom 是否已赋值
                     * @return BuildFrom 是否已赋值
                     * 
                     */
                    bool BuildFromHasBeenSet() const;

                    /**
                     * 获取<p>Template ID</p>
                     * @return TemplateId <p>Template ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Template ID</p>
                     * @param _templateId <p>Template ID</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Build specification. The current server still reads from edgeone.json. This field is reserved for now.</p>
                     * @return CiSpec <p>Build specification. The current server still reads from edgeone.json. This field is reserved for now.</p>
                     * 
                     */
                    std::string GetCiSpec() const;

                    /**
                     * 设置<p>Build specification. The current server still reads from edgeone.json. This field is reserved for now.</p>
                     * @param _ciSpec <p>Build specification. The current server still reads from edgeone.json. This field is reserved for now.</p>
                     * 
                     */
                    void SetCiSpec(const std::string& _ciSpec);

                    /**
                     * 判断参数 CiSpec 是否已赋值
                     * @return CiSpec 是否已赋值
                     * 
                     */
                    bool CiSpecHasBeenSet() const;

                private:

                    /**
                     * <p>Makers site ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Trigger source. Github, ReDeploy, Api, Webhook, Upload, Coding, Gitee, Gitlab</p>
                     */
                    std::string m_viaMeta;
                    bool m_viaMetaHasBeenSet;

                    /**
                     * <p>Environment slug. Production, Preview, or custom environment</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Code source. For upload artifact, pass Upload.</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Artifact type. Zip or Folder</p>
                     */
                    std::string m_distType;
                    bool m_distTypeHasBeenSet;

                    /**
                     * <p>Object path of the uploaded artifact in the temporary bucket</p>
                     */
                    std::string m_tempBucketPath;
                    bool m_tempBucketPathHasBeenSet;

                    /**
                     * <p>Build branch</p>
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
                     * <p>Build source</p>
                     */
                    std::string m_buildFrom;
                    bool m_buildFromHasBeenSet;

                    /**
                     * <p>Template ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Build specification. The current server still reads from edgeone.json. This field is reserved for now.</p>
                     */
                    std::string m_ciSpec;
                    bool m_ciSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_CREATEDEPLOYMENTREQUEST_H_
