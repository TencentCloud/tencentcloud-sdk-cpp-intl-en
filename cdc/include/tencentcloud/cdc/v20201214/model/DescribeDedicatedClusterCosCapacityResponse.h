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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERCOSCAPACITYRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERCOSCAPACITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/CosCapacity.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterCosCapacity response structure.
                */
                class DescribeDedicatedClusterCosCapacityResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterCosCapacityResponse();
                    ~DescribeDedicatedClusterCosCapacityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster COS capacity, in GB
                     * @return CosCapacity Cluster COS capacity, in GB
                     * 
                     */
                    CosCapacity GetCosCapacity() const;

                    /**
                     * 判断参数 CosCapacity 是否已赋值
                     * @return CosCapacity 是否已赋值
                     * 
                     */
                    bool CosCapacityHasBeenSet() const;

                private:

                    /**
                     * Cluster COS capacity, in GB
                     */
                    CosCapacity m_cosCapacity;
                    bool m_cosCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERCOSCAPACITYRESPONSE_H_
