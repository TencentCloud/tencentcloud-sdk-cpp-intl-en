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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPKNOWLEDGEDETAILREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPKNOWLEDGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListAppKnowledgeDetail request structure.
                */
                class ListAppKnowledgeDetailRequest : public AbstractModel
                {
                public:
                    ListAppKnowledgeDetailRequest();
                    ~ListAppKnowledgeDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number.
                     * @return PageNumber Page number.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number.
                     * @param _pageNumber Page number.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Application ID list.
                     * @return AppBizIds Application ID list.
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置Application ID list.
                     * @param _appBizIds Application ID list.
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                private:

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Application ID list.
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPKNOWLEDGEDETAILREQUEST_H_
