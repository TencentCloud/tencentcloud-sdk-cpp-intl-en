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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_

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
                * Video transcoding parameters
                */
                class VideoEncodeParams : public AbstractModel
                {
                public:
                    VideoEncodeParams();
                    ~VideoEncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Width. Value range [0,1920], unit is pixel value.
                     * @return Width Width. Value range [0,1920], unit is pixel value.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Width. Value range [0,1920], unit is pixel value.
                     * @param _width Width. Value range [0,1920], unit is pixel value.
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
                     * 获取Height. Value range [0,1080], unit is pixel value.
                     * @return Height Height. Value range [0,1080], unit is pixel value.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Height. Value range [0,1080], unit is pixel value.
                     * @param _height Height. Value range [0,1080], unit is pixel value.
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
                     * 获取Frame Rate. Value range [1,60], indicating that the frame rate can be selected from 1 to 60fps.
                     * @return Fps Frame Rate. Value range [1,60], indicating that the frame rate can be selected from 1 to 60fps.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Frame Rate. Value range [1,60], indicating that the frame rate can be selected from 1 to 60fps.
                     * @param _fps Frame Rate. Value range [1,60], indicating that the frame rate can be selected from 1 to 60fps.
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
                     * 获取Bitrate. Value range [1,10000], unit is kbps.
                     * @return BitRate Bitrate. Value range [1,10000], unit is kbps.
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置Bitrate. Value range [1,10000], unit is kbps.
                     * @param _bitRate Bitrate. Value range [1,10000], unit is kbps.
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
                     * 获取Gop. Value range [1,2], unit is second.
                     * @return Gop Gop. Value range [1,2], unit is second.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置Gop. Value range [1,2], unit is second.
                     * @param _gop Gop. Value range [1,2], unit is second.
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
                     * Width. Value range [0,1920], unit is pixel value.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height. Value range [0,1080], unit is pixel value.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frame Rate. Value range [1,60], indicating that the frame rate can be selected from 1 to 60fps.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Bitrate. Value range [1,10000], unit is kbps.
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * Gop. Value range [1,2], unit is second.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_
