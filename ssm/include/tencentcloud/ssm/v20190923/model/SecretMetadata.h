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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Basic information of the Secret.
                */
                class SecretMetadata : public AbstractModel
                {
                public:
                    SecretMetadata();
                    ~SecretMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Credential name
                     * @return SecretName Credential name
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Credential name
                     * @param _secretName Credential name
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Credential description
                     * @return Description Credential description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Credential description
                     * @param _description Credential description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取KMS `KeyId` used to encrypt the credential
                     * @return KmsKeyId KMS `KeyId` used to encrypt the credential
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置KMS `KeyId` used to encrypt the credential
                     * @param _kmsKeyId KMS `KeyId` used to encrypt the credential
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Creator UIN
                     * @return CreateUin Creator UIN
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator UIN
                     * @param _createUin Creator UIN
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     * @return Status Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     * @param _status Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Credential deletion date, which takes effect for credentials in `PendingDelete` status and is in UNIX timestamp format
                     * @return DeleteTime Credential deletion date, which takes effect for credentials in `PendingDelete` status and is in UNIX timestamp format
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 设置Credential deletion date, which takes effect for credentials in `PendingDelete` status and is in UNIX timestamp format
                     * @param _deleteTime Credential deletion date, which takes effect for credentials in `PendingDelete` status and is in UNIX timestamp format
                     * 
                     */
                    void SetDeleteTime(const uint64_t& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取Credential creation time in UNIX timestamp format
                     * @return CreateTime Credential creation time in UNIX timestamp format
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Credential creation time in UNIX timestamp format
                     * @param _createTime Credential creation time in UNIX timestamp format
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Type of the KMS CMK used to encrypt the credential. `DEFAULT` represents the default key created by Secrets Manager, and `CUSTOMER` represents the user-specified key
                     * @return KmsKeyType Type of the KMS CMK used to encrypt the credential. `DEFAULT` represents the default key created by Secrets Manager, and `CUSTOMER` represents the user-specified key
                     * 
                     */
                    std::string GetKmsKeyType() const;

                    /**
                     * 设置Type of the KMS CMK used to encrypt the credential. `DEFAULT` represents the default key created by Secrets Manager, and `CUSTOMER` represents the user-specified key
                     * @param _kmsKeyType Type of the KMS CMK used to encrypt the credential. `DEFAULT` represents the default key created by Secrets Manager, and `CUSTOMER` represents the user-specified key
                     * 
                     */
                    void SetKmsKeyType(const std::string& _kmsKeyType);

                    /**
                     * 判断参数 KmsKeyType 是否已赋值
                     * @return KmsKeyType 是否已赋值
                     * 
                     */
                    bool KmsKeyTypeHasBeenSet() const;

                    /**
                     * 获取1: enable rotation; 0: disable rotation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RotationStatus 1: enable rotation; 0: disable rotation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRotationStatus() const;

                    /**
                     * 设置1: enable rotation; 0: disable rotation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rotationStatus 1: enable rotation; 0: disable rotation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRotationStatus(const int64_t& _rotationStatus);

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     * 
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取Start time of the next rotation in UNIX timestamp format
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NextRotationTime Start time of the next rotation in UNIX timestamp format
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNextRotationTime() const;

                    /**
                     * 设置Start time of the next rotation in UNIX timestamp format
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _nextRotationTime Start time of the next rotation in UNIX timestamp format
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNextRotationTime(const uint64_t& _nextRotationTime);

                    /**
                     * 判断参数 NextRotationTime 是否已赋值
                     * @return NextRotationTime 是否已赋值
                     * 
                     */
                    bool NextRotationTimeHasBeenSet() const;

                    /**
                     * 获取`0`: user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretType `0`: user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 设置`0`: user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _secretType `0`: user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretType(const int64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud service name, which takes effect only when `SecretType` is 1 (Tencent Cloud service credential)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Tencent Cloud service name, which takes effect only when `SecretType` is 1 (Tencent Cloud service credential)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Tencent Cloud service name, which takes effect only when `SecretType` is 1 (Tencent Cloud service credential)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _productName Tencent Cloud service name, which takes effect only when `SecretType` is 1 (Tencent Cloud service credential)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceName Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _resourceName Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProjectID Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _projectID Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AssociatedInstanceIDs ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIDs() const;

                    /**
                     * 设置ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _associatedInstanceIDs ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociatedInstanceIDs(const std::vector<std::string>& _associatedInstanceIDs);

                    /**
                     * 判断参数 AssociatedInstanceIDs 是否已赋值
                     * @return AssociatedInstanceIDs 是否已赋值
                     * 
                     */
                    bool AssociatedInstanceIDsHasBeenSet() const;

                    /**
                     * 获取UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetUin UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetUin UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取Rotation frequency in days. It takes effect when the rotation feature is enabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RotationFrequency Rotation frequency in days. It takes effect when the rotation feature is enabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置Rotation frequency in days. It takes effect when the rotation feature is enabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rotationFrequency Rotation frequency in days. It takes effect when the rotation feature is enabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRotationFrequency(const int64_t& _rotationFrequency);

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     * 
                     */
                    bool RotationFrequencyHasBeenSet() const;

                    /**
                     * 获取ID of Tencent Cloud resource corresponding with the Secret. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceID ID of Tencent Cloud resource corresponding with the Secret. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置ID of Tencent Cloud resource corresponding with the Secret. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceID ID of Tencent Cloud resource corresponding with the Secret. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取The rotation start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RotationBeginTime The rotation start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置The rotation start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rotationBeginTime The rotation start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                private:

                    /**
                     * Credential name
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Credential description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * KMS `KeyId` used to encrypt the credential
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Credential status: Enabled, Disabled, PendingDelete, Creating, Failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Credential deletion date, which takes effect for credentials in `PendingDelete` status and is in UNIX timestamp format
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * Credential creation time in UNIX timestamp format
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Type of the KMS CMK used to encrypt the credential. `DEFAULT` represents the default key created by Secrets Manager, and `CUSTOMER` represents the user-specified key
                     */
                    std::string m_kmsKeyType;
                    bool m_kmsKeyTypeHasBeenSet;

                    /**
                     * 1: enable rotation; 0: disable rotation
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * Start time of the next rotation in UNIX timestamp format
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_nextRotationTime;
                    bool m_nextRotationTimeHasBeenSet;

                    /**
                     * `0`: user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * Tencent Cloud service name, which takes effect only when `SecretType` is 1 (Tencent Cloud service credential)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Secret name. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Project ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * ID of the CVM instance associated with the SSH key. ID. This field is only valid when the `SecretType` is set to `2` (SSH key secret).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_associatedInstanceIDs;
                    bool m_associatedInstanceIDsHasBeenSet;

                    /**
                     * UIN of the Tencent Cloud API key. This field is valid when the secret type is Tencent Cloud API key secret.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Rotation frequency in days. It takes effect when the rotation feature is enabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * ID of Tencent Cloud resource corresponding with the Secret. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * The rotation start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_SECRETMETADATA_H_
