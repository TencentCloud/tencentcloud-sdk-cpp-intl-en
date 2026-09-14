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
                     * 获取<p>Live stream URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the TRTC room number ID<br><code>&lt;sdkappid&gt;</code> is the TRTC SDK app ID<br><code>&lt;userid&gt;</code> is the user ID for the service to enter the room, which can distinguish who is the robot<br><code>&lt;usersig&gt;</code> is the TRTC user signature</p><p>webrtc supports LEB live streams. For address retrieval, please <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">refer</a></p><p>For srt supported addresses, please <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a></p>
                     * @return Url <p>Live stream URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the TRTC room number ID<br><code>&lt;sdkappid&gt;</code> is the TRTC SDK app ID<br><code>&lt;userid&gt;</code> is the user ID for the service to enter the room, which can distinguish who is the robot<br><code>&lt;usersig&gt;</code> is the TRTC user signature</p><p>webrtc supports LEB live streams. For address retrieval, please <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">refer</a></p><p>For srt supported addresses, please <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a></p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Live stream URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the TRTC room number ID<br><code>&lt;sdkappid&gt;</code> is the TRTC SDK app ID<br><code>&lt;userid&gt;</code> is the user ID for the service to enter the room, which can distinguish who is the robot<br><code>&lt;usersig&gt;</code> is the TRTC user signature</p><p>webrtc supports LEB live streams. For address retrieval, please <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">refer</a></p><p>For srt supported addresses, please <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a></p>
                     * @param _url <p>Live stream URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the TRTC room number ID<br><code>&lt;sdkappid&gt;</code> is the TRTC SDK app ID<br><code>&lt;userid&gt;</code> is the user ID for the service to enter the room, which can distinguish who is the robot<br><code>&lt;usersig&gt;</code> is the TRTC user signature</p><p>webrtc supports LEB live streams. For address retrieval, please <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">refer</a></p><p>For srt supported addresses, please <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a></p>
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
                     * 获取
                     * @return TaskNotifyConfig 
                     * 
                     */
                    LiveStreamTaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置
                     * @param _taskNotifyConfig 
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
                     * 获取
                     * @return OutputStorage 
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置
                     * @param _outputStorage 
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
                     * 获取
                     * @return OutputDir 
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置
                     * @param _outputDir 
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
                     * 获取
                     * @return AiContentReviewTask 
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置
                     * @param _aiContentReviewTask 
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
                     * 获取
                     * @return AiRecognitionTask 
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置
                     * @param _aiRecognitionTask 
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
                     * 获取
                     * @return AiQualityControlTask 
                     * 
                     */
                    AiQualityControlTaskInput GetAiQualityControlTask() const;

                    /**
                     * 设置
                     * @param _aiQualityControlTask 
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
                     * 获取
                     * @return SmartSubtitlesTask 
                     * 
                     */
                    LiveSmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置
                     * @param _smartSubtitlesTask 
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
                     * 获取
                     * @return SessionId 
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置
                     * @param _sessionId 
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
                     * 获取
                     * @return SessionContext 
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置
                     * @param _sessionContext 
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
                     * 获取
                     * @return ScheduleId 
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置
                     * @param _scheduleId 
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
                     * 获取
                     * @return ResourceId 
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置
                     * @param _resourceId 
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
                     * <p>Live stream URL (must be a live streaming address, supporting rtmp, hls, flv, trtc, webrtc, srt, etc.).<br>The trtc address is as follows:<br> trtc://trtc.rtc.qq.com/mps/<code>&lt;roomid&gt;</code>?sdkappid=<code>&lt;sdkappid&gt;</code>&amp;userid=<code>&lt;userid&gt;</code>&amp;usersig=<code>&lt;usersig&gt;</code><br><code>&lt;roomid&gt;</code> is the TRTC room number ID<br><code>&lt;sdkappid&gt;</code> is the TRTC SDK app ID<br><code>&lt;userid&gt;</code> is the user ID for the service to enter the room, which can distinguish who is the robot<br><code>&lt;usersig&gt;</code> is the TRTC user signature</p><p>webrtc supports LEB live streams. For address retrieval, please <a href="https://www.tencentcloud.com/document/product/267/32720?from_cn_redirect=1">refer</a></p><p>For srt supported addresses, please <a href="https://ffmpeg.org/ffmpeg-protocols.html#srt">refer</a></p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 
                     */
                    LiveStreamTaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * 
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiQualityControlTaskInput m_aiQualityControlTask;
                    bool m_aiQualityControlTaskHasBeenSet;

                    /**
                     * 
                     */
                    LiveSmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSLIVESTREAMREQUEST_H_
