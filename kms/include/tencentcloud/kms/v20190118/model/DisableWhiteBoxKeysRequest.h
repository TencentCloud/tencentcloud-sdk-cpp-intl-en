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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEWHITEBOXKEYSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEWHITEBOXKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DisableWhiteBoxKeys request structure.
                */
                class DisableWhiteBoxKeysRequest : public AbstractModel
                {
                public:
                    DisableWhiteBoxKeysRequest();
                    ~DisableWhiteBoxKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of globally unique white-box key IDs. Note: you should make sure that all provided `KeyId` values are in valid format, unique, and actually exist. Up to 50 ones are allowed.
                     * @return KeyIds List of globally unique white-box key IDs. Note: you should make sure that all provided `KeyId` values are in valid format, unique, and actually exist. Up to 50 ones are allowed.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of globally unique white-box key IDs. Note: you should make sure that all provided `KeyId` values are in valid format, unique, and actually exist. Up to 50 ones are allowed.
                     * @param _keyIds List of globally unique white-box key IDs. Note: you should make sure that all provided `KeyId` values are in valid format, unique, and actually exist. Up to 50 ones are allowed.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * List of globally unique white-box key IDs. Note: you should make sure that all provided `KeyId` values are in valid format, unique, and actually exist. Up to 50 ones are allowed.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEWHITEBOXKEYSREQUEST_H_
