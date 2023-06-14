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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Task details
                */
                class TaskInfoNew : public AbstractModel
                {
                public:
                    TaskInfoNew();
                    ~TaskInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task type
                     * @return TaskType Task type
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type
                     * @param _taskType Task type
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取ID of TcaplusDB internal transaction associated with task
                     * @return TransId ID of TcaplusDB internal transaction associated with task
                     * 
                     */
                    std::string GetTransId() const;

                    /**
                     * 设置ID of TcaplusDB internal transaction associated with task
                     * @param _transId ID of TcaplusDB internal transaction associated with task
                     * 
                     */
                    void SetTransId(const std::string& _transId);

                    /**
                     * 判断参数 TransId 是否已赋值
                     * @return TransId 是否已赋值
                     * 
                     */
                    bool TransIdHasBeenSet() const;

                    /**
                     * 获取ID of the cluster where a task resides
                     * @return ClusterId ID of the cluster where a task resides
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where a task resides
                     * @param _clusterId ID of the cluster where a task resides
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
                     * 获取Name of the cluster where a task resides
                     * @return ClusterName Name of the cluster where a task resides
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Name of the cluster where a task resides
                     * @param _clusterName Name of the cluster where a task resides
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Task progress
                     * @return Progress Task progress
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return StartTime Task creation time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task creation time
                     * @param _startTime Task creation time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task last modified time
                     * @return UpdateTime Task last modified time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task last modified time
                     * @param _updateTime Task last modified time
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
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Task details
                     * @return Content Task details
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Task details
                     * @param _content Task details
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * ID of TcaplusDB internal transaction associated with task
                     */
                    std::string m_transId;
                    bool m_transIdHasBeenSet;

                    /**
                     * ID of the cluster where a task resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Name of the cluster where a task resides
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Task progress
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task last modified time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Task details
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TASKINFONEW_H_
