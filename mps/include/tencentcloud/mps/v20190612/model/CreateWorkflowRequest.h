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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTrigger.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateWorkflow request structure.
                */
                class CreateWorkflowRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRequest();
                    ~CreateWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Workflow name of up to 128 characters, which must be unique for the same user.
                     * @return WorkflowName Workflow name of up to 128 characters, which must be unique for the same user.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name of up to 128 characters, which must be unique for the same user.
                     * @param _workflowName Workflow name of up to 128 characters, which must be unique for the same user.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Triggering rule bound to a workflow. If an uploaded video hits the rule for the object, the workflow will be triggered.
                     * @return Trigger Triggering rule bound to a workflow. If an uploaded video hits the rule for the object, the workflow will be triggered.
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置Triggering rule bound to a workflow. If an uploaded video hits the rule for the object, the workflow will be triggered.
                     * @param _trigger Triggering rule bound to a workflow. If an uploaded video hits the rule for the object, the workflow will be triggered.
                     * 
                     */
                    void SetTrigger(const WorkflowTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取The location to save the output file of media processing. If this parameter is left empty, the storage location in `Trigger` will be inherited.
                     * @return OutputStorage The location to save the output file of media processing. If this parameter is left empty, the storage location in `Trigger` will be inherited.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The location to save the output file of media processing. If this parameter is left empty, the storage location in `Trigger` will be inherited.
                     * @param _outputStorage The location to save the output file of media processing. If this parameter is left empty, the storage location in `Trigger` will be inherited.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * @return OutputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     * @param _outputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
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
                     * 获取The media processing parameters to use.
                     * @return MediaProcessTask The media processing parameters to use.
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置The media processing parameters to use.
                     * @param _mediaProcessTask The media processing parameters to use.
                     * 
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     * 
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取Type parameter of a video content audit task.
                     * @return AiContentReviewTask Type parameter of a video content audit task.
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置Type parameter of a video content audit task.
                     * @param _aiContentReviewTask Type parameter of a video content audit task.
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取Video content analysis task parameter.
                     * @return AiAnalysisTask Video content analysis task parameter.
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置Video content analysis task parameter.
                     * @param _aiAnalysisTask Video content analysis task parameter.
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取Type parameter of a video content recognition task.
                     * @return AiRecognitionTask Type parameter of a video content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Type parameter of a video content recognition task.
                     * @param _aiRecognitionTask Type parameter of a video content recognition task.
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取Event notification configuration for a task. If this parameter is left empty, no event notifications will be obtained.
                     * @return TaskNotifyConfig Event notification configuration for a task. If this parameter is left empty, no event notifications will be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification configuration for a task. If this parameter is left empty, no event notifications will be obtained.
                     * @param _taskNotifyConfig Event notification configuration for a task. If this parameter is left empty, no event notifications will be obtained.
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Workflow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @return TaskPriority Workflow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    int64_t GetTaskPriority() const;

                    /**
                     * 设置Workflow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @param _taskPriority Workflow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    void SetTaskPriority(const int64_t& _taskPriority);

                    /**
                     * 判断参数 TaskPriority 是否已赋值
                     * @return TaskPriority 是否已赋值
                     * 
                     */
                    bool TaskPriorityHasBeenSet() const;

                private:

                    /**
                     * Workflow name of up to 128 characters, which must be unique for the same user.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Triggering rule bound to a workflow. If an uploaded video hits the rule for the object, the workflow will be triggered.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * The location to save the output file of media processing. If this parameter is left empty, the storage location in `Trigger` will be inherited.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this, the file will be saved to the trigger directory.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * The media processing parameters to use.
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * Type parameter of a video content audit task.
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * Video content analysis task parameter.
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * Type parameter of a video content recognition task.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * Event notification configuration for a task. If this parameter is left empty, no event notifications will be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Workflow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     */
                    int64_t m_taskPriority;
                    bool m_taskPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWORKFLOWREQUEST_H_
