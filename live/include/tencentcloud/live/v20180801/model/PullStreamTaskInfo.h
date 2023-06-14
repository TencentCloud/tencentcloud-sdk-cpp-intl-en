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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecentPullInfo.h>
#include <tencentcloud/live/v20180801/model/PullPushWatermarkInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The information of a stream pulling task.
                */
                class PullStreamTaskInfo : public AbstractModel
                {
                public:
                    PullStreamTaskInfo();
                    ~PullStreamTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param _taskId The task ID.
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
                     * 获取The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
PullPicPushLive: Images
                     * @return SourceType The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
PullPicPushLive: Images
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
PullPicPushLive: Images
                     * @param _sourceType The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
PullPicPushLive: Images
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取The source URL(s).
If `SourceType` is `PullLiveToLive`, there can be only one source URL.
If `SourceType` is `PullVodToLive`, there can be at most 10 source URLs.
                     * @return SourceUrls The source URL(s).
If `SourceType` is `PullLiveToLive`, there can be only one source URL.
If `SourceType` is `PullVodToLive`, there can be at most 10 source URLs.
                     * 
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置The source URL(s).
If `SourceType` is `PullLiveToLive`, there can be only one source URL.
If `SourceType` is `PullVodToLive`, there can be at most 10 source URLs.
                     * @param _sourceUrls The source URL(s).
If `SourceType` is `PullLiveToLive`, there can be only one source URL.
If `SourceType` is `PullVodToLive`, there can be at most 10 source URLs.
                     * 
                     */
                    void SetSourceUrls(const std::vector<std::string>& _sourceUrls);

                    /**
                     * 判断参数 SourceUrls 是否已赋值
                     * @return SourceUrls 是否已赋值
                     * 
                     */
                    bool SourceUrlsHasBeenSet() const;

                    /**
                     * 获取The push domain name.
The pulled stream is pushed to this domain.
                     * @return DomainName The push domain name.
The pulled stream is pushed to this domain.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain name.
The pulled stream is pushed to this domain.
                     * @param _domainName The push domain name.
The pulled stream is pushed to this domain.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The application to push to.
The pulled stream is pushed to this application.
                     * @return AppName The application to push to.
The pulled stream is pushed to this application.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The application to push to.
The pulled stream is pushed to this application.
                     * @param _appName The application to push to.
The pulled stream is pushed to this application.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The stream name.
The pulled stream is pushed under this name.
                     * @return StreamName The stream name.
The pulled stream is pushed under this name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
The pulled stream is pushed under this name.
                     * @param _streamName The stream name.
The pulled stream is pushed under this name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The push parameter.
A custom push parameter.
                     * @return PushArgs The push parameter.
A custom push parameter.
                     * 
                     */
                    std::string GetPushArgs() const;

                    /**
                     * 设置The push parameter.
A custom push parameter.
                     * @param _pushArgs The push parameter.
A custom push parameter.
                     * 
                     */
                    void SetPushArgs(const std::string& _pushArgs);

                    /**
                     * 判断参数 PushArgs 是否已赋值
                     * @return PushArgs 是否已赋值
                     * 
                     */
                    bool PushArgsHasBeenSet() const;

                    /**
                     * 获取The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return StartTime The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _startTime The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return EndTime The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _endTime The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The region where the task was created.
`ap-beijing`: North China (Beijing)
`ap-shanghai`: East China (Shanghai)
`ap-guangzhou`: South China (Guangzhou)
`ap-mumbai`: India
`ap-hongkong`: Hong Kong
`eu-frankfurt`: Germany
`ap-seoul`: Korea
`ap-bangkok`: Thailand
`ap-singapore`: Singapore
`na-siliconvalley`: Western US
`na-ashburn`: Eastern US
`ap-tokyo`: Japan
                     * @return Region The region where the task was created.
`ap-beijing`: North China (Beijing)
`ap-shanghai`: East China (Shanghai)
`ap-guangzhou`: South China (Guangzhou)
`ap-mumbai`: India
`ap-hongkong`: Hong Kong
`eu-frankfurt`: Germany
`ap-seoul`: Korea
`ap-bangkok`: Thailand
`ap-singapore`: Singapore
`na-siliconvalley`: Western US
`na-ashburn`: Eastern US
`ap-tokyo`: Japan
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the task was created.
`ap-beijing`: North China (Beijing)
`ap-shanghai`: East China (Shanghai)
`ap-guangzhou`: South China (Guangzhou)
`ap-mumbai`: India
`ap-hongkong`: Hong Kong
`eu-frankfurt`: Germany
`ap-seoul`: Korea
`ap-bangkok`: Thailand
`ap-singapore`: Singapore
`na-siliconvalley`: Western US
`na-ashburn`: Eastern US
`ap-tokyo`: Japan
                     * @param _region The region where the task was created.
`ap-beijing`: North China (Beijing)
`ap-shanghai`: East China (Shanghai)
`ap-guangzhou`: South China (Guangzhou)
`ap-mumbai`: India
`ap-hongkong`: Hong Kong
`eu-frankfurt`: Germany
`ap-seoul`: Korea
`ap-bangkok`: Thailand
`ap-singapore`: Singapore
`na-siliconvalley`: Western US
`na-ashburn`: Eastern US
`ap-tokyo`: Japan
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The number of times to loop video files.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only if the source is video files.
                     * @return VodLoopTimes The number of times to loop video files.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only if the source is video files.
                     * 
                     */
                    int64_t GetVodLoopTimes() const;

                    /**
                     * 设置The number of times to loop video files.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only if the source is video files.
                     * @param _vodLoopTimes The number of times to loop video files.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only if the source is video files.
                     * 
                     */
                    void SetVodLoopTimes(const int64_t& _vodLoopTimes);

                    /**
                     * 判断参数 VodLoopTimes 是否已赋值
                     * @return VodLoopTimes 是否已赋值
                     * 
                     */
                    bool VodLoopTimesHasBeenSet() const;

                    /**
                     * 获取The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Finish the current video first and then pull from the new source.

This parameter is valid only if the source is video files.
                     * @return VodRefreshType The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Finish the current video first and then pull from the new source.

This parameter is valid only if the source is video files.
                     * 
                     */
                    std::string GetVodRefreshType() const;

                    /**
                     * 设置The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Finish the current video first and then pull from the new source.

This parameter is valid only if the source is video files.
                     * @param _vodRefreshType The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Finish the current video first and then pull from the new source.

This parameter is valid only if the source is video files.
                     * 
                     */
                    void SetVodRefreshType(const std::string& _vodRefreshType);

                    /**
                     * 判断参数 VodRefreshType 是否已赋值
                     * @return VodRefreshType 是否已赋值
                     * 
                     */
                    bool VodRefreshTypeHasBeenSet() const;

                    /**
                     * 获取The task creation time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return CreateTime The task creation time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The task creation time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _createTime The task creation time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
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
                     * 获取The last updated time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return UpdateTime The last updated time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _updateTime The last updated time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The task creator.
                     * @return CreateBy The task creator.
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置The task creator.
                     * @param _createBy The task creator.
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取The operator of the last update.
                     * @return UpdateBy The operator of the last update.
                     * 
                     */
                    std::string GetUpdateBy() const;

                    /**
                     * 设置The operator of the last update.
                     * @param _updateBy The operator of the last update.
                     * 
                     */
                    void SetUpdateBy(const std::string& _updateBy);

                    /**
                     * 判断参数 UpdateBy 是否已赋值
                     * @return UpdateBy 是否已赋值
                     * 
                     */
                    bool UpdateByHasBeenSet() const;

                    /**
                     * 获取The callback URL.
                     * @return CallbackUrl The callback URL.
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置The callback URL.
                     * @param _callbackUrl The callback URL.
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取The events to listen for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task
                     * @return CallbackEvents The events to listen for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task
                     * 
                     */
                    std::vector<std::string> GetCallbackEvents() const;

                    /**
                     * 设置The events to listen for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task
                     * @param _callbackEvents The events to listen for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task
                     * 
                     */
                    void SetCallbackEvents(const std::vector<std::string>& _callbackEvents);

                    /**
                     * 判断参数 CallbackEvents 是否已赋值
                     * @return CallbackEvents 是否已赋值
                     * 
                     */
                    bool CallbackEventsHasBeenSet() const;

                    /**
                     * 获取Note: This parameter is not returned currently.
The information of the last callback.
                     * @return CallbackInfo Note: This parameter is not returned currently.
The information of the last callback.
                     * 
                     */
                    std::string GetCallbackInfo() const;

                    /**
                     * 设置Note: This parameter is not returned currently.
The information of the last callback.
                     * @param _callbackInfo Note: This parameter is not returned currently.
The information of the last callback.
                     * 
                     */
                    void SetCallbackInfo(const std::string& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                    /**
                     * 获取Note: This parameter is not returned currently.
Error message.
                     * @return ErrorInfo Note: This parameter is not returned currently.
Error message.
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置Note: This parameter is not returned currently.
Error message.
                     * @param _errorInfo Note: This parameter is not returned currently.
Error message.
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取The task status.
enable: Enabled
pause: Paused
                     * @return Status The task status.
enable: Enabled
pause: Paused
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status.
enable: Enabled
pause: Paused
                     * @param _status The task status.
enable: Enabled
pause: Paused
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
                     * 获取Note: This parameter is returned only if one task is queried.
The latest pull information.
The information includes the source URL, offset, and report time.
                     * @return RecentPullInfo Note: This parameter is returned only if one task is queried.
The latest pull information.
The information includes the source URL, offset, and report time.
                     * 
                     */
                    RecentPullInfo GetRecentPullInfo() const;

                    /**
                     * 设置Note: This parameter is returned only if one task is queried.
The latest pull information.
The information includes the source URL, offset, and report time.
                     * @param _recentPullInfo Note: This parameter is returned only if one task is queried.
The latest pull information.
The information includes the source URL, offset, and report time.
                     * 
                     */
                    void SetRecentPullInfo(const RecentPullInfo& _recentPullInfo);

                    /**
                     * 判断参数 RecentPullInfo 是否已赋值
                     * @return RecentPullInfo 是否已赋值
                     * 
                     */
                    bool RecentPullInfoHasBeenSet() const;

                    /**
                     * 获取The remarks for the task.
                     * @return Comment The remarks for the task.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The remarks for the task.
                     * @param _comment The remarks for the task.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The backup source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupSourceType The backup source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupSourceType() const;

                    /**
                     * 设置The backup source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupSourceType The backup source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupSourceType(const std::string& _backupSourceType);

                    /**
                     * 判断参数 BackupSourceType 是否已赋值
                     * @return BackupSourceType 是否已赋值
                     * 
                     */
                    bool BackupSourceTypeHasBeenSet() const;

                    /**
                     * 获取The URL of the backup source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupSourceUrl The URL of the backup source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBackupSourceUrl() const;

                    /**
                     * 设置The URL of the backup source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupSourceUrl The URL of the backup source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupSourceUrl(const std::string& _backupSourceUrl);

                    /**
                     * 判断参数 BackupSourceUrl 是否已赋值
                     * @return BackupSourceUrl 是否已赋值
                     * 
                     */
                    bool BackupSourceUrlHasBeenSet() const;

                    /**
                     * 获取The information of watermarks to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WatermarkList The information of watermarks to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PullPushWatermarkInfo> GetWatermarkList() const;

                    /**
                     * 设置The information of watermarks to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _watermarkList The information of watermarks to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWatermarkList(const std::vector<PullPushWatermarkInfo>& _watermarkList);

                    /**
                     * 判断参数 WatermarkList 是否已赋值
                     * @return WatermarkList 是否已赋值
                     * 
                     */
                    bool WatermarkListHasBeenSet() const;

                    /**
                     * 获取Whether to use local mode when the source type is video files. The default is `0`.
0: Do not use local mode
1: Use local mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VodLocalMode Whether to use local mode when the source type is video files. The default is `0`.
0: Do not use local mode
1: Use local mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVodLocalMode() const;

                    /**
                     * 设置Whether to use local mode when the source type is video files. The default is `0`.
0: Do not use local mode
1: Use local mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vodLocalMode Whether to use local mode when the source type is video files. The default is `0`.
0: Do not use local mode
1: Use local mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVodLocalMode(const int64_t& _vodLocalMode);

                    /**
                     * 判断参数 VodLocalMode 是否已赋值
                     * @return VodLocalMode 是否已赋值
                     * 
                     */
                    bool VodLocalModeHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
PullPicPushLive: Images
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * The source URL(s).
If `SourceType` is `PullLiveToLive`, there can be only one source URL.
If `SourceType` is `PullVodToLive`, there can be at most 10 source URLs.
                     */
                    std::vector<std::string> m_sourceUrls;
                    bool m_sourceUrlsHasBeenSet;

                    /**
                     * The push domain name.
The pulled stream is pushed to this domain.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The application to push to.
The pulled stream is pushed to this application.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The stream name.
The pulled stream is pushed under this name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The push parameter.
A custom push parameter.
                     */
                    std::string m_pushArgs;
                    bool m_pushArgsHasBeenSet;

                    /**
                     * The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The region where the task was created.
`ap-beijing`: North China (Beijing)
`ap-shanghai`: East China (Shanghai)
`ap-guangzhou`: South China (Guangzhou)
`ap-mumbai`: India
`ap-hongkong`: Hong Kong
`eu-frankfurt`: Germany
`ap-seoul`: Korea
`ap-bangkok`: Thailand
`ap-singapore`: Singapore
`na-siliconvalley`: Western US
`na-ashburn`: Eastern US
`ap-tokyo`: Japan
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The number of times to loop video files.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only if the source is video files.
                     */
                    int64_t m_vodLoopTimes;
                    bool m_vodLoopTimesHasBeenSet;

                    /**
                     * The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Finish the current video first and then pull from the new source.

This parameter is valid only if the source is video files.
                     */
                    std::string m_vodRefreshType;
                    bool m_vodRefreshTypeHasBeenSet;

                    /**
                     * The task creation time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last updated time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The task creator.
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * The operator of the last update.
                     */
                    std::string m_updateBy;
                    bool m_updateByHasBeenSet;

                    /**
                     * The callback URL.
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * The events to listen for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task
                     */
                    std::vector<std::string> m_callbackEvents;
                    bool m_callbackEventsHasBeenSet;

                    /**
                     * Note: This parameter is not returned currently.
The information of the last callback.
                     */
                    std::string m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                    /**
                     * Note: This parameter is not returned currently.
Error message.
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * The task status.
enable: Enabled
pause: Paused
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Note: This parameter is returned only if one task is queried.
The latest pull information.
The information includes the source URL, offset, and report time.
                     */
                    RecentPullInfo m_recentPullInfo;
                    bool m_recentPullInfoHasBeenSet;

                    /**
                     * The remarks for the task.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The backup source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupSourceType;
                    bool m_backupSourceTypeHasBeenSet;

                    /**
                     * The URL of the backup source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_backupSourceUrl;
                    bool m_backupSourceUrlHasBeenSet;

                    /**
                     * The information of watermarks to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PullPushWatermarkInfo> m_watermarkList;
                    bool m_watermarkListHasBeenSet;

                    /**
                     * Whether to use local mode when the source type is video files. The default is `0`.
0: Do not use local mode
1: Use local mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vodLocalMode;
                    bool m_vodLocalModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_
