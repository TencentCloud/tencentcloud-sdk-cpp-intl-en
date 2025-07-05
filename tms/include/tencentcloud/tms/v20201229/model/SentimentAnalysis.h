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
                * 
                */
                class SentimentAnalysis : public AbstractModel
                {
                public:
                    SentimentAnalysis();
                    ~SentimentAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Label 
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置
                     * @param _label 
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
                     * 获取
                     * @return Score 
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置
                     * @param _score 
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
                     * 获取
                     * @return Detail 
                     * 
                     */
                    SentimentDetail GetDetail() const;

                    /**
                     * 设置
                     * @param _detail 
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
                     * 获取
                     * @return Code 
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置
                     * @param _code 
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
                     * 获取
                     * @return Message 
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置
                     * @param _message 
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
                     * 
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 
                     */
                    SentimentDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTANALYSIS_H_
