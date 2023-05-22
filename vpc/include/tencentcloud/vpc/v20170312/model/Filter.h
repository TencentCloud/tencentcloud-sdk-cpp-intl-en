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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_FILTER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Filter
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The attribute name. If more than one Filter exists, the logical relation between these Filters is `AND`.
                     * @return Name The attribute name. If more than one Filter exists, the logical relation between these Filters is `AND`.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The attribute name. If more than one Filter exists, the logical relation between these Filters is `AND`.
                     * @param Name The attribute name. If more than one Filter exists, the logical relation between these Filters is `AND`.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Attribute value. If multiple values exist in one filter, the logical relationship between these values is `OR`. For a `bool` parameter, the valid values include `TRUE` and `FALSE`.
                     * @return Values Attribute value. If multiple values exist in one filter, the logical relationship between these values is `OR`. For a `bool` parameter, the valid values include `TRUE` and `FALSE`.
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Attribute value. If multiple values exist in one filter, the logical relationship between these values is `OR`. For a `bool` parameter, the valid values include `TRUE` and `FALSE`.
                     * @param Values Attribute value. If multiple values exist in one filter, the logical relationship between these values is `OR`. For a `bool` parameter, the valid values include `TRUE` and `FALSE`.
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * The attribute name. If more than one Filter exists, the logical relation between these Filters is `AND`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Attribute value. If multiple values exist in one filter, the logical relationship between these values is `OR`. For a `bool` parameter, the valid values include `TRUE` and `FALSE`.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_FILTER_H_
