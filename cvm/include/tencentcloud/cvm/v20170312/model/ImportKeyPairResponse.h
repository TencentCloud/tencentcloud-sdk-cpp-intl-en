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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ImportKeyPair response structure.
                */
                class ImportKeyPairResponse : public AbstractModel
                {
                public:
                    ImportKeyPairResponse();
                    ~ImportKeyPairResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair ID
                     * @return KeyId Key pair ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Key pair ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTKEYPAIRRESPONSE_H_
