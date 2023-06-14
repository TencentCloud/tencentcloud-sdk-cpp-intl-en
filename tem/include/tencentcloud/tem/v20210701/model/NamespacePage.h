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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemNamespaceInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Namespace query result pagination
                */
                class NamespacePage : public AbstractModel
                {
                public:
                    NamespacePage();
                    ~NamespacePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Details of the returned records
                     * @return Records Details of the returned records
                     * 
                     */
                    std::vector<TemNamespaceInfo> GetRecords() const;

                    /**
                     * 设置Details of the returned records
                     * @param _records Details of the returned records
                     * 
                     */
                    void SetRecords(const std::vector<TemNamespaceInfo>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Total number of returned records
                     * @return Total Total number of returned records
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of returned records
                     * @param _total Total number of returned records
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of records per page
                     * @return Size Number of records per page
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Number of records per page
                     * @param _size Number of records per page
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Total number of pages
                     * @return Pages Total number of pages
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置Total number of pages
                     * @param _pages Total number of pages
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
                     * 获取Current entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Current Current entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 设置Current entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _current Current entry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrent(const int64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * Details of the returned records
                     */
                    std::vector<TemNamespaceInfo> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Total number of returned records
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of records per page
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Total number of pages
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Current entry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEPAGE_H_
