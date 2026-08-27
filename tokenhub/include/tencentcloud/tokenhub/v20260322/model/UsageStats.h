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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Statistical aggregate values within a time period (indexed by metric key). Declares that both the tokens and search field families are in this schema, with values obtained based on the actual MetricKeys returned. See the top-level `MetricKeys` field in the response.
                */
                class UsageStats : public AbstractModel
                {
                public:
                    UsageStats();
                    ~UsageStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total tokens accumulated within a time period.</p>
                     * @return TotalToken <p>Total tokens accumulated within a time period.</p>
                     * 
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置<p>Total tokens accumulated within a time period.</p>
                     * @param _totalToken <p>Total tokens accumulated within a time period.</p>
                     * 
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens family] Total input tokens within a time period.</p>
                     * @return InputTotalToken <p>[tokens family] Total input tokens within a time period.</p>
                     * 
                     */
                    int64_t GetInputTotalToken() const;

                    /**
                     * 设置<p>[tokens family] Total input tokens within a time period.</p>
                     * @param _inputTotalToken <p>[tokens family] Total input tokens within a time period.</p>
                     * 
                     */
                    void SetInputTotalToken(const int64_t& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[tokens family] Total output tokens within a time period.</p>
                     * @return OutputTotalToken <p>[tokens family] Total output tokens within a time period.</p>
                     * 
                     */
                    int64_t GetOutputTotalToken() const;

                    /**
                     * 设置<p>[tokens family] Total output tokens within a time period.</p>
                     * @param _outputTotalToken <p>[tokens family] Total output tokens within a time period.</p>
                     * 
                     */
                    void SetOutputTotalToken(const int64_t& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>[token family] Cumulative number of tokens read from the cache within a time period (cache hit part)</p>
                     * @return CacheTotalToken <p>[token family] Cumulative number of tokens read from the cache within a time period (cache hit part)</p>
                     * 
                     */
                    int64_t GetCacheTotalToken() const;

                    /**
                     * 设置<p>[token family] Cumulative number of tokens read from the cache within a time period (cache hit part)</p>
                     * @param _cacheTotalToken <p>[token family] Cumulative number of tokens read from the cache within a time period (cache hit part)</p>
                     * 
                     */
                    void SetCacheTotalToken(const int64_t& _cacheTotalToken);

                    /**
                     * 判断参数 CacheTotalToken 是否已赋值
                     * @return CacheTotalToken 是否已赋值
                     * 
                     */
                    bool CacheTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>Total online search requests in the [search group]</p>
                     * @return SearchRequestCount <p>Total online search requests in the [search group]</p>
                     * 
                     */
                    int64_t GetSearchRequestCount() const;

                    /**
                     * 设置<p>Total online search requests in the [search group]</p>
                     * @param _searchRequestCount <p>Total online search requests in the [search group]</p>
                     * 
                     */
                    void SetSearchRequestCount(const int64_t& _searchRequestCount);

                    /**
                     * 判断参数 SearchRequestCount 是否已赋值
                     * @return SearchRequestCount 是否已赋值
                     * 
                     */
                    bool SearchRequestCountHasBeenSet() const;

                    /**
                     * 获取<p>[search family] Total search engine calls</p>
                     * @return SearchCount <p>[search family] Total search engine calls</p>
                     * 
                     */
                    int64_t GetSearchCount() const;

                    /**
                     * 设置<p>[search family] Total search engine calls</p>
                     * @param _searchCount <p>[search family] Total search engine calls</p>
                     * 
                     */
                    void SetSearchCount(const int64_t& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total tokens accumulated within a time period.</p>
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * <p>[tokens family] Total input tokens within a time period.</p>
                     */
                    int64_t m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * <p>[tokens family] Total output tokens within a time period.</p>
                     */
                    int64_t m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                    /**
                     * <p>[token family] Cumulative number of tokens read from the cache within a time period (cache hit part)</p>
                     */
                    int64_t m_cacheTotalToken;
                    bool m_cacheTotalTokenHasBeenSet;

                    /**
                     * <p>Total online search requests in the [search group]</p>
                     */
                    int64_t m_searchRequestCount;
                    bool m_searchRequestCountHasBeenSet;

                    /**
                     * <p>[search family] Total search engine calls</p>
                     */
                    int64_t m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESTATS_H_
