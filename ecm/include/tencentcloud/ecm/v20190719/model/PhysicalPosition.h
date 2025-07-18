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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Physical location information
                */
                class PhysicalPosition : public AbstractModel
                {
                public:
                    PhysicalPosition();
                    ~PhysicalPosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rack unit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PosId Rack unit
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPosId() const;

                    /**
                     * 设置Rack unit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _posId Rack unit
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosId(const std::string& _posId);

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取Rack
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RackId Rack
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRackId() const;

                    /**
                     * 设置Rack
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rackId Rack
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRackId(const std::string& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取Switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SwitchId Switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置Switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _switchId Switch
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                private:

                    /**
                     * Rack unit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * Rack
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * Switch
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PHYSICALPOSITION_H_
