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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECTLISTDATA_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECTLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/Project.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Project list data
                */
                class ProjectListData : public AbstractModel
                {
                public:
                    ProjectListData();
                    ~ProjectListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List Array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Project> GetList() const;

                    /**
                     * 设置Array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list Array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<Project>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPages 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalPages() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPages 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalPages(const uint64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                private:

                    /**
                     * Array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Project> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECTLISTDATA_H_
