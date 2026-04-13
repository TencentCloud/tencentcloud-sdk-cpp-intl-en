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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_

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
                * RCE authentication option instance information.
                */
                class TCRCEOption : public AbstractModel
                {
                public:
                    TCRCEOption();
                    ~TCRCEOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel information.
                     * @return Channel Channel information.
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Channel information.
                     * @param _channel Channel information.
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Enabled regions for RCE Channel. currently optional value ranges from: <li>ap-beijing: north china (beijing);</li><li>ap-jakarta: southeast asia pacific (jakarta);</li><li>ap-singapore: southeast asia pacific (singapore);</li><li>eu-frankfurt: Europe (frankfurt);</li><li>na-siliconvalley: west us (silicon valley).</li>.
                     * @return Region Enabled regions for RCE Channel. currently optional value ranges from: <li>ap-beijing: north china (beijing);</li><li>ap-jakarta: southeast asia pacific (jakarta);</li><li>ap-singapore: southeast asia pacific (singapore);</li><li>eu-frankfurt: Europe (frankfurt);</li><li>na-siliconvalley: west us (silicon valley).</li>.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Enabled regions for RCE Channel. currently optional value ranges from: <li>ap-beijing: north china (beijing);</li><li>ap-jakarta: southeast asia pacific (jakarta);</li><li>ap-singapore: southeast asia pacific (singapore);</li><li>eu-frankfurt: Europe (frankfurt);</li><li>na-siliconvalley: west us (silicon valley).</li>.
                     * @param _region Enabled regions for RCE Channel. currently optional value ranges from: <li>ap-beijing: north china (beijing);</li><li>ap-jakarta: southeast asia pacific (jakarta);</li><li>ap-singapore: southeast asia pacific (singapore);</li><li>eu-frankfurt: Europe (frankfurt);</li><li>na-siliconvalley: west us (silicon valley).</li>.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Channel information.
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Enabled regions for RCE Channel. currently optional value ranges from: <li>ap-beijing: north china (beijing);</li><li>ap-jakarta: southeast asia pacific (jakarta);</li><li>ap-singapore: southeast asia pacific (singapore);</li><li>eu-frankfurt: Europe (frankfurt);</li><li>na-siliconvalley: west us (silicon valley).</li>.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_
