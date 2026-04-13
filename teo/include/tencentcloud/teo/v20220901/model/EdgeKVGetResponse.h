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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/KeyValuePair.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EdgeKVGet response structure.
                */
                class EdgeKVGetResponse : public AbstractModel
                {
                public:
                    EdgeKVGetResponse();
                    ~EdgeKVGetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key-value pair data list. Return results sequentially in the order of input Keys. If a key does not exist, the corresponding Value Field returns empty string.
                     * @return Data Key-value pair data list. Return results sequentially in the order of input Keys. If a key does not exist, the corresponding Value Field returns empty string.
                     * 
                     */
                    std::vector<KeyValuePair> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Key-value pair data list. Return results sequentially in the order of input Keys. If a key does not exist, the corresponding Value Field returns empty string.
                     */
                    std::vector<KeyValuePair> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETRESPONSE_H_
