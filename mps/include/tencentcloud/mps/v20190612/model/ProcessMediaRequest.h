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
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置The information of the file to process.
                     * @param InputInfo The information of the file to process.
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取The storage location of the media processing output file. If this parameter is left empty, the storage location in `InputInfo` will be inherited.
                     * @return OutputStorage The storage location of the media processing output file. If this parameter is left empty, the storage location in `InputInfo` will be inherited.
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The storage location of the media processing output file. If this parameter is left empty, the storage location in `InputInfo` will be inherited.
                     * @param OutputStorage The storage location of the media processing output file. If this parameter is left empty, the storage location in `InputInfo` will be inherited.
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     * @return OutputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     * @param OutputDir The directory to save the media processing output file, which must start and end with `/`, such as `/movie/201907/`.
If you do not specify this parameter, the file will be saved to the directory specified in `InputInfo`.
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取The scheme ID.
Note 1: About `OutputStorage` and `OutputDir`
<li>If an output storage and directory are specified for a subtask of the scheme, those output settings will be applied.</li>
<li>If an output storage and directory are not specified for the subtasks of a scheme, the output parameters passed in the `ProcessMedia` API will be applied.</li>
Note 2: If `TaskNotifyConfig` is specified, the specified settings will be used instead of the default callback settings of the scheme.

Note 3: The trigger configured for a scheme is for automatically starting a scheme. It stops working when you manually call this API to start a scheme.
                     * @return ScheduleId The scheme ID.
Note 1: About `OutputStorage` and `OutputDir`
<li>If an output storage and directory are specified for a subtask of the scheme, those output settings will be applied.</li>
<li>If an output storage and directory are not specified for the subtasks of a scheme, the output parameters passed in the `ProcessMedia` API will be applied.</li>
Note 2: If `TaskNotifyConfig` is specified, the specified settings will be used instead of the default callback settings of the scheme.

Note 3: The trigger configured for a scheme is for automatically starting a scheme. It stops working when you manually call this API to start a scheme.
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置The scheme ID.
Note 1: About `OutputStorage` and `OutputDir`
<li>If an output storage and directory are specified for a subtask of the scheme, those output settings will be applied.</li>
<li>If an output storage and directory are not specified for the subtasks of a scheme, the output parameters passed in the `ProcessMedia` API will be applied.</li>
Note 2: If `TaskNotifyConfig` is specified, the specified settings will be used instead of the default callback settings of the scheme.

Note 3: The trigger configured for a scheme is for automatically starting a scheme. It stops working when you manually call this API to start a scheme.
                     * @param ScheduleId The scheme ID.
Note 1: About `OutputStorage` and `OutputDir`
<li>If an output storage and directory are specified for a subtask of the scheme, those output settings will be applied.</li>
<li>If an output storage and directory are not specified for the subtasks of a scheme, the output parameters passed in the `ProcessMedia` API will be applied.</li>
Note 2: If `TaskNotifyConfig` is specified, the specified settings will be used instead of the default callback settings of the scheme.

Note 3: The trigger configured for a scheme is for automatically starting a scheme. It stops working when you manually call this API to start a scheme.
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取The media processing parameters to use.
                     * @return MediaProcessTask The media processing parameters to use.
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置The media processing parameters to use.
                     * @param MediaProcessTask The media processing parameters to use.
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取Type parameter of a video content audit task.
                     * @return AiContentReviewTask Type parameter of a video content audit task.
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置Type parameter of a video content audit task.
                     * @param AiContentReviewTask Type parameter of a video content audit task.
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取Video content analysis task parameter.
                     * @return AiAnalysisTask Video content analysis task parameter.
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置Video content analysis task parameter.
                     * @param AiAnalysisTask Video content analysis task parameter.
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取Type parameter of a video content recognition task.
                     * @return AiRecognitionTask Type parameter of a video content recognition task.
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Type parameter of a video content recognition task.
                     * @param AiRecognitionTask Type parameter of a video content recognition task.
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取The parameters of a quality control task.
                     * @return AiQualityControlTask The parameters of a quality control task.
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置The parameters of a quality control task.
                     * @param AiQualityControlTask The parameters of a quality control task.
                     */
                    void SetAiQualityControlTask(const AiQualityControlTaskInput& _aiQualityControlTask);

                    /**
                     * 判断参数 AiQualityControlTask 是否已赋值
                     * @return AiQualityControlTask 是否已赋值
                     */
                    bool AiQualityControlTaskHasBeenSet() const;

                    /**
                     * 获取Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     * @return TaskNotifyConfig Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     * @param TaskNotifyConfig Event notification information of a task. If this parameter is left empty, no event notifications will be obtained.
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @return TasksPriority Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     * @param TasksPriority Task flow priority. The higher the value, the higher the priority. Value range: [-10, 10]. If this parameter is left empty, 0 will be used.
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @param SessionId The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @param SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     * @return TaskType The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     * @param TaskType The task type.
<li> `Online` (default): A task that is executed immediately.</li>
<li> `Offline`: A task that is executed when the system is idle (within three days by default).</li>
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * The information of the file to process.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * The storage location of the media processing output file. If this parameter is left empty, the storage location in `InputInfo` will be inherited.
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
                     * The scheme ID.
Note 1: About `OutputStorage` and `OutputDir`
<li>If an output storage and directory are specified for a subtask of the scheme, those output settings will be applied.</li>
<li>If an output storage and directory are not specified for the subtasks of a scheme, the output parameters passed in the `ProcessMedia` API will be applied.</li>
Note 2: If `TaskNotifyConfig` is specified, the specified settings will be used instead of the default callback settings of the scheme.

Note 3: The trigger configured for a scheme is for automatically starting a scheme. It stops working when you manually call this API to start a scheme.
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
                     * The parameters of a quality control task.
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
                     * The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSMEDIAREQUEST_H_
