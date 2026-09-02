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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>
#include <tencentcloud/csip/v20221121/model/StatisticalFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Event structure of user behavior analysis
                */
                class UebaEventContent : public AbstractModel
                {
                public:
                    UebaEventContent();
                    ~UebaEventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event type
1: Statement retrieval
2: Filter retrieval
                     * @return EventType Event type
1: Statement retrieval
2: Filter retrieval
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Event type
1: Statement retrieval
2: Filter retrieval
                     * @param _eventType Event type
1: Statement retrieval
2: Filter retrieval
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Content for statement retrieval
                     * @return Content Content for statement retrieval
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content for statement retrieval
                     * @param _content Content for statement retrieval
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Retrieval criteria

                     * @return Filters Retrieval criteria

                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置Retrieval criteria

                     * @param _filters Retrieval criteria

                     * 
                     */
                    void SetFilters(const std::vector<WhereFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Statistical condition
                     * @return StatisticalFilter Statistical condition
                     * 
                     */
                    StatisticalFilter GetStatisticalFilter() const;

                    /**
                     * 设置Statistical condition
                     * @param _statisticalFilter Statistical condition
                     * 
                     */
                    void SetStatisticalFilter(const StatisticalFilter& _statisticalFilter);

                    /**
                     * 判断参数 StatisticalFilter 是否已赋值
                     * @return StatisticalFilter 是否已赋值
                     * 
                     */
                    bool StatisticalFilterHasBeenSet() const;

                private:

                    /**
                     * Event type
1: Statement retrieval
2: Filter retrieval
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Content for statement retrieval
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Retrieval criteria

                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Statistical condition
                     */
                    StatisticalFilter m_statisticalFilter;
                    bool m_statisticalFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAEVENTCONTENT_H_
