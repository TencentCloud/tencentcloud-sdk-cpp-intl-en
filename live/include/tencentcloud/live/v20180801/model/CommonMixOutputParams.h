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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * General stream mix output parameter.
                */
                class CommonMixOutputParams : public AbstractModel
                {
                public:
                    CommonMixOutputParams();
                    ~CommonMixOutputParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output stream name.
                     * @return OutputStreamName Output stream name.
                     */
                    std::string GetOutputStreamName() const;

                    /**
                     * 设置Output stream name.
                     * @param OutputStreamName Output stream name.
                     */
                    void SetOutputStreamName(const std::string& _outputStreamName);

                    /**
                     * 判断参数 OutputStreamName 是否已赋值
                     * @return OutputStreamName 是否已赋值
                     */
                    bool OutputStreamNameHasBeenSet() const;

                    /**
                     * 获取Output stream type. Valid values: [0,1].
If this parameter is left empty, 0 will be used by default.
If the output stream is a stream in the input stream list, enter 0.
If you want the stream mix result to be a new stream, enter 1.
If this value is 1, `output_stream_id` cannot appear in `input_stram_list`, and there cannot be a stream with the same ID on the LVB backend.
                     * @return OutputStreamType Output stream type. Valid values: [0,1].
If this parameter is left empty, 0 will be used by default.
If the output stream is a stream in the input stream list, enter 0.
If you want the stream mix result to be a new stream, enter 1.
If this value is 1, `output_stream_id` cannot appear in `input_stram_list`, and there cannot be a stream with the same ID on the LVB backend.
                     */
                    int64_t GetOutputStreamType() const;

                    /**
                     * 设置Output stream type. Valid values: [0,1].
If this parameter is left empty, 0 will be used by default.
If the output stream is a stream in the input stream list, enter 0.
If you want the stream mix result to be a new stream, enter 1.
If this value is 1, `output_stream_id` cannot appear in `input_stram_list`, and there cannot be a stream with the same ID on the LVB backend.
                     * @param OutputStreamType Output stream type. Valid values: [0,1].
If this parameter is left empty, 0 will be used by default.
If the output stream is a stream in the input stream list, enter 0.
If you want the stream mix result to be a new stream, enter 1.
If this value is 1, `output_stream_id` cannot appear in `input_stram_list`, and there cannot be a stream with the same ID on the LVB backend.
                     */
                    void SetOutputStreamType(const int64_t& _outputStreamType);

                    /**
                     * 判断参数 OutputStreamType 是否已赋值
                     * @return OutputStreamType 是否已赋值
                     */
                    bool OutputStreamTypeHasBeenSet() const;

                    /**
                     * 获取Output stream bitrate. Value range: [1,50000].
If this parameter is left empty, the system will automatically determine.
                     * @return OutputStreamBitRate Output stream bitrate. Value range: [1,50000].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputStreamBitRate() const;

                    /**
                     * 设置Output stream bitrate. Value range: [1,50000].
If this parameter is left empty, the system will automatically determine.
                     * @param OutputStreamBitRate Output stream bitrate. Value range: [1,50000].
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputStreamBitRate(const int64_t& _outputStreamBitRate);

                    /**
                     * 判断参数 OutputStreamBitRate 是否已赋值
                     * @return OutputStreamBitRate 是否已赋值
                     */
                    bool OutputStreamBitRateHasBeenSet() const;

                    /**
                     * 获取Output stream GOP size. Value range: [1,10].
If this parameter is left empty, the system will automatically determine.
                     * @return OutputStreamGop Output stream GOP size. Value range: [1,10].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputStreamGop() const;

                    /**
                     * 设置Output stream GOP size. Value range: [1,10].
If this parameter is left empty, the system will automatically determine.
                     * @param OutputStreamGop Output stream GOP size. Value range: [1,10].
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputStreamGop(const int64_t& _outputStreamGop);

                    /**
                     * 判断参数 OutputStreamGop 是否已赋值
                     * @return OutputStreamGop 是否已赋值
                     */
                    bool OutputStreamGopHasBeenSet() const;

                    /**
                     * 获取Output stream frame rate. Value range: [1,60].
If this parameter is left empty, the system will automatically determine.
                     * @return OutputStreamFrameRate Output stream frame rate. Value range: [1,60].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputStreamFrameRate() const;

                    /**
                     * 设置Output stream frame rate. Value range: [1,60].
If this parameter is left empty, the system will automatically determine.
                     * @param OutputStreamFrameRate Output stream frame rate. Value range: [1,60].
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputStreamFrameRate(const int64_t& _outputStreamFrameRate);

                    /**
                     * 判断参数 OutputStreamFrameRate 是否已赋值
                     * @return OutputStreamFrameRate 是否已赋值
                     */
                    bool OutputStreamFrameRateHasBeenSet() const;

                    /**
                     * 获取Output stream audio bitrate. Value range: [1,500]
If this parameter is left empty, the system will automatically determine.
                     * @return OutputAudioBitRate Output stream audio bitrate. Value range: [1,500]
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputAudioBitRate() const;

                    /**
                     * 设置Output stream audio bitrate. Value range: [1,500]
If this parameter is left empty, the system will automatically determine.
                     * @param OutputAudioBitRate Output stream audio bitrate. Value range: [1,500]
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputAudioBitRate(const int64_t& _outputAudioBitRate);

                    /**
                     * 判断参数 OutputAudioBitRate 是否已赋值
                     * @return OutputAudioBitRate 是否已赋值
                     */
                    bool OutputAudioBitRateHasBeenSet() const;

                    /**
                     * 获取Output stream audio sample rate. Valid values: [96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000].
If this parameter is left empty, the system will automatically determine.
                     * @return OutputAudioSampleRate Output stream audio sample rate. Valid values: [96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputAudioSampleRate() const;

                    /**
                     * 设置Output stream audio sample rate. Valid values: [96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000].
If this parameter is left empty, the system will automatically determine.
                     * @param OutputAudioSampleRate Output stream audio sample rate. Valid values: [96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000].
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputAudioSampleRate(const int64_t& _outputAudioSampleRate);

                    /**
                     * 判断参数 OutputAudioSampleRate 是否已赋值
                     * @return OutputAudioSampleRate 是否已赋值
                     */
                    bool OutputAudioSampleRateHasBeenSet() const;

                    /**
                     * 获取Output stream audio sound channel. Valid values: [1,2].
If this parameter is left empty, the system will automatically determine.
                     * @return OutputAudioChannels Output stream audio sound channel. Valid values: [1,2].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t GetOutputAudioChannels() const;

                    /**
                     * 设置Output stream audio sound channel. Valid values: [1,2].
If this parameter is left empty, the system will automatically determine.
                     * @param OutputAudioChannels Output stream audio sound channel. Valid values: [1,2].
If this parameter is left empty, the system will automatically determine.
                     */
                    void SetOutputAudioChannels(const int64_t& _outputAudioChannels);

                    /**
                     * 判断参数 OutputAudioChannels 是否已赋值
                     * @return OutputAudioChannels 是否已赋值
                     */
                    bool OutputAudioChannelsHasBeenSet() const;

                    /**
                     * 获取SEI information in output stream. If there are no special needs, leave it empty.
                     * @return MixSei SEI information in output stream. If there are no special needs, leave it empty.
                     */
                    std::string GetMixSei() const;

                    /**
                     * 设置SEI information in output stream. If there are no special needs, leave it empty.
                     * @param MixSei SEI information in output stream. If there are no special needs, leave it empty.
                     */
                    void SetMixSei(const std::string& _mixSei);

                    /**
                     * 判断参数 MixSei 是否已赋值
                     * @return MixSei 是否已赋值
                     */
                    bool MixSeiHasBeenSet() const;

                private:

                    /**
                     * Output stream name.
                     */
                    std::string m_outputStreamName;
                    bool m_outputStreamNameHasBeenSet;

                    /**
                     * Output stream type. Valid values: [0,1].
If this parameter is left empty, 0 will be used by default.
If the output stream is a stream in the input stream list, enter 0.
If you want the stream mix result to be a new stream, enter 1.
If this value is 1, `output_stream_id` cannot appear in `input_stram_list`, and there cannot be a stream with the same ID on the LVB backend.
                     */
                    int64_t m_outputStreamType;
                    bool m_outputStreamTypeHasBeenSet;

                    /**
                     * Output stream bitrate. Value range: [1,50000].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputStreamBitRate;
                    bool m_outputStreamBitRateHasBeenSet;

                    /**
                     * Output stream GOP size. Value range: [1,10].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputStreamGop;
                    bool m_outputStreamGopHasBeenSet;

                    /**
                     * Output stream frame rate. Value range: [1,60].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputStreamFrameRate;
                    bool m_outputStreamFrameRateHasBeenSet;

                    /**
                     * Output stream audio bitrate. Value range: [1,500]
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputAudioBitRate;
                    bool m_outputAudioBitRateHasBeenSet;

                    /**
                     * Output stream audio sample rate. Valid values: [96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputAudioSampleRate;
                    bool m_outputAudioSampleRateHasBeenSet;

                    /**
                     * Output stream audio sound channel. Valid values: [1,2].
If this parameter is left empty, the system will automatically determine.
                     */
                    int64_t m_outputAudioChannels;
                    bool m_outputAudioChannelsHasBeenSet;

                    /**
                     * SEI information in output stream. If there are no special needs, leave it empty.
                     */
                    std::string m_mixSei;
                    bool m_mixSeiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_
