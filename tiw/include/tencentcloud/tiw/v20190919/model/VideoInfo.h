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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Video information
                */
                class VideoInfo : public AbstractModel
                {
                public:
                    VideoInfo();
                    ~VideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video playback start time, in milliseconds
                     * @return VideoPlayTime Video playback start time, in milliseconds
                     */
                    int64_t GetVideoPlayTime() const;

                    /**
                     * 设置Video playback start time, in milliseconds
                     * @param VideoPlayTime Video playback start time, in milliseconds
                     */
                    void SetVideoPlayTime(const int64_t& _videoPlayTime);

                    /**
                     * 判断参数 VideoPlayTime 是否已赋值
                     * @return VideoPlayTime 是否已赋值
                     */
                    bool VideoPlayTimeHasBeenSet() const;

                    /**
                     * 获取Video size, in bytes
                     * @return VideoSize Video size, in bytes
                     */
                    int64_t GetVideoSize() const;

                    /**
                     * 设置Video size, in bytes
                     * @param VideoSize Video size, in bytes
                     */
                    void SetVideoSize(const int64_t& _videoSize);

                    /**
                     * 判断参数 VideoSize 是否已赋值
                     * @return VideoSize 是否已赋值
                     */
                    bool VideoSizeHasBeenSet() const;

                    /**
                     * 获取Video format
                     * @return VideoFormat Video format
                     */
                    std::string GetVideoFormat() const;

                    /**
                     * 设置Video format
                     * @param VideoFormat Video format
                     */
                    void SetVideoFormat(const std::string& _videoFormat);

                    /**
                     * 判断参数 VideoFormat 是否已赋值
                     * @return VideoFormat 是否已赋值
                     */
                    bool VideoFormatHasBeenSet() const;

                    /**
                     * 获取Video playback duration, in milliseconds
                     * @return VideoDuration Video playback duration, in milliseconds
                     */
                    int64_t GetVideoDuration() const;

                    /**
                     * 设置Video playback duration, in milliseconds
                     * @param VideoDuration Video playback duration, in milliseconds
                     */
                    void SetVideoDuration(const int64_t& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取Video file URL
                     * @return VideoUrl Video file URL
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置Video file URL
                     * @param VideoUrl Video file URL
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取Video file ID
                     * @return VideoId Video file ID
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置Video file ID
                     * @param VideoId Video file ID
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     */
                    bool VideoIdHasBeenSet() const;

                    /**
                     * 获取Video stream type - 0: camera video - 1: screen-sharing video - 2: whiteboard video - 3: mixed stream video - 4: audio-only (mp3)
                     * @return VideoType Video stream type - 0: camera video - 1: screen-sharing video - 2: whiteboard video - 3: mixed stream video - 4: audio-only (mp3)
                     */
                    int64_t GetVideoType() const;

                    /**
                     * 设置Video stream type - 0: camera video - 1: screen-sharing video - 2: whiteboard video - 3: mixed stream video - 4: audio-only (mp3)
                     * @param VideoType Video stream type - 0: camera video - 1: screen-sharing video - 2: whiteboard video - 3: mixed stream video - 4: audio-only (mp3)
                     */
                    void SetVideoType(const int64_t& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取ID of the user to which the camera video or screen-sharing video belongs (whiteboard video: null, mixed stream video: tic_mixstream_<Room ID>_<Mixed stream layout type>, auxiliary video: tic_substream_user ID)
                     * @return UserId ID of the user to which the camera video or screen-sharing video belongs (whiteboard video: null, mixed stream video: tic_mixstream_<Room ID>_<Mixed stream layout type>, auxiliary video: tic_substream_user ID)
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置ID of the user to which the camera video or screen-sharing video belongs (whiteboard video: null, mixed stream video: tic_mixstream_<Room ID>_<Mixed stream layout type>, auxiliary video: tic_substream_user ID)
                     * @param UserId ID of the user to which the camera video or screen-sharing video belongs (whiteboard video: null, mixed stream video: tic_mixstream_<Room ID>_<Mixed stream layout type>, auxiliary video: tic_substream_user ID)
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Width of the video resolution.
                     * @return Width Width of the video resolution.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of the video resolution.
                     * @param Width Width of the video resolution.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height of the video resolution.
                     * @return Height Height of the video resolution.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of the video resolution.
                     * @param Height Height of the video resolution.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Video playback start time, in milliseconds
                     */
                    int64_t m_videoPlayTime;
                    bool m_videoPlayTimeHasBeenSet;

                    /**
                     * Video size, in bytes
                     */
                    int64_t m_videoSize;
                    bool m_videoSizeHasBeenSet;

                    /**
                     * Video format
                     */
                    std::string m_videoFormat;
                    bool m_videoFormatHasBeenSet;

                    /**
                     * Video playback duration, in milliseconds
                     */
                    int64_t m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * Video file URL
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * Video file ID
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                    /**
                     * Video stream type - 0: camera video - 1: screen-sharing video - 2: whiteboard video - 3: mixed stream video - 4: audio-only (mp3)
                     */
                    int64_t m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * ID of the user to which the camera video or screen-sharing video belongs (whiteboard video: null, mixed stream video: tic_mixstream_<Room ID>_<Mixed stream layout type>, auxiliary video: tic_substream_user ID)
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Width of the video resolution.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of the video resolution.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_
