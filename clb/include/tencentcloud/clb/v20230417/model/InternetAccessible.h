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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * Network billing mode, maximum outbound bandwidth
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis;
                     * @return InternetChargeType TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis;
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis;
                     * @param _internetChargeType TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis;
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
                     * 获取Maximum outbound bandwidth in Mbps. It applies only to shared, LCU-supported, and exclusive CLB instances of the public network type and LCU-supported CLB instances of the private network type.
-For shared type and exclusive CLB instances with public network attributes, the maximum outbound bandwidth ranges from 1Mbps to 2048Mbps.
-For LCU-supported CLB instances with public network attributes and private network attributes, the maximum outbound bandwidth ranges from 1Mbps to 61440Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * @return InternetMaxBandwidthOut Maximum outbound bandwidth in Mbps. It applies only to shared, LCU-supported, and exclusive CLB instances of the public network type and LCU-supported CLB instances of the private network type.
-For shared type and exclusive CLB instances with public network attributes, the maximum outbound bandwidth ranges from 1Mbps to 2048Mbps.
-For LCU-supported CLB instances with public network attributes and private network attributes, the maximum outbound bandwidth ranges from 1Mbps to 61440Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum outbound bandwidth in Mbps. It applies only to shared, LCU-supported, and exclusive CLB instances of the public network type and LCU-supported CLB instances of the private network type.
-For shared type and exclusive CLB instances with public network attributes, the maximum outbound bandwidth ranges from 1Mbps to 2048Mbps.
-For LCU-supported CLB instances with public network attributes and private network attributes, the maximum outbound bandwidth ranges from 1Mbps to 61440Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * @param _internetMaxBandwidthOut Maximum outbound bandwidth in Mbps. It applies only to shared, LCU-supported, and exclusive CLB instances of the public network type and LCU-supported CLB instances of the private network type.
-For shared type and exclusive CLB instances with public network attributes, the maximum outbound bandwidth ranges from 1Mbps to 2048Mbps.
-For LCU-supported CLB instances with public network attributes and private network attributes, the maximum outbound bandwidth ranges from 1Mbps to 61440Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
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
                     * 获取Bandwidth package type, such as SINGLEISP (single ISP) and BGP (multi ISP).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthPackageSubType Bandwidth package type, such as SINGLEISP (single ISP) and BGP (multi ISP).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBandwidthPackageSubType() const;

                    /**
                     * 设置Bandwidth package type, such as SINGLEISP (single ISP) and BGP (multi ISP).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthPackageSubType Bandwidth package type, such as SINGLEISP (single ISP) and BGP (multi ISP).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthPackageSubType(const std::string& _bandwidthPackageSubType);

                    /**
                     * 判断参数 BandwidthPackageSubType 是否已赋值
                     * @return BandwidthPackageSubType 是否已赋值
                     * 
                     */
                    bool BandwidthPackageSubTypeHasBeenSet() const;

                private:

                    /**
                     * TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic on an hourly basis;
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Maximum outbound bandwidth in Mbps. It applies only to shared, LCU-supported, and exclusive CLB instances of the public network type and LCU-supported CLB instances of the private network type.
-For shared type and exclusive CLB instances with public network attributes, the maximum outbound bandwidth ranges from 1Mbps to 2048Mbps.
-For LCU-supported CLB instances with public network attributes and private network attributes, the maximum outbound bandwidth ranges from 1Mbps to 61440Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Bandwidth package type, such as SINGLEISP (single ISP) and BGP (multi ISP).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bandwidthPackageSubType;
                    bool m_bandwidthPackageSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_INTERNETACCESSIBLE_H_
