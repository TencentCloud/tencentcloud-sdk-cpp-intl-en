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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The video encoding parameters.
                */
                class VideoEncode : public AbstractModel
                {
                public:
                    VideoEncode();
                    ~VideoEncode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The width of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1920].
                     * @return Width The width of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1920].
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The width of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1920].
                     * @param _width The width of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1920].
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The height of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1080].
                     * @return Height The height of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1080].
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The height of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1080].
                     * @param _height The height of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1080].
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The frame rate (fps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 60].
                     * @return Fps The frame rate (fps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 60].
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置The frame rate (fps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 60].
                     * @param _fps The frame rate (fps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 60].
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取The bitrate (Kbps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 10000].
                     * @return BitRate The bitrate (Kbps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 10000].
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置The bitrate (Kbps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 10000].
                     * @param _bitRate The bitrate (Kbps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 10000].
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取The GOP (seconds) of the output stream. This parameter is required if audio and video are relayed. Value range: [1, 5].
                     * @return Gop The GOP (seconds) of the output stream. This parameter is required if audio and video are relayed. Value range: [1, 5].
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置The GOP (seconds) of the output stream. This parameter is required if audio and video are relayed. Value range: [1, 5].
                     * @param _gop The GOP (seconds) of the output stream. This parameter is required if audio and video are relayed. Value range: [1, 5].
                     * 
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                private:

                    /**
                     * The width of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1920].
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height of the output stream (pixels). This parameter is required if audio and video are relayed. Value range: [0, 1080].
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The frame rate (fps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 60].
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * The bitrate (Kbps) of the output stream. This parameter is required if audio and video are relayed. Value range: [0, 10000].
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * The GOP (seconds) of the output stream. This parameter is required if audio and video are relayed. Value range: [1, 5].
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODE_H_
