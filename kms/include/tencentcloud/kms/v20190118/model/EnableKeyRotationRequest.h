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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_

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
                * EnableKeyRotation request structure.
                */
                class EnableKeyRotationRequest : public AbstractModel
                {
                public:
                    EnableKeyRotationRequest();
                    ~EnableKeyRotationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique CMK ID
                     * @return KeyId Unique CMK ID
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique CMK ID
                     * @param KeyId Unique CMK ID
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取The interval between each key rotation in days. Value range: 7 - 365 (default).
                     * @return RotateDays The interval between each key rotation in days. Value range: 7 - 365 (default).
                     */
                    uint64_t GetRotateDays() const;

                    /**
                     * 设置The interval between each key rotation in days. Value range: 7 - 365 (default).
                     * @param RotateDays The interval between each key rotation in days. Value range: 7 - 365 (default).
                     */
                    void SetRotateDays(const uint64_t& _rotateDays);

                    /**
                     * 判断参数 RotateDays 是否已赋值
                     * @return RotateDays 是否已赋值
                     */
                    bool RotateDaysHasBeenSet() const;

                private:

                    /**
                     * Unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * The interval between each key rotation in days. Value range: 7 - 365 (default).
                     */
                    uint64_t m_rotateDays;
                    bool m_rotateDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENABLEKEYROTATIONREQUEST_H_
