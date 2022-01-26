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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMVIDEOINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Video information of pushed streams.
                */
                class StreamVideoInfo : public AbstractModel
                {
                public:
                    StreamVideoInfo();
                    ~StreamVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Pid Video `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Video `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Pid Video `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Video codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Codec Video codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Video codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Codec Video codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Video frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Fps Video frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Video frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Fps Video frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Video bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rate Video bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置Video bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Rate Video bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Video width.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Width Video width.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Video width.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Width Video width.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video height.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Height Video height.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Video height.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Height Video height.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Video `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Video codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Video frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Video bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Video width.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMVIDEOINFO_H_
