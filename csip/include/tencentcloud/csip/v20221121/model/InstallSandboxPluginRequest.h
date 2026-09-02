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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * InstallSandboxPlugin request structure.
                */
                class InstallSandboxPluginRequest : public AbstractModel
                {
                public:
                    InstallSandboxPluginRequest();
                    ~InstallSandboxPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * @return BelongAssetType Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * @param _belongAssetType Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取Installation target range
Input parameter limits: If EffectType is INCLUDE, EffectAssets must not be empty. If EffectType is EXCLUDE, EffectAssets can be an empty array (meaning deployment to all AI Agent assets).
                     * @return EffectScope Installation target range
Input parameter limits: If EffectType is INCLUDE, EffectAssets must not be empty. If EffectType is EXCLUDE, EffectAssets can be an empty array (meaning deployment to all AI Agent assets).
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置Installation target range
Input parameter limits: If EffectType is INCLUDE, EffectAssets must not be empty. If EffectType is EXCLUDE, EffectAssets can be an empty array (meaning deployment to all AI Agent assets).
                     * @param _effectScope Installation target range
Input parameter limits: If EffectType is INCLUDE, EffectAssets must not be empty. If EffectType is EXCLUDE, EffectAssets can be an empty array (meaning deployment to all AI Agent assets).
                     * 
                     */
                    void SetEffectScope(const TrafficSandboxEffectScope& _effectScope);

                    /**
                     * 判断参数 EffectScope 是否已赋值
                     * @return EffectScope 是否已赋值
                     * 
                     */
                    bool EffectScopeHasBeenSet() const;

                private:

                    /**
                     * Asset type to which it belongs
Enumeration values:
HOST: HOST
CONTAINER: Container
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * Installation target range
Input parameter limits: If EffectType is INCLUDE, EffectAssets must not be empty. If EffectType is EXCLUDE, EffectAssets can be an empty array (meaning deployment to all AI Agent assets).
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_
