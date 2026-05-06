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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayRateLimitDetail.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayRouteRateLimit request structure.
                */
                class ModifyCloudNativeAPIGatewayRouteRateLimitRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayRouteRateLimitRequest();
                    ~ModifyCloudNativeAPIGatewayRouteRateLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取gateway ID
                     * @return GatewayId gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置gateway ID
                     * @param _gatewayId gateway ID
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
                     * 获取Route id or routing name.
"Unnamed" is not supported.
                     * @return Id Route id or routing name.
"Unnamed" is not supported.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Route id or routing name.
"Unnamed" is not supported.
                     * @param _id Route id or routing name.
"Unnamed" is not supported.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Configure stream
                     * @return LimitDetail Configure stream
                     * 
                     */
                    CloudNativeAPIGatewayRateLimitDetail GetLimitDetail() const;

                    /**
                     * 设置Configure stream
                     * @param _limitDetail Configure stream
                     * 
                     */
                    void SetLimitDetail(const CloudNativeAPIGatewayRateLimitDetail& _limitDetail);

                    /**
                     * 判断参数 LimitDetail 是否已赋值
                     * @return LimitDetail 是否已赋值
                     * 
                     */
                    bool LimitDetailHasBeenSet() const;

                private:

                    /**
                     * gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Route id or routing name.
"Unnamed" is not supported.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Configure stream
                     */
                    CloudNativeAPIGatewayRateLimitDetail m_limitDetail;
                    bool m_limitDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTERATELIMITREQUEST_H_
