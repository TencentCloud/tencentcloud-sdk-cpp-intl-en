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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/TemNamespaceInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Namespace pagination
                */
                class NamespacePage : public AbstractModel
                {
                public:
                    NamespacePage();
                    ~NamespacePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Records
                     * @return Records Records
                     */
                    std::vector<TemNamespaceInfo> GetRecords() const;

                    /**
                     * 设置Records
                     * @param Records Records
                     */
                    void SetRecords(const std::vector<TemNamespaceInfo>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return Total Total number
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number
                     * @param Total Total number
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of items
                     * @return Size Number of items
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Number of items
                     * @param Size Number of items
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Number of pages
                     * @return Pages Number of pages
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置Number of pages
                     * @param Pages Number of pages
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     */
                    bool PagesHasBeenSet() const;

                private:

                    /**
                     * Records
                     */
                    std::vector<TemNamespaceInfo> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Total number
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of items
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Number of pages
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_NAMESPACEPAGE_H_
