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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WordResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result of the sentence recognition.
                */
                class RecognizeAudioSentence : public AbstractModel
                {
                public:
                    RecognizeAudioSentence();
                    ~RecognizeAudioSentence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time in the audio, in seconds.
                     * @return Start Start time in the audio, in seconds.
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置Start time in the audio, in seconds.
                     * @param _start Start time in the audio, in seconds.
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取End time in the audio, in seconds.
                     * @return End End time in the audio, in seconds.
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置End time in the audio, in seconds.
                     * @param _end End time in the audio, in seconds.
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取Audio recognition result.
                     * @return Text Audio recognition result.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Audio recognition result.
                     * @param _text Audio recognition result.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Word timestamp result.
                     * @return WordsInfo Word timestamp result.
                     * 
                     */
                    std::vector<WordResult> GetWordsInfo() const;

                    /**
                     * 设置Word timestamp result.
                     * @param _wordsInfo Word timestamp result.
                     * 
                     */
                    void SetWordsInfo(const std::vector<WordResult>& _wordsInfo);

                    /**
                     * 判断参数 WordsInfo 是否已赋值
                     * @return WordsInfo 是否已赋值
                     * 
                     */
                    bool WordsInfoHasBeenSet() const;

                private:

                    /**
                     * Start time in the audio, in seconds.
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * End time in the audio, in seconds.
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                    /**
                     * Audio recognition result.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Word timestamp result.
                     */
                    std::vector<WordResult> m_wordsInfo;
                    bool m_wordsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOSENTENCE_H_
