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
                * Multi-channel security gateway details
                */
                class MultiPathGateway : public AbstractModel
                {
                public:
                    MultiPathGateway();
                    ~MultiPathGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway ID.
                     * @return GatewayId Gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID.
                     * @param _gatewayId Gateway ID.
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
                     * 获取Gateway type. Valid values:
<li> cloud: Cloud Gateway, a gateway created and managed by Tencent Cloud.</li>
<li> private: private gateway, a Private Gateway deployed by the user.</li>
                     * @return GatewayType Gateway type. Valid values:
<li> cloud: Cloud Gateway, a gateway created and managed by Tencent Cloud.</li>
<li> private: private gateway, a Private Gateway deployed by the user.</li>
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Gateway type. Valid values:
<li> cloud: Cloud Gateway, a gateway created and managed by Tencent Cloud.</li>
<li> private: private gateway, a Private Gateway deployed by the user.</li>
                     * @param _gatewayType Gateway type. Valid values:
<li> cloud: Cloud Gateway, a gateway created and managed by Tencent Cloud.</li>
<li> private: private gateway, a Private Gateway deployed by the user.</li>
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
                     * 获取Gateway port. Range: 1–65535 (excluding 8888).
                     * @return GatewayPort Gateway port. Range: 1–65535 (excluding 8888).
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置Gateway port. Range: 1–65535 (excluding 8888).
                     * @param _gatewayPort Gateway port. Range: 1–65535 (excluding 8888).
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
                     * 获取Gateway status. Valid values:
<li> creating : Creating;</li>
<li> online : Online;</li>
<li> offline : Offline;</li>
<li> disable : disabled.</li>
                     * @return Status Gateway status. Valid values:
<li> creating : Creating;</li>
<li> online : Online;</li>
<li> offline : Offline;</li>
<li> disable : disabled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Gateway status. Valid values:
<li> creating : Creating;</li>
<li> online : Online;</li>
<li> offline : Offline;</li>
<li> disable : disabled.</li>
                     * @param _status Gateway status. Valid values:
<li> creating : Creating;</li>
<li> online : Online;</li>
<li> offline : Offline;</li>
<li> disable : disabled.</li>
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
                     * 获取Gateway IP in IPv4 format.
                     * @return GatewayIP Gateway IP in IPv4 format.
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置Gateway IP in IPv4 format.
                     * @param _gatewayIP Gateway IP in IPv4 format.
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
                     * 获取Gateway region ID. You can obtain the RegionId list through the DescribeMultiPathGatewayRegions API.
                     * @return RegionId Gateway region ID. You can obtain the RegionId list through the DescribeMultiPathGatewayRegions API.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Gateway region ID. You can obtain the RegionId list through the DescribeMultiPathGatewayRegions API.
                     * @param _regionId Gateway region ID. You can obtain the RegionId list through the DescribeMultiPathGatewayRegions API.
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
                     * 获取Line information. It will be returned when querying gateway information details via DescribeMultiPathGateway, but not when querying the gateway list via DescribeMultiPathGateways.
                     * @return Lines Line information. It will be returned when querying gateway information details via DescribeMultiPathGateway, but not when querying the gateway list via DescribeMultiPathGateways.
                     * 
                     */
                    std::vector<MultiPathGatewayLine> GetLines() const;

                    /**
                     * 设置Line information. It will be returned when querying gateway information details via DescribeMultiPathGateway, but not when querying the gateway list via DescribeMultiPathGateways.
                     * @param _lines Line information. It will be returned when querying gateway information details via DescribeMultiPathGateway, but not when querying the gateway list via DescribeMultiPathGateways.
                     * 
                     */
                    void SetLines(const std::vector<MultiPathGatewayLine>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取Whether the origin-pull IP list of the gateway has changed and needs confirmation. Valid values: <li>true: The origin-pull IP list has changed and needs confirmation;</li><li>false: The origin-pull IP list has not changed and does not need confirmation.</li>
                     * @return NeedConfirm Whether the origin-pull IP list of the gateway has changed and needs confirmation. Valid values: <li>true: The origin-pull IP list has changed and needs confirmation;</li><li>false: The origin-pull IP list has not changed and does not need confirmation.</li>
                     * 
                     */
                    std::string GetNeedConfirm() const;

                    /**
                     * 设置Whether the origin-pull IP list of the gateway has changed and needs confirmation. Valid values: <li>true: The origin-pull IP list has changed and needs confirmation;</li><li>false: The origin-pull IP list has not changed and does not need confirmation.</li>
                     * @param _needConfirm Whether the origin-pull IP list of the gateway has changed and needs confirmation. Valid values: <li>true: The origin-pull IP list has changed and needs confirmation;</li><li>false: The origin-pull IP list has not changed and does not need confirmation.</li>
                     * 
                     */
                    void SetNeedConfirm(const std::string& _needConfirm);

                    /**
                     * 判断参数 NeedConfirm 是否已赋值
                     * @return NeedConfirm 是否已赋值
                     * 
                     */
                    bool NeedConfirmHasBeenSet() const;

                private:

                    /**
                     * Gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway name.
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway type. Valid values:
<li> cloud: Cloud Gateway, a gateway created and managed by Tencent Cloud.</li>
<li> private: private gateway, a Private Gateway deployed by the user.</li>
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Gateway port. Range: 1–65535 (excluding 8888).
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                    /**
                     * Gateway status. Valid values:
<li> creating : Creating;</li>
<li> online : Online;</li>
<li> offline : Offline;</li>
<li> disable : disabled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Gateway IP in IPv4 format.
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                    /**
                     * Gateway region ID. You can obtain the RegionId list through the DescribeMultiPathGatewayRegions API.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Line information. It will be returned when querying gateway information details via DescribeMultiPathGateway, but not when querying the gateway list via DescribeMultiPathGateways.
                     */
                    std::vector<MultiPathGatewayLine> m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * Whether the origin-pull IP list of the gateway has changed and needs confirmation. Valid values: <li>true: The origin-pull IP list has changed and needs confirmation;</li><li>false: The origin-pull IP list has not changed and does not need confirmation.</li>
                     */
                    std::string m_needConfirm;
                    bool m_needConfirmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_
