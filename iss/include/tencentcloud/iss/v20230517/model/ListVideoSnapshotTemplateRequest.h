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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListVideoSnapshotTemplate request structure.
                */
                class ListVideoSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    ListVideoSnapshotTemplateRequest();
                    ~ListVideoSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Template name</p>
                     * @return Name <p>Template name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name</p>
                     * @param _name <p>Template name</p>
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
                     * 获取<p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * @return Type <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * @param _type <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Sorting parameter</p><p>Default value: update_time</p>
                     * @return Sort <p>Sorting parameter</p><p>Default value: update_time</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Sorting parameter</p><p>Default value: update_time</p>
                     * @param _sort <p>Sorting parameter</p><p>Default value: update_time</p>
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
                     * 获取<p>Sort order</p><p>Enumeration values:</p><ul><li>desc: in descending order</li><li>asc: in ascending order</li></ul><p>Default value: desc</p>
                     * @return Order <p>Sort order</p><p>Enumeration values:</p><ul><li>desc: in descending order</li><li>asc: in ascending order</li></ul><p>Default value: desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sort order</p><p>Enumeration values:</p><ul><li>desc: in descending order</li><li>asc: in ascending order</li></ul><p>Default value: desc</p>
                     * @param _order <p>Sort order</p><p>Enumeration values:</p><ul><li>desc: in descending order</li><li>asc: in ascending order</li></ul><p>Default value: desc</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Page number</p><p>Default value: 1</p>
                     * @return PageNumber <p>Page number</p><p>Default value: 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number</p><p>Default value: 1</p>
                     * @param _pageNumber <p>Page number</p><p>Default value: 1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page</p><p>Default value: 20</p>
                     * @return PageSize <p>Number of items per page</p><p>Default value: 20</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page</p><p>Default value: 20</p>
                     * @param _pageSize <p>Number of items per page</p><p>Default value: 20</p>
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
                     * <p>Template name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Sorting parameter</p><p>Default value: update_time</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Sort order</p><p>Enumeration values:</p><ul><li>desc: in descending order</li><li>asc: in ascending order</li></ul><p>Default value: desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Page number</p><p>Default value: 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page</p><p>Default value: 20</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEOSNAPSHOTTEMPLATEREQUEST_H_
