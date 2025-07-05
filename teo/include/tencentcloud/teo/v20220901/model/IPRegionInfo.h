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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_

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
                * IP location information query
                */
                class IPRegionInfo : public AbstractModel
                {
                public:
                    IPRegionInfo();
                    ~IPRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address, IPV4 or IPV6.
                     * @return IP IP address, IPV4 or IPV6.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address, IPV4 or IPV6.
                     * @param _iP IP address, IPV4 or IPV6.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Whether the IP belongs to an EdgeOne node. Valid values:
<li>yes: This IP belongs to an EdgeOne node;</li>
<li>no: This IP does not belong to an EdgeOne node.</li>
                     * @return IsEdgeOneIP Whether the IP belongs to an EdgeOne node. Valid values:
<li>yes: This IP belongs to an EdgeOne node;</li>
<li>no: This IP does not belong to an EdgeOne node.</li>
                     * 
                     */
                    std::string GetIsEdgeOneIP() const;

                    /**
                     * 设置Whether the IP belongs to an EdgeOne node. Valid values:
<li>yes: This IP belongs to an EdgeOne node;</li>
<li>no: This IP does not belong to an EdgeOne node.</li>
                     * @param _isEdgeOneIP Whether the IP belongs to an EdgeOne node. Valid values:
<li>yes: This IP belongs to an EdgeOne node;</li>
<li>no: This IP does not belong to an EdgeOne node.</li>
                     * 
                     */
                    void SetIsEdgeOneIP(const std::string& _isEdgeOneIP);

                    /**
                     * 判断参数 IsEdgeOneIP 是否已赋值
                     * @return IsEdgeOneIP 是否已赋值
                     * 
                     */
                    bool IsEdgeOneIPHasBeenSet() const;

                private:

                    /**
                     * IP address, IPV4 or IPV6.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Whether the IP belongs to an EdgeOne node. Valid values:
<li>yes: This IP belongs to an EdgeOne node;</li>
<li>no: This IP does not belong to an EdgeOne node.</li>
                     */
                    std::string m_isEdgeOneIP;
                    bool m_isEdgeOneIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_
