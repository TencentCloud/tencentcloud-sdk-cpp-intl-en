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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGBDEVICEADDRREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGBDEVICEADDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeGBDeviceAddr request structure.
                */
                class DescribeGBDeviceAddrRequest : public AbstractModel
                {
                public:
                    DescribeGBDeviceAddrRequest();
                    ~DescribeGBDeviceAddrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID list
                     * @return DeviceIds Device ID list
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置Device ID list
                     * @param _deviceIds Device ID list
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * Device ID list
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGBDEVICEADDRREQUEST_H_
