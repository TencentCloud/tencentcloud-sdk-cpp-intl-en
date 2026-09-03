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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMRESULT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMRESULT_H_

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
                * Pagination result parameters
                */
                class PageByNumResult : public AbstractModel
                {
                public:
                    PageByNumResult();
                    ~PageByNumResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of data</p>
                     * @return TotalCount <p>Total number of data</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of data</p>
                     * @param _totalCount <p>Total number of data</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of pages</p>
                     * @return TotalPage <p>Total number of pages</p>
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置<p>Total number of pages</p>
                     * @param _totalPage <p>Total number of pages</p>
                     * 
                     */
                    void SetTotalPage(const int64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取<p>Current page number</p>
                     * @return CurrentPageNo <p>Current page number</p>
                     * 
                     */
                    int64_t GetCurrentPageNo() const;

                    /**
                     * 设置<p>Current page number</p>
                     * @param _currentPageNo <p>Current page number</p>
                     * 
                     */
                    void SetCurrentPageNo(const int64_t& _currentPageNo);

                    /**
                     * 判断参数 CurrentPageNo 是否已赋值
                     * @return CurrentPageNo 是否已赋值
                     * 
                     */
                    bool CurrentPageNoHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of data</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Total number of pages</p>
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * <p>Current page number</p>
                     */
                    int64_t m_currentPageNo;
                    bool m_currentPageNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNUMRESULT_H_
