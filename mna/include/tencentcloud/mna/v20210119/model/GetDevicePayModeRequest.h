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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICEPAYMODEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICEPAYMODEREQUEST_H_

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
                * GetDevicePayMode request structure.
                */
                class GetDevicePayModeRequest : public AbstractModel
                {
                public:
                    GetDevicePayModeRequest();
                    ~GetDevicePayModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID list
                     * @return DeviceIdList Device ID list
                     * 
                     */
                    std::vector<std::string> GetDeviceIdList() const;

                    /**
                     * 设置Device ID list
                     * @param _deviceIdList Device ID list
                     * 
                     */
                    void SetDeviceIdList(const std::vector<std::string>& _deviceIdList);

                    /**
                     * 判断参数 DeviceIdList 是否已赋值
                     * @return DeviceIdList 是否已赋值
                     * 
                     */
                    bool DeviceIdListHasBeenSet() const;

                private:

                    /**
                     * Device ID list
                     */
                    std::vector<std::string> m_deviceIdList;
                    bool m_deviceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICEPAYMODEREQUEST_H_
