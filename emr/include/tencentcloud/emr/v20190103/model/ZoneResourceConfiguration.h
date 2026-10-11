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
                * AZ configuration information.
                */
                class ZoneResourceConfiguration : public AbstractModel
                {
                public:
                    ZoneResourceConfiguration();
                    ~ZoneResourceConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC-related information configuration. This parameter can be used to specify the VPC ID and subnet ID.
                     * @return VirtualPrivateCloud VPC-related information configuration. This parameter can be used to specify the VPC ID and subnet ID.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置VPC-related information configuration. This parameter can be used to specify the VPC ID and subnet ID.
                     * @param _virtualPrivateCloud VPC-related information configuration. This parameter can be used to specify the VPC ID and subnet ID.
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
                     * 获取Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.
                     * @return Placement Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.
                     * @param _placement Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.
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
                     * 获取Specifications of all node resources.
                     * @return AllNodeResourceSpec Specifications of all node resources.
                     * 
                     */
                    AllNodeResourceSpec GetAllNodeResourceSpec() const;

                    /**
                     * 设置Specifications of all node resources.
                     * @param _allNodeResourceSpec Specifications of all node resources.
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
                     * 获取In single-AZ deployment, ZoneTag can be left empty. In dual-AZ deployment mode, select master for the first AZ's ZoneTag and standby for the second. In three-AZ deployment mode, select master for the first AZ's ZoneTag, standby for the second, and third-party for the third. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @return ZoneTag In single-AZ deployment, ZoneTag can be left empty. In dual-AZ deployment mode, select master for the first AZ's ZoneTag and standby for the second. In three-AZ deployment mode, select master for the first AZ's ZoneTag, standby for the second, and third-party for the third. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * 
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置In single-AZ deployment, ZoneTag can be left empty. In dual-AZ deployment mode, select master for the first AZ's ZoneTag and standby for the second. In three-AZ deployment mode, select master for the first AZ's ZoneTag, standby for the second, and third-party for the third. Valid values:
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @param _zoneTag In single-AZ deployment, ZoneTag can be left empty. In dual-AZ deployment mode, select master for the first AZ's ZoneTag and standby for the second. In three-AZ deployment mode, select master for the first AZ's ZoneTag, standby for the second, and third-party for the third. Valid values:
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
                     * VPC-related information configuration. This parameter can be used to specify the VPC ID and subnet ID.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Specifications of all node resources.
                     */
                    AllNodeResourceSpec m_allNodeResourceSpec;
                    bool m_allNodeResourceSpecHasBeenSet;

                    /**
                     * In single-AZ deployment, ZoneTag can be left empty. In dual-AZ deployment mode, select master for the first AZ's ZoneTag and standby for the second. In three-AZ deployment mode, select master for the first AZ's ZoneTag, standby for the second, and third-party for the third. Valid values:
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
