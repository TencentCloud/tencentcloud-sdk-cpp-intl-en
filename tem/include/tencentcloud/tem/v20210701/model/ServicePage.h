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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemService.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * List of returned applications
                */
                class ServicePage : public AbstractModel
                {
                public:
                    ServicePage();
                    ~ServicePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of applications
                     * @return Records List of applications
                     * 
                     */
                    std::vector<TemService> GetRecords() const;

                    /**
                     * 设置List of applications
                     * @param _records List of applications
                     * 
                     */
                    void SetRecords(const std::vector<TemService>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Total number of applications
                     * @return Total Total number of applications
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of applications
                     * @param _total Total number of applications
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
                     * 获取Number of applications per page
                     * @return Size Number of applications per page
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Number of applications per page
                     * @param _size Number of applications per page
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
                     * 获取Number of current entries
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Current Number of current entries
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 设置Number of current entries
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _current Number of current entries
Note: This field may return `null`, indicating that no valid value was found.
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
                     * List of applications
                     */
                    std::vector<TemService> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Total number of applications
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of applications per page
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Total number of pages
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Number of current entries
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPAGE_H_
