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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Resource.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * List of AZs
                */
                class ZoneResource : public AbstractModel
                {
                public:
                    ZoneResource();
                    ~ZoneResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary AZ, such as "ap-guangzhou-1".
                     * @return MasterZone Primary AZ, such as "ap-guangzhou-1".
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary AZ, such as "ap-guangzhou-1".
                     * @param _masterZone Primary AZ, such as "ap-guangzhou-1".
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取List of resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceSet List of resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Resource> GetResourceSet() const;

                    /**
                     * 设置List of resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceSet List of resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceSet(const std::vector<Resource>& _resourceSet);

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取Secondary AZ, such as "ap-guangzhou-2". 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveZone Secondary AZ, such as "ap-guangzhou-2". 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Secondary AZ, such as "ap-guangzhou-2". 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaveZone Secondary AZ, such as "ap-guangzhou-2". 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取IP version. Values: `IPv4`, `IPv6`, and `IPv6_Nat`.
                     * @return IPVersion IP version. Values: `IPv4`, `IPv6`, and `IPv6_Nat`.
                     * 
                     */
                    std::string GetIPVersion() const;

                    /**
                     * 设置IP version. Values: `IPv4`, `IPv6`, and `IPv6_Nat`.
                     * @param _iPVersion IP version. Values: `IPv4`, `IPv6`, and `IPv6_Nat`.
                     * 
                     */
                    void SetIPVersion(const std::string& _iPVersion);

                    /**
                     * 判断参数 IPVersion 是否已赋值
                     * @return IPVersion 是否已赋值
                     * 
                     */
                    bool IPVersionHasBeenSet() const;

                    /**
                     * 获取Region of the AZ, such as `ap-guangzhou`.
                     * @return ZoneRegion Region of the AZ, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetZoneRegion() const;

                    /**
                     * 设置Region of the AZ, such as `ap-guangzhou`.
                     * @param _zoneRegion Region of the AZ, such as `ap-guangzhou`.
                     * 
                     */
                    void SetZoneRegion(const std::string& _zoneRegion);

                    /**
                     * 判断参数 ZoneRegion 是否已赋值
                     * @return ZoneRegion 是否已赋值
                     * 
                     */
                    bool ZoneRegionHasBeenSet() const;

                    /**
                     * 获取Whether the AZ is a `LocalZone`. Values: `true`, `false`.
                     * @return LocalZone Whether the AZ is a `LocalZone`. Values: `true`, `false`.
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置Whether the AZ is a `LocalZone`. Values: `true`, `false`.
                     * @param _localZone Whether the AZ is a `LocalZone`. Values: `true`, `false`.
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取Type of resources in the zone. Values: `SHARED`, `EXCLUSIVE`
                     * @return ZoneResourceType Type of resources in the zone. Values: `SHARED`, `EXCLUSIVE`
                     * 
                     */
                    std::string GetZoneResourceType() const;

                    /**
                     * 设置Type of resources in the zone. Values: `SHARED`, `EXCLUSIVE`
                     * @param _zoneResourceType Type of resources in the zone. Values: `SHARED`, `EXCLUSIVE`
                     * 
                     */
                    void SetZoneResourceType(const std::string& _zoneResourceType);

                    /**
                     * 判断参数 ZoneResourceType 是否已赋值
                     * @return ZoneResourceType 是否已赋值
                     * 
                     */
                    bool ZoneResourceTypeHasBeenSet() const;

                    /**
                     * 获取Whether the AZ is an edge zone. Values: `true`, `false`.
                     * @return EdgeZone Whether the AZ is an edge zone. Values: `true`, `false`.
                     * 
                     */
                    bool GetEdgeZone() const;

                    /**
                     * 设置Whether the AZ is an edge zone. Values: `true`, `false`.
                     * @param _edgeZone Whether the AZ is an edge zone. Values: `true`, `false`.
                     * 
                     */
                    void SetEdgeZone(const bool& _edgeZone);

                    /**
                     * 判断参数 EdgeZone 是否已赋值
                     * @return EdgeZone 是否已赋值
                     * 
                     */
                    bool EdgeZoneHasBeenSet() const;

                private:

                    /**
                     * Primary AZ, such as "ap-guangzhou-1".
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * List of resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Resource> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * Secondary AZ, such as "ap-guangzhou-2". 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * IP version. Values: `IPv4`, `IPv6`, and `IPv6_Nat`.
                     */
                    std::string m_iPVersion;
                    bool m_iPVersionHasBeenSet;

                    /**
                     * Region of the AZ, such as `ap-guangzhou`.
                     */
                    std::string m_zoneRegion;
                    bool m_zoneRegionHasBeenSet;

                    /**
                     * Whether the AZ is a `LocalZone`. Values: `true`, `false`.
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * Type of resources in the zone. Values: `SHARED`, `EXCLUSIVE`
                     */
                    std::string m_zoneResourceType;
                    bool m_zoneResourceTypeHasBeenSet;

                    /**
                     * Whether the AZ is an edge zone. Values: `true`, `false`.
                     */
                    bool m_edgeZone;
                    bool m_edgeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_
