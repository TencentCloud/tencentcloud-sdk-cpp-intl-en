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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_

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
                class PageByNoResult : public AbstractModel
                {
                public:
                    PageByNoResult();
                    ~PageByNoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total data.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPage Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPage Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Current page number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurrentPageNo Current page number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentPageNo() const;

                    /**
                     * 设置Current page number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currentPageNo Current page number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentPageNo(const int64_t& _currentPageNo);

                    /**
                     * 判断参数 CurrentPageNo 是否已赋值
                     * @return CurrentPageNo 是否已赋值
                     * 
                     */
                    bool CurrentPageNoHasBeenSet() const;

                    /**
                     * 获取[Deprecated] Whether it has reached the end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEnd [Deprecated] Whether it has reached the end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置[Deprecated] Whether it has reached the end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEnd [Deprecated] Whether it has reached the end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * @deprecated
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取Whether it has traversed to the end.
                     * @return End Whether it has traversed to the end.
                     * 
                     */
                    bool GetEnd() const;

                    /**
                     * 设置Whether it has traversed to the end.
                     * @param _end Whether it has traversed to the end.
                     * 
                     */
                    void SetEnd(const bool& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * Total data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Current page number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentPageNo;
                    bool m_currentPageNoHasBeenSet;

                    /**
                     * [Deprecated] Whether it has reached the end.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * Whether it has traversed to the end.
                     */
                    bool m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGEBYNORESULT_H_
