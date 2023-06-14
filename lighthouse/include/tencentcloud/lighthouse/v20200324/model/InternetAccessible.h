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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * This describes the internet accessibility of the instance created by a launch configuration and declares the internet usage billing method of the instance and the maximum bandwidth
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network billing mode. Valid values:
<li>Bill by traffic package: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>Bill by bandwidth: BANDWIDTH_POSTPAID_BY_HOUR</li>
                     * @return InternetChargeType Network billing mode. Valid values:
<li>Bill by traffic package: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>Bill by bandwidth: BANDWIDTH_POSTPAID_BY_HOUR</li>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing mode. Valid values:
<li>Bill by traffic package: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>Bill by bandwidth: BANDWIDTH_POSTPAID_BY_HOUR</li>
                     * @param _internetChargeType Network billing mode. Valid values:
<li>Bill by traffic package: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>Bill by bandwidth: BANDWIDTH_POSTPAID_BY_HOUR</li>
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取Public network outbound bandwidth cap in Mbps.
                     * @return InternetMaxBandwidthOut Public network outbound bandwidth cap in Mbps.
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound bandwidth cap in Mbps.
                     * @param _internetMaxBandwidthOut Public network outbound bandwidth cap in Mbps.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Whether to assign a public IP.
                     * @return PublicIpAssigned Whether to assign a public IP.
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置Whether to assign a public IP.
                     * @param _publicIpAssigned Whether to assign a public IP.
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                private:

                    /**
                     * Network billing mode. Valid values:
<li>Bill by traffic package: TRAFFIC_POSTPAID_BY_HOUR</li>
<li>Bill by bandwidth: BANDWIDTH_POSTPAID_BY_HOUR</li>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Public network outbound bandwidth cap in Mbps.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Whether to assign a public IP.
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INTERNETACCESSIBLE_H_
