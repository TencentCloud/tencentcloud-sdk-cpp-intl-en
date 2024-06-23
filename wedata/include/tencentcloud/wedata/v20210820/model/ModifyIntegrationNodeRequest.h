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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYINTEGRATIONNODEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYINTEGRATIONNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyIntegrationNode request structure.
                */
                class ModifyIntegrationNodeRequest : public AbstractModel
                {
                public:
                    ModifyIntegrationNodeRequest();
                    ~ModifyIntegrationNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Integrated Node Information
                     * @return NodeInfo Integrated Node Information
                     * 
                     */
                    IntegrationNodeInfo GetNodeInfo() const;

                    /**
                     * 设置Integrated Node Information
                     * @param _nodeInfo Integrated Node Information
                     * 
                     */
                    void SetNodeInfo(const IntegrationNodeInfo& _nodeInfo);

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Task Type "201. stream, 202. offline"
                     * @return TaskType Task Type "201. stream, 202. offline"
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task Type "201. stream, 202. offline"
                     * @param _taskType Task Type "201. stream, 202. offline"
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Distinguish Canvas Mode and Form "1. Canvas, 2. Form" mode
                     * @return TaskMode Distinguish Canvas Mode and Form "1. Canvas, 2. Form" mode
                     * 
                     */
                    uint64_t GetTaskMode() const;

                    /**
                     * 设置Distinguish Canvas Mode and Form "1. Canvas, 2. Form" mode
                     * @param _taskMode Distinguish Canvas Mode and Form "1. Canvas, 2. Form" mode
                     * 
                     */
                    void SetTaskMode(const uint64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                private:

                    /**
                     * Integrated Node Information
                     */
                    IntegrationNodeInfo m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Type "201. stream, 202. offline"
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Distinguish Canvas Mode and Form "1. Canvas, 2. Form" mode
                     */
                    uint64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYINTEGRATIONNODEREQUEST_H_
