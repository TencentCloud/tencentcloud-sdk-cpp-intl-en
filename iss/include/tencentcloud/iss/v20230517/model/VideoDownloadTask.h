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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Local recording download task
                */
                class VideoDownloadTask : public AbstractModel
                {
                public:
                    VideoDownloadTask();
                    ~VideoDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Download task ID
                     * @return DownloadTaskId Download task ID
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置Download task ID
                     * @param _downloadTaskId Download task ID
                     * 
                     */
                    void SetDownloadTaskId(const std::string& _downloadTaskId);

                    /**
                     * 判断参数 DownloadTaskId 是否已赋值
                     * @return DownloadTaskId 是否已赋值
                     * 
                     */
                    bool DownloadTaskIdHasBeenSet() const;

                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return ChannelName Channel name
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name
                     * @param _channelName Channel name
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Channel encoding
                     * @return ChannelCode Channel encoding
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置Channel encoding
                     * @param _channelCode Channel encoding
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Device code
                     * @return DeviceCode Device code
                     * 
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置Device code
                     * @param _deviceCode Device code
                     * 
                     */
                    void SetDeviceCode(const std::string& _deviceCode);

                    /**
                     * 判断参数 DeviceCode 是否已赋值
                     * @return DeviceCode 是否已赋值
                     * 
                     */
                    bool DeviceCodeHasBeenSet() const;

                    /**
                     * 获取Task status (0: pending; 1: executing; 2: task complete;
3: Task failure)
                     * @return Status Task status (0: pending; 1: executing; 2: task complete;
3: Task failure)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status (0: pending; 1: executing; 2: task complete;
3: Task failure)
                     * @param _status Task status (0: pending; 1: executing; 2: task complete;
3: Task failure)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Download the recording time period
                     * @return VideoTimeSection Download the recording time period
                     * 
                     */
                    std::string GetVideoTimeSection() const;

                    /**
                     * 设置Download the recording time period
                     * @param _videoTimeSection Download the recording time period
                     * 
                     */
                    void SetVideoTimeSection(const std::string& _videoTimeSection);

                    /**
                     * 判断参数 VideoTimeSection 是否已赋值
                     * @return VideoTimeSection 是否已赋值
                     * 
                     */
                    bool VideoTimeSectionHasBeenSet() const;

                    /**
                     * 获取Playback speed
                     * @return Scale Playback speed
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Playback speed
                     * @param _scale Playback speed
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Download duration.
                     * @return DownloadTime Download duration.
                     * 
                     */
                    int64_t GetDownloadTime() const;

                    /**
                     * 设置Download duration.
                     * @param _downloadTime Download duration.
                     * 
                     */
                    void SetDownloadTime(const int64_t& _downloadTime);

                    /**
                     * 判断参数 DownloadTime 是否已赋值
                     * @return DownloadTime 是否已赋值
                     * 
                     */
                    bool DownloadTimeHasBeenSet() const;

                    /**
                     * 获取Video recording size
                     * @return VideoSize Video recording size
                     * 
                     */
                    int64_t GetVideoSize() const;

                    /**
                     * 设置Video recording size
                     * @param _videoSize Video recording size
                     * 
                     */
                    void SetVideoSize(const int64_t& _videoSize);

                    /**
                     * 判断参数 VideoSize 是否已赋值
                     * @return VideoSize 是否已赋值
                     * 
                     */
                    bool VideoSizeHasBeenSet() const;

                    /**
                     * 获取Task start time
                     * @return StartTime Task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
                     * @param _startTime Task start time
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
                     * 获取Task end time
                     * @return EndTime Task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
                     * @param _endTime Task end time
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
                     * 获取File download address
                     * @return FileDownloadUrl File download address
                     * 
                     */
                    std::string GetFileDownloadUrl() const;

                    /**
                     * 设置File download address
                     * @param _fileDownloadUrl File download address
                     * 
                     */
                    void SetFileDownloadUrl(const std::string& _fileDownloadUrl);

                    /**
                     * 判断参数 FileDownloadUrl 是否已赋值
                     * @return FileDownloadUrl 是否已赋值
                     * 
                     */
                    bool FileDownloadUrlHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return FailedReason Reason for failure
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置Reason for failure
                     * @param _failedReason Reason for failure
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取Lifecycle rule, number of days in hot storage
                     * @return Expire Lifecycle rule, number of days in hot storage
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置Lifecycle rule, number of days in hot storage
                     * @param _expire Lifecycle rule, number of days in hot storage
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取mp4 preview address
                     * @return PreviewUrl mp4 preview address
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置mp4 preview address
                     * @param _previewUrl mp4 preview address
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                private:

                    /**
                     * Download task ID
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Channel encoding
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Device code
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                    /**
                     * Task status (0: pending; 1: executing; 2: task complete;
3: Task failure)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Download the recording time period
                     */
                    std::string m_videoTimeSection;
                    bool m_videoTimeSectionHasBeenSet;

                    /**
                     * Playback speed
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Download duration.
                     */
                    int64_t m_downloadTime;
                    bool m_downloadTimeHasBeenSet;

                    /**
                     * Video recording size
                     */
                    int64_t m_videoSize;
                    bool m_videoSizeHasBeenSet;

                    /**
                     * Task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * File download address
                     */
                    std::string m_fileDownloadUrl;
                    bool m_fileDownloadUrlHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Lifecycle rule, number of days in hot storage
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * mp4 preview address
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_
