/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLESTREAM_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLESTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Label.h>
#include <tencentcloud/pts/v20210728/model/SamplePair.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Stream of values belonging to a metric.
                */
                class SampleStream : public AbstractModel
                {
                public:
                    SampleStream();
                    ~SampleStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric labels.

Note: This field may return null, indicating that no valid value is found.
                     * @return Labels Metric labels.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Metric labels.

Note: This field may return null, indicating that no valid value is found.
                     * @param _labels Metric labels.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Array of metric values.
                     * @return Values Array of metric values.
                     * 
                     */
                    std::vector<SamplePair> GetValues() const;

                    /**
                     * 设置Array of metric values.
                     * @param _values Array of metric values.
                     * 
                     */
                    void SetValues(const std::vector<SamplePair>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Metric name.

Note: This field may return null, indicating that no valid value is found.
                     * @return Name Metric name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Metric name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _name Metric name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Metric labels.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Array of metric values.
                     */
                    std::vector<SamplePair> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Metric name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLESTREAM_H_
