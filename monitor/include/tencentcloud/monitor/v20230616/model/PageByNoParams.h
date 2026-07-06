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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Pagination request parameters
                */
                class PageByNoParams : public AbstractModel
                {
                public:
                    PageByNoParams();
                    ~PageByNoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of items per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PerPage Number of items per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置Number of items per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _perPage Number of items per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     * 
                     */
                    bool PerPageHasBeenSet() const;

                    /**
                     * 获取Page number, starting from 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageNo Page number, starting from 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 设置Page number, starting from 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageNo Page number, starting from 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageNo(const std::string& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                private:

                    /**
                     * Number of items per page.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * Page number, starting from 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNOPARAMS_H_
