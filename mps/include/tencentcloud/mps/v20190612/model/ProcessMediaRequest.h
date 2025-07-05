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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessMedia request structure.
                */
                class ProcessMediaRequest : public AbstractModel
                {
                public:
                    ProcessMediaRequest();
                    ~ProcessMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The information of the file to process.
                     * @return InputInfo The information of the file to process.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置The information of the file to process.
                     * @param _inputInfo The information of the file to process.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Target storage for Media Processing Service output files. If left blank, it inherits the storage location in InputInfo.

Note: When InputInfo.Type is URL, this parameter is required.
                     * @return OutputStorage Target storage for Media Processing Service output files. If left blank, it inherits the storage location in InputInfo.

Note: When InputInfo.Type is URL, this parameter is required.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target storage for Media Processing Service output files. If left blank, it inherits the storage location in InputInfo.

Note: When InputInfo.Type is URL, this parameter is required.
                     * @param _outputStorage Target storage for Media Processing Service output files. If left blank, it inherits the storage location in InputInfo.

Note: When InputInfo.Type is URL, this parameter is required.
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
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     * @return OutputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     * @param _outputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
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
                     * 获取Orchestration ID.
Note 1: For parameters OutputStorage and OutputDir:
<li>When a sub-task node in service orchestration has OutputStorage and OutputDir configured, the output configured in this sub-task node is used as the output of the sub-task.</li>
<li>When a sub-task node in service orchestration does not have OutputStorage and OutputDir configured, if the task creation API (ProcessMedia) has specified an output, it will override the default output of the original orchestration.</li>
<li>The priority of output settings is: Orchestration sub-task node > Output specified by the task API > Corresponding configuration within an orchestration.</li>
Note 2: For the TaskNotifyConfig parameter, if the task creation API (ProcessMedia) has set this parameter, it will override the default callback of the original orchestration.

Note 3: The trigger configured for an orchestration is for automatically starting the orchestration. It stops working when you manually call this API to start an orchestration.
                     * @return ScheduleId Orchestration ID.
Note 1: For parameters OutputStorage and OutputDir:
<li>When a sub-task node in service orchestration has OutputStorage and OutputDir configured, the output configured in this sub-task node is used as the output of the sub-task.</li>
<li>When a sub-task node in service orchestration does not have OutputStorage and OutputDir configured, if the task creation API (ProcessMedia) has specified an output, it will override the default output of the original orchestration.</li>
<li>The priority of output settings is: Orchestration sub-task node > Output specified by the task API > Corresponding configuration within an orchestration.</li>
Note 2: For the TaskNotifyConfig parameter, if the task creation API (ProcessMedia) has set this parameter, it will override the default callback of the original orchestration.

Note 3: The trigger configured for an orchestration is for automatically starting the orchestration. It stops working when you manually call this API to start an orchestration.
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置Orchestration ID.
Note 1: For parameters OutputStorage and OutputDir:
<li>When a sub-task node in service orchestration has OutputStorage and OutputDir configured, the output configured in this sub-task node is used as the output of the sub-task.</li>
<li>When a sub-task node in service orchestration does not have OutputStorage and OutputDir configured, if the task creation API (ProcessMedia) has specified an output, it will override the default output of the original orchestration.</li>
<li>The priority of output settings is: Orchestration sub-task node > Output specified by the task API > Corresponding configuration within an orchestration.</li>
Note 2: For the TaskNotifyConfig parameter, if the task creation API (ProcessMedia) has set this parameter, it will override the default callback of the original orchestration.

Note 3: The trigger configured for an orchestration is for automatically starting the orchestration. It stops working when you manually call this API to start an orchestration.
                     * @param _scheduleId Orchestration ID.
Note 1: For parameters OutputStorage and OutputDir:
<li>When a sub-task node in service orchestration has OutputStorage and OutputDir configured, the output configured in this sub-task node is used as the output of the sub-task.</li>
<li>When a sub-task node in service orchestration does not have OutputStorage and OutputDir configured, if the task creation API (ProcessMedia) has specified an output, it will override the default output of the original orchestration.</li>
<li>The priority of output settings is: Orchestration sub-task node > Output specified by the task API > Corresponding configuration within an orchestration.</li>
Note 2: For the TaskNotifyConfig parameter, if the task creation API (ProcessMedia) has set this parameter, it will override the default callback of the original orchestration.

Note 3: The trigger configured for an orchestration is for automatically starting the orchestration. It stops working when you manually call this API to start an orchestration.
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

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
                     * 获取Media quality inspection type task parameters.
                     * @return AiQualityControlTask Media quality inspection type task parameters.
                     * 
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置Media quality inspection type task parameters.
                     * @param _aiQualityControlTask Media quality inspection type task parameters.
                     * 
                     */
                    void SetAiQualityControlTask(const AiQualityControlTaskInput& _aiQualityControlTask);

                    /**
                     * 判断参数 AiQualityControlTask 是否已赋值
                     * @return AiQualityControlTask 是否已赋值
                     * 
                     */
                    bool AiQualityControlTaskHasBeenSet() const;

                    /**
                     * 获取Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     * @return TaskNotifyConfig Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     * @param _taskNotifyConfig Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
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
                     * 获取Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @return TasksPriority Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @param _tasksPriority Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Identification code for deduplication, up to 50 characters. If a request with the same identification code was made within the past 3 days, an error will be returned for the current request. If this parameter is not provided or is an empty string, deduplication will not be performed for this request.
                     * @return SessionId Identification code for deduplication, up to 50 characters. If a request with the same identification code was made within the past 3 days, an error will be returned for the current request. If this parameter is not provided or is an empty string, deduplication will not be performed for this request.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identification code for deduplication, up to 50 characters. If a request with the same identification code was made within the past 3 days, an error will be returned for the current request. If this parameter is not provided or is an empty string, deduplication will not be performed for this request.
                     * @param _sessionId Identification code for deduplication, up to 50 characters. If a request with the same identification code was made within the past 3 days, an error will be returned for the current request. If this parameter is not provided or is an empty string, deduplication will not be performed for this request.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @param _sessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     * @return TaskType The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     * @param _taskType The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
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
                     * 获取Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @return ResourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @param _resourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Smart subtitle task.
                     * @return SmartSubtitlesTask Smart subtitle task.
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置Smart subtitle task.
                     * @param _smartSubtitlesTask Smart subtitle task.
                     * 
                     */
                    void SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取Whether to skip metadata acquisition. Valid values:
0: do not skip
1: skip
Default value: 0		
                     * @return SkipMateData Whether to skip metadata acquisition. Valid values:
0: do not skip
1: skip
Default value: 0		
                     * 
                     */
                    int64_t GetSkipMateData() const;

                    /**
                     * 设置Whether to skip metadata acquisition. Valid values:
0: do not skip
1: skip
Default value: 0		
                     * @param _skipMateData Whether to skip metadata acquisition. Valid values:
0: do not skip
1: skip
Default value: 0		
                     * 
                     */
                    void SetSkipMateData(const int64_t& _skipMateData);

                    /**
                     * 判断参数 SkipMateData 是否已赋值
                     * @return SkipMateData 是否已赋值
                     * 
                     */
                    bool SkipMateDataHasBeenSet() const;

                private:

                    /**
                     * The information of the file to process.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Target storage for Media Processing Service output files. If left blank, it inherits the storage location in InputInfo.

Note: When InputInfo.Type is URL, this parameter is required.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Orchestration ID.
Note 1: For parameters OutputStorage and OutputDir:
<li>When a sub-task node in service orchestration has OutputStorage and OutputDir configured, the output configured in this sub-task node is used as the output of the sub-task.</li>
<li>When a sub-task node in service orchestration does not have OutputStorage and OutputDir configured, if the task creation API (ProcessMedia) has specified an output, it will override the default output of the original orchestration.</li>
<li>The priority of output settings is: Orchestration sub-task node > Output specified by the task API > Corresponding configuration within an orchestration.</li>
Note 2: For the TaskNotifyConfig parameter, if the task creation API (ProcessMedia) has set this parameter, it will override the default callback of the original orchestration.

Note 3: The trigger configured for an orchestration is for automatically starting the orchestration. It stops working when you manually call this API to start an orchestration.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

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
                     * Media quality inspection type task parameters.
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Identification code for deduplication, up to 50 characters. If a request with the same identification code was made within the past 3 days, an error will be returned for the current request. If this parameter is not provided or is an empty string, deduplication will not be performed for this request.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Smart subtitle task.
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * Whether to skip metadata acquisition. Valid values:
0: do not skip
1: skip
Default value: 0		
                     */
                    int64_t m_skipMateData;
                    bool m_skipMateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
