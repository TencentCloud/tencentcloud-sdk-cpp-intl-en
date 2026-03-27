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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/SentimentDetail.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Sentiment analysis result
                */
                class SentimentAnalysis : public AbstractModel
                {
                public:
                    SentimentAnalysis();
                    ~SentimentAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sentiment Tag
                     * @return Label Sentiment Tag
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Sentiment Tag
                     * @param _label Sentiment Tag
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Tag score, ranging from 0 to 100
                     * @return Score Tag score, ranging from 0 to 100
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Tag score, ranging from 0 to 100
                     * @param _score Tag score, ranging from 0 to 100
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Sentiment analysis details
                     * @return Detail Sentiment analysis details
                     * 
                     */
                    SentimentDetail GetDetail() const;

                    /**
                     * 设置Sentiment analysis details
                     * @param _detail Sentiment analysis details
                     * 
                     */
                    void SetDetail(const SentimentDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Response code; "OK" for success, "InternalError" for failure
                     * @return Code Response code; "OK" for success, "InternalError" for failure
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Response code; "OK" for success, "InternalError" for failure
                     * @param _code Response code; "OK" for success, "InternalError" for failure
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Exception information
                     * @return Message Exception information
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Exception information
                     * @param _message Exception information
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Sentiment Tag
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Tag score, ranging from 0 to 100
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Sentiment analysis details
                     */
                    SentimentDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Response code; "OK" for success, "InternalError" for failure
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Exception information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_
