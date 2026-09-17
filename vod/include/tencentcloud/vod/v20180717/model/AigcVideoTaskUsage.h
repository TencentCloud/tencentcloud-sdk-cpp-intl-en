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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class AigcVideoTaskUsage : public AbstractModel
                {
                public:
                    AigcVideoTaskUsage();
                    ~AigcVideoTaskUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InputTokens 
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置
                     * @param _inputTokens 
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取
                     * @return ThoughtTokens 
                     * 
                     */
                    int64_t GetThoughtTokens() const;

                    /**
                     * 设置
                     * @param _thoughtTokens 
                     * 
                     */
                    void SetThoughtTokens(const int64_t& _thoughtTokens);

                    /**
                     * 判断参数 ThoughtTokens 是否已赋值
                     * @return ThoughtTokens 是否已赋值
                     * 
                     */
                    bool ThoughtTokensHasBeenSet() const;

                    /**
                     * 获取
                     * @return InputImageCount 
                     * 
                     */
                    int64_t GetInputImageCount() const;

                    /**
                     * 设置
                     * @param _inputImageCount 
                     * 
                     */
                    void SetInputImageCount(const int64_t& _inputImageCount);

                    /**
                     * 判断参数 InputImageCount 是否已赋值
                     * @return InputImageCount 是否已赋值
                     * 
                     */
                    bool InputImageCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return InputSeconds 
                     * 
                     */
                    int64_t GetInputSeconds() const;

                    /**
                     * 设置
                     * @param _inputSeconds 
                     * 
                     */
                    void SetInputSeconds(const int64_t& _inputSeconds);

                    /**
                     * 判断参数 InputSeconds 是否已赋值
                     * @return InputSeconds 是否已赋值
                     * 
                     */
                    bool InputSecondsHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputSeconds 
                     * 
                     */
                    int64_t GetOutputSeconds() const;

                    /**
                     * 设置
                     * @param _outputSeconds 
                     * 
                     */
                    void SetOutputSeconds(const int64_t& _outputSeconds);

                    /**
                     * 判断参数 OutputSeconds 是否已赋值
                     * @return OutputSeconds 是否已赋值
                     * 
                     */
                    bool OutputSecondsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TotalSeconds 
                     * 
                     */
                    int64_t GetTotalSeconds() const;

                    /**
                     * 设置
                     * @param _totalSeconds 
                     * 
                     */
                    void SetTotalSeconds(const int64_t& _totalSeconds);

                    /**
                     * 判断参数 TotalSeconds 是否已赋值
                     * @return TotalSeconds 是否已赋值
                     * 
                     */
                    bool TotalSecondsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_thoughtTokens;
                    bool m_thoughtTokensHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_inputImageCount;
                    bool m_inputImageCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_inputSeconds;
                    bool m_inputSecondsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_outputSeconds;
                    bool m_outputSecondsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_totalSeconds;
                    bool m_totalSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_
