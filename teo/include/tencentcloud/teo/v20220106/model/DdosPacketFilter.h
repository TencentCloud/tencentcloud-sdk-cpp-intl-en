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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSFeaturesFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS feature filtering
                */
                class DdosPacketFilter : public AbstractModel
                {
                public:
                    DdosPacketFilter();
                    ~DdosPacketFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @return Switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @param _switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Array of objects in feature filtering configuration
                     * @return PacketFilter Array of objects in feature filtering configuration
                     * 
                     */
                    std::vector<DDoSFeaturesFilter> GetPacketFilter() const;

                    /**
                     * 设置Array of objects in feature filtering configuration
                     * @param _packetFilter Array of objects in feature filtering configuration
                     * 
                     */
                    void SetPacketFilter(const std::vector<DDoSFeaturesFilter>& _packetFilter);

                    /**
                     * 判断参数 PacketFilter 是否已赋值
                     * @return PacketFilter 是否已赋值
                     * 
                     */
                    bool PacketFilterHasBeenSet() const;

                private:

                    /**
                     * Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Array of objects in feature filtering configuration
                     */
                    std::vector<DDoSFeaturesFilter> m_packetFilter;
                    bool m_packetFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_
