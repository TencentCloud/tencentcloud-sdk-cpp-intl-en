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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEKEYPAIRREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateKeyPair request structure.
                */
                class CreateKeyPairRequest : public AbstractModel
                {
                public:
                    CreateKeyPairRequest();
                    ~CreateKeyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair name, which can contain up to 25 digits, letters, and underscores.
                     * @return KeyName Key pair name, which can contain up to 25 digits, letters, and underscores.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置Key pair name, which can contain up to 25 digits, letters, and underscores.
                     * @param _keyName Key pair name, which can contain up to 25 digits, letters, and underscores.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                private:

                    /**
                     * Key pair name, which can contain up to 25 digits, letters, and underscores.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEKEYPAIRREQUEST_H_
