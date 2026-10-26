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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_

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
                * CallISAPI request structure.
                */
                class CallISAPIRequest : public AbstractModel
                {
                public:
                    CallISAPIRequest();
                    ~CallISAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
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
                     * 获取url resource
                     * @return Url url resource
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置url resource
                     * @param _url url resource
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Input parameter
                     * @return InputData Input parameter
                     * 
                     */
                    std::string GetInputData() const;

                    /**
                     * 设置Input parameter
                     * @param _inputData Input parameter
                     * 
                     */
                    void SetInputData(const std::string& _inputData);

                    /**
                     * 判断参数 InputData 是否已赋值
                     * @return InputData 是否已赋值
                     * 
                     */
                    bool InputDataHasBeenSet() const;

                private:

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * url resource
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Input parameter
                     */
                    std::string m_inputData;
                    bool m_inputDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_
