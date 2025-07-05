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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_

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
                * DescribeAssetImageRegistryRegistryDetail response structure.
                */
                class DescribeAssetImageRegistryRegistryDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryRegistryDetailResponse();
                    ~DescribeAssetImageRegistryRegistryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Repository name
                     * @return Name Repository name
                     * 
                     */
                    std::string GetName() const;

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
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Repository version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryVersion Repository version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取Network type, which can be `public` (public network).
                     * @return NetType Network type, which can be `public` (public network).
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Region. Default value: `default`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryRegion Region. Default value: `default`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取Speed limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpeedLimit Speed limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSpeedLimit() const;

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Insecure Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInsecure() const;

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
                     * Repository version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * Network type, which can be `public` (public network).
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Region. Default value: `default`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * Speed limit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * Valid values: `0` (secure mode with certificate verification, which is the default value); `1` (unsecure mode that skips certificate verification).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
