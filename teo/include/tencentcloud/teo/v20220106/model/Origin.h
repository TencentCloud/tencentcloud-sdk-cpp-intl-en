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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGIN_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGIN_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Origin server configuration
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin-pull protocol.
`http`: Switch HTTPS requests to HTTP
`follow`: Follow the protocol of the request.
`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginPullProtocol Origin-pull protocol.
`http`: Switch HTTPS requests to HTTP
`follow`: Follow the protocol of the request.
`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol.
`http`: Switch HTTPS requests to HTTP
`follow`: Follow the protocol of the request.
`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginPullProtocol Origin-pull protocol.
`http`: Switch HTTPS requests to HTTP
`follow`: Follow the protocol of the request.
`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                private:

                    /**
                     * Origin-pull protocol.
`http`: Switch HTTPS requests to HTTP
`follow`: Follow the protocol of the request.
`https`: Switch HTTP requests to HTTPS. This only supports port 443 on the origin server.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGIN_H_
