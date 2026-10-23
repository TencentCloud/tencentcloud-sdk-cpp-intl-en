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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Advanced origin optimization config.
                */
                class AdvancedOriginRoutingParameters : public AbstractModel
                {
                public:
                    AdvancedOriginRoutingParameters();
                    ~AdvancedOriginRoutingParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Origin optimization direction. Valid values:</p><li>MainlandChinaAndGlobalAdaptive: Self adaptive. The domain name must enable "smart acceleration" simultaneously to take effect. EdgeOne will automatically match the optimal origin-pull optimization direction based on the actual geographic location of the client and origin server, without the need to manually specify. For example, if www.example.com enables "advanced origin optimization" but "smart acceleration" is turned off or only partial match conditions are enabled, "advanced origin optimization" will not be effective.</li>
                     * @return Direction <p>Origin optimization direction. Valid values:</p><li>MainlandChinaAndGlobalAdaptive: Self adaptive. The domain name must enable "smart acceleration" simultaneously to take effect. EdgeOne will automatically match the optimal origin-pull optimization direction based on the actual geographic location of the client and origin server, without the need to manually specify. For example, if www.example.com enables "advanced origin optimization" but "smart acceleration" is turned off or only partial match conditions are enabled, "advanced origin optimization" will not be effective.</li>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>Origin optimization direction. Valid values:</p><li>MainlandChinaAndGlobalAdaptive: Self adaptive. The domain name must enable "smart acceleration" simultaneously to take effect. EdgeOne will automatically match the optimal origin-pull optimization direction based on the actual geographic location of the client and origin server, without the need to manually specify. For example, if www.example.com enables "advanced origin optimization" but "smart acceleration" is turned off or only partial match conditions are enabled, "advanced origin optimization" will not be effective.</li>
                     * @param _direction <p>Origin optimization direction. Valid values:</p><li>MainlandChinaAndGlobalAdaptive: Self adaptive. The domain name must enable "smart acceleration" simultaneously to take effect. EdgeOne will automatically match the optimal origin-pull optimization direction based on the actual geographic location of the client and origin server, without the need to manually specify. For example, if www.example.com enables "advanced origin optimization" but "smart acceleration" is turned off or only partial match conditions are enabled, "advanced origin optimization" will not be effective.</li>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>Origin optimization direction. Valid values:</p><li>MainlandChinaAndGlobalAdaptive: Self adaptive. The domain name must enable "smart acceleration" simultaneously to take effect. EdgeOne will automatically match the optimal origin-pull optimization direction based on the actual geographic location of the client and origin server, without the need to manually specify. For example, if www.example.com enables "advanced origin optimization" but "smart acceleration" is turned off or only partial match conditions are enabled, "advanced origin optimization" will not be effective.</li>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINROUTINGPARAMETERS_H_
