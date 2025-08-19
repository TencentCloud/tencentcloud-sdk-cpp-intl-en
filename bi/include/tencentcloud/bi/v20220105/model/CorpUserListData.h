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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CORPUSERLISTDATA_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CORPUSERLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserIdAndUserName.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Enterprise user list
                */
                class CorpUserListData : public AbstractModel
                {
                public:
                    CorpUserListData();
                    ~CorpUserListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserIdAndUserName> GetList() const;

                    /**
                     * 设置List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<UserIdAndUserName>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return Total Total number.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number.
                     * @param _total Total number.
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
                     * 获取Number of pages.
                     * @return TotalPages Number of pages.
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 设置Number of pages.
                     * @param _totalPages Number of pages.
                     * 
                     */
                    void SetTotalPages(const int64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                private:

                    /**
                     * List.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserIdAndUserName> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of pages.
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CORPUSERLISTDATA_H_
