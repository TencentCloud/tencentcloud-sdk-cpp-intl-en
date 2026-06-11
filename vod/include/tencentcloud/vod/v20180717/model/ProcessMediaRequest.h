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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after a successful upload. You can get this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.<br>You must provide one of FileId and MediaStoragePath.</p>
                     * @return FileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after a successful upload. You can get this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.<br>You must provide one of FileId and MediaStoragePath.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after a successful upload. You can get this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.<br>You must provide one of FileId and MediaStoragePath.</p>
                     * @param _fileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after a successful upload. You can get this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.<br>You must provide one of FileId and MediaStoragePath.</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>Storage path of the media.<br>Only sub-applications in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can initiate task through MediaStoragePath.<br>Either FileId or MediaStoragePath must be provided.</p>
                     * @return MediaStoragePath <p>Storage path of the media.<br>Only sub-applications in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can initiate task through MediaStoragePath.<br>Either FileId or MediaStoragePath must be provided.</p>
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置<p>Storage path of the media.<br>Only sub-applications in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can initiate task through MediaStoragePath.<br>Either FileId or MediaStoragePath must be provided.</p>
                     * @param _mediaStoragePath <p>Storage path of the media.<br>Only sub-applications in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can initiate task through MediaStoragePath.<br>Either FileId or MediaStoragePath must be provided.</p>
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/33987">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID to access resources in on-demand applications (whether default or newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/33987">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID to access resources in on-demand applications (whether default or newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/33987">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID to access resources in on-demand applications (whether default or newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/33987">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID to access resources in on-demand applications (whether default or newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the video processing type task.</p>
                     * @return MediaProcessTask <p>Parameters for the video processing type task.</p>
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>Parameters for the video processing type task.</p>
                     * @param _mediaProcessTask <p>Parameters for the video processing type task.</p>
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
                     * 获取<p>Audio and video content review type task parameters.<br><font color="red">* Not recommended for use</font>. It is recommended to use <a href="https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1">ReviewAudioVideo</a> or <a href="https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1">ReviewImage</a>.</p>
                     * @return AiContentReviewTask <p>Audio and video content review type task parameters.<br><font color="red">* Not recommended for use</font>. It is recommended to use <a href="https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1">ReviewAudioVideo</a> or <a href="https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1">ReviewImage</a>.</p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>Audio and video content review type task parameters.<br><font color="red">* Not recommended for use</font>. It is recommended to use <a href="https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1">ReviewAudioVideo</a> or <a href="https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1">ReviewImage</a>.</p>
                     * @param _aiContentReviewTask <p>Audio and video content review type task parameters.<br><font color="red">* Not recommended for use</font>. It is recommended to use <a href="https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1">ReviewAudioVideo</a> or <a href="https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1">ReviewImage</a>.</p>
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
                     * 获取<p>Parameters for the audio and video content analysis task.</p>
                     * @return AiAnalysisTask <p>Parameters for the audio and video content analysis task.</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Parameters for the audio and video content analysis task.</p>
                     * @param _aiAnalysisTask <p>Parameters for the audio and video content analysis task.</p>
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
                     * 获取<p>Parameters for the audio/video content recognition task.</p>
                     * @return AiRecognitionTask <p>Parameters for the audio/video content recognition task.</p>
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>Parameters for the audio/video content recognition task.</p>
                     * @param _aiRecognitionTask <p>Parameters for the audio/video content recognition task.</p>
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
                     * 获取<p>Priority of the task flow. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * @return TasksPriority <p>Priority of the task flow. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Priority of the task flow. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * @param _tasksPriority <p>Priority of the task flow. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
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
                     * 获取<p>Task flow status change notification mode. Valid values are Finish, Change, and None. If this is not specified, the default value is Finish.</p>
                     * @return TasksNotifyMode <p>Task flow status change notification mode. Valid values are Finish, Change, and None. If this is not specified, the default value is Finish.</p>
                     * 
                     */
                    std::string GetTasksNotifyMode() const;

                    /**
                     * 设置<p>Task flow status change notification mode. Valid values are Finish, Change, and None. If this is not specified, the default value is Finish.</p>
                     * @param _tasksNotifyMode <p>Task flow status change notification mode. Valid values are Finish, Change, and None. If this is not specified, the default value is Finish.</p>
                     * 
                     */
                    void SetTasksNotifyMode(const std::string& _tasksNotifyMode);

                    /**
                     * 判断参数 TasksNotifyMode 是否已赋值
                     * @return TasksNotifyMode 是否已赋值
                     * 
                     */
                    bool TasksNotifyModeHasBeenSet() const;

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
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Reserved field, used when special purpose.</p>
                     * @return ExtInfo <p>Reserved field, used when special purpose.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used when special purpose.</p>
                     * @param _extInfo <p>Reserved field, used when special purpose.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>Valid when FileID is empty. Pull the Url to generate new media assets and generate a new FileID. The media processing product will be affiliated with the new media assets.</p><p>Note: Storage fees will occur for new media assets.</p>
                     * @return Url <p>Valid when FileID is empty. Pull the Url to generate new media assets and generate a new FileID. The media processing product will be affiliated with the new media assets.</p><p>Note: Storage fees will occur for new media assets.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Valid when FileID is empty. Pull the Url to generate new media assets and generate a new FileID. The media processing product will be affiliated with the new media assets.</p><p>Note: Storage fees will occur for new media assets.</p>
                     * @param _url <p>Valid when FileID is empty. Pull the Url to generate new media assets and generate a new FileID. The media processing product will be affiliated with the new media assets.</p><p>Note: Storage fees will occur for new media assets.</p>
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
                     * 获取<p>The media processing transcoding result is output as standalone media assets. Enabling this option will output the product as standalone media assets and generate a brand-new FileID. Currently only support outputting TranscodeTask transcoding tasks as standalone media assets.</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Note: New media assets will incur storage fees. This option does not currently support enabling for video opening/closing credits and traceable watermarks in transcoding tasks.</p>
                     * @return OutputAsIndependentMedia <p>The media processing transcoding result is output as standalone media assets. Enabling this option will output the product as standalone media assets and generate a brand-new FileID. Currently only support outputting TranscodeTask transcoding tasks as standalone media assets.</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Note: New media assets will incur storage fees. This option does not currently support enabling for video opening/closing credits and traceable watermarks in transcoding tasks.</p>
                     * 
                     */
                    std::string GetOutputAsIndependentMedia() const;

                    /**
                     * 设置<p>The media processing transcoding result is output as standalone media assets. Enabling this option will output the product as standalone media assets and generate a brand-new FileID. Currently only support outputting TranscodeTask transcoding tasks as standalone media assets.</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Note: New media assets will incur storage fees. This option does not currently support enabling for video opening/closing credits and traceable watermarks in transcoding tasks.</p>
                     * @param _outputAsIndependentMedia <p>The media processing transcoding result is output as standalone media assets. Enabling this option will output the product as standalone media assets and generate a brand-new FileID. Currently only support outputting TranscodeTask transcoding tasks as standalone media assets.</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Note: New media assets will incur storage fees. This option does not currently support enabling for video opening/closing credits and traceable watermarks in transcoding tasks.</p>
                     * 
                     */
                    void SetOutputAsIndependentMedia(const std::string& _outputAsIndependentMedia);

                    /**
                     * 判断参数 OutputAsIndependentMedia 是否已赋值
                     * @return OutputAsIndependentMedia 是否已赋值
                     * 
                     */
                    bool OutputAsIndependentMediaHasBeenSet() const;

                private:

                    /**
                     * <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after a successful upload. You can get this field in the <a href="https://www.tencentcloud.com/document/product/266/33950">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.<br>You must provide one of FileId and MediaStoragePath.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Storage path of the media.<br>Only sub-applications in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can initiate task through MediaStoragePath.<br>Either FileId or MediaStoragePath must be provided.</p>
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/33987">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID to access resources in on-demand applications (whether default or newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Parameters for the video processing type task.</p>
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>Audio and video content review type task parameters.<br><font color="red">* Not recommended for use</font>. It is recommended to use <a href="https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1">ReviewAudioVideo</a> or <a href="https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1">ReviewImage</a>.</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>Parameters for the audio and video content analysis task.</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Parameters for the audio/video content recognition task.</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>Priority of the task flow. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Task flow status change notification mode. Valid values are Finish, Change, and None. If this is not specified, the default value is Finish.</p>
                     */
                    std::string m_tasksNotifyMode;
                    bool m_tasksNotifyModeHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Reserved field, used when special purpose.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>Valid when FileID is empty. Pull the Url to generate new media assets and generate a new FileID. The media processing product will be affiliated with the new media assets.</p><p>Note: Storage fees will occur for new media assets.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>The media processing transcoding result is output as standalone media assets. Enabling this option will output the product as standalone media assets and generate a brand-new FileID. Currently only support outputting TranscodeTask transcoding tasks as standalone media assets.</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Note: New media assets will incur storage fees. This option does not currently support enabling for video opening/closing credits and traceable watermarks in transcoding tasks.</p>
                     */
                    std::string m_outputAsIndependentMedia;
                    bool m_outputAsIndependentMediaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIAREQUEST_H_
