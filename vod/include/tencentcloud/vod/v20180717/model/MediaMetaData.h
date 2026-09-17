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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaVideoStreamItem.h>
#include <tencentcloud/vod/v20180717/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Meta-information of on-demand media files
                */
                class MediaMetaData : public AbstractModel
                {
                public:
                    MediaMetaData();
                    ~MediaMetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Size of the uploaded media file (for HLS videos, the size is the sum of the m3u8 and ts file sizes), unit: byte.
                     * @return Size Size of the uploaded media file (for HLS videos, the size is the sum of the m3u8 and ts file sizes), unit: byte.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Size of the uploaded media file (for HLS videos, the size is the sum of the m3u8 and ts file sizes), unit: byte.
                     * @param _size Size of the uploaded media file (for HLS videos, the size is the sum of the m3u8 and ts file sizes), unit: byte.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Container type, for example, m4a, mp4.
                     * @return Container Container type, for example, m4a, mp4.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container type, for example, m4a, mp4.
                     * @param _container Container type, for example, m4a, mp4.
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Sum of the mean video stream bitrate and mean audio stream bitrate, in bps.
                     * @return Bitrate Sum of the mean video stream bitrate and mean audio stream bitrate, in bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the mean video stream bitrate and mean audio stream bitrate, in bps.
                     * @param _bitrate Sum of the mean video stream bitrate and mean audio stream bitrate, in bps.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Maximum video stream height in px.
                     * @return Height Maximum video stream height in px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum video stream height in px.
                     * @param _height Maximum video stream height in px.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Maximum video stream width in px.
                     * @return Width Maximum video stream width in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum video stream width in px.
                     * @param _width Maximum video stream width in px.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video duration, unit: seconds.
                     * @return Duration Video duration, unit: seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration, unit: seconds.
                     * @param _duration Video duration, unit: seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Selection angle during video shooting. Unit: degree.
                     * @return Rotate Selection angle during video shooting. Unit: degree.
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置Selection angle during video shooting. Unit: degree.
                     * @param _rotate Selection angle during video shooting. Unit: degree.
                     * 
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取Video stream information.
                     * @return VideoStreamSet Video stream information.
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置Video stream information.
                     * @param _videoStreamSet Video stream information.
                     * 
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     * 
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取Audio stream information.
                     * @return AudioStreamSet Audio stream information.
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置Audio stream information.
                     * @param _audioStreamSet Audio stream information.
                     * 
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     * 
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取Video duration, unit: seconds.
                     * @return VideoDuration Video duration, unit: seconds.
                     * 
                     */
                    double GetVideoDuration() const;

                    /**
                     * 设置Video duration, unit: seconds.
                     * @param _videoDuration Video duration, unit: seconds.
                     * 
                     */
                    void SetVideoDuration(const double& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     * 
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取Audio duration, in seconds.
                     * @return AudioDuration Audio duration, in seconds.
                     * 
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置Audio duration, in seconds.
                     * @param _audioDuration Audio duration, in seconds.
                     * 
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     * 
                     */
                    bool AudioDurationHasBeenSet() const;

                    /**
                     * 获取Md5 value of the media file.
<li><font color=red>Note</font>: To get the Md5 of a media file, call the DescribeFileAttributes API and get it after the task is completed.</li>
                     * @return Md5 Md5 value of the media file.
<li><font color=red>Note</font>: To get the Md5 of a media file, call the DescribeFileAttributes API and get it after the task is completed.</li>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Md5 value of the media file.
<li><font color=red>Note</font>: To get the Md5 of a media file, call the DescribeFileAttributes API and get it after the task is completed.</li>
                     * @param _md5 Md5 value of the media file.
<li><font color=red>Note</font>: To get the Md5 of a media file, call the DescribeFileAttributes API and get it after the task is completed.</li>
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * Size of the uploaded media file (for HLS videos, the size is the sum of the m3u8 and ts file sizes), unit: byte.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Container type, for example, m4a, mp4.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Sum of the mean video stream bitrate and mean audio stream bitrate, in bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum video stream height in px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum video stream width in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video duration, unit: seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Selection angle during video shooting. Unit: degree.
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * Video stream information.
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * Audio stream information.
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * Video duration, unit: seconds.
                     */
                    double m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * Audio duration, in seconds.
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                    /**
                     * Md5 value of the media file.
<li><font color=red>Note</font>: To get the Md5 of a media file, call the DescribeFileAttributes API and get it after the task is completed.</li>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_
