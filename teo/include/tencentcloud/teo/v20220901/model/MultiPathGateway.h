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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayLine.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Multi-Channel security gateway details.
                */
                class MultiPathGateway : public AbstractModel
                {
                public:
                    MultiPathGateway();
                    ~MultiPathGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the gateway ID.
                     * @return GatewayId Specifies the gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Specifies the gateway ID.
                     * @param _gatewayId Specifies the gateway ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Gateway name.
                     * @return GatewayName Gateway name.
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置Gateway name.
                     * @param _gatewayName Gateway name.
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取Gateway type. valid values:
<Li>Cloud: cloud gateway,  created and managed by Tencent cloud.</li>
<Li>Private: private gateway, deployed by cutomer.</li>
                     * @return GatewayType Gateway type. valid values:
<Li>Cloud: cloud gateway,  created and managed by Tencent cloud.</li>
<Li>Private: private gateway, deployed by cutomer.</li>
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Gateway type. valid values:
<Li>Cloud: cloud gateway,  created and managed by Tencent cloud.</li>
<Li>Private: private gateway, deployed by cutomer.</li>
                     * @param _gatewayType Gateway type. valid values:
<Li>Cloud: cloud gateway,  created and managed by Tencent cloud.</li>
<Li>Private: private gateway, deployed by cutomer.</li>
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Gateway port. value range: 1-65535 (excluding 8888).
                     * @return GatewayPort Gateway port. value range: 1-65535 (excluding 8888).
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置Gateway port. value range: 1-65535 (excluding 8888).
                     * @param _gatewayPort Gateway port. value range: 1-65535 (excluding 8888).
                     * 
                     */
                    void SetGatewayPort(const int64_t& _gatewayPort);

                    /**
                     * 判断参数 GatewayPort 是否已赋值
                     * @return GatewayPort 是否已赋值
                     * 
                     */
                    bool GatewayPortHasBeenSet() const;

                    /**
                     * 获取Gateway status. valid values:
<Li>creating: The gateway is being created. </li>
<Li>online: The gateway is online and operational.</li>
<Li>offline: The gateway is offline and unavailable.</li>
<Li>disabled: The gateway has been disabled.</li>
                     * @return Status Gateway status. valid values:
<Li>creating: The gateway is being created. </li>
<Li>online: The gateway is online and operational.</li>
<Li>offline: The gateway is offline and unavailable.</li>
<Li>disabled: The gateway has been disabled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Gateway status. valid values:
<Li>creating: The gateway is being created. </li>
<Li>online: The gateway is online and operational.</li>
<Li>offline: The gateway is offline and unavailable.</li>
<Li>disabled: The gateway has been disabled.</li>
                     * @param _status Gateway status. valid values:
<Li>creating: The gateway is being created. </li>
<Li>online: The gateway is online and operational.</li>
<Li>offline: The gateway is offline and unavailable.</li>
<Li>disabled: The gateway has been disabled.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Gateway IP, in IPv4 format.
                     * @return GatewayIP Gateway IP, in IPv4 format.
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置Gateway IP, in IPv4 format.
                     * @param _gatewayIP Gateway IP, in IPv4 format.
                     * 
                     */
                    void SetGatewayIP(const std::string& _gatewayIP);

                    /**
                     * 判断参数 GatewayIP 是否已赋值
                     * @return GatewayIP 是否已赋值
                     * 
                     */
                    bool GatewayIPHasBeenSet() const;

                    /**
                     * 获取Gateway region Id. which can be obtained from the DescribeMultiPathGatewayRegions API.
                     * @return RegionId Gateway region Id. which can be obtained from the DescribeMultiPathGatewayRegions API.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Gateway region Id. which can be obtained from the DescribeMultiPathGatewayRegions API.
                     * @param _regionId Gateway region Id. which can be obtained from the DescribeMultiPathGatewayRegions API.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Line information. The line information will be returned when querying gateway information with DescribeMultiPathGateway ande not returned when querying the gateway list with DescribeMultiPathGateways.
                     * @return Lines Line information. The line information will be returned when querying gateway information with DescribeMultiPathGateway ande not returned when querying the gateway list with DescribeMultiPathGateways.
                     * 
                     */
                    std::vector<MultiPathGatewayLine> GetLines() const;

                    /**
                     * 设置Line information. The line information will be returned when querying gateway information with DescribeMultiPathGateway ande not returned when querying the gateway list with DescribeMultiPathGateways.
                     * @param _lines Line information. The line information will be returned when querying gateway information with DescribeMultiPathGateway ande not returned when querying the gateway list with DescribeMultiPathGateways.
                     * 
                     */
                    void SetLines(const std::vector<MultiPathGatewayLine>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                private:

                    /**
                     * Specifies the gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway name.
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway type. valid values:
<Li>Cloud: cloud gateway,  created and managed by Tencent cloud.</li>
<Li>Private: private gateway, deployed by cutomer.</li>
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Gateway port. value range: 1-65535 (excluding 8888).
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                    /**
                     * Gateway status. valid values:
<Li>creating: The gateway is being created. </li>
<Li>online: The gateway is online and operational.</li>
<Li>offline: The gateway is offline and unavailable.</li>
<Li>disabled: The gateway has been disabled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Gateway IP, in IPv4 format.
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                    /**
                     * Gateway region Id. which can be obtained from the DescribeMultiPathGatewayRegions API.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Line information. The line information will be returned when querying gateway information with DescribeMultiPathGateway ande not returned when querying the gateway list with DescribeMultiPathGateways.
                     */
                    std::vector<MultiPathGatewayLine> m_lines;
                    bool m_linesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_
