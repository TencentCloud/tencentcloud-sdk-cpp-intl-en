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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETARESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ColumnMeta.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeColumnsMeta response structure.
                */
                class DescribeColumnsMetaResponse : public AbstractModel
                {
                public:
                    DescribeColumnsMetaResponse();
                    ~DescribeColumnsMetaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination return
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnMetaSet Pagination return
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ColumnMeta> GetColumnMetaSet() const;

                    /**
                     * 判断参数 ColumnMetaSet 是否已赋值
                     * @return ColumnMetaSet 是否已赋值
                     * 
                     */
                    bool ColumnMetaSetHasBeenSet() const;

                    /**
                     * 获取Number of records
                     * @return TotalCount Number of records
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Pagination return
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ColumnMeta> m_columnMetaSet;
                    bool m_columnMetaSetHasBeenSet;

                    /**
                     * Number of records
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNSMETARESPONSE_H_
