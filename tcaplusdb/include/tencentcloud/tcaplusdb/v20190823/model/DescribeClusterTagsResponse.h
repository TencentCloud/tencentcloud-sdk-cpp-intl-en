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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERTAGSRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERTAGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfCluster.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeClusterTags response structure.
                */
                class DescribeClusterTagsResponse : public AbstractModel
                {
                public:
                    DescribeClusterTagsResponse();
                    ~DescribeClusterTagsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The information list of cluster tags
                     * @return Rows The information list of cluster tags
                     */
                    std::vector<TagsInfoOfCluster> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取The number of returned results
                     * @return TotalCount The number of returned results
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * The information list of cluster tags
                     */
                    std::vector<TagsInfoOfCluster> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * The number of returned results
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERTAGSRESPONSE_H_
