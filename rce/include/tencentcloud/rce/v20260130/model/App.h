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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the app, os and device
                */
                class App : public AbstractModel
                {
                public:
                    App();
                    ~App() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The operating system your application is running on</p>
                     * @return OS <p>The operating system your application is running on</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>The operating system your application is running on</p>
                     * @param _oS <p>The operating system your application is running on</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>The operating system version  your application is running on</p>
                     * @return OSVersion <p>The operating system version  your application is running on</p>
                     * 
                     */
                    std::string GetOSVersion() const;

                    /**
                     * 设置<p>The operating system version  your application is running on</p>
                     * @param _oSVersion <p>The operating system version  your application is running on</p>
                     * 
                     */
                    void SetOSVersion(const std::string& _oSVersion);

                    /**
                     * 判断参数 OSVersion 是否已赋值
                     * @return OSVersion 是否已赋值
                     * 
                     */
                    bool OSVersionHasBeenSet() const;

                    /**
                     * 获取<p>The manufacturer of  the device your application is running on</p>
                     * @return DeviceManufacturer <p>The manufacturer of  the device your application is running on</p>
                     * 
                     */
                    std::string GetDeviceManufacturer() const;

                    /**
                     * 设置<p>The manufacturer of  the device your application is running on</p>
                     * @param _deviceManufacturer <p>The manufacturer of  the device your application is running on</p>
                     * 
                     */
                    void SetDeviceManufacturer(const std::string& _deviceManufacturer);

                    /**
                     * 判断参数 DeviceManufacturer 是否已赋值
                     * @return DeviceManufacturer 是否已赋值
                     * 
                     */
                    bool DeviceManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>The model of the device your application is running on</p>
                     * @return DeviceModel <p>The model of the device your application is running on</p>
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置<p>The model of the device your application is running on</p>
                     * @param _deviceModel <p>The model of the device your application is running on</p>
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the device your application is running on</p>
                     * @return DeviceId <p>The ID of the device your application is running on</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>The ID of the device your application is running on</p>
                     * @param _deviceId <p>The ID of the device your application is running on</p>
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
                     * 获取<p>The name of your application</p>
                     * @return AppName <p>The name of your application</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>The name of your application</p>
                     * @param _appName <p>The name of your application</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>The version of your application</p>
                     * @return AppVersion <p>The version of your application</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>The version of your application</p>
                     * @param _appVersion <p>The version of your application</p>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取<p>The language of your application</p>
                     * @return ClientLanguage <p>The language of your application</p>
                     * 
                     */
                    std::string GetClientLanguage() const;

                    /**
                     * 设置<p>The language of your application</p>
                     * @param _clientLanguage <p>The language of your application</p>
                     * 
                     */
                    void SetClientLanguage(const std::string& _clientLanguage);

                    /**
                     * 判断参数 ClientLanguage 是否已赋值
                     * @return ClientLanguage 是否已赋值
                     * 
                     */
                    bool ClientLanguageHasBeenSet() const;

                private:

                    /**
                     * <p>The operating system your application is running on</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>The operating system version  your application is running on</p>
                     */
                    std::string m_oSVersion;
                    bool m_oSVersionHasBeenSet;

                    /**
                     * <p>The manufacturer of  the device your application is running on</p>
                     */
                    std::string m_deviceManufacturer;
                    bool m_deviceManufacturerHasBeenSet;

                    /**
                     * <p>The model of the device your application is running on</p>
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * <p>The ID of the device your application is running on</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>The name of your application</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>The version of your application</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>The language of your application</p>
                     */
                    std::string m_clientLanguage;
                    bool m_clientLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_APP_H_
