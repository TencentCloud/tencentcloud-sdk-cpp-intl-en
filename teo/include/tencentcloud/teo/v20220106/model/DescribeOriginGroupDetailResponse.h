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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeOriginGroupDetail response structure.
                */
                class DescribeOriginGroupDetailResponse : public AbstractModel
                {
                public:
                    DescribeOriginGroupDetailResponse();
                    ~DescribeOriginGroupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Origin group ID
                     * @return OriginId Origin group ID
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Origin group name
                     * @return OriginName Origin group name
                     * 
                     */
                    std::string GetOriginName() const;

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     * 
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取Origin-pull configuration type
`area`: Origin-pull by the client IP’s region specified by `Area` in OriginRecord.
`weight`: Origin-pull by the weight specified by `Weight` in OriginRecord.
                     * @return Type Origin-pull configuration type
`area`: Origin-pull by the client IP’s region specified by `Area` in OriginRecord.
`weight`: Origin-pull by the weight specified by `Weight` in OriginRecord.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Record
                     * @return Record Record
                     * 
                     */
                    std::vector<OriginRecord> GetRecord() const;

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return ZoneName Site name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Origin type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginType Origin type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Whether the origin group uses layer-4 proxy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationProxyUsed Whether the origin group uses layer-4 proxy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetApplicationProxyUsed() const;

                    /**
                     * 判断参数 ApplicationProxyUsed 是否已赋值
                     * @return ApplicationProxyUsed 是否已赋值
                     * 
                     */
                    bool ApplicationProxyUsedHasBeenSet() const;

                    /**
                     * 获取Whether the origin group is used for load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancingUsed Whether the origin group is used for load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetLoadBalancingUsed() const;

                    /**
                     * 判断参数 LoadBalancingUsed 是否已赋值
                     * @return LoadBalancingUsed 是否已赋值
                     * 
                     */
                    bool LoadBalancingUsedHasBeenSet() const;

                    /**
                     * 获取Proxy mode of the load balancing task associated with the origin group.
`none`: Not used for load balancing.
`dns_only`: Used for DNS-only load balancing.
`proxied`: Used for proxied load balancing.
`both`: Used for both DNS-only and proxied load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancingUsedType Proxy mode of the load balancing task associated with the origin group.
`none`: Not used for load balancing.
`dns_only`: Used for DNS-only load balancing.
`proxied`: Used for proxied load balancing.
`both`: Used for both DNS-only and proxied load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancingUsedType() const;

                    /**
                     * 判断参数 LoadBalancingUsedType 是否已赋值
                     * @return LoadBalancingUsedType 是否已赋值
                     * 
                     */
                    bool LoadBalancingUsedTypeHasBeenSet() const;

                private:

                    /**
                     * Origin group ID
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Origin group name
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * Origin-pull configuration type
`area`: Origin-pull by the client IP’s region specified by `Area` in OriginRecord.
`weight`: Origin-pull by the weight specified by `Weight` in OriginRecord.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Record
                     */
                    std::vector<OriginRecord> m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Origin type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Whether the origin group uses layer-4 proxy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_applicationProxyUsed;
                    bool m_applicationProxyUsedHasBeenSet;

                    /**
                     * Whether the origin group is used for load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_loadBalancingUsed;
                    bool m_loadBalancingUsedHasBeenSet;

                    /**
                     * Proxy mode of the load balancing task associated with the origin group.
`none`: Not used for load balancing.
`dns_only`: Used for DNS-only load balancing.
`proxied`: Used for proxied load balancing.
`both`: Used for both DNS-only and proxied load balancing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancingUsedType;
                    bool m_loadBalancingUsedTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPDETAILRESPONSE_H_
