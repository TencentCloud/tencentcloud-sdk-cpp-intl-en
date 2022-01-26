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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINIP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IP information of CDN intermediate nodes
                */
                class OriginIp : public AbstractModel
                {
                public:
                    OriginIp();
                    ~OriginIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intermediate IP range/intermediate IP. The IP range information is returned by default.
                     * @return Ip Intermediate IP range/intermediate IP. The IP range information is returned by default.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Intermediate IP range/intermediate IP. The IP range information is returned by default.
                     * @param Ip Intermediate IP range/intermediate IP. The IP range information is returned by default.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * Intermediate IP range/intermediate IP. The IP range information is returned by default.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINIP_H_
