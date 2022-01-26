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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Coordinate.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * Access point information.
                */
                class AccessPoint : public AbstractModel
                {
                public:
                    AccessPoint();
                    ~AccessPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access point name.
                     * @return AccessPointName Access point name.
                     */
                    std::string GetAccessPointName() const;

                    /**
                     * 设置Access point name.
                     * @param AccessPointName Access point name.
                     */
                    void SetAccessPointName(const std::string& _accessPointName);

                    /**
                     * 判断参数 AccessPointName 是否已赋值
                     * @return AccessPointName 是否已赋值
                     */
                    bool AccessPointNameHasBeenSet() const;

                    /**
                     * 获取Unique access point ID.
                     * @return AccessPointId Unique access point ID.
                     */
                    std::string GetAccessPointId() const;

                    /**
                     * 设置Unique access point ID.
                     * @param AccessPointId Unique access point ID.
                     */
                    void SetAccessPointId(const std::string& _accessPointId);

                    /**
                     * 判断参数 AccessPointId 是否已赋值
                     * @return AccessPointId 是否已赋值
                     */
                    bool AccessPointIdHasBeenSet() const;

                    /**
                     * 获取Access point status. Valid values: available, unavailable.
                     * @return State Access point status. Valid values: available, unavailable.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Access point status. Valid values: available, unavailable.
                     * @param State Access point status. Valid values: available, unavailable.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Access point location.
                     * @return Location Access point location.
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Access point location.
                     * @param Location Access point location.
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取List of ISPs supported by access point.
                     * @return LineOperator List of ISPs supported by access point.
                     */
                    std::vector<std::string> GetLineOperator() const;

                    /**
                     * 设置List of ISPs supported by access point.
                     * @param LineOperator List of ISPs supported by access point.
                     */
                    void SetLineOperator(const std::vector<std::string>& _lineOperator);

                    /**
                     * 判断参数 LineOperator 是否已赋值
                     * @return LineOperator 是否已赋值
                     */
                    bool LineOperatorHasBeenSet() const;

                    /**
                     * 获取ID of the region that manages the access point.
                     * @return RegionId ID of the region that manages the access point.
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置ID of the region that manages the access point.
                     * @param RegionId ID of the region that manages the access point.
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Available port type at the access point. Valid values: 1000BASE-T: gigabit electrical port; 1000BASE-LX: 10 km gigabit single-mode optical port; 1000BASE-ZX: 80 km gigabit single-mode optical port; 10GBASE-LR: 10 km 10-gigabit single-mode optical port; 10GBASE-ZR: 80 km 10-gigabit single-mode optical port; 10GBASE-LH: 40 km 10-gigabit single-mode optical port; 100GBASE-LR4: 10 km 100-gigabit single-mode optical portfiber optic port.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AvailablePortType Available port type at the access point. Valid values: 1000BASE-T: gigabit electrical port; 1000BASE-LX: 10 km gigabit single-mode optical port; 1000BASE-ZX: 80 km gigabit single-mode optical port; 10GBASE-LR: 10 km 10-gigabit single-mode optical port; 10GBASE-ZR: 80 km 10-gigabit single-mode optical port; 10GBASE-LH: 40 km 10-gigabit single-mode optical port; 100GBASE-LR4: 10 km 100-gigabit single-mode optical portfiber optic port.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> GetAvailablePortType() const;

                    /**
                     * 设置Available port type at the access point. Valid values: 1000BASE-T: gigabit electrical port; 1000BASE-LX: 10 km gigabit single-mode optical port; 1000BASE-ZX: 80 km gigabit single-mode optical port; 10GBASE-LR: 10 km 10-gigabit single-mode optical port; 10GBASE-ZR: 80 km 10-gigabit single-mode optical port; 10GBASE-LH: 40 km 10-gigabit single-mode optical port; 100GBASE-LR4: 10 km 100-gigabit single-mode optical portfiber optic port.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param AvailablePortType Available port type at the access point. Valid values: 1000BASE-T: gigabit electrical port; 1000BASE-LX: 10 km gigabit single-mode optical port; 1000BASE-ZX: 80 km gigabit single-mode optical port; 10GBASE-LR: 10 km 10-gigabit single-mode optical port; 10GBASE-ZR: 80 km 10-gigabit single-mode optical port; 10GBASE-LH: 40 km 10-gigabit single-mode optical port; 100GBASE-LR4: 10 km 100-gigabit single-mode optical portfiber optic port.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetAvailablePortType(const std::vector<std::string>& _availablePortType);

                    /**
                     * 判断参数 AvailablePortType 是否已赋值
                     * @return AvailablePortType 是否已赋值
                     */
                    bool AvailablePortTypeHasBeenSet() const;

                    /**
                     * 获取Latitude and longitude of the access point
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Coordinate Latitude and longitude of the access point
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Coordinate GetCoordinate() const;

                    /**
                     * 设置Latitude and longitude of the access point
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Coordinate Latitude and longitude of the access point
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCoordinate(const Coordinate& _coordinate);

                    /**
                     * 判断参数 Coordinate 是否已赋值
                     * @return Coordinate 是否已赋值
                     */
                    bool CoordinateHasBeenSet() const;

                    /**
                     * 获取City where the access point is located
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return City City where the access point is located
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City where the access point is located
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param City City where the access point is located
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Access point region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Area Access point region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Access point region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Area Access point region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Access point type. Valid values: `VXLAN`, `QCPL`, and `QCAR`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AccessPointType Access point type. Valid values: `VXLAN`, `QCPL`, and `QCAR`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置Access point type. Valid values: `VXLAN`, `QCPL`, and `QCAR`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AccessPointType Access point type. Valid values: `VXLAN`, `QCPL`, and `QCAR`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     */
                    bool AccessPointTypeHasBeenSet() const;

                private:

                    /**
                     * Access point name.
                     */
                    std::string m_accessPointName;
                    bool m_accessPointNameHasBeenSet;

                    /**
                     * Unique access point ID.
                     */
                    std::string m_accessPointId;
                    bool m_accessPointIdHasBeenSet;

                    /**
                     * Access point status. Valid values: available, unavailable.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Access point location.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * List of ISPs supported by access point.
                     */
                    std::vector<std::string> m_lineOperator;
                    bool m_lineOperatorHasBeenSet;

                    /**
                     * ID of the region that manages the access point.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Available port type at the access point. Valid values: 1000BASE-T: gigabit electrical port; 1000BASE-LX: 10 km gigabit single-mode optical port; 1000BASE-ZX: 80 km gigabit single-mode optical port; 10GBASE-LR: 10 km 10-gigabit single-mode optical port; 10GBASE-ZR: 80 km 10-gigabit single-mode optical port; 10GBASE-LH: 40 km 10-gigabit single-mode optical port; 100GBASE-LR4: 10 km 100-gigabit single-mode optical portfiber optic port.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_availablePortType;
                    bool m_availablePortTypeHasBeenSet;

                    /**
                     * Latitude and longitude of the access point
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    Coordinate m_coordinate;
                    bool m_coordinateHasBeenSet;

                    /**
                     * City where the access point is located
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Access point region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Access point type. Valid values: `VXLAN`, `QCPL`, and `QCAR`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_
