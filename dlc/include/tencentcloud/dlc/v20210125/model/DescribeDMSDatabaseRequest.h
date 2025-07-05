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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDMSDatabase request structure.
                */
                class DescribeDMSDatabaseRequest : public AbstractModel
                {
                public:
                    DescribeDMSDatabaseRequest();
                    ~DescribeDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return Name Database name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param _name Database name
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
                     * 获取Schema name
                     * @return SchemaName Schema name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema name
                     * @param _schemaName Schema name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Match rules
                     * @return Pattern Match rules
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Match rules
                     * @param _pattern Match rules
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Schema name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Match rules
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASEREQUEST_H_
