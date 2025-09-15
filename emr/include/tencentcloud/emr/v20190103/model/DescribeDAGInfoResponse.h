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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFORESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DAGInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeDAGInfo response structure.
                */
                class DescribeDAGInfoResponse : public AbstractModel
                {
                public:
                    DescribeDAGInfoResponse();
                    ~DescribeDAGInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number, which is used for pagination query.
                     * @return TotalCount Total number, which is used for pagination query.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取StarRocks information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DAGInfoList StarRocks information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DAGInfo> GetDAGInfoList() const;

                    /**
                     * 判断参数 DAGInfoList 是否已赋值
                     * @return DAGInfoList 是否已赋值
                     * 
                     */
                    bool DAGInfoListHasBeenSet() const;

                private:

                    /**
                     * Total number, which is used for pagination query.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * StarRocks information list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DAGInfo> m_dAGInfoList;
                    bool m_dAGInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFORESPONSE_H_
