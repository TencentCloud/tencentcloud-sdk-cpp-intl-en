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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Render the mobile mode parameter. do not set this parameter when not rendering mobile mode.
                */
                class EmulateMobileParams : public AbstractModel
                {
                public:
                    EmulateMobileParams();
                    ~EmulateMobileParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mobile device type.
Mobile phone.
Tablet.
                     * @return MobileDeviceType Mobile device type.
Mobile phone.
Tablet.
                     * 
                     */
                    uint64_t GetMobileDeviceType() const;

                    /**
                     * 设置Mobile device type.
Mobile phone.
Tablet.
                     * @param _mobileDeviceType Mobile device type.
Mobile phone.
Tablet.
                     * 
                     */
                    void SetMobileDeviceType(const uint64_t& _mobileDeviceType);

                    /**
                     * 判断参数 MobileDeviceType 是否已赋值
                     * @return MobileDeviceType 是否已赋值
                     * 
                     */
                    bool MobileDeviceTypeHasBeenSet() const;

                    /**
                     * 获取Screen orientation.
Portrait mode.
Landscape mode.
                     * @return ScreenOrientation Screen orientation.
Portrait mode.
Landscape mode.
                     * 
                     */
                    uint64_t GetScreenOrientation() const;

                    /**
                     * 设置Screen orientation.
Portrait mode.
Landscape mode.
                     * @param _screenOrientation Screen orientation.
Portrait mode.
Landscape mode.
                     * 
                     */
                    void SetScreenOrientation(const uint64_t& _screenOrientation);

                    /**
                     * 判断参数 ScreenOrientation 是否已赋值
                     * @return ScreenOrientation 是否已赋值
                     * 
                     */
                    bool ScreenOrientationHasBeenSet() const;

                private:

                    /**
                     * Mobile device type.
Mobile phone.
Tablet.
                     */
                    uint64_t m_mobileDeviceType;
                    bool m_mobileDeviceTypeHasBeenSet;

                    /**
                     * Screen orientation.
Portrait mode.
Landscape mode.
                     */
                    uint64_t m_screenOrientation;
                    bool m_screenOrientationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_
