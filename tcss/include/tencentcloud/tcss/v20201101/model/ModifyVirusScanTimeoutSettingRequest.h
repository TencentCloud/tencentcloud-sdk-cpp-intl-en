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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVirusScanTimeoutSetting request structure.
                */
                class ModifyVirusScanTimeoutSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusScanTimeoutSettingRequest();
                    ~ModifyVirusScanTimeoutSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Timeout period in hours. Value range: 5-24.
                     * @return Timeout Timeout period in hours. Value range: 5-24.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout period in hours. Value range: 5-24.
                     * @param _timeout Timeout period in hours. Value range: 5-24.
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Scan type. Valid values: `0` (quick scan); `1` (scheduled scan).
                     * @return ScanType Scan type. Valid values: `0` (quick scan); `1` (scheduled scan).
                     * 
                     */
                    uint64_t GetScanType() const;

                    /**
                     * 设置Scan type. Valid values: `0` (quick scan); `1` (scheduled scan).
                     * @param _scanType Scan type. Valid values: `0` (quick scan); `1` (scheduled scan).
                     * 
                     */
                    void SetScanType(const uint64_t& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * Timeout period in hours. Value range: 5-24.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Scan type. Valid values: `0` (quick scan); `1` (scheduled scan).
                     */
                    uint64_t m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSSCANTIMEOUTSETTINGREQUEST_H_
