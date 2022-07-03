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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SUMMARIZEDDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SUMMARIZEDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Aggregated value, which is aggregated from all data of each metric. Aggregation methods are used depending on the metric attributes.
                */
                class SummarizedData : public AbstractModel
                {
                public:
                    SummarizedData();
                    ~SummarizedData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Aggregation method, which can be:
`sum`: Aggregate summation
`max`: Maximum value. In bandwidth mode, the peak bandwidth is calculated based on the data aggregated in 5 minutes.
`avg`: Average value
                     * @return Name Aggregation method, which can be:
`sum`: Aggregate summation
`max`: Maximum value. In bandwidth mode, the peak bandwidth is calculated based on the data aggregated in 5 minutes.
`avg`: Average value
                     */
                    std::string GetName() const;

                    /**
                     * 设置Aggregation method, which can be:
`sum`: Aggregate summation
`max`: Maximum value. In bandwidth mode, the peak bandwidth is calculated based on the data aggregated in 5 minutes.
`avg`: Average value
                     * @param Name Aggregation method, which can be:
`sum`: Aggregate summation
`max`: Maximum value. In bandwidth mode, the peak bandwidth is calculated based on the data aggregated in 5 minutes.
`avg`: Average value
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Aggregated value
                     * @return Value Aggregated value
                     */
                    double GetValue() const;

                    /**
                     * 设置Aggregated value
                     * @param Value Aggregated value
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Aggregation method, which can be:
`sum`: Aggregate summation
`max`: Maximum value. In bandwidth mode, the peak bandwidth is calculated based on the data aggregated in 5 minutes.
`avg`: Average value
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Aggregated value
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SUMMARIZEDDATA_H_
