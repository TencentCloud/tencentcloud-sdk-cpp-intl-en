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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Task summary information.
                */
                class TaskSimpleInfo : public AbstractModel
                {
                public:
                    TaskSimpleInfo();
                    ~TaskSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Task status. Valid values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed), ABORTED (Terminated).
                     * @return Status Task status. Valid values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed), ABORTED (Terminated).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed), ABORTED (Terminated).
                     * @param _status Task status. Valid values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed), ABORTED (Terminated).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Video ID.
                     * @return FileId Video ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Video ID.
                     * @param _fileId Video ID.
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
                     * 获取Task type. Value:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task;</li>
<li>ReduceMediaBitrate: bitrate reduction task;</li>
<li>WechatDistribute: publishing on WeChat task;</li>
<li>ReviewAudioVideo: audio/video moderation task;</li>
<li>MPSWorkflowTask: MPS video processing task.</li>
Task types compatible with the 2017 version:
<li>Transcode: video transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task;</li>
<li>Concat: video splicing job;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: capture CSS sprites task.</li>

                     * @return TaskType Task type. Value:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task;</li>
<li>ReduceMediaBitrate: bitrate reduction task;</li>
<li>WechatDistribute: publishing on WeChat task;</li>
<li>ReviewAudioVideo: audio/video moderation task;</li>
<li>MPSWorkflowTask: MPS video processing task.</li>
Task types compatible with the 2017 version:
<li>Transcode: video transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task;</li>
<li>Concat: video splicing job;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: capture CSS sprites task.</li>

                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. Value:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task;</li>
<li>ReduceMediaBitrate: bitrate reduction task;</li>
<li>WechatDistribute: publishing on WeChat task;</li>
<li>ReviewAudioVideo: audio/video moderation task;</li>
<li>MPSWorkflowTask: MPS video processing task.</li>
Task types compatible with the 2017 version:
<li>Transcode: video transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task;</li>
<li>Concat: video splicing job;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: capture CSS sprites task.</li>

                     * @param _taskType Task type. Value:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task;</li>
<li>ReduceMediaBitrate: bitrate reduction task;</li>
<li>WechatDistribute: publishing on WeChat task;</li>
<li>ReviewAudioVideo: audio/video moderation task;</li>
<li>MPSWorkflowTask: MPS video processing task.</li>
Task types compatible with the 2017 version:
<li>Transcode: video transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task;</li>
<li>Concat: video splicing job;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: capture CSS sprites task.</li>

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
                     * 获取Task creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Task creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Task creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task execution start time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task has not started, this field is empty.
                     * @return BeginProcessTime Task execution start time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task has not started, this field is empty.
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Task execution start time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task has not started, this field is empty.
                     * @param _beginProcessTime Task execution start time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task has not started, this field is empty.
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取Task end time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task is not completed yet, this field is empty.
                     * @return FinishTime Task end time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task is not completed yet, this field is empty.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task end time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task is not completed yet, this field is empty.
                     * @param _finishTime Task end time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task is not completed yet, this field is empty.
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Identification code for deduplication, if there has been a request with the same identifier within the past seven days.
                     * @return SessionId Identification code for deduplication, if there has been a request with the same identifier within the past seven days.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identification code for deduplication, if there has been a request with the same identifier within the past seven days.
                     * @param _sessionId Identification code for deduplication, if there has been a request with the same identifier within the past seven days.
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
                     * 获取Source context, used to pass through user request information.
                     * @return SessionContext Source context, used to pass through user request information.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information.
                     * @param _sessionContext Source context, used to pass through user request information.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed), ABORTED (Terminated).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Video ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Task type. Value:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task;</li>
<li>ReduceMediaBitrate: bitrate reduction task;</li>
<li>WechatDistribute: publishing on WeChat task;</li>
<li>ReviewAudioVideo: audio/video moderation task;</li>
<li>MPSWorkflowTask: MPS video processing task.</li>
Task types compatible with the 2017 version:
<li>Transcode: video transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task;</li>
<li>Concat: video splicing job;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: capture CSS sprites task.</li>

                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task execution start time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task has not started, this field is empty.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * Task end time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). If the task is not completed yet, this field is empty.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Identification code for deduplication, if there has been a request with the same identifier within the past seven days.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_
