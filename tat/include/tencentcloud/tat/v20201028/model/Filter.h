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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_FILTER_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Describes the key-value pair filter, which is used for conditional filtering queries. for example, filter by ID, name, and status.
- if there are multiple `Filter`s, the logical relationship between them is `AND`.
- if there are multiple Values in the same Filter, the relationship between Values under the same Filter is logical OR.
> 
Take the `Filters` of the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api as an example. if we need to query commands with the `command-name` "print working directory" and the `command-type` "POWERSHELL" or "BAT", it can be implemented as follows:.
```
Filters.0.Name=command-name
&Filters.0.Values.0=Print working directory.

&Filters.1.Name=command-type
&Filters.1.Values.0=POWERSHELL
&Filters.1.Values.1=BAT
```
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field to be filtered.
                     * @return Name Field to be filtered.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field to be filtered.
                     * @param _name Field to be filtered.
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
                     * 获取Filter values of the field.
                     * @return Values Filter values of the field.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter values of the field.
                     * @param _values Filter values of the field.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Field to be filtered.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter values of the field.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_FILTER_H_
