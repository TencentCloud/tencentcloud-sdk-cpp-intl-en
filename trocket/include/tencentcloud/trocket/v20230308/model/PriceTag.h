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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Price tag information. A complete price tag includes the billing category and the billing item.
                */
                class PriceTag : public AbstractModel
                {
                public:
                    PriceTag();
                    ~PriceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Price name. Enumeration values: tps: basic price of TPS; stepTps: TPS step size.
                     * @return Name Price name. Enumeration values: tps: basic price of TPS; stepTps: TPS step size.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Price name. Enumeration values: tps: basic price of TPS; stepTps: TPS step size.
                     * @param _name Price name. Enumeration values: tps: basic price of TPS; stepTps: TPS step size.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Step size corresponding to the billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Step Step size corresponding to the billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置Step size corresponding to the billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _step Step size corresponding to the billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * Price name. Enumeration values: tps: basic price of TPS; stepTps: TPS step size.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Step size corresponding to the billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PRICETAG_H_
