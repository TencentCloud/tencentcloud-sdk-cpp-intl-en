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
                     * 获取<p>Globally unique ID of the CMK.</p>
                     * @return KeyId <p>Globally unique ID of the CMK.</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Globally unique ID of the CMK.</p>
                     * @param _keyId <p>Globally unique ID of the CMK.</p>
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
                     * 获取<p>An alias name as a key that is easier to identify and understand</p>
                     * @return Alias <p>An alias name as a key that is easier to identify and understand</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>An alias name as a key that is easier to identify and understand</p>
                     * @param _alias <p>An alias name as a key that is easier to identify and understand</p>
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
                     * 获取<p>Key creation time</p>
                     * @return CreateTime <p>Key creation time</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Key creation time</p>
                     * @param _createTime <p>Key creation time</p>
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
                     * 获取<p>Description of the CMK.</p>
                     * @return Description <p>Description of the CMK.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description of the CMK.</p>
                     * @param _description <p>Description of the CMK.</p>
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
                     * 获取<p>CMK state, value: Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * @return KeyState <p>CMK state, value: Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置<p>CMK state, value: Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     * @param _keyState <p>CMK state, value: Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
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
                     * 获取<p>CMK purpose. Value: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * @return KeyUsage <p>CMK purpose. Value: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置<p>CMK purpose. Value: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     * @param _keyUsage <p>CMK purpose. Value: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
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
                     * 获取<p>CMK type. 2 means compliant with FIPS 140-2 standard. 4 means compliant with national cryptography standards.</p><p>Enumeration value:</p><ul><li>2: Complies with FIPS 140-2 standard</li><li>4: Complies with national cryptography standards</li></ul>
                     * @return Type <p>CMK type. 2 means compliant with FIPS 140-2 standard. 4 means compliant with national cryptography standards.</p><p>Enumeration value:</p><ul><li>2: Complies with FIPS 140-2 standard</li><li>4: Complies with national cryptography standards</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>CMK type. 2 means compliant with FIPS 140-2 standard. 4 means compliant with national cryptography standards.</p><p>Enumeration value:</p><ul><li>2: Complies with FIPS 140-2 standard</li><li>4: Complies with national cryptography standards</li></ul>
                     * @param _type <p>CMK type. 2 means compliant with FIPS 140-2 standard. 4 means compliant with national cryptography standards.</p><p>Enumeration value:</p><ul><li>2: Complies with FIPS 140-2 standard</li><li>4: Complies with national cryptography standards</li></ul>
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
                     * 获取<p>Creator.</p>
                     * @return CreatorUin <p>Creator.</p>
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _creatorUin <p>Creator.</p>
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
                     * 获取<p>Is key rotation function enabled?</p>
                     * @return KeyRotationEnabled <p>Is key rotation function enabled?</p>
                     * 
                     */
                    bool GetKeyRotationEnabled() const;

                    /**
                     * 设置<p>Is key rotation function enabled?</p>
                     * @param _keyRotationEnabled <p>Is key rotation function enabled?</p>
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
                     * 获取<p>Creator of the CMK. For user-created CMKs, the value is user. For CMKs auto-created by authorized Cloud services, the value is the corresponding product name.</p>
                     * @return Owner <p>Creator of the CMK. For user-created CMKs, the value is user. For CMKs auto-created by authorized Cloud services, the value is the corresponding product name.</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>Creator of the CMK. For user-created CMKs, the value is user. For CMKs auto-created by authorized Cloud services, the value is the corresponding product name.</p>
                     * @param _owner <p>Creator of the CMK. For user-created CMKs, the value is user. For CMKs auto-created by authorized Cloud services, the value is the corresponding product name.</p>
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
                     * 获取<p>The time when the next rotation occurs with key rotation enabled</p>
                     * @return NextRotateTime <p>The time when the next rotation occurs with key rotation enabled</p>
                     * 
                     */
                    uint64_t GetNextRotateTime() const;

                    /**
                     * 设置<p>The time when the next rotation occurs with key rotation enabled</p>
                     * @param _nextRotateTime <p>The time when the next rotation occurs with key rotation enabled</p>
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
                     * 获取<p>The time when schedule deletion</p>
                     * @return DeletionDate <p>The time when schedule deletion</p>
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置<p>The time when schedule deletion</p>
                     * @param _deletionDate <p>The time when schedule deletion</p>
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
                     * 获取<p>CMK key material type. TENCENT_KMS for those created by KMS, EXTERNAL for user import.</p>
                     * @return Origin <p>CMK key material type. TENCENT_KMS for those created by KMS, EXTERNAL for user import.</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>CMK key material type. TENCENT_KMS for those created by KMS, EXTERNAL for user import.</p>
                     * @param _origin <p>CMK key material type. TENCENT_KMS for those created by KMS, EXTERNAL for user import.</p>
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
                     * 获取<p>Valid when Origin is EXTERNAL. Indicates the expiration date of the key material. 0 means never expire.</p>
                     * @return ValidTo <p>Valid when Origin is EXTERNAL. Indicates the expiration date of the key material. 0 means never expire.</p>
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置<p>Valid when Origin is EXTERNAL. Indicates the expiration date of the key material. 0 means never expire.</p>
                     * @param _validTo <p>Valid when Origin is EXTERNAL. Indicates the expiration date of the key material. 0 means never expire.</p>
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
                     * 获取<p>Resource ID, format: creatorUin/$creatorUin/$keyId</p>
                     * @return ResourceId <p>Resource ID, format: creatorUin/$creatorUin/$keyId</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID, format: creatorUin/$creatorUin/$keyId</p>
                     * @param _resourceId <p>Resource ID, format: creatorUin/$creatorUin/$keyId</p>
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
                     * 获取<p>HSM Cluster ID (only applicable to KMS exclusive/managed service instance)</p>
                     * @return HsmClusterId <p>HSM Cluster ID (only applicable to KMS exclusive/managed service instance)</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>HSM Cluster ID (only applicable to KMS exclusive/managed service instance)</p>
                     * @param _hsmClusterId <p>HSM Cluster ID (only applicable to KMS exclusive/managed service instance)</p>
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Key rotation cycle (days)</p>
                     * @return RotateDays <p>Key rotation cycle (days)</p>
                     * 
                     */
                    uint64_t GetRotateDays() const;

                    /**
                     * 设置<p>Key rotation cycle (days)</p>
                     * @param _rotateDays <p>Key rotation cycle (days)</p>
                     * 
                     */
                    void SetRotateDays(const uint64_t& _rotateDays);

                    /**
                     * 判断参数 RotateDays 是否已赋值
                     * @return RotateDays 是否已赋值
                     * 
                     */
                    bool RotateDaysHasBeenSet() const;

                    /**
                     * 获取<p>Last rotation time (Unix timestamp).</p>
                     * @return LastRotateTime <p>Last rotation time (Unix timestamp).</p>
                     * 
                     */
                    uint64_t GetLastRotateTime() const;

                    /**
                     * 设置<p>Last rotation time (Unix timestamp).</p>
                     * @param _lastRotateTime <p>Last rotation time (Unix timestamp).</p>
                     * 
                     */
                    void SetLastRotateTime(const uint64_t& _lastRotateTime);

                    /**
                     * 判断参数 LastRotateTime 是否已赋值
                     * @return LastRotateTime 是否已赋值
                     * 
                     */
                    bool LastRotateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the key is the primary replica. 0: primary replica, 1: synced replica.</p>
                     * @return IsSyncReplica <p>Whether the key is the primary replica. 0: primary replica, 1: synced replica.</p>
                     * 
                     */
                    int64_t GetIsSyncReplica() const;

                    /**
                     * 设置<p>Whether the key is the primary replica. 0: primary replica, 1: synced replica.</p>
                     * @param _isSyncReplica <p>Whether the key is the primary replica. 0: primary replica, 1: synced replica.</p>
                     * 
                     */
                    void SetIsSyncReplica(const int64_t& _isSyncReplica);

                    /**
                     * 判断参数 IsSyncReplica 是否已赋值
                     * @return IsSyncReplica 是否已赋值
                     * 
                     */
                    bool IsSyncReplicaHasBeenSet() const;

                    /**
                     * 获取<p>Synchronous original region</p>
                     * @return SourceRegion <p>Synchronous original region</p>
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置<p>Synchronous original region</p>
                     * @param _sourceRegion <p>Synchronous original region</p>
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取<p>Key synchronization state: 0: unsynced, 1: synced successfully, 2: synchronization failed, 3: syncing.</p>
                     * @return SyncStatus <p>Key synchronization state: 0: unsynced, 1: synced successfully, 2: synchronization failed, 3: syncing.</p>
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置<p>Key synchronization state: 0: unsynced, 1: synced successfully, 2: synchronization failed, 3: syncing.</p>
                     * @param _syncStatus <p>Key synchronization state: 0: unsynced, 1: synced successfully, 2: synchronization failed, 3: syncing.</p>
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>Synchronous result description</p>
                     * @return SyncMessages <p>Synchronous result description</p>
                     * 
                     */
                    std::string GetSyncMessages() const;

                    /**
                     * 设置<p>Synchronous result description</p>
                     * @param _syncMessages <p>Synchronous result description</p>
                     * 
                     */
                    void SetSyncMessages(const std::string& _syncMessages);

                    /**
                     * 判断参数 SyncMessages 是否已赋值
                     * @return SyncMessages 是否已赋值
                     * 
                     */
                    bool SyncMessagesHasBeenSet() const;

                    /**
                     * 获取<p>Start time of synchronization</p>
                     * @return SyncStartTime <p>Start time of synchronization</p>
                     * 
                     */
                    uint64_t GetSyncStartTime() const;

                    /**
                     * 设置<p>Start time of synchronization</p>
                     * @param _syncStartTime <p>Start time of synchronization</p>
                     * 
                     */
                    void SetSyncStartTime(const uint64_t& _syncStartTime);

                    /**
                     * 判断参数 SyncStartTime 是否已赋值
                     * @return SyncStartTime 是否已赋值
                     * 
                     */
                    bool SyncStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Synchronous end time</p>
                     * @return SyncEndTime <p>Synchronous end time</p>
                     * 
                     */
                    uint64_t GetSyncEndTime() const;

                    /**
                     * 设置<p>Synchronous end time</p>
                     * @param _syncEndTime <p>Synchronous end time</p>
                     * 
                     */
                    void SetSyncEndTime(const uint64_t& _syncEndTime);

                    /**
                     * 判断参数 SyncEndTime 是否已赋值
                     * @return SyncEndTime 是否已赋值
                     * 
                     */
                    bool SyncEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Synchronous original cluster. If empty, it is a public cloud public cluster.</p>
                     * @return SourceHsmClusterId <p>Synchronous original cluster. If empty, it is a public cloud public cluster.</p>
                     * 
                     */
                    std::string GetSourceHsmClusterId() const;

                    /**
                     * 设置<p>Synchronous original cluster. If empty, it is a public cloud public cluster.</p>
                     * @param _sourceHsmClusterId <p>Synchronous original cluster. If empty, it is a public cloud public cluster.</p>
                     * 
                     */
                    void SetSourceHsmClusterId(const std::string& _sourceHsmClusterId);

                    /**
                     * 判断参数 SourceHsmClusterId 是否已赋值
                     * @return SourceHsmClusterId 是否已赋值
                     * 
                     */
                    bool SourceHsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Member account appId</p>
                     * @return AccountAppId <p>Member account appId</p>
                     * 
                     */
                    uint64_t GetAccountAppId() const;

                    /**
                     * 设置<p>Member account appId</p>
                     * @param _accountAppId <p>Member account appId</p>
                     * 
                     */
                    void SetAccountAppId(const uint64_t& _accountAppId);

                    /**
                     * 判断参数 AccountAppId 是否已赋值
                     * @return AccountAppId 是否已赋值
                     * 
                     */
                    bool AccountAppIdHasBeenSet() const;

                    /**
                     * 获取<p>member account uin</p>
                     * @return AccountUin <p>member account uin</p>
                     * 
                     */
                    uint64_t GetAccountUin() const;

                    /**
                     * 设置<p>member account uin</p>
                     * @param _accountUin <p>member account uin</p>
                     * 
                     */
                    void SetAccountUin(const uint64_t& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取<p>Member account name</p>
                     * @return AccountName <p>Member account name</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Member account name</p>
                     * @param _accountName <p>Member account name</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                private:

                    /**
                     * <p>Globally unique ID of the CMK.</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>An alias name as a key that is easier to identify and understand</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Key creation time</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Description of the CMK.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>CMK state, value: Enabled | Disabled | PendingDelete | PendingImport | Archived</p>
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>CMK purpose. Value: ENCRYPT_DECRYPT | ASYMMETRIC_DECRYPT_RSA_2048 | ASYMMETRIC_DECRYPT_SM2 | ASYMMETRIC_SIGN_VERIFY_SM2 | ASYMMETRIC_SIGN_VERIFY_RSA_2048 | ASYMMETRIC_SIGN_VERIFY_ECC</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>CMK type. 2 means compliant with FIPS 140-2 standard. 4 means compliant with national cryptography standards.</p><p>Enumeration value:</p><ul><li>2: Complies with FIPS 140-2 standard</li><li>4: Complies with national cryptography standards</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>Is key rotation function enabled?</p>
                     */
                    bool m_keyRotationEnabled;
                    bool m_keyRotationEnabledHasBeenSet;

                    /**
                     * <p>Creator of the CMK. For user-created CMKs, the value is user. For CMKs auto-created by authorized Cloud services, the value is the corresponding product name.</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>The time when the next rotation occurs with key rotation enabled</p>
                     */
                    uint64_t m_nextRotateTime;
                    bool m_nextRotateTimeHasBeenSet;

                    /**
                     * <p>The time when schedule deletion</p>
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * <p>CMK key material type. TENCENT_KMS for those created by KMS, EXTERNAL for user import.</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>Valid when Origin is EXTERNAL. Indicates the expiration date of the key material. 0 means never expire.</p>
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * <p>Resource ID, format: creatorUin/$creatorUin/$keyId</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>HSM Cluster ID (only applicable to KMS exclusive/managed service instance)</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>Key rotation cycle (days)</p>
                     */
                    uint64_t m_rotateDays;
                    bool m_rotateDaysHasBeenSet;

                    /**
                     * <p>Last rotation time (Unix timestamp).</p>
                     */
                    uint64_t m_lastRotateTime;
                    bool m_lastRotateTimeHasBeenSet;

                    /**
                     * <p>Whether the key is the primary replica. 0: primary replica, 1: synced replica.</p>
                     */
                    int64_t m_isSyncReplica;
                    bool m_isSyncReplicaHasBeenSet;

                    /**
                     * <p>Synchronous original region</p>
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * <p>Key synchronization state: 0: unsynced, 1: synced successfully, 2: synchronization failed, 3: syncing.</p>
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>Synchronous result description</p>
                     */
                    std::string m_syncMessages;
                    bool m_syncMessagesHasBeenSet;

                    /**
                     * <p>Start time of synchronization</p>
                     */
                    uint64_t m_syncStartTime;
                    bool m_syncStartTimeHasBeenSet;

                    /**
                     * <p>Synchronous end time</p>
                     */
                    uint64_t m_syncEndTime;
                    bool m_syncEndTimeHasBeenSet;

                    /**
                     * <p>Synchronous original cluster. If empty, it is a public cloud public cluster.</p>
                     */
                    std::string m_sourceHsmClusterId;
                    bool m_sourceHsmClusterIdHasBeenSet;

                    /**
                     * <p>Member account appId</p>
                     */
                    uint64_t m_accountAppId;
                    bool m_accountAppIdHasBeenSet;

                    /**
                     * <p>member account uin</p>
                     */
                    uint64_t m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * <p>Member account name</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_KEYMETADATA_H_
