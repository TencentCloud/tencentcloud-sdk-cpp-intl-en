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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAddonValues response structure.
                */
                class DescribeAddonValuesResponse : public AbstractModel
                {
                public:
                    DescribeAddonValuesResponse();
                    ~DescribeAddonValuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameters list. If the add-on has been installed, the configured parameters are used for rendering, in a JSON string.
                     * @return Values Parameters list. If the add-on has been installed, the configured parameters are used for rendering, in a JSON string.
                     * 
                     */
                    std::string GetValues() const;

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取List of parameters supported by the add-on in a JSON string. The default values are used.
                     * @return DefaultValues List of parameters supported by the add-on in a JSON string. The default values are used.
                     * 
                     */
                    std::string GetDefaultValues() const;

                    /**
                     * 判断参数 DefaultValues 是否已赋值
                     * @return DefaultValues 是否已赋值
                     * 
                     */
                    bool DefaultValuesHasBeenSet() const;

                private:

                    /**
                     * Parameters list. If the add-on has been installed, the configured parameters are used for rendering, in a JSON string.
                     */
                    std::string m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * List of parameters supported by the add-on in a JSON string. The default values are used.
                     */
                    std::string m_defaultValues;
                    bool m_defaultValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_
