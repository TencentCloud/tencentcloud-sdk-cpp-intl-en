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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_

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
                * List of time series points within the usage time period (indexed by metric key). It is a JSON array in string form. The array length matches the response Timestamps, and null is used where there is no data point. The specific keys included are determined by the response MetricKeys.
                */
                class UsageSeries : public AbstractModel
                {
                public:
                    UsageSeries();
                    ~UsageSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Amount of total tokens used within a time period in JSON string form, for example, <code>&quot;[12,null,15]&quot;</code>.</p>
                     * @return TotalToken <p>Amount of total tokens used within a time period in JSON string form, for example, <code>&quot;[12,null,15]&quot;</code>.</p>
                     * 
                     */
                    std::string GetTotalToken() const;

                    /**
                     * 设置<p>Amount of total tokens used within a time period in JSON string form, for example, <code>&quot;[12,null,15]&quot;</code>.</p>
                     * @param _totalToken <p>Amount of total tokens used within a time period in JSON string form, for example, <code>&quot;[12,null,15]&quot;</code>.</p>
                     * 
                     */
                    void SetTotalToken(const std::string& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>Amount of input tokens used within a time period in JSON string form, for example, <code>&quot;[7,null,9]&quot;</code>.</p>
                     * @return InputTotalToken <p>Amount of input tokens used within a time period in JSON string form, for example, <code>&quot;[7,null,9]&quot;</code>.</p>
                     * 
                     */
                    std::string GetInputTotalToken() const;

                    /**
                     * 设置<p>Amount of input tokens used within a time period in JSON string form, for example, <code>&quot;[7,null,9]&quot;</code>.</p>
                     * @param _inputTotalToken <p>Amount of input tokens used within a time period in JSON string form, for example, <code>&quot;[7,null,9]&quot;</code>.</p>
                     * 
                     */
                    void SetInputTotalToken(const std::string& _inputTotalToken);

                    /**
                     * 判断参数 InputTotalToken 是否已赋值
                     * @return InputTotalToken 是否已赋值
                     * 
                     */
                    bool InputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>Amount of output tokens used within a time period in JSON string form, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @return OutputTotalToken <p>Amount of output tokens used within a time period in JSON string form, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    std::string GetOutputTotalToken() const;

                    /**
                     * 设置<p>Amount of output tokens used within a time period in JSON string form, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @param _outputTotalToken <p>Amount of output tokens used within a time period in JSON string form, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    void SetOutputTotalToken(const std::string& _outputTotalToken);

                    /**
                     * 判断参数 OutputTotalToken 是否已赋值
                     * @return OutputTotalToken 是否已赋值
                     * 
                     */
                    bool OutputTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>Read cache token count usage of the tokens family in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @return CacheTotalToken <p>Read cache token count usage of the tokens family in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    std::string GetCacheTotalToken() const;

                    /**
                     * 设置<p>Read cache token count usage of the tokens family in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @param _cacheTotalToken <p>Read cache token count usage of the tokens family in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    void SetCacheTotalToken(const std::string& _cacheTotalToken);

                    /**
                     * 判断参数 CacheTotalToken 是否已赋值
                     * @return CacheTotalToken 是否已赋值
                     * 
                     */
                    bool CacheTotalTokenHasBeenSet() const;

                    /**
                     * 获取<p>Usage of search requests in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @return SearchRequestCount <p>Usage of search requests in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    std::string GetSearchRequestCount() const;

                    /**
                     * 设置<p>Usage of search requests in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @param _searchRequestCount <p>Usage of search requests in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    void SetSearchRequestCount(const std::string& _searchRequestCount);

                    /**
                     * 判断参数 SearchRequestCount 是否已赋值
                     * @return SearchRequestCount 是否已赋值
                     * 
                     */
                    bool SearchRequestCountHasBeenSet() const;

                    /**
                     * 获取<p>Usage of search engine call count in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @return SearchCount <p>Usage of search engine call count in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    std::string GetSearchCount() const;

                    /**
                     * 设置<p>Usage of search engine call count in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * @param _searchCount <p>Usage of search engine call count in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     * 
                     */
                    void SetSearchCount(const std::string& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * <p>Amount of total tokens used within a time period in JSON string form, for example, <code>&quot;[12,null,15]&quot;</code>.</p>
                     */
                    std::string m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * <p>Amount of input tokens used within a time period in JSON string form, for example, <code>&quot;[7,null,9]&quot;</code>.</p>
                     */
                    std::string m_inputTotalToken;
                    bool m_inputTotalTokenHasBeenSet;

                    /**
                     * <p>Amount of output tokens used within a time period in JSON string form, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     */
                    std::string m_outputTotalToken;
                    bool m_outputTotalTokenHasBeenSet;

                    /**
                     * <p>Read cache token count usage of the tokens family in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     */
                    std::string m_cacheTotalToken;
                    bool m_cacheTotalTokenHasBeenSet;

                    /**
                     * <p>Usage of search requests in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     */
                    std::string m_searchRequestCount;
                    bool m_searchRequestCountHasBeenSet;

                    /**
                     * <p>Usage of search engine call count in JSON string form within a time period, for example, <code>&quot;[5,null,6]&quot;</code>.</p>
                     */
                    std::string m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGESERIES_H_
