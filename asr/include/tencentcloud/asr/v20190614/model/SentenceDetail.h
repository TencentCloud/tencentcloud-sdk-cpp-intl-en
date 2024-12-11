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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/SentenceWords.h>
#include <tencentcloud/asr/v20190614/model/KeyWordResult.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * Detailed recognition result of a sentence, including the time offset of individual words. This parameter generally applies to subtitle generation scenarios.
                */
                class SentenceDetail : public AbstractModel
                {
                public:
                    SentenceDetail();
                    ~SentenceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Final recognition result of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinalSentence Final recognition result of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinalSentence() const;

                    /**
                     * 设置Final recognition result of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _finalSentence Final recognition result of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinalSentence(const std::string& _finalSentence);

                    /**
                     * 判断参数 FinalSentence 是否已赋值
                     * @return FinalSentence 是否已赋值
                     * 
                     */
                    bool FinalSentenceHasBeenSet() const;

                    /**
                     * 获取Intermediate recognition result of a sentence. The sentence is split into multiple phrases by spaces.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SliceSentence Intermediate recognition result of a sentence. The sentence is split into multiple phrases by spaces.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSliceSentence() const;

                    /**
                     * 设置Intermediate recognition result of a sentence. The sentence is split into multiple phrases by spaces.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sliceSentence Intermediate recognition result of a sentence. The sentence is split into multiple phrases by spaces.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSliceSentence(const std::string& _sliceSentence);

                    /**
                     * 判断参数 SliceSentence 是否已赋值
                     * @return SliceSentence 是否已赋值
                     * 
                     */
                    bool SliceSentenceHasBeenSet() const;

                    /**
                     * 获取Oral-to-written transcription result. This parameter has a value only if the corresponding feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WrittenText Oral-to-written transcription result. This parameter has a value only if the corresponding feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWrittenText() const;

                    /**
                     * 设置Oral-to-written transcription result. This parameter has a value only if the corresponding feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _writtenText Oral-to-written transcription result. This parameter has a value only if the corresponding feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWrittenText(const std::string& _writtenText);

                    /**
                     * 判断参数 WrittenText 是否已赋值
                     * @return WrittenText 是否已赋值
                     * 
                     */
                    bool WrittenTextHasBeenSet() const;

                    /**
                     * 获取Start time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartMs Start time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartMs() const;

                    /**
                     * 设置Start time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startMs Start time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartMs(const int64_t& _startMs);

                    /**
                     * 判断参数 StartMs 是否已赋值
                     * @return StartMs 是否已赋值
                     * 
                     */
                    bool StartMsHasBeenSet() const;

                    /**
                     * 获取End time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndMs End time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndMs() const;

                    /**
                     * 设置End time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endMs End time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndMs(const int64_t& _endMs);

                    /**
                     * 判断参数 EndMs 是否已赋值
                     * @return EndMs 是否已赋值
                     * 
                     */
                    bool EndMsHasBeenSet() const;

                    /**
                     * 获取Number of words in a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WordsNum Number of words in a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWordsNum() const;

                    /**
                     * 设置Number of words in a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wordsNum Number of words in a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWordsNum(const int64_t& _wordsNum);

                    /**
                     * 判断参数 WordsNum 是否已赋值
                     * @return WordsNum 是否已赋值
                     * 
                     */
                    bool WordsNumHasBeenSet() const;

                    /**
                     * 获取Word details of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Words Word details of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SentenceWords> GetWords() const;

                    /**
                     * 设置Word details of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _words Word details of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWords(const std::vector<SentenceWords>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取Speech speed of a sentence. Unit: Number of words per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpeechSpeed Speech speed of a sentence. Unit: Number of words per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置Speech speed of a sentence. Unit: Number of words per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _speechSpeed Speech speed of a sentence. Unit: Number of words per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpeechSpeed(const double& _speechSpeed);

                    /**
                     * 判断参数 SpeechSpeed 是否已赋值
                     * @return SpeechSpeed 是否已赋值
                     * 
                     */
                    bool SpeechSpeedHasBeenSet() const;

                    /**
                     * 获取Channel or speaker ID. (If speaker_diarization is specified or ChannelNum is set to 2 (stereo) in the request, speakers or channels can be distinguished.)
Different values represent different speakers in mono mode. For the speakerId values, 0 represents the left channel, and 1 represents the right channel in stereo mode if an 8k engine is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpeakerId Channel or speaker ID. (If speaker_diarization is specified or ChannelNum is set to 2 (stereo) in the request, speakers or channels can be distinguished.)
Different values represent different speakers in mono mode. For the speakerId values, 0 represents the left channel, and 1 represents the right channel in stereo mode if an 8k engine is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSpeakerId() const;

                    /**
                     * 设置Channel or speaker ID. (If speaker_diarization is specified or ChannelNum is set to 2 (stereo) in the request, speakers or channels can be distinguished.)
Different values represent different speakers in mono mode. For the speakerId values, 0 represents the left channel, and 1 represents the right channel in stereo mode if an 8k engine is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _speakerId Channel or speaker ID. (If speaker_diarization is specified or ChannelNum is set to 2 (stereo) in the request, speakers or channels can be distinguished.)
Different values represent different speakers in mono mode. For the speakerId values, 0 represents the left channel, and 1 represents the right channel in stereo mode if an 8k engine is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpeakerId(const int64_t& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取Emotional energy value. This value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EmotionalEnergy Emotional energy value. This value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetEmotionalEnergy() const;

                    /**
                     * 设置Emotional energy value. This value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _emotionalEnergy Emotional energy value. This value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmotionalEnergy(const double& _emotionalEnergy);

                    /**
                     * 判断参数 EmotionalEnergy 是否已赋值
                     * @return EmotionalEnergy 是否已赋值
                     * 
                     */
                    bool EmotionalEnergyHasBeenSet() const;

                    /**
                     * 获取Silent duration between the current sentence and the last sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SilenceTime Silent duration between the current sentence and the last sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSilenceTime() const;

                    /**
                     * 设置Silent duration between the current sentence and the last sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _silenceTime Silent duration between the current sentence and the last sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSilenceTime(const int64_t& _silenceTime);

                    /**
                     * 判断参数 SilenceTime 是否已赋值
                     * @return SilenceTime 是否已赋值
                     * 
                     */
                    bool SilenceTimeHasBeenSet() const;

                    /**
                     * 获取Emotion type. (This parameter may be left blank in two scenarios: 1. No corresponding resource package exists; 2. The emotion is not recognized because it is not strong enough, which is related to the emotional energy.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EmotionType Emotion type. (This parameter may be left blank in two scenarios: 1. No corresponding resource package exists; 2. The emotion is not recognized because it is not strong enough, which is related to the emotional energy.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEmotionType() const;

                    /**
                     * 设置Emotion type. (This parameter may be left blank in two scenarios: 1. No corresponding resource package exists; 2. The emotion is not recognized because it is not strong enough, which is related to the emotional energy.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _emotionType Emotion type. (This parameter may be left blank in two scenarios: 1. No corresponding resource package exists; 2. The emotion is not recognized because it is not strong enough, which is related to the emotional energy.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmotionType(const std::vector<std::string>& _emotionType);

                    /**
                     * 判断参数 EmotionType 是否已赋值
                     * @return EmotionType 是否已赋值
                     * 
                     */
                    bool EmotionTypeHasBeenSet() const;

                    /**
                     * 获取List of recognized keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyWordResults List of recognized keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyWordResult> GetKeyWordResults() const;

                    /**
                     * 设置List of recognized keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyWordResults List of recognized keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyWordResults(const std::vector<KeyWordResult>& _keyWordResults);

                    /**
                     * 判断参数 KeyWordResults 是否已赋值
                     * @return KeyWordResults 是否已赋值
                     * 
                     */
                    bool KeyWordResultsHasBeenSet() const;

                private:

                    /**
                     * Final recognition result of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finalSentence;
                    bool m_finalSentenceHasBeenSet;

                    /**
                     * Intermediate recognition result of a sentence. The sentence is split into multiple phrases by spaces.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sliceSentence;
                    bool m_sliceSentenceHasBeenSet;

                    /**
                     * Oral-to-written transcription result. This parameter has a value only if the corresponding feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_writtenText;
                    bool m_writtenTextHasBeenSet;

                    /**
                     * Start time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startMs;
                    bool m_startMsHasBeenSet;

                    /**
                     * End time of a sentence (ms).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * Number of words in a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_wordsNum;
                    bool m_wordsNumHasBeenSet;

                    /**
                     * Word details of a sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SentenceWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * Speech speed of a sentence. Unit: Number of words per second.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * Channel or speaker ID. (If speaker_diarization is specified or ChannelNum is set to 2 (stereo) in the request, speakers or channels can be distinguished.)
Different values represent different speakers in mono mode. For the speakerId values, 0 represents the left channel, and 1 represents the right channel in stereo mode if an 8k engine is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * Emotional energy value. This value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * Silent duration between the current sentence and the last sentence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_silenceTime;
                    bool m_silenceTimeHasBeenSet;

                    /**
                     * Emotion type. (This parameter may be left blank in two scenarios: 1. No corresponding resource package exists; 2. The emotion is not recognized because it is not strong enough, which is related to the emotional energy.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_emotionType;
                    bool m_emotionTypeHasBeenSet;

                    /**
                     * List of recognized keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyWordResult> m_keyWordResults;
                    bool m_keyWordResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCEDETAIL_H_
