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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateLivePullStreamTask request structure.
                */
                class CreateLivePullStreamTaskRequest : public AbstractModel
                {
                public:
                    CreateLivePullStreamTaskRequest();
                    ~CreateLivePullStreamTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
                     * @return SourceType The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
                     * @param SourceType The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取The source URL(s).
If `SourceType` is `PullLivePushLive`, you can specify only one source URL.
If `SourceType` is `PullVodPushLive`, you can specify at most 30 source URLs.
Supported file formats: FLV, MP4, HLS.
Supported protocols: HTTP, HTTPS, RTMP, RTMPS, RTSP, SRT.
Notes:
1. We recommend you use FLV files as the source. Poorly interleaved MP4 files may result in playback stuttering. You can also re-interleave your MP4 files before adding them as the source.
2. Do not use private network domains or malicious URLs. CSS will block accounts that do.
3. To avoid push and playback issues, make sure the source files are properly interleaved.
4. Supported video coding formats: H.264, H.265.
5. Supported audio coding format: AAC.
6. Use small video files, preferably not longer than one hour. Large files may take a long time to load or resume after pause. Relay may fail if the time consumed exceeds 15 seconds.
                     * @return SourceUrls The source URL(s).
If `SourceType` is `PullLivePushLive`, you can specify only one source URL.
If `SourceType` is `PullVodPushLive`, you can specify at most 30 source URLs.
Supported file formats: FLV, MP4, HLS.
Supported protocols: HTTP, HTTPS, RTMP, RTMPS, RTSP, SRT.
Notes:
1. We recommend you use FLV files as the source. Poorly interleaved MP4 files may result in playback stuttering. You can also re-interleave your MP4 files before adding them as the source.
2. Do not use private network domains or malicious URLs. CSS will block accounts that do.
3. To avoid push and playback issues, make sure the source files are properly interleaved.
4. Supported video coding formats: H.264, H.265.
5. Supported audio coding format: AAC.
6. Use small video files, preferably not longer than one hour. Large files may take a long time to load or resume after pause. Relay may fail if the time consumed exceeds 15 seconds.
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置The source URL(s).
If `SourceType` is `PullLivePushLive`, you can specify only one source URL.
If `SourceType` is `PullVodPushLive`, you can specify at most 30 source URLs.
Supported file formats: FLV, MP4, HLS.
Supported protocols: HTTP, HTTPS, RTMP, RTMPS, RTSP, SRT.
Notes:
1. We recommend you use FLV files as the source. Poorly interleaved MP4 files may result in playback stuttering. You can also re-interleave your MP4 files before adding them as the source.
2. Do not use private network domains or malicious URLs. CSS will block accounts that do.
3. To avoid push and playback issues, make sure the source files are properly interleaved.
4. Supported video coding formats: H.264, H.265.
5. Supported audio coding format: AAC.
6. Use small video files, preferably not longer than one hour. Large files may take a long time to load or resume after pause. Relay may fail if the time consumed exceeds 15 seconds.
                     * @param SourceUrls The source URL(s).
If `SourceType` is `PullLivePushLive`, you can specify only one source URL.
If `SourceType` is `PullVodPushLive`, you can specify at most 30 source URLs.
Supported file formats: FLV, MP4, HLS.
Supported protocols: HTTP, HTTPS, RTMP, RTMPS, RTSP, SRT.
Notes:
1. We recommend you use FLV files as the source. Poorly interleaved MP4 files may result in playback stuttering. You can also re-interleave your MP4 files before adding them as the source.
2. Do not use private network domains or malicious URLs. CSS will block accounts that do.
3. To avoid push and playback issues, make sure the source files are properly interleaved.
4. Supported video coding formats: H.264, H.265.
5. Supported audio coding format: AAC.
6. Use small video files, preferably not longer than one hour. Large files may take a long time to load or resume after pause. Relay may fail if the time consumed exceeds 15 seconds.
                     */
                    void SetSourceUrls(const std::vector<std::string>& _sourceUrls);

                    /**
                     * 判断参数 SourceUrls 是否已赋值
                     * @return SourceUrls 是否已赋值
                     */
                    bool SourceUrlsHasBeenSet() const;

                    /**
                     * 获取The push domain name.
The pulled stream is pushed to this domain.
Note: If the destination is not a CSS address and its format is different from that of CSS addresses, pass the full address to `ToUrl`. For details, see the description of the `ToUrl` parameter.
                     * @return DomainName The push domain name.
The pulled stream is pushed to this domain.
Note: If the destination is not a CSS address and its format is different from that of CSS addresses, pass the full address to `ToUrl`. For details, see the description of the `ToUrl` parameter.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The push domain name.
The pulled stream is pushed to this domain.
Note: If the destination is not a CSS address and its format is different from that of CSS addresses, pass the full address to `ToUrl`. For details, see the description of the `ToUrl` parameter.
                     * @param DomainName The push domain name.
The pulled stream is pushed to this domain.
Note: If the destination is not a CSS address and its format is different from that of CSS addresses, pass the full address to `ToUrl`. For details, see the description of the `ToUrl` parameter.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The application to push to.
The pulled stream is pushed to this application.
                     * @return AppName The application to push to.
The pulled stream is pushed to this application.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The application to push to.
The pulled stream is pushed to this application.
                     * @param AppName The application to push to.
The pulled stream is pushed to this application.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The stream name.
The pulled stream is pushed under this name.
                     * @return StreamName The stream name.
The pulled stream is pushed under this name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
The pulled stream is pushed under this name.
                     * @param StreamName The stream name.
The pulled stream is pushed under this name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return StartTime The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param StartTime The start time.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
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
                     * @param EndTime The end time. Notes:
1. The end time must be later than the start time.
2. The end time and start time must be later than the current time.
3. The end time and start time must be less than seven days apart.
It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The operator.
                     * @return Operator The operator.
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The operator.
                     * @param Operator The operator.
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取The push parameter.
This is a custom parameter carried during push.
Example:
bak=1&test=2
                     * @return PushArgs The push parameter.
This is a custom parameter carried during push.
Example:
bak=1&test=2
                     */
                    std::string GetPushArgs() const;

                    /**
                     * 设置The push parameter.
This is a custom parameter carried during push.
Example:
bak=1&test=2
                     * @param PushArgs The push parameter.
This is a custom parameter carried during push.
Example:
bak=1&test=2
                     */
                    void SetPushArgs(const std::string& _pushArgs);

                    /**
                     * 判断参数 PushArgs 是否已赋值
                     * @return PushArgs 是否已赋值
                     */
                    bool PushArgsHasBeenSet() const;

                    /**
                     * 获取The events to listen for. If you do not pass this parameter, all events will be listened for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task

`TaskAlarm` indicates a warning event. `AlarmType` examples:
PullFileUnstable: Pull from video files is unstable.
PushStreamUnstable: Push is unstable.
PullFileFailed: Error pulling from video files.
PushStreamFailed: Push error.
FileEndEarly: The video file ended prematurely.
                     * @return CallbackEvents The events to listen for. If you do not pass this parameter, all events will be listened for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task

`TaskAlarm` indicates a warning event. `AlarmType` examples:
PullFileUnstable: Pull from video files is unstable.
PushStreamUnstable: Push is unstable.
PullFileFailed: Error pulling from video files.
PushStreamFailed: Push error.
FileEndEarly: The video file ended prematurely.
                     */
                    std::vector<std::string> GetCallbackEvents() const;

                    /**
                     * 设置The events to listen for. If you do not pass this parameter, all events will be listened for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task

`TaskAlarm` indicates a warning event. `AlarmType` examples:
PullFileUnstable: Pull from video files is unstable.
PushStreamUnstable: Push is unstable.
PullFileFailed: Error pulling from video files.
PushStreamFailed: Push error.
FileEndEarly: The video file ended prematurely.
                     * @param CallbackEvents The events to listen for. If you do not pass this parameter, all events will be listened for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task

`TaskAlarm` indicates a warning event. `AlarmType` examples:
PullFileUnstable: Pull from video files is unstable.
PushStreamUnstable: Push is unstable.
PullFileFailed: Error pulling from video files.
PushStreamFailed: Push error.
FileEndEarly: The video file ended prematurely.
                     */
                    void SetCallbackEvents(const std::vector<std::string>& _callbackEvents);

                    /**
                     * 判断参数 CallbackEvents 是否已赋值
                     * @return CallbackEvents 是否已赋值
                     */
                    bool CallbackEventsHasBeenSet() const;

                    /**
                     * 获取The number of times to loop video files. Default value: -1.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only when the source is video files.
                     * @return VodLoopTimes The number of times to loop video files. Default value: -1.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only when the source is video files.
                     */
                    std::string GetVodLoopTimes() const;

                    /**
                     * 设置The number of times to loop video files. Default value: -1.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only when the source is video files.
                     * @param VodLoopTimes The number of times to loop video files. Default value: -1.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only when the source is video files.
                     */
                    void SetVodLoopTimes(const std::string& _vodLoopTimes);

                    /**
                     * 判断参数 VodLoopTimes 是否已赋值
                     * @return VodLoopTimes 是否已赋值
                     */
                    bool VodLoopTimesHasBeenSet() const;

                    /**
                     * 获取The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Play the new videos after the current video is finished playing (the remaining videos in the old playlist will not be played).

This parameter is valid only if the source before the change is video files.
                     * @return VodRefreshType The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Play the new videos after the current video is finished playing (the remaining videos in the old playlist will not be played).

This parameter is valid only if the source before the change is video files.
                     */
                    std::string GetVodRefreshType() const;

                    /**
                     * 设置The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Play the new videos after the current video is finished playing (the remaining videos in the old playlist will not be played).

This parameter is valid only if the source before the change is video files.
                     * @param VodRefreshType The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Play the new videos after the current video is finished playing (the remaining videos in the old playlist will not be played).

This parameter is valid only if the source before the change is video files.
                     */
                    void SetVodRefreshType(const std::string& _vodRefreshType);

                    /**
                     * 判断参数 VodRefreshType 是否已赋值
                     * @return VodRefreshType 是否已赋值
                     */
                    bool VodRefreshTypeHasBeenSet() const;

                    /**
                     * 获取A custom callback URL.
Callbacks about pull and relay events will be sent to this URL.
                     * @return CallbackUrl A custom callback URL.
Callbacks about pull and relay events will be sent to this URL.
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置A custom callback URL.
Callbacks about pull and relay events will be sent to this URL.
                     * @param CallbackUrl A custom callback URL.
Callbacks about pull and relay events will be sent to this URL.
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取Other parameters.
For example, you can use `ignore_region` to ignore the region passed in and assign a region based on load distribution.
                     * @return ExtraCmd Other parameters.
For example, you can use `ignore_region` to ignore the region passed in and assign a region based on load distribution.
                     */
                    std::string GetExtraCmd() const;

                    /**
                     * 设置Other parameters.
For example, you can use `ignore_region` to ignore the region passed in and assign a region based on load distribution.
                     * @param ExtraCmd Other parameters.
For example, you can use `ignore_region` to ignore the region passed in and assign a region based on load distribution.
                     */
                    void SetExtraCmd(const std::string& _extraCmd);

                    /**
                     * 判断参数 ExtraCmd 是否已赋值
                     * @return ExtraCmd 是否已赋值
                     */
                    bool ExtraCmdHasBeenSet() const;

                    /**
                     * 获取The remarks for a task, not longer than 512 bytes.
                     * @return Comment The remarks for a task, not longer than 512 bytes.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The remarks for a task, not longer than 512 bytes.
                     * @param Comment The remarks for a task, not longer than 512 bytes.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The complete destination URL.
If you specify this parameter, make sure you pass in an empty string for `DomainName`, `AppName`, and `StreamName`.

Note: Make sure that the expiration time of the signature is later than the task end time.
                     * @return ToUrl The complete destination URL.
If you specify this parameter, make sure you pass in an empty string for `DomainName`, `AppName`, and `StreamName`.

Note: Make sure that the expiration time of the signature is later than the task end time.
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置The complete destination URL.
If you specify this parameter, make sure you pass in an empty string for `DomainName`, `AppName`, and `StreamName`.

Note: Make sure that the expiration time of the signature is later than the task end time.
                     * @param ToUrl The complete destination URL.
If you specify this parameter, make sure you pass in an empty string for `DomainName`, `AppName`, and `StreamName`.

Note: Make sure that the expiration time of the signature is later than the task end time.
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取The backup source type.
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Notes:
1. Backup sources are supported only if the primary source type is live streaming.
2. When pull from the primary source is interrupted, the system will pull from the backup source.
3. If the backup source is a video file, each time the video is finished, the system will check if the primary source is recovered and will switch back if it is.
                     * @return BackupSourceType The backup source type.
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Notes:
1. Backup sources are supported only if the primary source type is live streaming.
2. When pull from the primary source is interrupted, the system will pull from the backup source.
3. If the backup source is a video file, each time the video is finished, the system will check if the primary source is recovered and will switch back if it is.
                     */
                    std::string GetBackupSourceType() const;

                    /**
                     * 设置The backup source type.
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Notes:
1. Backup sources are supported only if the primary source type is live streaming.
2. When pull from the primary source is interrupted, the system will pull from the backup source.
3. If the backup source is a video file, each time the video is finished, the system will check if the primary source is recovered and will switch back if it is.
                     * @param BackupSourceType The backup source type.
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Notes:
1. Backup sources are supported only if the primary source type is live streaming.
2. When pull from the primary source is interrupted, the system will pull from the backup source.
3. If the backup source is a video file, each time the video is finished, the system will check if the primary source is recovered and will switch back if it is.
                     */
                    void SetBackupSourceType(const std::string& _backupSourceType);

                    /**
                     * 判断参数 BackupSourceType 是否已赋值
                     * @return BackupSourceType 是否已赋值
                     */
                    bool BackupSourceTypeHasBeenSet() const;

                    /**
                     * 获取The URL of the backup source.
You can specify only one backup source URL.
                     * @return BackupSourceUrl The URL of the backup source.
You can specify only one backup source URL.
                     */
                    std::string GetBackupSourceUrl() const;

                    /**
                     * 设置The URL of the backup source.
You can specify only one backup source URL.
                     * @param BackupSourceUrl The URL of the backup source.
You can specify only one backup source URL.
                     */
                    void SetBackupSourceUrl(const std::string& _backupSourceUrl);

                    /**
                     * 判断参数 BackupSourceUrl 是否已赋值
                     * @return BackupSourceUrl 是否已赋值
                     */
                    bool BackupSourceUrlHasBeenSet() const;

                    /**
                     * 获取The information of watermarks to add.
Notes:
1. You can add up to four watermarks to different locations of the video.
2. Make sure you use publicly accessible URLs for the watermark images.
3. Supported image formats include PNG, JPG, and GIF.
                     * @return WatermarkList The information of watermarks to add.
Notes:
1. You can add up to four watermarks to different locations of the video.
2. Make sure you use publicly accessible URLs for the watermark images.
3. Supported image formats include PNG, JPG, and GIF.
                     */
                    std::vector<PullPushWatermarkInfo> GetWatermarkList() const;

                    /**
                     * 设置The information of watermarks to add.
Notes:
1. You can add up to four watermarks to different locations of the video.
2. Make sure you use publicly accessible URLs for the watermark images.
3. Supported image formats include PNG, JPG, and GIF.
                     * @param WatermarkList The information of watermarks to add.
Notes:
1. You can add up to four watermarks to different locations of the video.
2. Make sure you use publicly accessible URLs for the watermark images.
3. Supported image formats include PNG, JPG, and GIF.
                     */
                    void SetWatermarkList(const std::vector<PullPushWatermarkInfo>& _watermarkList);

                    /**
                     * 判断参数 WatermarkList 是否已赋值
                     * @return WatermarkList 是否已赋值
                     */
                    bool WatermarkListHasBeenSet() const;

                private:

                    /**
                     * The source type. Valid values:
PullLivePushLive: Live streaming
PullVodPushLive: Video files
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * The source URL(s).
If `SourceType` is `PullLivePushLive`, you can specify only one source URL.
If `SourceType` is `PullVodPushLive`, you can specify at most 30 source URLs.
Supported file formats: FLV, MP4, HLS.
Supported protocols: HTTP, HTTPS, RTMP, RTMPS, RTSP, SRT.
Notes:
1. We recommend you use FLV files as the source. Poorly interleaved MP4 files may result in playback stuttering. You can also re-interleave your MP4 files before adding them as the source.
2. Do not use private network domains or malicious URLs. CSS will block accounts that do.
3. To avoid push and playback issues, make sure the source files are properly interleaved.
4. Supported video coding formats: H.264, H.265.
5. Supported audio coding format: AAC.
6. Use small video files, preferably not longer than one hour. Large files may take a long time to load or resume after pause. Relay may fail if the time consumed exceeds 15 seconds.
                     */
                    std::vector<std::string> m_sourceUrls;
                    bool m_sourceUrlsHasBeenSet;

                    /**
                     * The push domain name.
The pulled stream is pushed to this domain.
Note: If the destination is not a CSS address and its format is different from that of CSS addresses, pass the full address to `ToUrl`. For details, see the description of the `ToUrl` parameter.
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
                     * The operator.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The push parameter.
This is a custom parameter carried during push.
Example:
bak=1&test=2
                     */
                    std::string m_pushArgs;
                    bool m_pushArgsHasBeenSet;

                    /**
                     * The events to listen for. If you do not pass this parameter, all events will be listened for.
TaskStart: Callback for starting a task
TaskExit: Callback for ending a task
VodSourceFileStart: Callback for starting to pull from video files
VodSourceFileFinish: Callback for stopping pulling from video files
ResetTaskConfig: Callback for modifying a task

`TaskAlarm` indicates a warning event. `AlarmType` examples:
PullFileUnstable: Pull from video files is unstable.
PushStreamUnstable: Push is unstable.
PullFileFailed: Error pulling from video files.
PushStreamFailed: Push error.
FileEndEarly: The video file ended prematurely.
                     */
                    std::vector<std::string> m_callbackEvents;
                    bool m_callbackEventsHasBeenSet;

                    /**
                     * The number of times to loop video files. Default value: -1.
-1: Loop indefinitely
0: Do not loop
> 0: The number of loop times. A task will end either when the videos are looped for the specified number of times or at the specified task end time, whichever is earlier.
This parameter is valid only when the source is video files.
                     */
                    std::string m_vodLoopTimes;
                    bool m_vodLoopTimesHasBeenSet;

                    /**
                     * The behavior after the source video files (`SourceUrls`) are changed.
ImmediateNewSource: Play the new videos immediately
ContinueBreakPoint: Play the new videos after the current video is finished playing (the remaining videos in the old playlist will not be played).

This parameter is valid only if the source before the change is video files.
                     */
                    std::string m_vodRefreshType;
                    bool m_vodRefreshTypeHasBeenSet;

                    /**
                     * A custom callback URL.
Callbacks about pull and relay events will be sent to this URL.
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * Other parameters.
For example, you can use `ignore_region` to ignore the region passed in and assign a region based on load distribution.
                     */
                    std::string m_extraCmd;
                    bool m_extraCmdHasBeenSet;

                    /**
                     * The remarks for a task, not longer than 512 bytes.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The complete destination URL.
If you specify this parameter, make sure you pass in an empty string for `DomainName`, `AppName`, and `StreamName`.

Note: Make sure that the expiration time of the signature is later than the task end time.
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * The backup source type.
PullLivePushLive: Live streaming
PullVodPushLive: Video files
Notes:
1. Backup sources are supported only if the primary source type is live streaming.
2. When pull from the primary source is interrupted, the system will pull from the backup source.
3. If the backup source is a video file, each time the video is finished, the system will check if the primary source is recovered and will switch back if it is.
                     */
                    std::string m_backupSourceType;
                    bool m_backupSourceTypeHasBeenSet;

                    /**
                     * The URL of the backup source.
You can specify only one backup source URL.
                     */
                    std::string m_backupSourceUrl;
                    bool m_backupSourceUrlHasBeenSet;

                    /**
                     * The information of watermarks to add.
Notes:
1. You can add up to four watermarks to different locations of the video.
2. Make sure you use publicly accessible URLs for the watermark images.
3. Supported image formats include PNG, JPG, and GIF.
                     */
                    std::vector<PullPushWatermarkInfo> m_watermarkList;
                    bool m_watermarkListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_
