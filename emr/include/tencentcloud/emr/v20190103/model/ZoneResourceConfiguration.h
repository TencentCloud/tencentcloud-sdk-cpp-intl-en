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
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VirtualPrivateCloud The VPC configuration information. This parameter is used to specify the VPC ID, subnet ID and other information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Placement The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Placement The instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllNodeResourceSpec The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AllNodeResourceSpec GetAllNodeResourceSpec() const;

                    /**
                     * 设置The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AllNodeResourceSpec The specs of all nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAllNodeResourceSpec(const AllNodeResourceSpec& _allNodeResourceSpec);

                    /**
                     * 判断参数 AllNodeResourceSpec 是否已赋值
                     * @return AllNodeResourceSpec 是否已赋值
                     */
                    bool AllNodeResourceSpecHasBeenSet() const;

                    /**
                     * 获取For a single AZ, `ZoneTag` can be left out. For a double-AZ mode, `ZoneTag` is set to `master` and `standby` for the first and second AZs, respectively. If there are three AZs, `ZoneTag` is set to `master`, `standby`, and `third-party` for the first, second, and third AZs, respectively. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneTag For a single AZ, `ZoneTag` can be left out. For a double-AZ mode, `ZoneTag` is set to `master` and `standby` for the first and second AZs, respectively. If there are three AZs, `ZoneTag` is set to `master`, `standby`, and `third-party` for the first, second, and third AZs, respectively. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置For a single AZ, `ZoneTag` can be left out. For a double-AZ mode, `ZoneTag` is set to `master` and `standby` for the first and second AZs, respectively. If there are three AZs, `ZoneTag` is set to `master`, `standby`, and `third-party` for the first, second, and third AZs, respectively. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZoneTag For a single AZ, `ZoneTag` can be left out. For a double-AZ mode, `ZoneTag` is set to `master` and `standby` for the first and second AZs, respectively. If there are three AZs, `ZoneTag` is set to `master`, `standby`, and `third-party` for the first, second, and third AZs, respectively. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneTag(const std::string& _zoneTag);

                    /**
                     * 判断参数 ZoneTag 是否已赋值
                     * @return ZoneTag 是否已赋值
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
                     * For a single AZ, `ZoneTag` can be left out. For a double-AZ mode, `ZoneTag` is set to `master` and `standby` for the first and second AZs, respectively. If there are three AZs, `ZoneTag` is set to `master`, `standby`, and `third-party` for the first, second, and third AZs, respectively. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneTag;
                    bool m_zoneTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_
