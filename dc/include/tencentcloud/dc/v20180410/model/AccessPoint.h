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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_ACCESSPOINT_H_
