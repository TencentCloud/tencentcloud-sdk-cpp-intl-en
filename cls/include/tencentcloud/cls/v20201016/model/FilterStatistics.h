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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_FILTERSTATISTICS_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_FILTERSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Task data filtering statistical information for delivery
                */
                class FilterStatistics : public AbstractModel
                {
                public:
                    FilterStatistics();
                    ~FilterStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of raw logs</p>
                     * @return OriginalCount <p>Number of raw logs</p>
                     * 
                     */
                    uint64_t GetOriginalCount() const;

                    /**
                     * 设置<p>Number of raw logs</p>
                     * @param _originalCount <p>Number of raw logs</p>
                     * 
                     */
                    void SetOriginalCount(const uint64_t& _originalCount);

                    /**
                     * 判断参数 OriginalCount 是否已赋值
                     * @return OriginalCount 是否已赋值
                     * 
                     */
                    bool OriginalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of filtered logs</p>
                     * @return FilteredCount <p>Number of filtered logs</p>
                     * 
                     */
                    uint64_t GetFilteredCount() const;

                    /**
                     * 设置<p>Number of filtered logs</p>
                     * @param _filteredCount <p>Number of filtered logs</p>
                     * 
                     */
                    void SetFilteredCount(const uint64_t& _filteredCount);

                    /**
                     * 判断参数 FilteredCount 是否已赋值
                     * @return FilteredCount 是否已赋值
                     * 
                     */
                    bool FilteredCountHasBeenSet() const;

                    /**
                     * 获取<p>Filtered results</p>
                     * @return FilteredResult <p>Filtered results</p>
                     * 
                     */
                    std::vector<std::string> GetFilteredResult() const;

                    /**
                     * 设置<p>Filtered results</p>
                     * @param _filteredResult <p>Filtered results</p>
                     * 
                     */
                    void SetFilteredResult(const std::vector<std::string>& _filteredResult);

                    /**
                     * 判断参数 FilteredResult 是否已赋值
                     * @return FilteredResult 是否已赋值
                     * 
                     */
                    bool FilteredResultHasBeenSet() const;

                private:

                    /**
                     * <p>Number of raw logs</p>
                     */
                    uint64_t m_originalCount;
                    bool m_originalCountHasBeenSet;

                    /**
                     * <p>Number of filtered logs</p>
                     */
                    uint64_t m_filteredCount;
                    bool m_filteredCountHasBeenSet;

                    /**
                     * <p>Filtered results</p>
                     */
                    std::vector<std::string> m_filteredResult;
                    bool m_filteredResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_FILTERSTATISTICS_H_
