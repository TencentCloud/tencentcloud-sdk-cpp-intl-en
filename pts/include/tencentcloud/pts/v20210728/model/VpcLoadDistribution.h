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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_VPCLOADDISTRIBUTION_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_VPCLOADDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Load specification in vpc mode
                */
                class VpcLoadDistribution : public AbstractModel
                {
                public:
                    VpcLoadDistribution();
                    ~VpcLoadDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取VPC ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return VpcId VPC ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _vpcId VPC ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs.

Note: This field may return null, indicating that no valid value is found.
                     * @return SubnetIds List of subnet IDs.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnet IDs.

Note: This field may return null, indicating that no valid value is found.
                     * @param _subnetIds List of subnet IDs.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * Region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * List of subnet IDs.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_VPCLOADDISTRIBUTION_H_
