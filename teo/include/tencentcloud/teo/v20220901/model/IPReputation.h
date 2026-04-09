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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPReputationGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP intelligence library (formerly client profile analysis) configuration.
                */
                class IPReputation : public AbstractModel
                {
                public:
                    IPReputation();
                    ~IPReputation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP intelligence library (formerly client profile analysis). valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * @return Enabled IP intelligence library (formerly client profile analysis). valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置IP intelligence library (formerly client profile analysis). valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * @param _enabled IP intelligence library (formerly client profile analysis). valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取IP intelligence library (formerly client profile analysis) configuration content.
                     * @return IPReputationGroup IP intelligence library (formerly client profile analysis) configuration content.
                     * 
                     */
                    IPReputationGroup GetIPReputationGroup() const;

                    /**
                     * 设置IP intelligence library (formerly client profile analysis) configuration content.
                     * @param _iPReputationGroup IP intelligence library (formerly client profile analysis) configuration content.
                     * 
                     */
                    void SetIPReputationGroup(const IPReputationGroup& _iPReputationGroup);

                    /**
                     * 判断参数 IPReputationGroup 是否已赋值
                     * @return IPReputationGroup 是否已赋值
                     * 
                     */
                    bool IPReputationGroupHasBeenSet() const;

                private:

                    /**
                     * IP intelligence library (formerly client profile analysis). valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * IP intelligence library (formerly client profile analysis) configuration content.
                     */
                    IPReputationGroup m_iPReputationGroup;
                    bool m_iPReputationGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_
