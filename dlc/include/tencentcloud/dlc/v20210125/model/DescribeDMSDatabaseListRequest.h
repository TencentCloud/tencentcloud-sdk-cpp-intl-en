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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTREQUEST_H_

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
                * DescribeDMSDatabaseList request structure.
                */
                class DescribeDMSDatabaseListRequest : public AbstractModel
                {
                public:
                    DescribeDMSDatabaseListRequest();
                    ~DescribeDMSDatabaseListRequest() = default;
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

                    /**
                     * 获取Pagination parameters, indicating the size of a single page.
                     * @return Limit Pagination parameters, indicating the size of a single page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters, indicating the size of a single page.
                     * @param _limit Pagination parameters, indicating the size of a single page.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination parameters
                     * @return Offset Pagination parameters
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters
                     * @param _offset Pagination parameters
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting fields
                     * @return Sort Sorting fields
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting fields
                     * @param _sort Sorting fields
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sorting fields: true for ascending order; false for descending order
                     * @return Asc Sorting fields: true for ascending order; false for descending order
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置Sorting fields: true for ascending order; false for descending order
                     * @param _asc Sorting fields: true for ascending order; false for descending order
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

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

                    /**
                     * Pagination parameters, indicating the size of a single page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameters
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting fields
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sorting fields: true for ascending order; false for descending order
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASELISTREQUEST_H_
