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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLogStorageStatistic response structure.
                */
                class DescribeLogStorageStatisticResponse : public AbstractModel
                {
                public:
                    DescribeLogStorageStatisticResponse();
                    ~DescribeLogStorageStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total capacity (unit: GB)
                     * @return TotalSize Total capacity (unit: GB)
                     * 
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Used capacity (unit: GB)
                     * @return UsedSize Used capacity (unit: GB)
                     * 
                     */
                    uint64_t GetUsedSize() const;

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                private:

                    /**
                     * Total capacity (unit: GB)
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * Used capacity (unit: GB)
                     */
                    uint64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_
