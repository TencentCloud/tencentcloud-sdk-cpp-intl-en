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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CustomMetricSpec.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * collection object
                */
                class MetricSpec : public AbstractModel
                {
                public:
                    MetricSpec();
                    ~MetricSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom metric collection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomSpecs Custom metric collection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CustomMetricSpec> GetCustomSpecs() const;

                    /**
                     * 设置Custom metric collection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customSpecs Custom metric collection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomSpecs(const std::vector<CustomMetricSpec>& _customSpecs);

                    /**
                     * 判断参数 CustomSpecs 是否已赋值
                     * @return CustomSpecs 是否已赋值
                     * 
                     */
                    bool CustomSpecsHasBeenSet() const;

                private:

                    /**
                     * Custom metric collection configuration item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CustomMetricSpec> m_customSpecs;
                    bool m_customSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_
