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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPROCESSIMAGETEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPROCESSIMAGETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeProcessImageTemplates request structure.
                */
                class DescribeProcessImageTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeProcessImageTemplatesRequest();
                    ~DescribeProcessImageTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering condition for the unique identifier of the image processing template. The array length cannot exceed 100.
                     * @return Definitions Filtering condition for the unique identifier of the image processing template. The array length cannot exceed 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Filtering condition for the unique identifier of the image processing template. The array length cannot exceed 100.
                     * @param _definitions Filtering condition for the unique identifier of the image processing template. The array length cannot exceed 100.
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Pagination offset. The default value is 0.
                     * @return Offset Pagination offset. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. The default value is 0.
                     * @param _offset Pagination offset. The default value is 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. The default value is 10, and the maximum value is 100.
                     * @return Limit Number of returned entries. The default value is 10, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. The default value is 10, and the maximum value is 100.
                     * @param _limit Number of returned entries. The default value is 10, and the maximum value is 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filtering condition for the identifier of the image processing template.
                     * @return Name Filtering condition for the identifier of the image processing template.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filtering condition for the identifier of the image processing template.
                     * @param _name Filtering condition for the identifier of the image processing template.
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
                     * 获取Sorting method. It is valid after OrderBy is set. Valid values: 0: ascending; 1: descending. The default value is 0.
                     * @return OrderType Sorting method. It is valid after OrderBy is set. Valid values: 0: ascending; 1: descending. The default value is 0.
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置Sorting method. It is valid after OrderBy is set. Valid values: 0: ascending; 1: descending. The default value is 0.
                     * @param _orderType Sorting method. It is valid after OrderBy is set. Valid values: 0: ascending; 1: descending. The default value is 0.
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values:
Definition: unique identifier of the template.
Default value: creation time.
                     * @return OrderBy Sorting field. Valid values:
Definition: unique identifier of the template.
Default value: creation time.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values:
Definition: unique identifier of the template.
Default value: creation time.
                     * @param _orderBy Sorting field. Valid values:
Definition: unique identifier of the template.
Default value: creation time.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Filtering condition for the template type. Valid values: <li>Preset: system preset template;</li> <li>Custom: user-defined template.</li>
                     * @return Type Filtering condition for the template type. Valid values: <li>Preset: system preset template;</li> <li>Custom: user-defined template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filtering condition for the template type. Valid values: <li>Preset: system preset template;</li> <li>Custom: user-defined template.</li>
                     * @param _type Filtering condition for the template type. Valid values: <li>Preset: system preset template;</li> <li>Custom: user-defined template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Filtering condition for the unique identifier of the image processing template. The array length cannot exceed 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Pagination offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. The default value is 10, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filtering condition for the identifier of the image processing template.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sorting method. It is valid after OrderBy is set. Valid values: 0: ascending; 1: descending. The default value is 0.
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Sorting field. Valid values:
Definition: unique identifier of the template.
Default value: creation time.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Filtering condition for the template type. Valid values: <li>Preset: system preset template;</li> <li>Custom: user-defined template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPROCESSIMAGETEMPLATESREQUEST_H_
