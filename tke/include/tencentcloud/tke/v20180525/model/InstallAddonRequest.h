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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * InstallAddon request structure.
                */
                class InstallAddonRequest : public AbstractModel
                {
                public:
                    InstallAddonRequest();
                    ~InstallAddonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Add-on name
                     * @return AddonName Add-on name
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置Add-on name
                     * @param _addonName Add-on name
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取Add-on version. If it is not specified, the latest version is installed by default.
                     * @return AddonVersion Add-on version. If it is not specified, the latest version is installed by default.
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置Add-on version. If it is not specified, the latest version is installed by default.
                     * @param _addonVersion Add-on version. If it is not specified, the latest version is installed by default.
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取Add-on parameters in a base64-encoded JSON string. You can query add-on parameters via `DescribeAddonValues`.
                     * @return RawValues Add-on parameters in a base64-encoded JSON string. You can query add-on parameters via `DescribeAddonValues`.
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置Add-on parameters in a base64-encoded JSON string. You can query add-on parameters via `DescribeAddonValues`.
                     * @param _rawValues Add-on parameters in a base64-encoded JSON string. You can query add-on parameters via `DescribeAddonValues`.
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Add-on name
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * Add-on version. If it is not specified, the latest version is installed by default.
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * Add-on parameters in a base64-encoded JSON string. You can query add-on parameters via `DescribeAddonValues`.
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_
