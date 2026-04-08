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
#include <tencentcloud/mps/v20190612/model/LiveSmartSubtitlesTaskInput.h>


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
                     * 获取<p>The live streaming URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the trtc room number ID, which must be a number.<br><code>&lt;sdkappid&gt;</code> is the trtc SDK app ID.<br><code>&lt;userid&gt;</code> is the user ID of the service entering the room, which can distinguish robots.<br><code>&lt;usersig&gt;</code> is the trtc user's signature.</p><p>WebRTC supports the live stream of <a href="https://www.tencentcloud.com/product/leb?from_cn_redirect=1">LEB</a>. To obtain the address, <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">see</a>.</p><p>For SRT-supported addresses, <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a>.</p>
                     * @return Url <p>The live streaming URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the trtc room number ID, which must be a number.<br><code>&lt;sdkappid&gt;</code> is the trtc SDK app ID.<br><code>&lt;userid&gt;</code> is the user ID of the service entering the room, which can distinguish robots.<br><code>&lt;usersig&gt;</code> is the trtc user's signature.</p><p>WebRTC supports the live stream of <a href="https://www.tencentcloud.com/product/leb?from_cn_redirect=1">LEB</a>. To obtain the address, <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">see</a>.</p><p>For SRT-supported addresses, <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a>.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>The live streaming URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the trtc room number ID, which must be a number.<br><code>&lt;sdkappid&gt;</code> is the trtc SDK app ID.<br><code>&lt;userid&gt;</code> is the user ID of the service entering the room, which can distinguish robots.<br><code>&lt;usersig&gt;</code> is the trtc user's signature.</p><p>WebRTC supports the live stream of <a href="https://www.tencentcloud.com/product/leb?from_cn_redirect=1">LEB</a>. To obtain the address, <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">see</a>.</p><p>For SRT-supported addresses, <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a>.</p>
                     * @param _url <p>The live streaming URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the trtc room number ID, which must be a number.<br><code>&lt;sdkappid&gt;</code> is the trtc SDK app ID.<br><code>&lt;userid&gt;</code> is the user ID of the service entering the room, which can distinguish robots.<br><code>&lt;usersig&gt;</code> is the trtc user's signature.</p><p>WebRTC supports the live stream of <a href="https://www.tencentcloud.com/product/leb?from_cn_redirect=1">LEB</a>. To obtain the address, <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">see</a>.</p><p>For SRT-supported addresses, <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a>.</p>
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
                     * 获取<p>Event notification information of the task. This is used to specify the live stream processing result.</p>
                     * @return TaskNotifyConfig <p>Event notification information of the task. This is used to specify the live stream processing result.</p>
                     * 
                     */
                    LiveStreamTaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>Event notification information of the task. This is used to specify the live stream processing result.</p>
                     * @param _taskNotifyConfig <p>Event notification information of the task. This is used to specify the live stream processing result.</p>
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
                     * 获取<p>Target storage for the output file of the live stream processing task. This parameter is required if the processing task has an output file.</p>
                     * @return OutputStorage <p>Target storage for the output file of the live stream processing task. This parameter is required if the processing task has an output file.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for the output file of the live stream processing task. This parameter is required if the processing task has an output file.</p>
                     * @param _outputStorage <p>Target storage for the output file of the live stream processing task. This parameter is required if the processing task has an output file.</p>
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
                     * 获取<p>Target output directory for the file generated by the live stream processing task, such as <code>/movie/201909/</code>. If this is not specified, the default directory is <code>/</code>.</p>
                     * @return OutputDir <p>Target output directory for the file generated by the live stream processing task, such as <code>/movie/201909/</code>. If this is not specified, the default directory is <code>/</code>.</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>Target output directory for the file generated by the live stream processing task, such as <code>/movie/201909/</code>. If this is not specified, the default directory is <code>/</code>.</p>
                     * @param _outputDir <p>Target output directory for the file generated by the live stream processing task, such as <code>/movie/201909/</code>. If this is not specified, the default directory is <code>/</code>.</p>
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
                     * 获取<p>Parameters for the video content review task.</p>
                     * @return AiContentReviewTask <p>Parameters for the video content review task.</p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>Parameters for the video content review task.</p>
                     * @param _aiContentReviewTask <p>Parameters for the video content review task.</p>
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
                     * 获取<p>Parameters for the video content recognition task.</p>
                     * @return AiRecognitionTask <p>Parameters for the video content recognition task.</p>
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>Parameters for the video content recognition task.</p>
                     * @param _aiRecognitionTask <p>Parameters for the video content recognition task.</p>
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
                     * 获取<p>Parameters for the video content analysis task.</p>
                     * @return AiAnalysisTask <p>Parameters for the video content analysis task.</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Parameters for the video content analysis task.</p>
                     * @param _aiAnalysisTask <p>Parameters for the video content analysis task.</p>
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
                     * 获取<p>Parameters for the media quality inspection task.</p>
                     * @return AiQualityControlTask <p>Parameters for the media quality inspection task.</p>
                     * 
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置<p>Parameters for the media quality inspection task.</p>
                     * @param _aiQualityControlTask <p>Parameters for the media quality inspection task.</p>
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
                     * 获取<p>Parameters for the smart subtitle task.</p>
                     * @return SmartSubtitlesTask <p>Parameters for the smart subtitle task.</p>
                     * 
                     */
                    LiveSmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>Parameters for the smart subtitle task.</p>
                     * @param _smartSubtitlesTask <p>Parameters for the smart subtitle task.</p>
                     * 
                     */
                    void SetSmartSubtitlesTask(const LiveSmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Live streaming orchestration ID.<br>Note 1: For the OutputStorage and OutputDir parameters:</p><li>If OutputStorage and OutputDir are configured in the subtask node of service orchestration, the output configured in the subtask node serves as the subtask output.</li><li>If OutputStorage and OutputDir are not configured in the subtask node of service orchestration and ProcessLiveStream has output, the default output of the original orchestration is overridden.</li>Note 2: For the TaskNotifyConfig parameter, if it has been configured in the task creation API (ProcessLiveStream), the default callback of the original orchestration is overridden.
                     * @return ScheduleId <p>Live streaming orchestration ID.<br>Note 1: For the OutputStorage and OutputDir parameters:</p><li>If OutputStorage and OutputDir are configured in the subtask node of service orchestration, the output configured in the subtask node serves as the subtask output.</li><li>If OutputStorage and OutputDir are not configured in the subtask node of service orchestration and ProcessLiveStream has output, the default output of the original orchestration is overridden.</li>Note 2: For the TaskNotifyConfig parameter, if it has been configured in the task creation API (ProcessLiveStream), the default callback of the original orchestration is overridden.
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置<p>Live streaming orchestration ID.<br>Note 1: For the OutputStorage and OutputDir parameters:</p><li>If OutputStorage and OutputDir are configured in the subtask node of service orchestration, the output configured in the subtask node serves as the subtask output.</li><li>If OutputStorage and OutputDir are not configured in the subtask node of service orchestration and ProcessLiveStream has output, the default output of the original orchestration is overridden.</li>Note 2: For the TaskNotifyConfig parameter, if it has been configured in the task creation API (ProcessLiveStream), the default callback of the original orchestration is overridden.
                     * @param _scheduleId <p>Live streaming orchestration ID.<br>Note 1: For the OutputStorage and OutputDir parameters:</p><li>If OutputStorage and OutputDir are configured in the subtask node of service orchestration, the output configured in the subtask node serves as the subtask output.</li><li>If OutputStorage and OutputDir are not configured in the subtask node of service orchestration and ProcessLiveStream has output, the default output of the original orchestration is overridden.</li>Note 2: For the TaskNotifyConfig parameter, if it has been configured in the task creation API (ProcessLiveStream), the default callback of the original orchestration is overridden.
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
                     * 获取<p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * @return ResourceId <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * @param _resourceId <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>The live streaming URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the trtc room number ID, which must be a number.<br><code>&lt;sdkappid&gt;</code> is the trtc SDK app ID.<br><code>&lt;userid&gt;</code> is the user ID of the service entering the room, which can distinguish robots.<br><code>&lt;usersig&gt;</code> is the trtc user's signature.</p><p>WebRTC supports the live stream of <a href="https://www.tencentcloud.com/product/leb?from_cn_redirect=1">LEB</a>. To obtain the address, <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">see</a>.</p><p>For SRT-supported addresses, <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a>.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Event notification information of the task. This is used to specify the live stream processing result.</p>
                     */
                    LiveStreamTaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>Target storage for the output file of the live stream processing task. This parameter is required if the processing task has an output file.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Target output directory for the file generated by the live stream processing task, such as <code>/movie/201909/</code>. If this is not specified, the default directory is <code>/</code>.</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>Parameters for the video content review task.</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>Parameters for the video content recognition task.</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>Parameters for the video content analysis task.</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Parameters for the media quality inspection task.</p>
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * <p>Parameters for the smart subtitle task.</p>
                     */
                    LiveSmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Live streaming orchestration ID.<br>Note 1: For the OutputStorage and OutputDir parameters:</p><li>If OutputStorage and OutputDir are configured in the subtask node of service orchestration, the output configured in the subtask node serves as the subtask output.</li><li>If OutputStorage and OutputDir are not configured in the subtask node of service orchestration and ProcessLiveStream has output, the default output of the original orchestration is overridden.</li>Note 2: For the TaskNotifyConfig parameter, if it has been configured in the task creation API (ProcessLiveStream), the default callback of the original orchestration is overridden.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
