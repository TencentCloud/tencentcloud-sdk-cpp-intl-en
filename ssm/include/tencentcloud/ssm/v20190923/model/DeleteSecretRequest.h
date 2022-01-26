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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DeleteSecret request structure.
                */
                class DeleteSecretRequest : public AbstractModel
                {
                public:
                    DeleteSecretRequest();
                    ~DeleteSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the Secret to be deleted.
                     * @return SecretName Name of the Secret to be deleted.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Name of the Secret to be deleted.
                     * @param SecretName Name of the Secret to be deleted.
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Scheduled deletion time (in days), indicating the number of retention days for the secret. Value range: 0-30. If it is `0`, the secret is deleted immediately.
For an SSH key secret, this field can only be `0`.
                     * @return RecoveryWindowInDays Scheduled deletion time (in days), indicating the number of retention days for the secret. Value range: 0-30. If it is `0`, the secret is deleted immediately.
For an SSH key secret, this field can only be `0`.
                     */
                    uint64_t GetRecoveryWindowInDays() const;

                    /**
                     * 设置Scheduled deletion time (in days), indicating the number of retention days for the secret. Value range: 0-30. If it is `0`, the secret is deleted immediately.
For an SSH key secret, this field can only be `0`.
                     * @param RecoveryWindowInDays Scheduled deletion time (in days), indicating the number of retention days for the secret. Value range: 0-30. If it is `0`, the secret is deleted immediately.
For an SSH key secret, this field can only be `0`.
                     */
                    void SetRecoveryWindowInDays(const uint64_t& _recoveryWindowInDays);

                    /**
                     * 判断参数 RecoveryWindowInDays 是否已赋值
                     * @return RecoveryWindowInDays 是否已赋值
                     */
                    bool RecoveryWindowInDaysHasBeenSet() const;

                    /**
                     * 获取Specifies whether to delete the SSH key from both the secret and the SSH key list in the CVM console. This field is only valid for SSH key secrets. Valid values:
`True`: deletes SSH key from both the secret and SSH key list in the CVM console. Note that the deletion will fail if the SSH key is already bound to a CVM instance.
`False`: only deletes the SSH key information in the secret.
                     * @return CleanSSHKey Specifies whether to delete the SSH key from both the secret and the SSH key list in the CVM console. This field is only valid for SSH key secrets. Valid values:
`True`: deletes SSH key from both the secret and SSH key list in the CVM console. Note that the deletion will fail if the SSH key is already bound to a CVM instance.
`False`: only deletes the SSH key information in the secret.
                     */
                    bool GetCleanSSHKey() const;

                    /**
                     * 设置Specifies whether to delete the SSH key from both the secret and the SSH key list in the CVM console. This field is only valid for SSH key secrets. Valid values:
`True`: deletes SSH key from both the secret and SSH key list in the CVM console. Note that the deletion will fail if the SSH key is already bound to a CVM instance.
`False`: only deletes the SSH key information in the secret.
                     * @param CleanSSHKey Specifies whether to delete the SSH key from both the secret and the SSH key list in the CVM console. This field is only valid for SSH key secrets. Valid values:
`True`: deletes SSH key from both the secret and SSH key list in the CVM console. Note that the deletion will fail if the SSH key is already bound to a CVM instance.
`False`: only deletes the SSH key information in the secret.
                     */
                    void SetCleanSSHKey(const bool& _cleanSSHKey);

                    /**
                     * 判断参数 CleanSSHKey 是否已赋值
                     * @return CleanSSHKey 是否已赋值
                     */
                    bool CleanSSHKeyHasBeenSet() const;

                private:

                    /**
                     * Name of the Secret to be deleted.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Scheduled deletion time (in days), indicating the number of retention days for the secret. Value range: 0-30. If it is `0`, the secret is deleted immediately.
For an SSH key secret, this field can only be `0`.
                     */
                    uint64_t m_recoveryWindowInDays;
                    bool m_recoveryWindowInDaysHasBeenSet;

                    /**
                     * Specifies whether to delete the SSH key from both the secret and the SSH key list in the CVM console. This field is only valid for SSH key secrets. Valid values:
`True`: deletes SSH key from both the secret and SSH key list in the CVM console. Note that the deletion will fail if the SSH key is already bound to a CVM instance.
`False`: only deletes the SSH key information in the secret.
                     */
                    bool m_cleanSSHKey;
                    bool m_cleanSSHKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
