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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_ENABLEHASHREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_ENABLEHASHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * EnableHash request structure.
                */
                class EnableHashRequest : public AbstractModel
                {
                public:
                    EnableHashRequest();
                    ~EnableHashRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CNS address of the contract.
                     * @return Hash The CNS address of the contract.
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 设置The CNS address of the contract.
                     * @param _hash The CNS address of the contract.
                     * 
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                private:

                    /**
                     * The CNS address of the contract.
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_ENABLEHASHREQUEST_H_
