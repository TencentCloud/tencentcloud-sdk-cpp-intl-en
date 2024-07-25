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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/GitInfo.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunWorkflow request structure.
                */
                class RunWorkflowRequest : public AbstractModel
                {
                public:
                    RunWorkflowRequest();
                    ~RunWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Run group name
                     * @return Name Run group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Run group name
                     * @param _name Run group name
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
                     * 获取Delivery environment ID
                     * @return EnvironmentId Delivery environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Delivery environment ID
                     * @param _environmentId Delivery environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Workflow Git repository information
                     * @return GitSource Workflow Git repository information
                     * 
                     */
                    GitInfo GetGitSource() const;

                    /**
                     * 设置Workflow Git repository information
                     * @param _gitSource Workflow Git repository information
                     * 
                     */
                    void SetGitSource(const GitInfo& _gitSource);

                    /**
                     * 判断参数 GitSource 是否已赋值
                     * @return GitSource 是否已赋值
                     * 
                     */
                    bool GitSourceHasBeenSet() const;

                    /**
                     * 获取Workflow type

Supported type:
- NEXTFLOW
                     * @return Type Workflow type

Supported type:
- NEXTFLOW
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Workflow type

Supported type:
- NEXTFLOW
                     * @param _type Workflow type

Supported type:
- NEXTFLOW
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Nextflow option
                     * @return NFOption Nextflow option
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow option
                     * @param _nFOption Nextflow option
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @return ProjectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @param _projectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
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
                     * 获取Run group description
                     * @return Description Run group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Run group description
                     * @param _description Run group description
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
                     * 获取Run input JSON. Base64 encoding is required.
(Either InputBase64 or InputCosUri must be selected.)
                     * @return InputBase64 Run input JSON. Base64 encoding is required.
(Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    std::string GetInputBase64() const;

                    /**
                     * 设置Run input JSON. Base64 encoding is required.
(Either InputBase64 or InputCosUri must be selected.)
                     * @param _inputBase64 Run input JSON. Base64 encoding is required.
(Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    void SetInputBase64(const std::string& _inputBase64);

                    /**
                     * 判断参数 InputBase64 是否已赋值
                     * @return InputBase64 是否已赋值
                     * 
                     */
                    bool InputBase64HasBeenSet() const;

                    /**
                     * 获取Run input COS path
(Either InputBase64 or InputCosUri must be selected.)
                     * @return InputCosUri Run input COS path
(Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    std::string GetInputCosUri() const;

                    /**
                     * 设置Run input COS path
(Either InputBase64 or InputCosUri must be selected.)
                     * @param _inputCosUri Run input COS path
(Either InputBase64 or InputCosUri must be selected.)
                     * 
                     */
                    void SetInputCosUri(const std::string& _inputCosUri);

                    /**
                     * 判断参数 InputCosUri 是否已赋值
                     * @return InputCosUri 是否已赋值
                     * 
                     */
                    bool InputCosUriHasBeenSet() const;

                    /**
                     * 获取Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * @return CacheClearDelay Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * @param _cacheClearDelay Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * @return WorkDir Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * @param _workDir Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * @return VolumeIds Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    std::vector<std::string> GetVolumeIds() const;

                    /**
                     * 设置Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * @param _volumeIds Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     * 
                     */
                    void SetVolumeIds(const std::vector<std::string>& _volumeIds);

                    /**
                     * 判断参数 VolumeIds 是否已赋值
                     * @return VolumeIds 是否已赋值
                     * 
                     */
                    bool VolumeIdsHasBeenSet() const;

                private:

                    /**
                     * Run group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Delivery environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Workflow Git repository information
                     */
                    GitInfo m_gitSource;
                    bool m_gitSourceHasBeenSet;

                    /**
                     * Workflow type

Supported type:
- NEXTFLOW
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Nextflow option
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Run group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Run input JSON. Base64 encoding is required.
(Either InputBase64 or InputCosUri must be selected.)
                     */
                    std::string m_inputBase64;
                    bool m_inputBase64HasBeenSet;

                    /**
                     * Run input COS path
(Either InputBase64 or InputCosUri must be selected.)
                     */
                    std::string m_inputCosUri;
                    bool m_inputCosUriHasBeenSet;

                    /**
                     * Run cache cleanup time (hours). Leaving it blank or entering 0 indicates no cleanup.
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * Working directory. You can fill in the absolute path in the specified volume. If you leave it blank, the default path in the default volume will be used. Currently, only Nextflow is supported.
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * Volume ID. If you leave it blank, the default volume will be used. Currently, only Nextflow is supported.
                     */
                    std::vector<std::string> m_volumeIds;
                    bool m_volumeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_
