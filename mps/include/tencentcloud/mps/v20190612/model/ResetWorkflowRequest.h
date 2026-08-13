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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_

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
                * ResetWorkflow request structure.
                */
                class ResetWorkflowRequest : public AbstractModel
                {
                public:
                    ResetWorkflowRequest();
                    ~ResetWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Workflow ID.
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    int64_t GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
                     * 
                     */
                    void SetWorkflowId(const int64_t& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name, up to 128 characters. The name is unique for the same user.
                     * @return WorkflowName Workflow name, up to 128 characters. The name is unique for the same user.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name, up to 128 characters. The name is unique for the same user.
                     * @param _workflowName Workflow name, up to 128 characters. The name is unique for the same user.
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
                     * 获取The trigger rule bound to the workflow triggers the workflow when an uploaded video hits the rule for the object.
                     * @return Trigger The trigger rule bound to the workflow triggers the workflow when an uploaded video hits the rule for the object.
                     * 
                     */
                    WorkflowTrigger GetTrigger() const;

                    /**
                     * 设置The trigger rule bound to the workflow triggers the workflow when an uploaded video hits the rule for the object.
                     * @param _trigger The trigger rule bound to the workflow triggers the workflow when an uploaded video hits the rule for the object.
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
                     * 获取Video processing output configuration. If left blank, it inherits the storage location from Trigger.
                     * @return OutputStorage Video processing output configuration. If left blank, it inherits the storage location from Trigger.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Video processing output configuration. If left blank, it inherits the storage location from Trigger.
                     * @param _outputStorage Video processing output configuration. If left blank, it inherits the storage location from Trigger.
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
                     * 获取The target directory for the output files generated by video processing. It must start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file, that is, `{inputDir}`.
                     * @return OutputDir The target directory for the output files generated by video processing. It must start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file, that is, `{inputDir}`.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The target directory for the output files generated by video processing. It must start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file, that is, `{inputDir}`.
                     * @param _outputDir The target directory for the output files generated by video processing. It must start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file, that is, `{inputDir}`.
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
                     * 获取Parameters for the video processing task.
                     * @return MediaProcessTask Parameters for the video processing task.
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置Parameters for the video processing task.
                     * @param _mediaProcessTask Parameters for the video processing task.
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
                     * 获取Parameters for the video content review task.
                     * @return AiContentReviewTask Parameters for the video content review task.
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置Parameters for the video content review task.
                     * @param _aiContentReviewTask Parameters for the video content review task.
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
                     * 获取Parameters for the video content analysis task.
                     * @return AiAnalysisTask Parameters for the video content analysis task.
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置Parameters for the video content analysis task.
                     * @param _aiAnalysisTask Parameters for the video content analysis task.
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
                     * 获取Parameters for the video content recognition task.
                     * @return AiRecognitionTask Parameters for the video content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Parameters for the video content recognition task.
                     * @param _aiRecognitionTask Parameters for the video content recognition task.
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
                     * 获取Priority of the workflow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @return TaskPriority Priority of the workflow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTaskPriority() const;

                    /**
                     * 设置Priority of the workflow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @param _taskPriority Priority of the workflow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    void SetTaskPriority(const int64_t& _taskPriority);

                    /**
                     * 判断参数 TaskPriority 是否已赋值
                     * @return TaskPriority 是否已赋值
                     * 
                     */
                    bool TaskPriorityHasBeenSet() const;

                    /**
                     * 获取Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * @return TaskNotifyConfig Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * @param _taskNotifyConfig Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * Workflow ID.
                     */
                    int64_t m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name, up to 128 characters. The name is unique for the same user.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * The trigger rule bound to the workflow triggers the workflow when an uploaded video hits the rule for the object.
                     */
                    WorkflowTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Video processing output configuration. If left blank, it inherits the storage location from Trigger.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The target directory for the output files generated by video processing. It must start and end with a slash (/), such as `/movie/201907/`.
If left empty, it is the same as the directory of the trigger file, that is, `{inputDir}`.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Parameters for the video processing task.
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * Parameters for the video content review task.
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * Parameters for the video content analysis task.
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * Parameters for the video content recognition task.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * Priority of the workflow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     */
                    int64_t m_taskPriority;
                    bool m_taskPriorityHasBeenSet;

                    /**
                     * Event notification information of the task. If it is left unspecified, it indicates that no event notification is obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RESETWORKFLOWREQUEST_H_
