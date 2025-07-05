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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamTaskNotifyConfig.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ProcessLiveStream request structure.
                */
                class ProcessLiveStreamRequest : public AbstractModel
                {
                public:
                    ProcessLiveStreamRequest();
                    ~ProcessLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Live stream URL, which must be a live stream file address. RTMP, HLS, and FLV are supported.
                     * @return Url Live stream URL, which must be a live stream file address. RTMP, HLS, and FLV are supported.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Live stream URL, which must be a live stream file address. RTMP, HLS, and FLV are supported.
                     * @param _url Live stream URL, which must be a live stream file address. RTMP, HLS, and FLV are supported.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Event notification information of a task, which is used to specify the live stream processing result.
                     * @return TaskNotifyConfig Event notification information of a task, which is used to specify the live stream processing result.
                     * 
                     */
                    LiveStreamTaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of a task, which is used to specify the live stream processing result.
                     * @param _taskNotifyConfig Event notification information of a task, which is used to specify the live stream processing result.
                     * 
                     */
                    void SetTaskNotifyConfig(const LiveStreamTaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Target bucket of a live stream processing output file. This parameter is required if a file will be output.
                     * @return OutputStorage Target bucket of a live stream processing output file. This parameter is required if a file will be output.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target bucket of a live stream processing output file. This parameter is required if a file will be output.
                     * @param _outputStorage Target bucket of a live stream processing output file. This parameter is required if a file will be output.
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
                     * 获取Target directory of a live stream processing output file, such as `/movie/201909/`. If this parameter is left empty, the `/` directory will be used.
                     * @return OutputDir Target directory of a live stream processing output file, such as `/movie/201909/`. If this parameter is left empty, the `/` directory will be used.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置Target directory of a live stream processing output file, such as `/movie/201909/`. If this parameter is left empty, the `/` directory will be used.
                     * @param _outputDir Target directory of a live stream processing output file, such as `/movie/201909/`. If this parameter is left empty, the `/` directory will be used.
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
                     * 获取Type parameter of video content recognition task.
                     * @return AiRecognitionTask Type parameter of video content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置Type parameter of video content recognition task.
                     * @param _aiRecognitionTask Type parameter of video content recognition task.
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
                     * 获取
                     * @return AiAnalysisTask 
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置
                     * @param _aiAnalysisTask 
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
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @param _sessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
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
                     * 获取The live scheme ID.
Note 1:
<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are specified for a subtask of the scheme, those output settings will be applied. </li>
u200c<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are not specified for a subtask of the scheme, the output parameters specified for `ProcessLiveStream` (if any) will be applied. </li>
Note 2: If `TaskNotifyConfig` is specified when `ProcessLiveStream` is called, the specified settings will be applied instead of the default callback settings of the scheme.
                     * @return ScheduleId The live scheme ID.
Note 1:
<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are specified for a subtask of the scheme, those output settings will be applied. </li>
u200c<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are not specified for a subtask of the scheme, the output parameters specified for `ProcessLiveStream` (if any) will be applied. </li>
Note 2: If `TaskNotifyConfig` is specified when `ProcessLiveStream` is called, the specified settings will be applied instead of the default callback settings of the scheme.
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置The live scheme ID.
Note 1:
<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are specified for a subtask of the scheme, those output settings will be applied. </li>
u200c<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are not specified for a subtask of the scheme, the output parameters specified for `ProcessLiveStream` (if any) will be applied. </li>
Note 2: If `TaskNotifyConfig` is specified when `ProcessLiveStream` is called, the specified settings will be applied instead of the default callback settings of the scheme.
                     * @param _scheduleId The live scheme ID.
Note 1:
<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are specified for a subtask of the scheme, those output settings will be applied. </li>
u200c<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are not specified for a subtask of the scheme, the output parameters specified for `ProcessLiveStream` (if any) will be applied. </li>
Note 2: If `TaskNotifyConfig` is specified when `ProcessLiveStream` is called, the specified settings will be applied instead of the default callback settings of the scheme.
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * Live stream URL, which must be a live stream file address. RTMP, HLS, and FLV are supported.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Event notification information of a task, which is used to specify the live stream processing result.
                     */
                    LiveStreamTaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Target bucket of a live stream processing output file. This parameter is required if a file will be output.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Target directory of a live stream processing output file, such as `/movie/201909/`. If this parameter is left empty, the `/` directory will be used.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Type parameter of a video content audit task.
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * Type parameter of video content recognition task.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * Media quality inspection type task parameters.
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The live scheme ID.
Note 1:
<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are specified for a subtask of the scheme, those output settings will be applied. </li>
u200c<li>If an output storage (`OutputStorage`) and directory (`OutputDir`) are not specified for a subtask of the scheme, the output parameters specified for `ProcessLiveStream` (if any) will be applied. </li>
Note 2: If `TaskNotifyConfig` is specified when `ProcessLiveStream` is called, the specified settings will be applied instead of the default callback settings of the scheme.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
