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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskNew request structure.
                */
                class CreateTaskNewRequest : public AbstractModel
                {
                public:
                    CreateTaskNewRequest();
                    ~CreateTaskNewRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Task Name
                     * @return TaskName Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
                     * @param _taskName Task Name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取26 offline synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 CDW PG,92 MapReduce.
                     * @return TaskType 26 offline synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 CDW PG,92 MapReduce.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置26 offline synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 CDW PG,92 MapReduce.
                     * @param _taskType 26 offline synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 CDW PG,92 MapReduce.
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Extended Attribute
                     * @return TaskExt Extended Attribute
                     * 
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置Extended Attribute
                     * @param _taskExt Extended Attribute
                     * 
                     */
                    void SetTaskExt(const std::vector<TaskExtInfo>& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     * 
                     */
                    bool TaskExtHasBeenSet() const;

                    /**
                     * 获取Product Name
                     * @return ProductName Product Name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product Name
                     * @param _productName Product Name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Specifies the task instance initialization strategy
                     * @return InstanceInitStrategy Specifies the task instance initialization strategy
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置Specifies the task instance initialization strategy
                     * @param _instanceInitStrategy Specifies the task instance initialization strategy
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取The horizontal axis of the canvas coordinate
                     * @return LeftCoordinate The horizontal axis of the canvas coordinate
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置The horizontal axis of the canvas coordinate
                     * @param _leftCoordinate The horizontal axis of the canvas coordinate
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取The vertical axis of the canvas coordinate
                     * @return TopCoordinate The vertical axis of the canvas coordinate
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置The vertical axis of the canvas coordinate
                     * @param _topCoordinate The vertical axis of the canvas coordinate
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取Workflow Directory ID
                     * @return TaskFolderId Workflow Directory ID
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置Workflow Directory ID
                     * @param _taskFolderId Workflow Directory ID
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取Specifies the script content, base64 encoded
                     * @return Content Specifies the script content, base64 encoded
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Specifies the script content, base64 encoded
                     * @param _content Specifies the script content, base64 encoded
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
                     * 获取Code Template ID
                     * @return CodeTemplateId Code Template ID
                     * 
                     */
                    std::string GetCodeTemplateId() const;

                    /**
                     * 设置Code Template ID
                     * @param _codeTemplateId Code Template ID
                     * 
                     */
                    void SetCodeTemplateId(const std::string& _codeTemplateId);

                    /**
                     * 判断参数 CodeTemplateId 是否已赋值
                     * @return CodeTemplateId 是否已赋值
                     * 
                     */
                    bool CodeTemplateIdHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 26 offline synchronization,30 Python,31 PySpark,32 DLC,33 Impala,34 Hive SQL,35 Shell,36 Spark SQL,39 Spark,40 CDW PG,92 MapReduce.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Extended Attribute
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * Product Name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Specifies the task instance initialization strategy
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * The horizontal axis of the canvas coordinate
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * The vertical axis of the canvas coordinate
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * Workflow Directory ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * Specifies the script content, base64 encoded
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Code Template ID
                     */
                    std::string m_codeTemplateId;
                    bool m_codeTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKNEWREQUEST_H_
