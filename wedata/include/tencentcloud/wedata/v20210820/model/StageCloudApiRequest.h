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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Property.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * No
                */
                class StageCloudApiRequest : public AbstractModel
                {
                public:
                    StageCloudApiRequest();
                    ~StageCloudApiRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取No
                     * @return ClusterId No
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置No
                     * @param _clusterId No
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取No
                     * @return StageId No
                     * 
                     */
                    std::string GetStageId() const;

                    /**
                     * 设置No
                     * @param _stageId No
                     * 
                     */
                    void SetStageId(const std::string& _stageId);

                    /**
                     * 判断参数 StageId 是否已赋值
                     * @return StageId 是否已赋值
                     * 
                     */
                    bool StageIdHasBeenSet() const;

                    /**
                     * 获取No
                     * @return JobId No
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置No
                     * @param _jobId No
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取No
                     * @return StageName No
                     * 
                     */
                    std::string GetStageName() const;

                    /**
                     * 设置No
                     * @param _stageName No
                     * 
                     */
                    void SetStageName(const std::string& _stageName);

                    /**
                     * 判断参数 StageName 是否已赋值
                     * @return StageName 是否已赋值
                     * 
                     */
                    bool StageNameHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Type No
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置No
                     * @param _type No
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
                     * 获取No
                     * @return Mode No
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置No
                     * @param _mode No
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Version No
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置No
                     * @param _version No
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Queue No
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置No
                     * @param _queue No
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Content No
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置No
                     * @param _content No
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Parameters No
                     * 
                     */
                    std::vector<Property> GetParameters() const;

                    /**
                     * 设置No
                     * @param _parameters No
                     * 
                     */
                    void SetParameters(const std::vector<Property>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取No
                     * @return Description No
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置No
                     * @param _description No
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
                     * 获取No
                     * @return ProjectId No
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置No
                     * @param _projectId No
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
                     * 获取No
                     * @return JobType No
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置No
                     * @param _jobType No
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取No
                     * @return WorkFlowId No
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置No
                     * @param _workFlowId No
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                private:

                    /**
                     * No
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_stageId;
                    bool m_stageIdHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_stageName;
                    bool m_stageNameHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * No
                     */
                    std::vector<Property> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * No
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STAGECLOUDAPIREQUEST_H_
