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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Sentiment analysis details
                */
                class SentimentDetail : public AbstractModel
                {
                public:
                    SentimentDetail();
                    ~SentimentDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Positive score, ranging from 0 to 100
                     * @return Positive Positive score, ranging from 0 to 100
                     * 
                     */
                    int64_t GetPositive() const;

                    /**
                     * 设置Positive score, ranging from 0 to 100
                     * @param _positive Positive score, ranging from 0 to 100
                     * 
                     */
                    void SetPositive(const int64_t& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     * 
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取Negative score, ranging from 0 to 100
                     * @return Negative Negative score, ranging from 0 to 100
                     * 
                     */
                    int64_t GetNegative() const;

                    /**
                     * 设置Negative score, ranging from 0 to 100
                     * @param _negative Negative score, ranging from 0 to 100
                     * 
                     */
                    void SetNegative(const int64_t& _negative);

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     * 
                     */
                    bool NegativeHasBeenSet() const;

                private:

                    /**
                     * Positive score, ranging from 0 to 100
                     */
                    int64_t m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * Negative score, ranging from 0 to 100
                     */
                    int64_t m_negative;
                    bool m_negativeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_
