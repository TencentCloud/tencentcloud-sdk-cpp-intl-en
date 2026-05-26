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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AlignmentItem.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TextToSpeech response structure.
                */
                class TextToSpeechResponse : public AbstractModel
                {
                public:
                    TextToSpeechResponse();
                    ~TextToSpeechResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-Encoded audio data.
                     * @return Audio Base64-Encoded audio data.
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取
                     * @return Alignments 
                     * 
                     */
                    std::vector<AlignmentItem> GetAlignments() const;

                    /**
                     * 判断参数 Alignments 是否已赋值
                     * @return Alignments 是否已赋值
                     * 
                     */
                    bool AlignmentsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TotalDurationMs 
                     * 
                     */
                    uint64_t GetTotalDurationMs() const;

                    /**
                     * 判断参数 TotalDurationMs 是否已赋值
                     * @return TotalDurationMs 是否已赋值
                     * 
                     */
                    bool TotalDurationMsHasBeenSet() const;

                private:

                    /**
                     * Base64-Encoded audio data.
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AlignmentItem> m_alignments;
                    bool m_alignmentsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_totalDurationMs;
                    bool m_totalDurationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHRESPONSE_H_
