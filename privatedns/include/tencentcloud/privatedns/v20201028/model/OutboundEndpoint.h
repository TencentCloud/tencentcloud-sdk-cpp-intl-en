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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/EndpointService.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Outbound endpoint.
                */
                class OutboundEndpoint : public AbstractModel
                {
                public:
                    OutboundEndpoint();
                    ~OutboundEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Outbound endpoint ID.
                     * @return EndpointId Outbound endpoint ID.
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置Outbound endpoint ID.
                     * @param _endpointId Outbound endpoint ID.
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取Outbound endpoint name.
                     * @return EndpointName Outbound endpoint name.
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置Outbound endpoint name.
                     * @param _endpointName Outbound endpoint name.
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取The region of the outbound endpoint.
                     * @return Region The region of the outbound endpoint.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of the outbound endpoint.
                     * @param _region The region of the outbound endpoint.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Outbound endpoint information.
Returned only when the forwarding architecture is V2R.
                     * @return EndpointServiceSet Outbound endpoint information.
Returned only when the forwarding architecture is V2R.
                     * 
                     */
                    std::vector<EndpointService> GetEndpointServiceSet() const;

                    /**
                     * 设置Outbound endpoint information.
Returned only when the forwarding architecture is V2R.
                     * @param _endpointServiceSet Outbound endpoint information.
Returned only when the forwarding architecture is V2R.
                     * 
                     */
                    void SetEndpointServiceSet(const std::vector<EndpointService>& _endpointServiceSet);

                    /**
                     * 判断参数 EndpointServiceSet 是否已赋值
                     * @return EndpointServiceSet 是否已赋值
                     * 
                     */
                    bool EndpointServiceSetHasBeenSet() const;

                    /**
                     * 获取Forwarding link architecture.
V2V: privatelink
V2R: jnsgw
                     * @return ForwardLinkArch Forwarding link architecture.
V2V: privatelink
V2R: jnsgw
                     * 
                     */
                    std::string GetForwardLinkArch() const;

                    /**
                     * 设置Forwarding link architecture.
V2V: privatelink
V2R: jnsgw
                     * @param _forwardLinkArch Forwarding link architecture.
V2V: privatelink
V2R: jnsgw
                     * 
                     */
                    void SetForwardLinkArch(const std::string& _forwardLinkArch);

                    /**
                     * 判断参数 ForwardLinkArch 是否已赋值
                     * @return ForwardLinkArch 是否已赋值
                     * 
                     */
                    bool ForwardLinkArchHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID.

Returned only when the forwarding architecture is V2V.

                     * @return EndPointServiceId Endpoint service ID.

Returned only when the forwarding architecture is V2V.

                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID.

Returned only when the forwarding architecture is V2V.

                     * @param _endPointServiceId Endpoint service ID.

Returned only when the forwarding architecture is V2V.

                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VIP list of the endpoint.

Returned only when the forwarding architecture is V2V.
                     * @return EndPointVipSet VIP list of the endpoint.

Returned only when the forwarding architecture is V2V.
                     * 
                     */
                    std::vector<std::string> GetEndPointVipSet() const;

                    /**
                     * 设置VIP list of the endpoint.

Returned only when the forwarding architecture is V2V.
                     * @param _endPointVipSet VIP list of the endpoint.

Returned only when the forwarding architecture is V2V.
                     * 
                     */
                    void SetEndPointVipSet(const std::vector<std::string>& _endPointVipSet);

                    /**
                     * 判断参数 EndPointVipSet 是否已赋值
                     * @return EndPointVipSet 是否已赋值
                     * 
                     */
                    bool EndPointVipSetHasBeenSet() const;

                private:

                    /**
                     * Outbound endpoint ID.
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * Outbound endpoint name.
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * The region of the outbound endpoint.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Outbound endpoint information.
Returned only when the forwarding architecture is V2R.
                     */
                    std::vector<EndpointService> m_endpointServiceSet;
                    bool m_endpointServiceSetHasBeenSet;

                    /**
                     * Forwarding link architecture.
V2V: privatelink
V2R: jnsgw
                     */
                    std::string m_forwardLinkArch;
                    bool m_forwardLinkArchHasBeenSet;

                    /**
                     * Endpoint service ID.

Returned only when the forwarding architecture is V2V.

                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VIP list of the endpoint.

Returned only when the forwarding architecture is V2V.
                     */
                    std::vector<std::string> m_endPointVipSet;
                    bool m_endPointVipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_
