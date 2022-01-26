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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPRODUCERSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPRODUCERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Producer.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeProducers response structure.
                */
                class DescribeProducersResponse : public AbstractModel
                {
                public:
                    DescribeProducersResponse();
                    ~DescribeProducersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array set of producers.
                     * @return ProducerSets Array set of producers.
                     */
                    std::vector<Producer> GetProducerSets() const;

                    /**
                     * 判断参数 ProducerSets 是否已赋值
                     * @return ProducerSets 是否已赋值
                     */
                    bool ProducerSetsHasBeenSet() const;

                    /**
                     * 获取Total number of records.
                     * @return TotalCount Total number of records.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Array set of producers.
                     */
                    std::vector<Producer> m_producerSets;
                    bool m_producerSetsHasBeenSet;

                    /**
                     * Total number of records.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEPRODUCERSRESPONSE_H_
