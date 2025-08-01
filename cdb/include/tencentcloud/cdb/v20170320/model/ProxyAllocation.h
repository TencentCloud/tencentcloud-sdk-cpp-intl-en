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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYALLOCATION_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYALLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyInst.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Weight allocation for a proxy node
                */
                class ProxyAllocation : public AbstractModel
                {
                public:
                    ProxyAllocation();
                    ~ProxyAllocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Proxy node region
                     * @return Region Proxy node region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Proxy node region
                     * @param _region Proxy node region
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
                     * 获取AZ of proxy node region
                     * @return Zone AZ of proxy node region
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ of proxy node region
                     * @param _zone AZ of proxy node region
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Proxy instance allocation
                     * @return ProxyInstance Proxy instance allocation
                     * 
                     */
                    std::vector<ProxyInst> GetProxyInstance() const;

                    /**
                     * 设置Proxy instance allocation
                     * @param _proxyInstance Proxy instance allocation
                     * 
                     */
                    void SetProxyInstance(const std::vector<ProxyInst>& _proxyInstance);

                    /**
                     * 判断参数 ProxyInstance 是否已赋值
                     * @return ProxyInstance 是否已赋值
                     * 
                     */
                    bool ProxyInstanceHasBeenSet() const;

                private:

                    /**
                     * Proxy node region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ of proxy node region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Proxy instance allocation
                     */
                    std::vector<ProxyInst> m_proxyInstance;
                    bool m_proxyInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYALLOCATION_H_
