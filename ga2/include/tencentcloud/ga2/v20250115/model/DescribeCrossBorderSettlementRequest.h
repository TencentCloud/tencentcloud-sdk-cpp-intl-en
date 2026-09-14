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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeCrossBorderSettlement request structure.
                */
                class DescribeCrossBorderSettlementRequest : public AbstractModel
                {
                public:
                    DescribeCrossBorderSettlementRequest();
                    ~DescribeCrossBorderSettlementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取Acceleration region.
                     * @return AccelerateRegion Acceleration region.
                     * 
                     */
                    std::string GetAccelerateRegion() const;

                    /**
                     * 设置Acceleration region.
                     * @param _accelerateRegion Acceleration region.
                     * 
                     */
                    void SetAccelerateRegion(const std::string& _accelerateRegion);

                    /**
                     * 判断参数 AccelerateRegion 是否已赋值
                     * @return AccelerateRegion 是否已赋值
                     * 
                     */
                    bool AccelerateRegionHasBeenSet() const;

                    /**
                     * 获取Region of the terminal node group.
                     * @return EndpointGroupRegion Region of the terminal node group.
                     * 
                     */
                    std::string GetEndpointGroupRegion() const;

                    /**
                     * 设置Region of the terminal node group.
                     * @param _endpointGroupRegion Region of the terminal node group.
                     * 
                     */
                    void SetEndpointGroupRegion(const std::string& _endpointGroupRegion);

                    /**
                     * 判断参数 EndpointGroupRegion 是否已赋值
                     * @return EndpointGroupRegion 是否已赋值
                     * 
                     */
                    bool EndpointGroupRegionHasBeenSet() const;

                    /**
                     * 获取Bill year and month time.
                     * @return SettlementMonth Bill year and month time.
                     * 
                     */
                    uint64_t GetSettlementMonth() const;

                    /**
                     * 设置Bill year and month time.
                     * @param _settlementMonth Bill year and month time.
                     * 
                     */
                    void SetSettlementMonth(const uint64_t& _settlementMonth);

                    /**
                     * 判断参数 SettlementMonth 是否已赋值
                     * @return SettlementMonth 是否已赋值
                     * 
                     */
                    bool SettlementMonthHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Acceleration region.
                     */
                    std::string m_accelerateRegion;
                    bool m_accelerateRegionHasBeenSet;

                    /**
                     * Region of the terminal node group.
                     */
                    std::string m_endpointGroupRegion;
                    bool m_endpointGroupRegionHasBeenSet;

                    /**
                     * Bill year and month time.
                     */
                    uint64_t m_settlementMonth;
                    bool m_settlementMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_
