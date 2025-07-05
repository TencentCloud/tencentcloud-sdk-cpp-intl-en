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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeEnvironmentAttributes response structure.
                */
                class DescribeEnvironmentAttributesResponse : public AbstractModel
                {
                public:
                    DescribeEnvironmentAttributesResponse();
                    ~DescribeEnvironmentAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days).
                     * @return MsgTTL TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days).
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取Consumption rate limit in bytes/second. 0: unlimited.
                     * @return RateInByte Consumption rate limit in bytes/second. 0: unlimited.
                     * 
                     */
                    uint64_t GetRateInByte() const;

                    /**
                     * 判断参数 RateInByte 是否已赋值
                     * @return RateInByte 是否已赋值
                     * 
                     */
                    bool RateInByteHasBeenSet() const;

                    /**
                     * 获取Consumption rate limit in messages/second. 0: unlimited.
                     * @return RateInSize Consumption rate limit in messages/second. 0: unlimited.
                     * 
                     */
                    uint64_t GetRateInSize() const;

                    /**
                     * 判断参数 RateInSize 是否已赋值
                     * @return RateInSize 是否已赋值
                     * 
                     */
                    bool RateInSizeHasBeenSet() const;

                    /**
                     * 获取Retention policy for consumed messages in hours. 0: deleted immediately after consumption.
                     * @return RetentionHours Retention policy for consumed messages in hours. 0: deleted immediately after consumption.
                     * 
                     */
                    uint64_t GetRetentionHours() const;

                    /**
                     * 判断参数 RetentionHours 是否已赋值
                     * @return RetentionHours 是否已赋值
                     * 
                     */
                    bool RetentionHoursHasBeenSet() const;

                    /**
                     * 获取Retention policy for consumed messages in GB. 0: deleted immediately after consumption.
                     * @return RetentionSize Retention policy for consumed messages in GB. 0: deleted immediately after consumption.
                     * 
                     */
                    uint64_t GetRetentionSize() const;

                    /**
                     * 判断参数 RetentionSize 是否已赋值
                     * @return RetentionSize 是否已赋值
                     * 
                     */
                    bool RetentionSizeHasBeenSet() const;

                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Number of replicas.
                     * @return Replicas Number of replicas.
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days).
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * Consumption rate limit in bytes/second. 0: unlimited.
                     */
                    uint64_t m_rateInByte;
                    bool m_rateInByteHasBeenSet;

                    /**
                     * Consumption rate limit in messages/second. 0: unlimited.
                     */
                    uint64_t m_rateInSize;
                    bool m_rateInSizeHasBeenSet;

                    /**
                     * Retention policy for consumed messages in hours. 0: deleted immediately after consumption.
                     */
                    uint64_t m_retentionHours;
                    bool m_retentionHoursHasBeenSet;

                    /**
                     * Retention policy for consumed messages in GB. 0: deleted immediately after consumption.
                     */
                    uint64_t m_retentionSize;
                    bool m_retentionSizeHasBeenSet;

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Number of replicas.
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_
