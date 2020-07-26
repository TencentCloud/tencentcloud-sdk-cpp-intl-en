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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRWORDSRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRWORDSRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI-based ASR-based live streaming keyword recognition result
                */
                class LiveStreamAsrWordsRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamAsrWordsRecognitionResult();
                    ~LiveStreamAsrWordsRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Speech keyword.
                     * @return Word Speech keyword.
                     */
                    std::string GetWord() const;

                    /**
                     * 设置Speech keyword.
                     * @param Word Speech keyword.
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取Start PTS time of recognized segment in seconds.
                     * @return StartPtsTime Start PTS time of recognized segment in seconds.
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置Start PTS time of recognized segment in seconds.
                     * @param StartPtsTime Start PTS time of recognized segment in seconds.
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取End PTS time of recognized segment in seconds.
                     * @return EndPtsTime End PTS time of recognized segment in seconds.
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置End PTS time of recognized segment in seconds.
                     * @param EndPtsTime End PTS time of recognized segment in seconds.
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取Confidence of recognized segment. Value range: 0-100.
                     * @return Confidence Confidence of recognized segment. Value range: 0-100.
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of recognized segment. Value range: 0-100.
                     * @param Confidence Confidence of recognized segment. Value range: 0-100.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Speech keyword.
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * Start PTS time of recognized segment in seconds.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * End PTS time of recognized segment in seconds.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * Confidence of recognized segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRWORDSRECOGNITIONRESULT_H_
