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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h>
#include <tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Metadata of a VOD media file
                */
                class MediaMetaData : public AbstractModel
                {
                public:
                    MediaMetaData();
                    ~MediaMetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Size of an uploaded media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Size of an uploaded media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Size of an uploaded media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Size Size of an uploaded media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Container, such as m4a and mp4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Container Container, such as m4a and mp4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container, such as m4a and mp4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Container Container, such as m4a and mp4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Maximum value of the height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Height Maximum value of the height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Height Maximum value of the height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Maximum value of the width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Width Maximum value of the width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Width Maximum value of the width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Duration Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Selected angle during video recording in degrees.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rotate Selected angle during video recording in degrees.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置Selected angle during video recording in degrees.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Rotate Selected angle during video recording in degrees.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoStreamSet Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VideoStreamSet Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioStreamSet Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AudioStreamSet Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoDuration Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetVideoDuration() const;

                    /**
                     * 设置Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VideoDuration Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoDuration(const double& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取Audio duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioDuration Audio duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置Audio duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AudioDuration Audio duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     */
                    bool AudioDurationHasBeenSet() const;

                private:

                    /**
                     * Size of an uploaded media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Container, such as m4a and mp4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum value of the height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum value of the width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Selected angle during video recording in degrees.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * Video duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * Audio duration in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAMETADATA_H_
