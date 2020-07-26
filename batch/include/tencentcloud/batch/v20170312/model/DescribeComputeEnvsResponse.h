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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/ComputeEnvView.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnvs response structure.
                */
                class DescribeComputeEnvsResponse : public AbstractModel
                {
                public:
                    DescribeComputeEnvsResponse();
                    ~DescribeComputeEnvsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取List of compute environments
                     * @return ComputeEnvSet List of compute environments
                     */
                    std::vector<ComputeEnvView> GetComputeEnvSet() const;

                    /**
                     * 判断参数 ComputeEnvSet 是否已赋值
                     * @return ComputeEnvSet 是否已赋值
                     */
                    bool ComputeEnvSetHasBeenSet() const;

                    /**
                     * 获取Number of compute environments
                     * @return TotalCount Number of compute environments
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of compute environments
                     */
                    std::vector<ComputeEnvView> m_computeEnvSet;
                    bool m_computeEnvSetHasBeenSet;

                    /**
                     * Number of compute environments
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVSRESPONSE_H_
