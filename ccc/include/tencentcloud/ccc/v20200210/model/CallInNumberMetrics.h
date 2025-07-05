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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/CallInMetrics.h>
#include <tencentcloud/ccc/v20200210/model/CallInSkillGroupMetrics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Inbound line dimension metrics.
                */
                class CallInNumberMetrics : public AbstractModel
                {
                public:
                    CallInNumberMetrics();
                    ~CallInNumberMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Line number.
                     * @return Number Line number.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Line number.
                     * @param _number Line number.
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Line-Related metrics.
                     * @return Metrics Line-Related metrics.
                     * 
                     */
                    CallInMetrics GetMetrics() const;

                    /**
                     * 设置Line-Related metrics.
                     * @param _metrics Line-Related metrics.
                     * 
                     */
                    void SetMetrics(const CallInMetrics& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Bound skill group metrics.
                     * @return SkillGroupMetrics Bound skill group metrics.
                     * 
                     */
                    std::vector<CallInSkillGroupMetrics> GetSkillGroupMetrics() const;

                    /**
                     * 设置Bound skill group metrics.
                     * @param _skillGroupMetrics Bound skill group metrics.
                     * 
                     */
                    void SetSkillGroupMetrics(const std::vector<CallInSkillGroupMetrics>& _skillGroupMetrics);

                    /**
                     * 判断参数 SkillGroupMetrics 是否已赋值
                     * @return SkillGroupMetrics 是否已赋值
                     * 
                     */
                    bool SkillGroupMetricsHasBeenSet() const;

                private:

                    /**
                     * Line number.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Line-Related metrics.
                     */
                    CallInMetrics m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Bound skill group metrics.
                     */
                    std::vector<CallInSkillGroupMetrics> m_skillGroupMetrics;
                    bool m_skillGroupMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLINNUMBERMETRICS_H_
