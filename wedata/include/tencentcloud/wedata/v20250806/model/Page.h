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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Page parameter.
                */
                class Page : public AbstractModel
                {
                public:
                    Page();
                    ~Page() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Page size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageSize Page size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageSize Page size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNumber Page number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNumber Page number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Page size.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PAGE_H_
