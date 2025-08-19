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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFODATA_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/DatasourceInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Data source details list
                */
                class DatasourceInfoData : public AbstractModel
                {
                public:
                    DatasourceInfoData();
                    ~DatasourceInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List Data source details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DatasourceInfo> GetList() const;

                    /**
                     * 设置Data source details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list Data source details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<DatasourceInfo>& _list);

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
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total Total number.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPages Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 设置Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalPages Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Data source details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DatasourceInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DATASOURCEINFODATA_H_
