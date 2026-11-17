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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMKeywordLibrary request structure.
                */
                class DescribeLLMKeywordLibraryRequest : public AbstractModel
                {
                public:
                    DescribeLLMKeywordLibraryRequest();
                    ~DescribeLLMKeywordLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lexicon type filter.
Valid values:
custom: custom blacklist
builtin: built-in lexicon
all: all lexicons
white: custom whitelist
                     * @return Type Lexicon type filter.
Valid values:
custom: custom blacklist
builtin: built-in lexicon
all: all lexicons
white: custom whitelist
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Lexicon type filter.
Valid values:
custom: custom blacklist
builtin: built-in lexicon
all: all lexicons
white: custom whitelist
                     * @param _type Lexicon type filter.
Valid values:
custom: custom blacklist
builtin: built-in lexicon
all: all lexicons
white: custom whitelist
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset
Value range: [0, +∞)
Default value: 0
                     * @return Offset Pagination offset
Value range: [0, +∞)
Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
Value range: [0, +∞)
Default value: 0
                     * @param _offset Pagination offset
Value range: [0, +∞)
Default value: 0
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
                     * 获取Number of entries returned per page
Value range: [1, 1000]
Default value: 10
                     * @return Limit Number of entries returned per page
Value range: [1, 1000]
Default value: 10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned per page
Value range: [1, 1000]
Default value: 10
                     * @param _limit Number of entries returned per page
Value range: [1, 1000]
Default value: 10
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
                     * 获取Sorting field
Valid values:
UpdateTime: sort by update time
CreateTime: sort by creation time
Name: sort by name
Default value: UpdateTime
                     * @return By Sorting field
Valid values:
UpdateTime: sort by update time
CreateTime: sort by creation time
Name: sort by name
Default value: UpdateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
Valid values:
UpdateTime: sort by update time
CreateTime: sort by creation time
Name: sort by name
Default value: UpdateTime
                     * @param _by Sorting field
Valid values:
UpdateTime: sort by update time
CreateTime: sort by creation time
Name: sort by name
Default value: UpdateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order
Valid values:
ASC: ascending order
DESC: descending order
Default value: DESC
                     * @return Order Sorting order
Valid values:
ASC: ascending order
DESC: descending order
Default value: DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order
Valid values:
ASC: ascending order
DESC: descending order
Default value: DESC
                     * @param _order Sorting order
Valid values:
ASC: ascending order
DESC: descending order
Default value: DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Lexicon type filter.
Valid values:
custom: custom blacklist
builtin: built-in lexicon
all: all lexicons
white: custom whitelist
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Pagination offset
Value range: [0, +∞)
Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries returned per page
Value range: [1, 1000]
Default value: 10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting field
Valid values:
UpdateTime: sort by update time
CreateTime: sort by creation time
Name: sort by name
Default value: UpdateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order
Valid values:
ASC: ascending order
DESC: descending order
Default value: DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_
