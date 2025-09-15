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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoadMetricsCondition.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Load metric.
                */
                class LoadMetricsConditions : public AbstractModel
                {
                public:
                    LoadMetricsConditions();
                    ~LoadMetricsConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger rule condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadMetrics Trigger rule condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LoadMetricsCondition> GetLoadMetrics() const;

                    /**
                     * 设置Trigger rule condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadMetrics Trigger rule condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadMetrics(const std::vector<LoadMetricsCondition>& _loadMetrics);

                    /**
                     * 判断参数 LoadMetrics 是否已赋值
                     * @return LoadMetrics 是否已赋值
                     * 
                     */
                    bool LoadMetricsHasBeenSet() const;

                    /**
                     * 获取0: all conditions should be met.
1: any one of the conditions is met.
                     * @return Match 0: all conditions should be met.
1: any one of the conditions is met.
                     * 
                     */
                    int64_t GetMatch() const;

                    /**
                     * 设置0: all conditions should be met.
1: any one of the conditions is met.
                     * @param _match 0: all conditions should be met.
1: any one of the conditions is met.
                     * 
                     */
                    void SetMatch(const int64_t& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * Trigger rule condition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LoadMetricsCondition> m_loadMetrics;
                    bool m_loadMetricsHasBeenSet;

                    /**
                     * 0: all conditions should be met.
1: any one of the conditions is met.
                     */
                    int64_t m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_
