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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeAccessRegionsByDestRegion request structure.
                */
                class DescribeAccessRegionsByDestRegionRequest : public AbstractModel
                {
                public:
                    DescribeAccessRegionsByDestRegionRequest();
                    ~DescribeAccessRegionsByDestRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Origin server region: the DescribeDestRegions API returns the value of `RegionId` field of `DestRegionSet`.
                     * @return DestRegion Origin server region: the DescribeDestRegions API returns the value of `RegionId` field of `DestRegionSet`.
                     * 
                     */
                    std::string GetDestRegion() const;

                    /**
                     * 设置Origin server region: the DescribeDestRegions API returns the value of `RegionId` field of `DestRegionSet`.
                     * @param _destRegion Origin server region: the DescribeDestRegions API returns the value of `RegionId` field of `DestRegionSet`.
                     * 
                     */
                    void SetDestRegion(const std::string& _destRegion);

                    /**
                     * 判断参数 DestRegion 是否已赋值
                     * @return DestRegion 是否已赋值
                     * 
                     */
                    bool DestRegionHasBeenSet() const;

                    /**
                     * 获取IP version. Valid values: `IPv4` (default), `IPv6`.
                     * @return IPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP version. Valid values: `IPv4` (default), `IPv6`.
                     * @param _iPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
                     * 
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     * 
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * @return PackageType Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * @param _packageType Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                private:

                    /**
                     * Origin server region: the DescribeDestRegions API returns the value of `RegionId` field of `DestRegionSet`.
                     */
                    std::string m_destRegion;
                    bool m_destRegionHasBeenSet;

                    /**
                     * IP version. Valid values: `IPv4` (default), `IPv6`.
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEACCESSREGIONSBYDESTREGIONREQUEST_H_
