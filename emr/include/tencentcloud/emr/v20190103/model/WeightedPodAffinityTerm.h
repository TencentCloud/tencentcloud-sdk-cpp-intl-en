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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_WEIGHTEDPODAFFINITYTERM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_WEIGHTEDPODAFFINITYTERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodAffinityTerm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Weighted Pod affinity item.
                */
                class WeightedPodAffinityTerm : public AbstractModel
                {
                public:
                    WeightedPodAffinityTerm();
                    ~WeightedPodAffinityTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Weight.</p>
                     * @return Weight <p>Weight.</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>Weight.</p>
                     * @param _weight <p>Weight.</p>
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>Pod affinity condition.</p>
                     * @return PodAffinityTerm <p>Pod affinity condition.</p>
                     * 
                     */
                    PodAffinityTerm GetPodAffinityTerm() const;

                    /**
                     * 设置<p>Pod affinity condition.</p>
                     * @param _podAffinityTerm <p>Pod affinity condition.</p>
                     * 
                     */
                    void SetPodAffinityTerm(const PodAffinityTerm& _podAffinityTerm);

                    /**
                     * 判断参数 PodAffinityTerm 是否已赋值
                     * @return PodAffinityTerm 是否已赋值
                     * 
                     */
                    bool PodAffinityTermHasBeenSet() const;

                private:

                    /**
                     * <p>Weight.</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>Pod affinity condition.</p>
                     */
                    PodAffinityTerm m_podAffinityTerm;
                    bool m_podAffinityTermHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_WEIGHTEDPODAFFINITYTERM_H_
