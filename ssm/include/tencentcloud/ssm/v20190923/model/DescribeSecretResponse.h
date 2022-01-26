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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_

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
                * DescribeSecret response structure.
                */
                class DescribeSecretResponse : public AbstractModel
                {
                public:
                    DescribeSecretResponse();
                    ~DescribeSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the Secret.
                     * @return SecretName Name of the Secret.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Description of the Secret.
                     * @return Description Description of the Secret.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取ID of the KMS CMK used for encryption.
                     * @return KmsKeyId ID of the KMS CMK used for encryption.
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Creator UIN.
                     * @return CreateUin Creator UIN.
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     * @return Status Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Deletion time, formatted as a Unix timestamp. For a Secret that is not in `PendingDelete` status, this value is 0.
                     * @return DeleteTime Deletion time, formatted as a Unix timestamp. For a Secret that is not in `PendingDelete` status, this value is 0.
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取`0`: user-defined secret; `1`: database credential; `2`: SSH key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretType `0`: user-defined secret; `1`: database credential; `2`: SSH key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Tencent Cloud service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud service instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceID Tencent Cloud service instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceID() const;

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取Whether to enable rotation. `True`: enable rotation; `False`: disable rotation.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RotationStatus Whether to enable rotation. `True`: enable rotation; `False`: disable rotation.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetRotationStatus() const;

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取Rotation frequency in days by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RotationFrequency Rotation frequency in days by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     */
                    bool RotationFrequencyHasBeenSet() const;

                    /**
                     * 获取Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectID Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedInstanceIDs ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAssociatedInstanceIDs() const;

                    /**
                     * 判断参数 AssociatedInstanceIDs 是否已赋值
                     * @return AssociatedInstanceIDs 是否已赋值
                     */
                    bool AssociatedInstanceIDsHasBeenSet() const;

                    /**
                     * 获取UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetUin UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * Name of the Secret.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Description of the Secret.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ID of the KMS CMK used for encryption.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Creator UIN.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deletion time, formatted as a Unix timestamp. For a Secret that is not in `PendingDelete` status, this value is 0.
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * `0`: user-defined secret; `1`: database credential; `2`: SSH key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * Tencent Cloud service name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Tencent Cloud service instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * Whether to enable rotation. `True`: enable rotation; `False`: disable rotation.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * Rotation frequency in days by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_associatedInstanceIDs;
                    bool m_associatedInstanceIDsHasBeenSet;

                    /**
                     * UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_
