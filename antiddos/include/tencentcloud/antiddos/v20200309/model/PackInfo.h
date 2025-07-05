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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_

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
                * Package information
                */
                class PackInfo : public AbstractModel
                {
                public:
                    PackInfo();
                    ~PackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Package type. Valid values:
`staticpack`: non-BGP package
`insurance`: guarantee package
]
                     * @return PackType Package type. Valid values:
`staticpack`: non-BGP package
`insurance`: guarantee package
]
                     * 
                     */
                    std::string GetPackType() const;

                    /**
                     * 设置Package type. Valid values:
`staticpack`: non-BGP package
`insurance`: guarantee package
]
                     * @param _packType Package type. Valid values:
`staticpack`: non-BGP package
`insurance`: guarantee package
]
                     * 
                     */
                    void SetPackType(const std::string& _packType);

                    /**
                     * 判断参数 PackType 是否已赋值
                     * @return PackType 是否已赋值
                     * 
                     */
                    bool PackTypeHasBeenSet() const;

                    /**
                     * 获取Package ID
                     * @return PackId Package ID
                     * 
                     */
                    std::string GetPackId() const;

                    /**
                     * 设置Package ID
                     * @param _packId Package ID
                     * 
                     */
                    void SetPackId(const std::string& _packId);

                    /**
                     * 判断参数 PackId 是否已赋值
                     * @return PackId 是否已赋值
                     * 
                     */
                    bool PackIdHasBeenSet() const;

                private:

                    /**
                     * Package type. Valid values:
`staticpack`: non-BGP package
`insurance`: guarantee package
]
                     */
                    std::string m_packType;
                    bool m_packTypeHasBeenSet;

                    /**
                     * Package ID
                     */
                    std::string m_packId;
                    bool m_packIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_
