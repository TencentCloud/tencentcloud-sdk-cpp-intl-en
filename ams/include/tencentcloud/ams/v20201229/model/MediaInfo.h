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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Media type
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the codec of the media file passed in, such as WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE.
                     * @return Codecs This field is used to return the codec of the media file passed in, such as WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE.
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置This field is used to return the codec of the media file passed in, such as WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE.
                     * @param _codecs This field is used to return the codec of the media file passed in, such as WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE.
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the segment length of the input streaming media file in milliseconds.** It is 15 seconds** by default and is customizable.
                     * @return Duration This field is used to return the segment length of the input streaming media file in milliseconds.** It is 15 seconds** by default and is customizable.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置This field is used to return the segment length of the input streaming media file in milliseconds.** It is 15 seconds** by default and is customizable.
                     * @param _duration This field is used to return the segment length of the input streaming media file in milliseconds.** It is 15 seconds** by default and is customizable.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取*This field is in beta test. Stay tuned*
                     * @return Width *This field is in beta test. Stay tuned*
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置*This field is in beta test. Stay tuned*
                     * @param _width *This field is in beta test. Stay tuned*
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
                     * 获取*This field is in beta test. Stay tuned*
                     * @return Height *This field is in beta test. Stay tuned*
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置*This field is in beta test. Stay tuned*
                     * @param _height *This field is in beta test. Stay tuned*
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
                     * 获取*This field is in beta test. Stay tuned*
                     * @return Thumbnail *This field is in beta test. Stay tuned*
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置*This field is in beta test. Stay tuned*
                     * @param _thumbnail *This field is in beta test. Stay tuned*
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the codec of the media file passed in, such as WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE.
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * This field is used to return the segment length of the input streaming media file in milliseconds.** It is 15 seconds** by default and is customizable.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * *This field is in beta test. Stay tuned*
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * *This field is in beta test. Stay tuned*
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * *This field is in beta test. Stay tuned*
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_MEDIAINFO_H_
