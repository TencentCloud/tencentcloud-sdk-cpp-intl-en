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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CMK attribute information
                */
                class KeyMetadata : public AbstractModel
                {
                public:
                    KeyMetadata();
                    ~KeyMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Globally unique CMK ID
                     * @return KeyId Globally unique CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique CMK ID
                     * @param _keyId Globally unique CMK ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Alias that makes a key more recognizable and understandable
                     * @return Alias Alias that makes a key more recognizable and understandable
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Alias that makes a key more recognizable and understandable
                     * @param _alias Alias that makes a key more recognizable and understandable
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Key creation time
                     * @return CreateTime Key creation time
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Key creation time
                     * @param _createTime Key creation time
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
                     * 获取CMK description
                     * @return Description CMK description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置CMK description
                     * @param _description CMK description
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
                     * 获取CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport, Archived.
                     * @return KeyState CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport, Archived.
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport, Archived.
                     * @param _keyState CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport, Archived.
                     * 
                     */
                    void SetKeyState(const std::string& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取CMK purpose. Valid values: `ENCRYPT_DECRYPT`, `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * @return KeyUsage CMK purpose. Valid values: `ENCRYPT_DECRYPT`, `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置CMK purpose. Valid values: `ENCRYPT_DECRYPT`, `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * @param _keyUsage CMK purpose. Valid values: `ENCRYPT_DECRYPT`, `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * @return Type CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * @param _type CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return CreatorUin Creator
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置Creator
                     * @param _creatorUin Creator
                     * 
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Whether key rotation is enabled
                     * @return KeyRotationEnabled Whether key rotation is enabled
                     * 
                     */
                    bool GetKeyRotationEnabled() const;

                    /**
                     * 设置Whether key rotation is enabled
                     * @param _keyRotationEnabled Whether key rotation is enabled
                     * 
                     */
                    void SetKeyRotationEnabled(const bool& _keyRotationEnabled);

                    /**
                     * 判断参数 KeyRotationEnabled 是否已赋值
                     * @return KeyRotationEnabled 是否已赋值
                     * 
                     */
                    bool KeyRotationEnabledHasBeenSet() const;

                    /**
                     * 获取CMK creator. The value of this parameter is `user` if the CMK is created by the user, or the corresponding service name if it is created automatically by an authorized Tencent Cloud service.
                     * @return Owner CMK creator. The value of this parameter is `user` if the CMK is created by the user, or the corresponding service name if it is created automatically by an authorized Tencent Cloud service.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置CMK creator. The value of this parameter is `user` if the CMK is created by the user, or the corresponding service name if it is created automatically by an authorized Tencent Cloud service.
                     * @param _owner CMK creator. The value of this parameter is `user` if the CMK is created by the user, or the corresponding service name if it is created automatically by an authorized Tencent Cloud service.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Time of next rotation if key rotation is enabled
                     * @return NextRotateTime Time of next rotation if key rotation is enabled
                     * 
                     */
                    uint64_t GetNextRotateTime() const;

                    /**
                     * 设置Time of next rotation if key rotation is enabled
                     * @param _nextRotateTime Time of next rotation if key rotation is enabled
                     * 
                     */
                    void SetNextRotateTime(const uint64_t& _nextRotateTime);

                    /**
                     * 判断参数 NextRotateTime 是否已赋值
                     * @return NextRotateTime 是否已赋值
                     * 
                     */
                    bool NextRotateTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled deletion time
                     * @return DeletionDate Scheduled deletion time
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置Scheduled deletion time
                     * @param _deletionDate Scheduled deletion time
                     * 
                     */
                    void SetDeletionDate(const uint64_t& _deletionDate);

                    /**
                     * 判断参数 DeletionDate 是否已赋值
                     * @return DeletionDate 是否已赋值
                     * 
                     */
                    bool DeletionDateHasBeenSet() const;

                    /**
                     * 获取CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Origin CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _origin CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取It's valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidTo It's valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置It's valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validTo It's valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValidTo(const uint64_t& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                    /**
                     * 获取Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @return ResourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @param _resourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HsmClusterId ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _hsmClusterId ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * Globally unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Alias that makes a key more recognizable and understandable
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Key creation time
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * CMK description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport, Archived.
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * CMK purpose. Valid values: `ENCRYPT_DECRYPT`, `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Creator
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Whether key rotation is enabled
                     */
                    bool m_keyRotationEnabled;
                    bool m_keyRotationEnabledHasBeenSet;

                    /**
                     * CMK creator. The value of this parameter is `user` if the CMK is created by the user, or the corresponding service name if it is created automatically by an authorized Tencent Cloud service.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Time of next rotation if key rotation is enabled
                     */
                    uint64_t m_nextRotateTime;
                    bool m_nextRotateTimeHasBeenSet;

                    /**
                     * Scheduled deletion time
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * It's valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * ID of the HSM cluster. This field is only valid for Exclusive and Managed KMS instances.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
