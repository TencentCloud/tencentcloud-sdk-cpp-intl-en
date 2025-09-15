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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CBSInstance.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeDataDisks response structure.
                */
                class DescribeNodeDataDisksResponse : public AbstractModel
                {
                public:
                    DescribeNodeDataDisksResponse();
                    ~DescribeNodeDataDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
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
                     * 获取Cloud disk list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CBSList Cloud disk list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CBSInstance> GetCBSList() const;

                    /**
                     * 判断参数 CBSList 是否已赋值
                     * @return CBSList 是否已赋值
                     * 
                     */
                    bool CBSListHasBeenSet() const;

                    /**
                     * 获取Maximum cloud disk capacity.
                     * @return MaxSize Maximum cloud disk capacity.
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cloud disk list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CBSInstance> m_cBSList;
                    bool m_cBSListHasBeenSet;

                    /**
                     * Maximum cloud disk capacity.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSRESPONSE_H_
