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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Parameters for querying jobs associated with a specific scenario.
                */
                class ScenarioRelatedJobsParams : public AbstractModel
                {
                public:
                    ScenarioRelatedJobsParams();
                    ~ScenarioRelatedJobsParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset, default value is 0.
                     * @return Offset Offset, default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, default value is 0.
                     * @param _offset Offset, default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returns. Default value is 20, maximum is 100.
                     * @return Limit Number of returns. Default value is 20, maximum is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns. Default value is 20, maximum is 100.
                     * @param _limit Number of returns. Default value is 20, maximum is 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Field for sorting.
                     * @return OrderBy Field for sorting.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Field for sorting.
                     * @param _orderBy Field for sorting.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Whether in ascending order.
                     * @return Ascend Whether in ascending order.
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置Whether in ascending order.
                     * @param _ascend Whether in ascending order.
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                private:

                    /**
                     * Offset, default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. Default value is 20, maximum is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Field for sorting.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether in ascending order.
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_
