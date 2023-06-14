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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DETAIL_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Detailed metric data with different tags in billable usage data.
                */
                class Detail : public AbstractModel
                {
                public:
                    Detail();
                    ~Detail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Usage metric.
                     * @return TagName Usage metric.
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置Usage metric.
                     * @param _tagName Usage metric.
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取Usage weight.
                     * @return Weight Usage weight.
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置Usage weight.
                     * @param _weight Usage weight.
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Usage value.
                     * @return Value Usage value.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Usage value.
                     * @param _value Usage value.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Usage metric.
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * Usage weight.
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Usage value.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DETAIL_H_
