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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateMediaProcessTaskResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The information of a bitrate reduction task.
                */
                class ReduceMediaBitrateTask : public AbstractModel
                {
                public:
                    ReduceMediaBitrateTask();
                    ~ReduceMediaBitrateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param TaskId The task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @return Status The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @param Status The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The ID of the media file.
                     * @return FileId The ID of the media file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The ID of the media file.
                     * @param FileId The ID of the media file.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The name of the media file.
                     * @return FileName The name of the media file.
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置The name of the media file.
                     * @param FileName The name of the media file.
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取The address of the media file.
                     * @return FileUrl The address of the media file.
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置The address of the media file.
                     * @param FileUrl The address of the media file.
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MetaData The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取The execution status and result of the bitrate reduction task.
                     * @return MediaProcessResultSet The execution status and result of the bitrate reduction task.
                     */
                    std::vector<ReduceMediaBitrateMediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置The execution status and result of the bitrate reduction task.
                     * @param MediaProcessResultSet The execution status and result of the bitrate reduction task.
                     */
                    void SetMediaProcessResultSet(const std::vector<ReduceMediaBitrateMediaProcessTaskResult>& _mediaProcessResultSet);

                    /**
                     * 判断参数 MediaProcessResultSet 是否已赋值
                     * @return MediaProcessResultSet 是否已赋值
                     */
                    bool MediaProcessResultSetHasBeenSet() const;

                    /**
                     * 获取The task priority, which can be a value from -10 to 10.
                     * @return TasksPriority The task priority, which can be a value from -10 to 10.
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置The task priority, which can be a value from -10 to 10.
                     * @param TasksPriority The task priority, which can be a value from -10 to 10.
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取The notification mode for the change of task status. Valid values:
<li>Finish: Send a notification after the task is completed.</li>
<li>None: Do not send status change notifications for this task.</li>
                     * @return TasksNotifyMode The notification mode for the change of task status. Valid values:
<li>Finish: Send a notification after the task is completed.</li>
<li>None: Do not send status change notifications for this task.</li>
                     */
                    std::string GetTasksNotifyMode() const;

                    /**
                     * 设置The notification mode for the change of task status. Valid values:
<li>Finish: Send a notification after the task is completed.</li>
<li>None: Do not send status change notifications for this task.</li>
                     * @param TasksNotifyMode The notification mode for the change of task status. Valid values:
<li>Finish: Send a notification after the task is completed.</li>
<li>None: Do not send status change notifications for this task.</li>
                     */
                    void SetTasksNotifyMode(const std::string& _tasksNotifyMode);

                    /**
                     * 判断参数 TasksNotifyMode 是否已赋值
                     * @return TasksNotifyMode 是否已赋值
                     */
                    bool TasksNotifyModeHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @return SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @param SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The task flow status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The ID of the media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The name of the media file.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * The address of the media file.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * The execution status and result of the bitrate reduction task.
                     */
                    std::vector<ReduceMediaBitrateMediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * The task priority, which can be a value from -10 to 10.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * The notification mode for the change of task status. Valid values:
<li>Finish: Send a notification after the task is completed.</li>
<li>None: Do not send status change notifications for this task.</li>
                     */
                    std::string m_tasksNotifyMode;
                    bool m_tasksNotifyModeHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The session ID, which is used for de-duplication. If there was a request with the same session ID in the last seven days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETASK_H_
