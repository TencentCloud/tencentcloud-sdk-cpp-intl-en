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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGEBILLBANDWIDTH_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGEBILLBANDWIDTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Current billable usage of a pay-as-you-go bandwidth package
                */
                class BandwidthPackageBillBandwidth : public AbstractModel
                {
                public:
                    BandwidthPackageBillBandwidth();
                    ~BandwidthPackageBillBandwidth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current billable usage, in Mbps
                     * @return BandwidthUsage Current billable usage, in Mbps
                     * 
                     */
                    double GetBandwidthUsage() const;

                    /**
                     * 设置Current billable usage, in Mbps
                     * @param _bandwidthUsage Current billable usage, in Mbps
                     * 
                     */
                    void SetBandwidthUsage(const double& _bandwidthUsage);

                    /**
                     * 判断参数 BandwidthUsage 是否已赋值
                     * @return BandwidthUsage 是否已赋值
                     * 
                     */
                    bool BandwidthUsageHasBeenSet() const;

                private:

                    /**
                     * Current billable usage, in Mbps
                     */
                    double m_bandwidthUsage;
                    bool m_bandwidthUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGEBILLBANDWIDTH_H_
