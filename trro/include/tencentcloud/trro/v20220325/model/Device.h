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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * Query the authorization binding status of user devices
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device id.
                     * @return DeviceId Device id.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device id.
                     * @param _deviceId Device id.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Number of bound licenses.
                     * @return LicenseCount Number of bound licenses.
                     * 
                     */
                    int64_t GetLicenseCount() const;

                    /**
                     * 设置Number of bound licenses.
                     * @param _licenseCount Number of bound licenses.
                     * 
                     */
                    void SetLicenseCount(const int64_t& _licenseCount);

                    /**
                     * 判断参数 LicenseCount 是否已赋值
                     * @return LicenseCount 是否已赋值
                     * 
                     */
                    bool LicenseCountHasBeenSet() const;

                    /**
                     * 获取Remaining days: days.
                     * @return RemainDay Remaining days: days.
                     * 
                     */
                    int64_t GetRemainDay() const;

                    /**
                     * 设置Remaining days: days.
                     * @param _remainDay Remaining days: days.
                     * 
                     */
                    void SetRemainDay(const int64_t& _remainDay);

                    /**
                     * 判断参数 RemainDay 是否已赋值
                     * @return RemainDay 是否已赋值
                     * 
                     */
                    bool RemainDayHasBeenSet() const;

                    /**
                     * 获取Expiration time: s.
                     * @return ExpireTime Expiration time: s.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time: s.
                     * @param _expireTime Expiration time: s.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Service duration: s.
                     * @return Duration Service duration: s.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Service duration: s.
                     * @param _duration Service duration: s.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取List of bound license ids.
                     * @return LicenseIds List of bound license ids.
                     * 
                     */
                    std::vector<std::string> GetLicenseIds() const;

                    /**
                     * 设置List of bound license ids.
                     * @param _licenseIds List of bound license ids.
                     * 
                     */
                    void SetLicenseIds(const std::vector<std::string>& _licenseIds);

                    /**
                     * 判断参数 LicenseIds 是否已赋值
                     * @return LicenseIds 是否已赋值
                     * 
                     */
                    bool LicenseIdsHasBeenSet() const;

                    /**
                     * 获取Monthly license duration limit.
                     * @return MonthlyRemainTime Monthly license duration limit.
                     * 
                     */
                    int64_t GetMonthlyRemainTime() const;

                    /**
                     * 设置Monthly license duration limit.
                     * @param _monthlyRemainTime Monthly license duration limit.
                     * 
                     */
                    void SetMonthlyRemainTime(const int64_t& _monthlyRemainTime);

                    /**
                     * 判断参数 MonthlyRemainTime 是否已赋值
                     * @return MonthlyRemainTime 是否已赋值
                     * 
                     */
                    bool MonthlyRemainTimeHasBeenSet() const;

                    /**
                     * 获取Monthly maximum duration (minutes).
                     * @return LimitedTime Monthly maximum duration (minutes).
                     * 
                     */
                    int64_t GetLimitedTime() const;

                    /**
                     * 设置Monthly maximum duration (minutes).
                     * @param _limitedTime Monthly maximum duration (minutes).
                     * 
                     */
                    void SetLimitedTime(const int64_t& _limitedTime);

                    /**
                     * 判断参数 LimitedTime 是否已赋值
                     * @return LimitedTime 是否已赋值
                     * 
                     */
                    bool LimitedTimeHasBeenSet() const;

                private:

                    /**
                     * Device id.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Number of bound licenses.
                     */
                    int64_t m_licenseCount;
                    bool m_licenseCountHasBeenSet;

                    /**
                     * Remaining days: days.
                     */
                    int64_t m_remainDay;
                    bool m_remainDayHasBeenSet;

                    /**
                     * Expiration time: s.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Service duration: s.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * List of bound license ids.
                     */
                    std::vector<std::string> m_licenseIds;
                    bool m_licenseIdsHasBeenSet;

                    /**
                     * Monthly license duration limit.
                     */
                    int64_t m_monthlyRemainTime;
                    bool m_monthlyRemainTimeHasBeenSet;

                    /**
                     * Monthly maximum duration (minutes).
                     */
                    int64_t m_limitedTime;
                    bool m_limitedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DEVICE_H_
