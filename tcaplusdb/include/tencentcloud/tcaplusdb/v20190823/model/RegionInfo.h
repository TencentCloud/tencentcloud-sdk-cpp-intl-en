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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TcaplusDB service region details
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region `Ap-code`
                     * @return RegionName Region `Ap-code`
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region `Ap-code`
                     * @param _regionName Region `Ap-code`
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region abbreviation
                     * @return RegionAbbr Region abbreviation
                     * 
                     */
                    std::string GetRegionAbbr() const;

                    /**
                     * 设置Region abbreviation
                     * @param _regionAbbr Region abbreviation
                     * 
                     */
                    void SetRegionAbbr(const std::string& _regionAbbr);

                    /**
                     * 判断参数 RegionAbbr 是否已赋值
                     * @return RegionAbbr 是否已赋值
                     * 
                     */
                    bool RegionAbbrHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Whether to support IPv6 address access. Valid values: 0 (support), 1 (not support)
                     * @return Ipv6Enable Whether to support IPv6 address access. Valid values: 0 (support), 1 (not support)
                     * 
                     */
                    uint64_t GetIpv6Enable() const;

                    /**
                     * 设置Whether to support IPv6 address access. Valid values: 0 (support), 1 (not support)
                     * @param _ipv6Enable Whether to support IPv6 address access. Valid values: 0 (support), 1 (not support)
                     * 
                     */
                    void SetIpv6Enable(const uint64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * Region `Ap-code`
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region abbreviation
                     */
                    std::string m_regionAbbr;
                    bool m_regionAbbrHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Whether to support IPv6 address access. Valid values: 0 (support), 1 (not support)
                     */
                    uint64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_REGIONINFO_H_
