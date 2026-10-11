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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PREFERREDSCHEDULINGTERM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PREFERREDSCHEDULINGTERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSelectorTerm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Option for the Pod toleration scheduling node.
                */
                class PreferredSchedulingTerm : public AbstractModel
                {
                public:
                    PreferredSchedulingTerm();
                    ~PreferredSchedulingTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Weight. Value range: 1–100.
                     * @return Weight Weight. Value range: 1–100.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight. Value range: 1–100.
                     * @param _weight Weight. Value range: 1–100.
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
                     * 获取Node selection expression.
                     * @return Preference Node selection expression.
                     * 
                     */
                    NodeSelectorTerm GetPreference() const;

                    /**
                     * 设置Node selection expression.
                     * @param _preference Node selection expression.
                     * 
                     */
                    void SetPreference(const NodeSelectorTerm& _preference);

                    /**
                     * 判断参数 Preference 是否已赋值
                     * @return Preference 是否已赋值
                     * 
                     */
                    bool PreferenceHasBeenSet() const;

                private:

                    /**
                     * Weight. Value range: 1–100.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Node selection expression.
                     */
                    NodeSelectorTerm m_preference;
                    bool m_preferenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREFERREDSCHEDULINGTERM_H_
