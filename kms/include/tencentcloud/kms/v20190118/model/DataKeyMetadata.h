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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_

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
                * Specifies the data key attribute information.
                */
                class DataKeyMetadata : public AbstractModel
                {
                public:
                    DataKeyMetadata();
                    ~DataKeyMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Globally unique ID of the DataKey</p>
                     * @return DataKeyId <p>Globally unique ID of the DataKey</p>
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置<p>Globally unique ID of the DataKey</p>
                     * @param _dataKeyId <p>Globally unique ID of the DataKey</p>
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

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
                     * 获取<p>CMK name</p>
                     * @return KeyName <p>CMK name</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>CMK name</p>
                     * @param _keyName <p>CMK name</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>Data key name that is easier to identify and understand as a key</p>
                     * @return DataKeyName <p>Data key name that is easier to identify and understand as a key</p>
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置<p>Data key name that is easier to identify and understand as a key</p>
                     * @param _dataKeyName <p>Data key name that is easier to identify and understand as a key</p>
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>Length of the data key, in bytes</p>
                     * @return NumberOfBytes <p>Length of the data key, in bytes</p>
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置<p>Length of the data key, in bytes</p>
                     * @param _numberOfBytes <p>Length of the data key, in bytes</p>
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

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
                     * 获取<p>Description of DataKey</p>
                     * @return Description <p>Description of DataKey</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description of DataKey</p>
                     * @param _description <p>Description of DataKey</p>
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
                     * 获取<p>DataKey state, value: Enabled | Disabled | PendingDelete</p>
                     * @return KeyState <p>DataKey state, value: Enabled | Disabled | PendingDelete</p>
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置<p>DataKey state, value: Enabled | Disabled | PendingDelete</p>
                     * @param _keyState <p>DataKey state, value: Enabled | Disabled | PendingDelete</p>
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
                     * 获取<p>Creator of the data key. For user-created keys, it is user; for keys automatically created by authorized cloud services, it is the corresponding product name.</p>
                     * @return Owner <p>Creator of the data key. For user-created keys, it is user; for keys automatically created by authorized cloud services, it is the corresponding product name.</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>Creator of the data key. For user-created keys, it is user; for keys automatically created by authorized cloud services, it is the corresponding product name.</p>
                     * @param _owner <p>Creator of the data key. For user-created keys, it is user; for keys automatically created by authorized cloud services, it is the corresponding product name.</p>
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
                     * 获取<p>Schedule deletion time</p>
                     * @return DeletionDate <p>Schedule deletion time</p>
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置<p>Schedule deletion time</p>
                     * @param _deletionDate <p>Schedule deletion time</p>
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
                     * 获取<p>DataKey key material type. For keys created by KMS: TENCENT_KMS. For keys of user import type: EXTERNAL.</p>
                     * @return Origin <p>DataKey key material type. For keys created by KMS: TENCENT_KMS. For keys of user import type: EXTERNAL.</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>DataKey key material type. For keys created by KMS: TENCENT_KMS. For keys of user import type: EXTERNAL.</p>
                     * @param _origin <p>DataKey key material type. For keys created by KMS: TENCENT_KMS. For keys of user import type: EXTERNAL.</p>
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
                     * 获取<p>HSM Cluster ID (only applicable to KMS exclusive edition/managed version service instances)</p>
                     * @return HsmClusterId <p>HSM Cluster ID (only applicable to KMS exclusive edition/managed version service instances)</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>HSM Cluster ID (only applicable to KMS exclusive edition/managed version service instances)</p>
                     * @param _hsmClusterId <p>HSM Cluster ID (only applicable to KMS exclusive edition/managed version service instances)</p>
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
                     * 获取<p>Resource ID, format: creatorUin/$creatorUin/$dataKeyId</p>
                     * @return ResourceId <p>Resource ID, format: creatorUin/$creatorUin/$dataKeyId</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID, format: creatorUin/$creatorUin/$dataKeyId</p>
                     * @param _resourceId <p>Resource ID, format: creatorUin/$creatorUin/$dataKeyId</p>
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
                     * 获取<p>Whether the key is a primary replica. 0: primary replica, 1: synced replica.</p>
                     * @return IsSyncReplica <p>Whether the key is a primary replica. 0: primary replica, 1: synced replica.</p>
                     * 
                     */
                    int64_t GetIsSyncReplica() const;

                    /**
                     * 设置<p>Whether the key is a primary replica. 0: primary replica, 1: synced replica.</p>
                     * @param _isSyncReplica <p>Whether the key is a primary replica. 0: primary replica, 1: synced replica.</p>
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
                     * 获取<p>Key synchronization status. 0: unsynced, 1: synchronization successful, 2: synchronization failure, 3: syncing.</p>
                     * @return SyncStatus <p>Key synchronization status. 0: unsynced, 1: synchronization successful, 2: synchronization failure, 3: syncing.</p>
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置<p>Key synchronization status. 0: unsynced, 1: synchronization successful, 2: synchronization failure, 3: syncing.</p>
                     * @param _syncStatus <p>Key synchronization status. 0: unsynced, 1: synchronization successful, 2: synchronization failure, 3: syncing.</p>
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
                     * 获取<p>Synchronous primitive cluster. If empty, it is a public cloud public cluster.</p>
                     * @return SourceHsmClusterId <p>Synchronous primitive cluster. If empty, it is a public cloud public cluster.</p>
                     * 
                     */
                    std::string GetSourceHsmClusterId() const;

                    /**
                     * 设置<p>Synchronous primitive cluster. If empty, it is a public cloud public cluster.</p>
                     * @param _sourceHsmClusterId <p>Synchronous primitive cluster. If empty, it is a public cloud public cluster.</p>
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
                     * 获取<p>Enter the member account name.</p>
                     * @return AccountName <p>Enter the member account name.</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Enter the member account name.</p>
                     * @param _accountName <p>Enter the member account name.</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Creator UIN</p>
                     * @return CreatorUinString <p>Creator UIN</p>
                     * 
                     */
                    std::string GetCreatorUinString() const;

                    /**
                     * 设置<p>Creator UIN</p>
                     * @param _creatorUinString <p>Creator UIN</p>
                     * 
                     */
                    void SetCreatorUinString(const std::string& _creatorUinString);

                    /**
                     * 判断参数 CreatorUinString 是否已赋值
                     * @return CreatorUinString 是否已赋值
                     * 
                     */
                    bool CreatorUinStringHasBeenSet() const;

                private:

                    /**
                     * <p>Globally unique ID of the DataKey</p>
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * <p>Globally unique ID of the CMK.</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>CMK name</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>Data key name that is easier to identify and understand as a key</p>
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                    /**
                     * <p>Length of the data key, in bytes</p>
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                    /**
                     * <p>Key creation time</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Description of DataKey</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>DataKey state, value: Enabled | Disabled | PendingDelete</p>
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>Creator of the data key. For user-created keys, it is user; for keys automatically created by authorized cloud services, it is the corresponding product name.</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>Schedule deletion time</p>
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * <p>DataKey key material type. For keys created by KMS: TENCENT_KMS. For keys of user import type: EXTERNAL.</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>HSM Cluster ID (only applicable to KMS exclusive edition/managed version service instances)</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>Resource ID, format: creatorUin/$creatorUin/$dataKeyId</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Whether the key is a primary replica. 0: primary replica, 1: synced replica.</p>
                     */
                    int64_t m_isSyncReplica;
                    bool m_isSyncReplicaHasBeenSet;

                    /**
                     * <p>Synchronous original region</p>
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * <p>Key synchronization status. 0: unsynced, 1: synchronization successful, 2: synchronization failure, 3: syncing.</p>
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
                     * <p>Synchronous primitive cluster. If empty, it is a public cloud public cluster.</p>
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
                     * <p>Enter the member account name.</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Creator UIN</p>
                     */
                    std::string m_creatorUinString;
                    bool m_creatorUinStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
