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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENTDATA_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDosAttackSourceEvent.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS attack source data
                */
                class DDosAttackSourceEventData : public AbstractModel
                {
                public:
                    DDosAttackSourceEventData();
                    ~DDosAttackSourceEventData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS attack source data set
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List DDoS attack source data set
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DDosAttackSourceEvent> GetList() const;

                    /**
                     * 设置DDoS attack source data set
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list DDoS attack source data set
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<DDosAttackSourceEvent>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Current page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNo Current page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Current page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNo Current page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Number of items per page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageSize Number of items per page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageSize Number of items per page
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
                     * 获取Total number of pages
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pages Total number of pages
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置Total number of pages
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pages Total number of pages
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取Total number of items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalSize Total number of items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置Total number of items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalSize Total number of items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalSize(const int64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * DDoS attack source data set
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DDosAttackSourceEvent> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Current page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Number of items per page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of pages
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Total number of items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKSOURCEEVENTDATA_H_
