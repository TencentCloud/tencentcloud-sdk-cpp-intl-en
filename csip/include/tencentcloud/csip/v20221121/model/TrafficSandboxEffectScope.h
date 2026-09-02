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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxAssetScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Effective scope of the traffic sandbox rule
                */
                class TrafficSandboxEffectScope : public AbstractModel
                {
                public:
                    TrafficSandboxEffectScope();
                    ~TrafficSandboxEffectScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Effective mode
Enumeration values:
INCLUDE: specified asset takes effect
EXCLUDE: Remove the specified asset (all take effect by default)
                     * @return EffectType Effective mode
Enumeration values:
INCLUDE: specified asset takes effect
EXCLUDE: Remove the specified asset (all take effect by default)
                     * 
                     */
                    std::string GetEffectType() const;

                    /**
                     * 设置Effective mode
Enumeration values:
INCLUDE: specified asset takes effect
EXCLUDE: Remove the specified asset (all take effect by default)
                     * @param _effectType Effective mode
Enumeration values:
INCLUDE: specified asset takes effect
EXCLUDE: Remove the specified asset (all take effect by default)
                     * 
                     */
                    void SetEffectType(const std::string& _effectType);

                    /**
                     * 判断参数 EffectType 是否已赋值
                     * @return EffectType 是否已赋值
                     * 
                     */
                    bool EffectTypeHasBeenSet() const;

                    /**
                     * 获取List of effective assets
Input parameter limits: required and non-empty when EffectType=INCLUDE; an empty array can be passed when EffectType=EXCLUDE.
                     * @return EffectAssets List of effective assets
Input parameter limits: required and non-empty when EffectType=INCLUDE; an empty array can be passed when EffectType=EXCLUDE.
                     * 
                     */
                    std::vector<TrafficSandboxAssetScope> GetEffectAssets() const;

                    /**
                     * 设置List of effective assets
Input parameter limits: required and non-empty when EffectType=INCLUDE; an empty array can be passed when EffectType=EXCLUDE.
                     * @param _effectAssets List of effective assets
Input parameter limits: required and non-empty when EffectType=INCLUDE; an empty array can be passed when EffectType=EXCLUDE.
                     * 
                     */
                    void SetEffectAssets(const std::vector<TrafficSandboxAssetScope>& _effectAssets);

                    /**
                     * 判断参数 EffectAssets 是否已赋值
                     * @return EffectAssets 是否已赋值
                     * 
                     */
                    bool EffectAssetsHasBeenSet() const;

                private:

                    /**
                     * Effective mode
Enumeration values:
INCLUDE: specified asset takes effect
EXCLUDE: Remove the specified asset (all take effect by default)
                     */
                    std::string m_effectType;
                    bool m_effectTypeHasBeenSet;

                    /**
                     * List of effective assets
Input parameter limits: required and non-empty when EffectType=INCLUDE; an empty array can be passed when EffectType=EXCLUDE.
                     */
                    std::vector<TrafficSandboxAssetScope> m_effectAssets;
                    bool m_effectAssetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_
