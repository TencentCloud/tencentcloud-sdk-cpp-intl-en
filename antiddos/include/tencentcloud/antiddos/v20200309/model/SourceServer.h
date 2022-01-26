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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Real server details
                */
                class SourceServer : public AbstractModel
                {
                public:
                    SourceServer();
                    ~SourceServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Types of the real server address, such as IP or domain name.
                     * @return RealServer Types of the real server address, such as IP or domain name.
                     */
                    std::string GetRealServer() const;

                    /**
                     * 设置Types of the real server address, such as IP or domain name.
                     * @param RealServer Types of the real server address, such as IP or domain name.
                     */
                    void SetRealServer(const std::string& _realServer);

                    /**
                     * 判断参数 RealServer 是否已赋值
                     * @return RealServer 是否已赋值
                     */
                    bool RealServerHasBeenSet() const;

                    /**
                     * 获取Types of the real server address:
`1`: domain name
`2`: IP
]
                     * @return RsType Types of the real server address:
`1`: domain name
`2`: IP
]
                     */
                    int64_t GetRsType() const;

                    /**
                     * 设置Types of the real server address:
`1`: domain name
`2`: IP
]
                     * @param RsType Types of the real server address:
`1`: domain name
`2`: IP
]
                     */
                    void SetRsType(const int64_t& _rsType);

                    /**
                     * 判断参数 RsType 是否已赋值
                     * @return RsType 是否已赋值
                     */
                    bool RsTypeHasBeenSet() const;

                    /**
                     * 获取Forward weight of the real server. Value range: 1–100.
                     * @return Weight Forward weight of the real server. Value range: 1–100.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Forward weight of the real server. Value range: 1–100.
                     * @param Weight Forward weight of the real server. Value range: 1–100.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Types of the real server address, such as IP or domain name.
                     */
                    std::string m_realServer;
                    bool m_realServerHasBeenSet;

                    /**
                     * Types of the real server address:
`1`: domain name
`2`: IP
]
                     */
                    int64_t m_rsType;
                    bool m_rsTypeHasBeenSet;

                    /**
                     * Forward weight of the real server. Value range: 1–100.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_
