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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMESHIFTSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMESHIFTSETTINGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Time-shift configuration. This parameter is valid only for HLS_ARCHIVE and DASH_ARCHIVE output groups.
                */
                class TimeShiftSettingsInfo : public AbstractModel
                {
                public:
                    TimeShiftSettingsInfo();
                    ~TimeShiftSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable time shifting. Valid values: `OPEN`; `CLOSE`
Note: This field may return `null`, indicating that no valid value was found.
                     * @return State Whether to enable time shifting. Valid values: `OPEN`; `CLOSE`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Whether to enable time shifting. Valid values: `OPEN`; `CLOSE`
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _state Whether to enable time shifting. Valid values: `OPEN`; `CLOSE`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Domain name bound for time shifting
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PlayDomain Domain name bound for time shifting
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Domain name bound for time shifting
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _playDomain Domain name bound for time shifting
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取Allowable time-shift period (s). Value range: [300, 2592000]. Default value: 300Note: This field may return `null`, indicating that no valid value was found.
                     * @return StartoverWindow Allowable time-shift period (s). Value range: [300, 2592000]. Default value: 300Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetStartoverWindow() const;

                    /**
                     * 设置Allowable time-shift period (s). Value range: [300, 2592000]. Default value: 300Note: This field may return `null`, indicating that no valid value was found.
                     * @param _startoverWindow Allowable time-shift period (s). Value range: [300, 2592000]. Default value: 300Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStartoverWindow(const int64_t& _startoverWindow);

                    /**
                     * 判断参数 StartoverWindow 是否已赋值
                     * @return StartoverWindow 是否已赋值
                     * 
                     */
                    bool StartoverWindowHasBeenSet() const;

                private:

                    /**
                     * Whether to enable time shifting. Valid values: `OPEN`; `CLOSE`
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Domain name bound for time shifting
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * Allowable time-shift period (s). Value range: [300, 2592000]. Default value: 300Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_startoverWindow;
                    bool m_startoverWindowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMESHIFTSETTINGSINFO_H_
