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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSREGIONSREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSREGIONSREQUEST_H_

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
                * ModifyDeviceAccessRegions request structure.
                */
                class ModifyDeviceAccessRegionsRequest : public AbstractModel
                {
                public:
                    ModifyDeviceAccessRegionsRequest();
                    ~ModifyDeviceAccessRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>device ID</p>
                     * @return DeviceIds <p>device ID</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置<p>device ID</p>
                     * @param _deviceIds <p>device ID</p>
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Access region</p>
                     * @return AllowedRegions <p>Access region</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedRegions() const;

                    /**
                     * 设置<p>Access region</p>
                     * @param _allowedRegions <p>Access region</p>
                     * 
                     */
                    void SetAllowedRegions(const std::vector<std::string>& _allowedRegions);

                    /**
                     * 判断参数 AllowedRegions 是否已赋值
                     * @return AllowedRegions 是否已赋值
                     * 
                     */
                    bool AllowedRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>device ID</p>
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * <p>Access region</p>
                     */
                    std::vector<std::string> m_allowedRegions;
                    bool m_allowedRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSREGIONSREQUEST_H_
