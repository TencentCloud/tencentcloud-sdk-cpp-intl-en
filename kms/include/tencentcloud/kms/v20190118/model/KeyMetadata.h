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
                     * 获取
                     * @return KeyId 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置
                     * @param KeyId 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Alias 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置
                     * @param Alias 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateTime 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置
                     * @param CreateTime 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Description 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param Description 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport.
                     * @return KeyState CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport.
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport.
                     * @param KeyState CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport.
                     */
                    void SetKeyState(const std::string& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取CMK purpose. Valid values: ENCRYPT_DECRYPT, ASYMMETRIC_DECRYPT_RSA_2048, ASYMMETRIC_DECRYPT_SM2
                     * @return KeyUsage CMK purpose. Valid values: ENCRYPT_DECRYPT, ASYMMETRIC_DECRYPT_RSA_2048, ASYMMETRIC_DECRYPT_SM2
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置CMK purpose. Valid values: ENCRYPT_DECRYPT, ASYMMETRIC_DECRYPT_RSA_2048, ASYMMETRIC_DECRYPT_SM2
                     * @param KeyUsage CMK purpose. Valid values: ENCRYPT_DECRYPT, ASYMMETRIC_DECRYPT_RSA_2048, ASYMMETRIC_DECRYPT_SM2
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * @return Type CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     */
                    int64_t GetType() const;

                    /**
                     * 设置CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     * @param Type CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreatorUin 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置
                     * @param CreatorUin 
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyRotationEnabled 
                     */
                    bool GetKeyRotationEnabled() const;

                    /**
                     * 设置
                     * @param KeyRotationEnabled 
                     */
                    void SetKeyRotationEnabled(const bool& _keyRotationEnabled);

                    /**
                     * 判断参数 KeyRotationEnabled 是否已赋值
                     * @return KeyRotationEnabled 是否已赋值
                     */
                    bool KeyRotationEnabledHasBeenSet() const;

                    /**
                     * 获取
                     * @return Owner 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置
                     * @param Owner 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取
                     * @return NextRotateTime 
                     */
                    uint64_t GetNextRotateTime() const;

                    /**
                     * 设置
                     * @param NextRotateTime 
                     */
                    void SetNextRotateTime(const uint64_t& _nextRotateTime);

                    /**
                     * 判断参数 NextRotateTime 是否已赋值
                     * @return NextRotateTime 是否已赋值
                     */
                    bool NextRotateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeletionDate 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置
                     * @param DeletionDate 
                     */
                    void SetDeletionDate(const uint64_t& _deletionDate);

                    /**
                     * 判断参数 DeletionDate 是否已赋值
                     * @return DeletionDate 是否已赋值
                     */
                    bool DeletionDateHasBeenSet() const;

                    /**
                     * 获取CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Origin CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Origin CMK key material type. TENCENT_KMS: created by KMS; EXTERNAL: imported by user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取It’s valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidTo It’s valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置It’s valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ValidTo It’s valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetValidTo(const uint64_t& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     */
                    bool ValidToHasBeenSet() const;

                    /**
                     * 获取Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @return ResourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     * @param ResourceId Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CMK status. Valid values: Enabled, Disabled, PendingDelete, PendingImport.
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * CMK purpose. Valid values: ENCRYPT_DECRYPT, ASYMMETRIC_DECRYPT_RSA_2048, ASYMMETRIC_DECRYPT_SM2
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * CMK type. 2: FIPS-compliant; 4: SM-CRYPTO
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 
                     */
                    bool m_keyRotationEnabled;
                    bool m_keyRotationEnabledHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_nextRotateTime;
                    bool m_nextRotateTimeHasBeenSet;

                    /**
                     * 
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
                     * It’s valid when `Origin` is `EXTERNAL`, indicating the expiration date of key material. 0 means valid forever.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * Resource ID in the format of `creatorUin/$creatorUin/$keyId`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
