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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetActiveDeviceCount request structure.
                */
                class GetActiveDeviceCountRequest : public AbstractModel
                {
                public:
                    GetActiveDeviceCountRequest();
                    ~GetActiveDeviceCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query granularity. Valid values: 0: day, 1: week, 2: month. Default is day.
                     * @return Period Query granularity. Valid values: 0: day, 1: week, 2: month. Default is day.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Query granularity. Valid values: 0: day, 1: week, 2: month. Default is day.
                     * @param _period Query granularity. Valid values: 0: day, 1: week, 2: month. Default is day.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time. In seconds.
                     * @return StartTime Start time. In seconds.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time. In seconds.
                     * @param _startTime Start time. In seconds.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time. In seconds.
                     * @return EndTime End time. In seconds.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time. In seconds.
                     * @param _endTime End time. In seconds.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取device group, if not passed, query all
                     * @return DevGroup device group, if not passed, query all
                     * 
                     */
                    std::string GetDevGroup() const;

                    /**
                     * 设置device group, if not passed, query all
                     * @param _devGroup device group, if not passed, query all
                     * 
                     */
                    void SetDevGroup(const std::string& _devGroup);

                    /**
                     * 判断参数 DevGroup 是否已赋值
                     * @return DevGroup 是否已赋值
                     * 
                     */
                    bool DevGroupHasBeenSet() const;

                    /**
                     * 获取License type. If not passed, query all. 1: Tenant monthly payment, 2: Manufacturer monthly payment, 3: Permanent license.
                     * @return LicenseType License type. If not passed, query all. 1: Tenant monthly payment, 2: Manufacturer monthly payment, 3: Permanent license.
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置License type. If not passed, query all. 1: Tenant monthly payment, 2: Manufacturer monthly payment, 3: Permanent license.
                     * @param _licenseType License type. If not passed, query all. 1: Tenant monthly payment, 2: Manufacturer monthly payment, 3: Permanent license.
                     * 
                     */
                    void SetLicenseType(const int64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * Query granularity. Valid values: 0: day, 1: week, 2: month. Default is day.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time. In seconds.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. In seconds.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * device group, if not passed, query all
                     */
                    std::string m_devGroup;
                    bool m_devGroupHasBeenSet;

                    /**
                     * License type. If not passed, query all. 1: Tenant monthly payment, 2: Manufacturer monthly payment, 3: Permanent license.
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETACTIVEDEVICECOUNTREQUEST_H_
