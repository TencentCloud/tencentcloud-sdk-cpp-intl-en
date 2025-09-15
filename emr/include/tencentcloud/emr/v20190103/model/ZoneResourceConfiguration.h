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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VirtualPrivateCloud.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/AllNodeResourceSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AZ configurations
                */
                class ZoneResourceConfiguration : public AbstractModel
                {
                public:
                    ZoneResourceConfiguration();
                    ~ZoneResourceConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirtualPrivateCloud The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virtualPrivateCloud The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Placement The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _placement The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllNodeResourceSpec The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AllNodeResourceSpec GetAllNodeResourceSpec() const;

                    /**
                     * 设置The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allNodeResourceSpec The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllNodeResourceSpec(const AllNodeResourceSpec& _allNodeResourceSpec);

                    /**
                     * 判断参数 AllNodeResourceSpec 是否已赋值
                     * @return AllNodeResourceSpec 是否已赋值
                     * 
                     */
                    bool AllNodeResourceSpecHasBeenSet() const;

                    /**
                     * 获取Leave ZoneTag empty in the case of a single availability zone. In the case of a dual-AZ deployment, select master for the first availability zone's ZoneTag and standby for the second. In the case of a three-AZ deployment, select master for the first availability zone's ZoneTag, standby for the second, and third-party for the third. Valid values.
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @return ZoneTag Leave ZoneTag empty in the case of a single availability zone. In the case of a dual-AZ deployment, select master for the first availability zone's ZoneTag and standby for the second. In the case of a three-AZ deployment, select master for the first availability zone's ZoneTag, standby for the second, and third-party for the third. Valid values.
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * 
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置Leave ZoneTag empty in the case of a single availability zone. In the case of a dual-AZ deployment, select master for the first availability zone's ZoneTag and standby for the second. In the case of a three-AZ deployment, select master for the first availability zone's ZoneTag, standby for the second, and third-party for the third. Valid values.
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @param _zoneTag Leave ZoneTag empty in the case of a single availability zone. In the case of a dual-AZ deployment, select master for the first availability zone's ZoneTag and standby for the second. In the case of a three-AZ deployment, select master for the first availability zone's ZoneTag, standby for the second, and third-party for the third. Valid values.
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * 
                     */
                    void SetZoneTag(const std::string& _zoneTag);

                    /**
                     * 判断参数 ZoneTag 是否已赋值
                     * @return ZoneTag 是否已赋值
                     * 
                     */
                    bool ZoneTagHasBeenSet() const;

                private:

                    /**
                     * The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AllNodeResourceSpec m_allNodeResourceSpec;
                    bool m_allNodeResourceSpecHasBeenSet;

                    /**
                     * Leave ZoneTag empty in the case of a single availability zone. In the case of a dual-AZ deployment, select master for the first availability zone's ZoneTag and standby for the second. In the case of a three-AZ deployment, select master for the first availability zone's ZoneTag, standby for the second, and third-party for the third. Valid values.
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     */
                    std::string m_zoneTag;
                    bool m_zoneTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_
