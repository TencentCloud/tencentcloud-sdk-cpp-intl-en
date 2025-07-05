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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Parameter information of each AZ
                */
                class MultiZoneSetting : public AbstractModel
                {
                public:
                    MultiZoneSetting();
                    ~MultiZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取"master", "standby", "third-party"
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ZoneTag "master", "standby", "third-party"
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置"master", "standby", "third-party"
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _zoneTag "master", "standby", "third-party"
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZoneTag(const std::string& _zoneTag);

                    /**
                     * 判断参数 ZoneTag 是否已赋值
                     * @return ZoneTag 是否已赋值
                     * 
                     */
                    bool ZoneTagHasBeenSet() const;

                    /**
                     * 获取None
                     * @return VPCSettings None
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置None
                     * @param _vPCSettings None
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取None
                     * @return Placement None
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置None
                     * @param _placement None
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
                     * 获取None
                     * @return ResourceSpec None
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置None
                     * @param _resourceSpec None
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                private:

                    /**
                     * "master", "standby", "third-party"
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zoneTag;
                    bool m_zoneTagHasBeenSet;

                    /**
                     * None
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * None
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * None
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_
