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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/RuleFilter.h>
#include <tencentcloud/tse/v20201207/model/KeyValue.h>
#include <tencentcloud/tse/v20201207/model/QpsThreshold.h>
#include <tencentcloud/tse/v20201207/model/AccurateQpsThreshold.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Parameter throttling rule
                */
                class LimitRule : public AbstractModel
                {
                public:
                    LimitRule();
                    ~LimitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request matching conditions
                     * @return Filters Request matching conditions
                     * 
                     */
                    std::vector<RuleFilter> GetFilters() const;

                    /**
                     * 设置Request matching conditions
                     * @param _filters Request matching conditions
                     * 
                     */
                    void SetFilters(const std::vector<RuleFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Parameter throttling based on composite
                     * @return LimitBy Parameter throttling based on composite
                     * 
                     */
                    std::vector<KeyValue> GetLimitBy() const;

                    /**
                     * 设置Parameter throttling based on composite
                     * @param _limitBy Parameter throttling based on composite
                     * 
                     */
                    void SetLimitBy(const std::vector<KeyValue>& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取Throttling threshold
                     * @return QpsThresholds Throttling threshold
                     * 
                     */
                    std::vector<QpsThreshold> GetQpsThresholds() const;

                    /**
                     * 设置Throttling threshold
                     * @param _qpsThresholds Throttling threshold
                     * 
                     */
                    void SetQpsThresholds(const std::vector<QpsThreshold>& _qpsThresholds);

                    /**
                     * 判断参数 QpsThresholds 是否已赋值
                     * @return QpsThresholds 是否已赋值
                     * 
                     */
                    bool QpsThresholdsHasBeenSet() const;

                    /**
                     * 获取Precise throttling threshold
                     * @return AccurateQpsThresholds Precise throttling threshold
                     * 
                     */
                    std::vector<AccurateQpsThreshold> GetAccurateQpsThresholds() const;

                    /**
                     * 设置Precise throttling threshold
                     * @param _accurateQpsThresholds Precise throttling threshold
                     * 
                     */
                    void SetAccurateQpsThresholds(const std::vector<AccurateQpsThreshold>& _accurateQpsThresholds);

                    /**
                     * 判断参数 AccurateQpsThresholds 是否已赋值
                     * @return AccurateQpsThresholds 是否已赋值
                     * 
                     */
                    bool AccurateQpsThresholdsHasBeenSet() const;

                private:

                    /**
                     * Request matching conditions
                     */
                    std::vector<RuleFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Parameter throttling based on composite
                     */
                    std::vector<KeyValue> m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * Throttling threshold
                     */
                    std::vector<QpsThreshold> m_qpsThresholds;
                    bool m_qpsThresholdsHasBeenSet;

                    /**
                     * Precise throttling threshold
                     */
                    std::vector<AccurateQpsThreshold> m_accurateQpsThresholds;
                    bool m_accurateQpsThresholdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_
