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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ExposeTrendItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeExposureTrend response structure.
                */
                class DescribeExposureTrendResponse : public AbstractModel
                {
                public:
                    DescribeExposureTrendResponse();
                    ~DescribeExposureTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Expose periodic trend count statistics.
                     * @return ExposeTrendList Expose periodic trend count statistics.
                     * 
                     */
                    std::vector<ExposeTrendItem> GetExposeTrendList() const;

                    /**
                     * 判断参数 ExposeTrendList 是否已赋值
                     * @return ExposeTrendList 是否已赋值
                     * 
                     */
                    bool ExposeTrendListHasBeenSet() const;

                    /**
                     * 获取Statistics of newly-added exposure cycles
                     * @return ExposeIncrement Statistics of newly-added exposure cycles
                     * 
                     */
                    uint64_t GetExposeIncrement() const;

                    /**
                     * 判断参数 ExposeIncrement 是否已赋值
                     * @return ExposeIncrement 是否已赋值
                     * 
                     */
                    bool ExposeIncrementHasBeenSet() const;

                    /**
                     * 获取Number of fully open instances in the last 24 hours.
                     * @return OpenCount Number of fully open instances in the last 24 hours.
                     * 
                     */
                    uint64_t GetOpenCount() const;

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取Number of restricted accesses in the last 24 hours
                     * @return AclCount Number of restricted accesses in the last 24 hours
                     * 
                     */
                    uint64_t GetAclCount() const;

                    /**
                     * 判断参数 AclCount 是否已赋值
                     * @return AclCount 是否已赋值
                     * 
                     */
                    bool AclCountHasBeenSet() const;

                    /**
                     * 获取Number of failures to access in the last 1 day (24h)
                     * @return CloseCount Number of failures to access in the last 1 day (24h)
                     * 
                     */
                    uint64_t GetCloseCount() const;

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                private:

                    /**
                     * Expose periodic trend count statistics.
                     */
                    std::vector<ExposeTrendItem> m_exposeTrendList;
                    bool m_exposeTrendListHasBeenSet;

                    /**
                     * Statistics of newly-added exposure cycles
                     */
                    uint64_t m_exposeIncrement;
                    bool m_exposeIncrementHasBeenSet;

                    /**
                     * Number of fully open instances in the last 24 hours.
                     */
                    uint64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * Number of restricted accesses in the last 24 hours
                     */
                    uint64_t m_aclCount;
                    bool m_aclCountHasBeenSet;

                    /**
                     * Number of failures to access in the last 1 day (24h)
                     */
                    uint64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURETRENDRESPONSE_H_
