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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_

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
                * The video transcoding parameters for recording.
                */
                class VideoParams : public AbstractModel
                {
                public:
                    VideoParams();
                    ~VideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video width in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `360`.
                     * @return Width The video width in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `360`.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The video width in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `360`.
                     * @param _width The video width in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `360`.
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
                     * 获取The video height in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `640`.
                     * @return Height The video height in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `640`.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The video height in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `640`.
                     * @param _height The video height in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `640`.
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
                     * 获取The video frame rate. Value range: [1, 60]. Default: 15.
                     * @return Fps The video frame rate. Value range: [1, 60]. Default: 15.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置The video frame rate. Value range: [1, 60]. Default: 15.
                     * @param _fps The video frame rate. Value range: [1, 60]. Default: 15.
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
                     * 获取The video bitrate (bps). Value range: [64000, 8192000]. Default: 550000.
                     * @return BitRate The video bitrate (bps). Value range: [64000, 8192000]. Default: 550000.
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置The video bitrate (bps). Value range: [64000, 8192000]. Default: 550000.
                     * @param _bitRate The video bitrate (bps). Value range: [64000, 8192000]. Default: 550000.
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
                     * 获取The keyframe interval (seconds). Default value: 10.
                     * @return Gop The keyframe interval (seconds). Default value: 10.
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置The keyframe interval (seconds). Default value: 10.
                     * @param _gop The keyframe interval (seconds). Default value: 10.
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
                     * The video width in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `360`.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The video height in pixels. The value of this parameter cannot be larger than 1920, and the result of multiplying `Width` and `Height` cannot exceed 1920 x 1080. The default value is `640`.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The video frame rate. Value range: [1, 60]. Default: 15.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * The video bitrate (bps). Value range: [64000, 8192000]. Default: 550000.
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * The keyframe interval (seconds). Default value: 10.
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_
