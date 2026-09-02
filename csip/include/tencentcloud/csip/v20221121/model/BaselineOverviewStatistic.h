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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEOVERVIEWSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEOVERVIEWSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NotPassItemStatistic.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Statistical metrics in the header of the baseline overview page.
                */
                class BaselineOverviewStatistic : public AbstractModel
                {
                public:
                    BaselineOverviewStatistic();
                    ~BaselineOverviewStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Current total count of failed check items (including hosts and container clusters).</p>
                     * @return NotPassItemCount <p>Current total count of failed check items (including hosts and container clusters).</p>
                     * 
                     */
                    uint64_t GetNotPassItemCount() const;

                    /**
                     * 设置<p>Current total count of failed check items (including hosts and container clusters).</p>
                     * @param _notPassItemCount <p>Current total count of failed check items (including hosts and container clusters).</p>
                     * 
                     */
                    void SetNotPassItemCount(const uint64_t& _notPassItemCount);

                    /**
                     * 判断参数 NotPassItemCount 是否已赋值
                     * @return NotPassItemCount 是否已赋值
                     * 
                     */
                    bool NotPassItemCountHasBeenSet() const;

                    /**
                     * 获取<p>Statistics list of detection failed items by policy group.</p>
                     * @return NotPassItemStatistic <p>Statistics list of detection failed items by policy group.</p>
                     * 
                     */
                    std::vector<NotPassItemStatistic> GetNotPassItemStatistic() const;

                    /**
                     * 设置<p>Statistics list of detection failed items by policy group.</p>
                     * @param _notPassItemStatistic <p>Statistics list of detection failed items by policy group.</p>
                     * 
                     */
                    void SetNotPassItemStatistic(const std::vector<NotPassItemStatistic>& _notPassItemStatistic);

                    /**
                     * 判断参数 NotPassItemStatistic 是否已赋值
                     * @return NotPassItemStatistic 是否已赋值
                     * 
                     */
                    bool NotPassItemStatisticHasBeenSet() const;

                    /**
                     * 获取<p>Total baseline risks fixed in the past one year.</p>
                     * @return LastYearFixCount <p>Total baseline risks fixed in the past one year.</p>
                     * 
                     */
                    uint64_t GetLastYearFixCount() const;

                    /**
                     * 设置<p>Total baseline risks fixed in the past one year.</p>
                     * @param _lastYearFixCount <p>Total baseline risks fixed in the past one year.</p>
                     * 
                     */
                    void SetLastYearFixCount(const uint64_t& _lastYearFixCount);

                    /**
                     * 判断参数 LastYearFixCount 是否已赋值
                     * @return LastYearFixCount 是否已赋值
                     * 
                     */
                    bool LastYearFixCountHasBeenSet() const;

                private:

                    /**
                     * <p>Current total count of failed check items (including hosts and container clusters).</p>
                     */
                    uint64_t m_notPassItemCount;
                    bool m_notPassItemCountHasBeenSet;

                    /**
                     * <p>Statistics list of detection failed items by policy group.</p>
                     */
                    std::vector<NotPassItemStatistic> m_notPassItemStatistic;
                    bool m_notPassItemStatisticHasBeenSet;

                    /**
                     * <p>Total baseline risks fixed in the past one year.</p>
                     */
                    uint64_t m_lastYearFixCount;
                    bool m_lastYearFixCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEOVERVIEWSTATISTIC_H_
