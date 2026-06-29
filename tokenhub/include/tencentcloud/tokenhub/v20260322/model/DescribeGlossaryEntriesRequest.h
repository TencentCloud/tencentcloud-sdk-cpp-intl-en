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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARYENTRIESREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARYENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeGlossaryEntries request structure.
                */
                class DescribeGlossaryEntriesRequest : public AbstractModel
                {
                public:
                    DescribeGlossaryEntriesRequest();
                    ~DescribeGlossaryEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Termbase ID. Obtain through the API DescribeGlossaries.
                     * @return GlossaryId Termbase ID. Obtain through the API DescribeGlossaries.
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 设置Termbase ID. Obtain through the API DescribeGlossaries.
                     * @param _glossaryId Termbase ID. Obtain through the API DescribeGlossaries.
                     * 
                     */
                    void SetGlossaryId(const std::string& _glossaryId);

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                    /**
                     * 获取Page number. Default is 1.
                     * @return Page Page number. Default is 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number. Default is 1.
                     * @param _page Page number. Default is 1.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Size per page. The default value is 20, and the maximum value is 200.
                     * @return PageSize Size per page. The default value is 20, and the maximum value is 200.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Size per page. The default value is 20, and the maximum value is 200.
                     * @param _pageSize Size per page. The default value is 20, and the maximum value is 200.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Termbase ID. Obtain through the API DescribeGlossaries.
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                    /**
                     * Page number. Default is 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Size per page. The default value is 20, and the maximum value is 200.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARYENTRIESREQUEST_H_
