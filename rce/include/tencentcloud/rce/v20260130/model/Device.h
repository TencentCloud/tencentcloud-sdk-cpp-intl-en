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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_

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
                * The basic infomation of the device
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique id of device returned by RCE</p>
                     * @return DeviceId <p>The unique id of device returned by RCE</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>The unique id of device returned by RCE</p>
                     * @param _deviceId <p>The unique id of device returned by RCE</p>
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
                     * 获取<p>The version of the application</p>
                     * @return AppVersion <p>The version of the application</p>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置<p>The version of the application</p>
                     * @param _appVersion <p>The version of the application</p>
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
                     * 获取<p>Device brand</p>
                     * @return Brand <p>Device brand</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>Device brand</p>
                     * @param _brand <p>Device brand</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>Client IP address</p>
                     * @return ClientIp <p>Client IP address</p>
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置<p>Client IP address</p>
                     * @param _clientIp <p>Client IP address</p>
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取<p>Device model</p>
                     * @return Model <p>Device model</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Device model</p>
                     * @param _model <p>Device model</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Network type of the device</p>
                     * @return NetworkType <p>Network type of the device</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>Network type of the device</p>
                     * @param _networkType <p>Network type of the device</p>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>The package name of the application</p>
                     * @return PackageName <p>The package name of the application</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>The package name of the application</p>
                     * @param _packageName <p>The package name of the application</p>
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取<p>Device platform</p><p>Enumeration value:</p><ul><li>2: Android</li><li>3: IOS</li><li>4: H5</li><li>5: WeChat Mini Program</li></ul>
                     * @return Platform <p>Device platform</p><p>Enumeration value:</p><ul><li>2: Android</li><li>3: IOS</li><li>4: H5</li><li>5: WeChat Mini Program</li></ul>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>Device platform</p><p>Enumeration value:</p><ul><li>2: Android</li><li>3: IOS</li><li>4: H5</li><li>5: WeChat Mini Program</li></ul>
                     * @param _platform <p>Device platform</p><p>Enumeration value:</p><ul><li>2: Android</li><li>3: IOS</li><li>4: H5</li><li>5: WeChat Mini Program</li></ul>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>Device system version</p>
                     * @return SystemVersion <p>Device system version</p>
                     * 
                     */
                    std::string GetSystemVersion() const;

                    /**
                     * 设置<p>Device system version</p>
                     * @param _systemVersion <p>Device system version</p>
                     * 
                     */
                    void SetSystemVersion(const std::string& _systemVersion);

                    /**
                     * 判断参数 SystemVersion 是否已赋值
                     * @return SystemVersion 是否已赋值
                     * 
                     */
                    bool SystemVersionHasBeenSet() const;

                    /**
                     * 获取<p>The build version of SDK</p>
                     * @return SdkBuildVersion <p>The build version of SDK</p>
                     * 
                     */
                    std::string GetSdkBuildVersion() const;

                    /**
                     * 设置<p>The build version of SDK</p>
                     * @param _sdkBuildVersion <p>The build version of SDK</p>
                     * 
                     */
                    void SetSdkBuildVersion(const std::string& _sdkBuildVersion);

                    /**
                     * 判断参数 SdkBuildVersion 是否已赋值
                     * @return SdkBuildVersion 是否已赋值
                     * 
                     */
                    bool SdkBuildVersionHasBeenSet() const;

                private:

                    /**
                     * <p>The unique id of device returned by RCE</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>The version of the application</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>Device brand</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>Client IP address</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>Device model</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Network type of the device</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>The package name of the application</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>Device platform</p><p>Enumeration value:</p><ul><li>2: Android</li><li>3: IOS</li><li>4: H5</li><li>5: WeChat Mini Program</li></ul>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>Device system version</p>
                     */
                    std::string m_systemVersion;
                    bool m_systemVersionHasBeenSet;

                    /**
                     * <p>The build version of SDK</p>
                     */
                    std::string m_sdkBuildVersion;
                    bool m_sdkBuildVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DEVICE_H_
