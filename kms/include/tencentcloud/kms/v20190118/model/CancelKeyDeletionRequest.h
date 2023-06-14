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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CANCELKEYDELETIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CANCELKEYDELETIONREQUEST_H_

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
                * CancelKeyDeletion request structure.
                */
                class CancelKeyDeletionRequest : public AbstractModel
                {
                public:
                    CancelKeyDeletionRequest();
                    ~CancelKeyDeletionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the CMK for which to cancel schedule deletion
                     * @return KeyId Unique ID of the CMK for which to cancel schedule deletion
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique ID of the CMK for which to cancel schedule deletion
                     * @param _keyId Unique ID of the CMK for which to cancel schedule deletion
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the CMK for which to cancel schedule deletion
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CANCELKEYDELETIONREQUEST_H_
