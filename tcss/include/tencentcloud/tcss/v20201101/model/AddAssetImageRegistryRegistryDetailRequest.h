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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_

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
                * AddAssetImageRegistryRegistryDetail request structure.
                */
                class AddAssetImageRegistryRegistryDetailRequest : public AbstractModel
                {
                public:
                    AddAssetImageRegistryRegistryDetailRequest();
                    ~AddAssetImageRegistryRegistryDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Repository name
                     * @return Name Repository name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Repository name
                     * @param _name Repository name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return Username Username
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username
                     * @param _username Username
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Password
                     * @return Password Password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password
                     * @param _password Password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Repository URL
                     * @return Url Repository URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Repository URL
                     * @param _url Repository URL
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
                     * 获取Repository type, which can be `harbor`.
                     * @return RegistryType Repository type, which can be `harbor`.
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Repository type, which can be `harbor`.
                     * @param _registryType Repository type, which can be `harbor`.
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Network type, which can be `public` (public network).
                     * @return NetType Network type, which can be `public` (public network).
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type, which can be `public` (public network).
                     * @param _netType Network type, which can be `public` (public network).
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Repository version
                     * @return RegistryVersion Repository version
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置Repository version
                     * @param _registryVersion Repository version
                     * 
                     */
                    void SetRegistryVersion(const std::string& _registryVersion);

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取Region. Default value: `default`.
                     * @return RegistryRegion Region. Default value: `default`.
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置Region. Default value: `default`.
                     * @param _registryRegion Region. Default value: `default`.
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取Speed limit
                     * @return SpeedLimit Speed limit
                     * 
                     */
                    int64_t GetSpeedLimit() const;

                    /**
                     * 设置Speed limit
                     * @param _speedLimit Speed limit
                     * 
                     */
                    void SetSpeedLimit(const int64_t& _speedLimit);

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
                     * @return Insecure Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 设置Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
                     * @param _insecure Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
                     * 
                     */
                    void SetInsecure(const uint64_t& _insecure);

                    /**
                     * 判断参数 Insecure 是否已赋值
                     * @return Insecure 是否已赋值
                     * 
                     */
                    bool InsecureHasBeenSet() const;

                private:

                    /**
                     * Repository name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Repository URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Repository type, which can be `harbor`.
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Network type, which can be `public` (public network).
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Repository version
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * Region. Default value: `default`.
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * Speed limit
                     */
                    int64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
