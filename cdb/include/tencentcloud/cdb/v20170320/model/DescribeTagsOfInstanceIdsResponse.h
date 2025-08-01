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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/TagsInfoOfInstance.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeTagsOfInstanceIds response structure.
                */
                class DescribeTagsOfInstanceIdsResponse : public AbstractModel
                {
                public:
                    DescribeTagsOfInstanceIdsResponse();
                    ~DescribeTagsOfInstanceIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Instance tag information.
                     * @return Rows Instance tag information.
                     * 
                     */
                    std::vector<TagsInfoOfInstance> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                private:

                    /**
                     * Pagination offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Instance tag information.
                     */
                    std::vector<TagsInfoOfInstance> m_rows;
                    bool m_rowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSRESPONSE_H_
