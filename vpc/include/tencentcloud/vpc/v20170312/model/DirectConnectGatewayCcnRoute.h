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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_

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
                * The object of the CCN route (IDC IP range) of the Direct Connect gateway
                */
                class DirectConnectGatewayCcnRoute : public AbstractModel
                {
                public:
                    DirectConnectGatewayCcnRoute();
                    ~DirectConnectGatewayCcnRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route ID.
                     * @return RouteId Route ID.
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置Route ID.
                     * @param RouteId Route ID.
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取IDC IP range.
                     * @return DestinationCidrBlock IDC IP range.
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置IDC IP range.
                     * @param DestinationCidrBlock IDC IP range.
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取The `AS-Path` attribute of `BGP`.
                     * @return ASPath The `AS-Path` attribute of `BGP`.
                     */
                    std::vector<std::string> GetASPath() const;

                    /**
                     * 设置The `AS-Path` attribute of `BGP`.
                     * @param ASPath The `AS-Path` attribute of `BGP`.
                     */
                    void SetASPath(const std::vector<std::string>& _aSPath);

                    /**
                     * 判断参数 ASPath 是否已赋值
                     * @return ASPath 是否已赋值
                     */
                    bool ASPathHasBeenSet() const;

                private:

                    /**
                     * Route ID.
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * IDC IP range.
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * The `AS-Path` attribute of `BGP`.
                     */
                    std::vector<std::string> m_aSPath;
                    bool m_aSPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_
