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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/ProductPrivilegeUnit.h>
#include <tencentcloud/ssm/v20190923/model/Tag.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * CreateProductSecret request structure.
                */
                class CreateProductSecretRequest : public AbstractModel
                {
                public:
                    CreateProductSecretRequest();
                    ~CreateProductSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Credential name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens, and underscores and must begin with a letter or digit.
                     * @return SecretName Credential name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens, and underscores and must begin with a letter or digit.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Credential name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens, and underscores and must begin with a letter or digit.
                     * @param _secretName Credential name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens, and underscores and must begin with a letter or digit.
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
                     * 获取Prefix of the user account name, which is specified by you and can contain up to 8 characters.
Supported character sets include:
Digits: [0, 9].
Lowercase letters: [a, z].
Uppercase letters: [A, Z].
Special symbols: underscore.
The prefix must begin with a letter.
                     * @return UserNamePrefix Prefix of the user account name, which is specified by you and can contain up to 8 characters.
Supported character sets include:
Digits: [0, 9].
Lowercase letters: [a, z].
Uppercase letters: [A, Z].
Special symbols: underscore.
The prefix must begin with a letter.
                     * 
                     */
                    std::string GetUserNamePrefix() const;

                    /**
                     * 设置Prefix of the user account name, which is specified by you and can contain up to 8 characters.
Supported character sets include:
Digits: [0, 9].
Lowercase letters: [a, z].
Uppercase letters: [A, Z].
Special symbols: underscore.
The prefix must begin with a letter.
                     * @param _userNamePrefix Prefix of the user account name, which is specified by you and can contain up to 8 characters.
Supported character sets include:
Digits: [0, 9].
Lowercase letters: [a, z].
Uppercase letters: [A, Z].
Special symbols: underscore.
The prefix must begin with a letter.
                     * 
                     */
                    void SetUserNamePrefix(const std::string& _userNamePrefix);

                    /**
                     * 判断参数 UserNamePrefix 是否已赋值
                     * @return UserNamePrefix 是否已赋值
                     * 
                     */
                    bool UserNamePrefixHasBeenSet() const;

                    /**
                     * 获取Name of the Tencent Cloud service bound to the credential, such as `Mysql`. The `DescribeSupportedProducts` API can be used to get the names of the supported Tencent Cloud services.
                     * @return ProductName Name of the Tencent Cloud service bound to the credential, such as `Mysql`. The `DescribeSupportedProducts` API can be used to get the names of the supported Tencent Cloud services.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Name of the Tencent Cloud service bound to the credential, such as `Mysql`. The `DescribeSupportedProducts` API can be used to get the names of the supported Tencent Cloud services.
                     * @param _productName Name of the Tencent Cloud service bound to the credential, such as `Mysql`. The `DescribeSupportedProducts` API can be used to get the names of the supported Tencent Cloud services.
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
                     * 获取Tencent Cloud service instance ID.
                     * @return InstanceID Tencent Cloud service instance ID.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Tencent Cloud service instance ID.
                     * @param _instanceID Tencent Cloud service instance ID.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Domain name of the account in the form of IP. You can enter `%`.
                     * @return Domains Domain name of the account in the form of IP. You can enter `%`.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Domain name of the account in the form of IP. You can enter `%`.
                     * @param _domains Domain name of the account in the form of IP. You can enter `%`.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取List of permissions that need to be granted when the credential is bound to a Tencent Cloud service.
                     * @return PrivilegesList List of permissions that need to be granted when the credential is bound to a Tencent Cloud service.
                     * 
                     */
                    std::vector<ProductPrivilegeUnit> GetPrivilegesList() const;

                    /**
                     * 设置List of permissions that need to be granted when the credential is bound to a Tencent Cloud service.
                     * @param _privilegesList List of permissions that need to be granted when the credential is bound to a Tencent Cloud service.
                     * 
                     */
                    void SetPrivilegesList(const std::vector<ProductPrivilegeUnit>& _privilegesList);

                    /**
                     * 判断参数 PrivilegesList 是否已赋值
                     * @return PrivilegesList 是否已赋值
                     * 
                     */
                    bool PrivilegesListHasBeenSet() const;

                    /**
                     * 获取Description, which is used to describe the purpose in detail and can contain up to 2,048 bytes.
                     * @return Description Description, which is used to describe the purpose in detail and can contain up to 2,048 bytes.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description, which is used to describe the purpose in detail and can contain up to 2,048 bytes.
                     * @param _description Description, which is used to describe the purpose in detail and can contain up to 2,048 bytes.
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
                     * 获取Specifies the KMS CMK that encrypts the credential.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * @return KmsKeyId Specifies the KMS CMK that encrypts the credential.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Specifies the KMS CMK that encrypts the credential.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     * @param _kmsKeyId Specifies the KMS CMK that encrypts the credential.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
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
                     * 获取List of tags.
                     * @return Tags List of tags.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags.
                     * @param _tags List of tags.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取User-Defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `True`, this parameter is required.
                     * @return RotationBeginTime User-Defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `True`, this parameter is required.
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置User-Defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `True`, this parameter is required.
                     * @param _rotationBeginTime User-Defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `True`, this parameter is required.
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable rotation
True - enable
False - do not enable
If this parameter is not specified, `False` will be used by default.
                     * @return EnableRotation Specifies whether to enable rotation
True - enable
False - do not enable
If this parameter is not specified, `False` will be used by default.
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置Specifies whether to enable rotation
True - enable
False - do not enable
If this parameter is not specified, `False` will be used by default.
                     * @param _enableRotation Specifies whether to enable rotation
True - enable
False - do not enable
If this parameter is not specified, `False` will be used by default.
                     * 
                     */
                    void SetEnableRotation(const bool& _enableRotation);

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取Rotation frequency in days. Default value: 1 day.
                     * @return RotationFrequency Rotation frequency in days. Default value: 1 day.
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置Rotation frequency in days. Default value: 1 day.
                     * @param _rotationFrequency Rotation frequency in days. Default value: 1 day.
                     * 
                     */
                    void SetRotationFrequency(const int64_t& _rotationFrequency);

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     * 
                     */
                    bool RotationFrequencyHasBeenSet() const;

                private:

                    /**
                     * Credential name, which must be unique in the same region. It can contain 128 bytes of letters, digits, hyphens, and underscores and must begin with a letter or digit.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Prefix of the user account name, which is specified by you and can contain up to 8 characters.
Supported character sets include:
Digits: [0, 9].
Lowercase letters: [a, z].
Uppercase letters: [A, Z].
Special symbols: underscore.
The prefix must begin with a letter.
                     */
                    std::string m_userNamePrefix;
                    bool m_userNamePrefixHasBeenSet;

                    /**
                     * Name of the Tencent Cloud service bound to the credential, such as `Mysql`. The `DescribeSupportedProducts` API can be used to get the names of the supported Tencent Cloud services.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Tencent Cloud service instance ID.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Domain name of the account in the form of IP. You can enter `%`.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * List of permissions that need to be granted when the credential is bound to a Tencent Cloud service.
                     */
                    std::vector<ProductPrivilegeUnit> m_privilegesList;
                    bool m_privilegesListHasBeenSet;

                    /**
                     * Description, which is used to describe the purpose in detail and can contain up to 2,048 bytes.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Specifies the KMS CMK that encrypts the credential.
If this parameter is left empty, the CMK created by Secrets Manager by default will be used for encryption.
You can also specify a custom KMS CMK created in the same region for encryption.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * List of tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * User-Defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `True`, this parameter is required.
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                    /**
                     * Specifies whether to enable rotation
True - enable
False - do not enable
If this parameter is not specified, `False` will be used by default.
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * Rotation frequency in days. Default value: 1 day.
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATEPRODUCTSECRETREQUEST_H_
