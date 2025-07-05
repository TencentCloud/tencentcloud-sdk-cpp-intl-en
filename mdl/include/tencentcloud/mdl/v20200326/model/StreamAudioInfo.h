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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMAUDIOINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMAUDIOINFO_H_

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
                * Audio information.
                */
                class StreamAudioInfo : public AbstractModel
                {
                public:
                    StreamAudioInfo();
                    ~StreamAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Pid Audio `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Audio `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _pid Audio `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Audio codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Codec Audio codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Audio codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _codec Audio codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Audio frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Fps Audio frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Audio frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fps Audio frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Audio bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rate Audio bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置Audio bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rate Audio bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Audio sample rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SampleRate Audio sample rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Audio sample rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sampleRate Audio sample rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                private:

                    /**
                     * Audio `Pid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Audio codec.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Audio frame rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Audio bitrate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Audio sample rate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMAUDIOINFO_H_
