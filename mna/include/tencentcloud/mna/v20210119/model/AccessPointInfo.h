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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Access point information
                */
                class AccessPointInfo : public AbstractModel
                {
                public:
                    AccessPointInfo();
                    ~AccessPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access point operator.</p>
                     * @return Vendor <p>Access point operator.</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>Access point operator.</p>
                     * @param _vendor <p>Access point operator.</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>Endpoint address.</p>
                     * @return PublicAddr <p>Endpoint address.</p>
                     * 
                     */
                    std::string GetPublicAddr() const;

                    /**
                     * 设置<p>Endpoint address.</p>
                     * @param _publicAddr <p>Endpoint address.</p>
                     * 
                     */
                    void SetPublicAddr(const std::string& _publicAddr);

                    /**
                     * 判断参数 PublicAddr 是否已赋值
                     * @return PublicAddr 是否已赋值
                     * 
                     */
                    bool PublicAddrHasBeenSet() const;

                    /**
                     * 获取<p>Access point region.</p>
                     * @return Region <p>Access point region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Access point region.</p>
                     * @param _region <p>Access point region.</p>
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
                     * 获取<p>Access point region.</p>
                     * @return BigArea <p>Access point region.</p>
                     * 
                     */
                    std::string GetBigArea() const;

                    /**
                     * 设置<p>Access point region.</p>
                     * @param _bigArea <p>Access point region.</p>
                     * 
                     */
                    void SetBigArea(const std::string& _bigArea);

                    /**
                     * 判断参数 BigArea 是否已赋值
                     * @return BigArea 是否已赋值
                     * 
                     */
                    bool BigAreaHasBeenSet() const;

                    /**
                     * 获取<p>Whether the access point is available.</p><p>Enumeration value:</p><ul><li>true: The access point is available.</li><li>false: The access point is unavailable.</li></ul>
                     * @return Available <p>Whether the access point is available.</p><p>Enumeration value:</p><ul><li>true: The access point is available.</li><li>false: The access point is unavailable.</li></ul>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置<p>Whether the access point is available.</p><p>Enumeration value:</p><ul><li>true: The access point is available.</li><li>false: The access point is unavailable.</li></ul>
                     * @param _available <p>Whether the access point is available.</p><p>Enumeration value:</p><ul><li>true: The access point is available.</li><li>false: The access point is unavailable.</li></ul>
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return GwGroupId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetGwGroupId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _gwGroupId <p>Cluster ID.</p>
                     * 
                     */
                    void SetGwGroupId(const std::string& _gwGroupId);

                    /**
                     * 判断参数 GwGroupId 是否已赋值
                     * @return GwGroupId 是否已赋值
                     * 
                     */
                    bool GwGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>Access point operator.</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>Endpoint address.</p>
                     */
                    std::string m_publicAddr;
                    bool m_publicAddrHasBeenSet;

                    /**
                     * <p>Access point region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Access point region.</p>
                     */
                    std::string m_bigArea;
                    bool m_bigAreaHasBeenSet;

                    /**
                     * <p>Whether the access point is available.</p><p>Enumeration value:</p><ul><li>true: The access point is available.</li><li>false: The access point is unavailable.</li></ul>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_gwGroupId;
                    bool m_gwGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_
