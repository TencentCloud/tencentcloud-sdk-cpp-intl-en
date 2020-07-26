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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_

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
                * Information of video stream in VOD file
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of video stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Bitrate of video stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Bitrate Bitrate of video stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Height of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Height Height of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Height Height of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Width of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Width Width of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Width Width of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video stream encoder, such as h264.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Codec Video stream encoder, such as h264.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Video stream encoder, such as h264.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Codec Video stream encoder, such as h264.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Frame rate in Hz.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Fps Frame rate in Hz.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate in Hz.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Fps Frame rate in Hz.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * Bitrate of video stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Height of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video stream encoder, such as h264.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Frame rate in Hz.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
