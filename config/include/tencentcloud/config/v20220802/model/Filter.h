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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_FILTER_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Resource list filter
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query field name Resource name: resourceName Resource ID: resourceId Resource type: resourceType Resource region: resourceRegion Deletion status: resourceDelete 0 not deleted, 1 deleted resourceregionandzone region/az
                     * @return Name Query field name Resource name: resourceName Resource ID: resourceId Resource type: resourceType Resource region: resourceRegion Deletion status: resourceDelete 0 not deleted, 1 deleted resourceregionandzone region/az
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Query field name Resource name: resourceName Resource ID: resourceId Resource type: resourceType Resource region: resourceRegion Deletion status: resourceDelete 0 not deleted, 1 deleted resourceregionandzone region/az
                     * @param _name Query field name Resource name: resourceName Resource ID: resourceId Resource type: resourceType Resource region: resourceRegion Deletion status: resourceDelete 0 not deleted, 1 deleted resourceregionandzone region/az
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
                     * 获取Value of the field to query
                     * @return Values Value of the field to query
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Value of the field to query
                     * @param _values Value of the field to query
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
                     * Query field name Resource name: resourceName Resource ID: resourceId Resource type: resourceType Resource region: resourceRegion Deletion status: resourceDelete 0 not deleted, 1 deleted resourceregionandzone region/az
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Value of the field to query
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_FILTER_H_
