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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/PGroup.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Basic information of a file system
                */
                class FileSystemInfo : public AbstractModel
                {
                public:
                    FileSystemInfo();
                    ~FileSystemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time
                     * @return CreationTime Creation time
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time
                     * @param CreationTime Creation time
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Custom name
                     * @return CreationToken Custom name
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置Custom name
                     * @param CreationToken Custom name
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param FileSystemId File system ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取File system status
                     * @return LifeCycleState File system status
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置File system status
                     * @param LifeCycleState File system status
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取Used file system capacity
                     * @return SizeByte Used file system capacity
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 设置Used file system capacity
                     * @param SizeByte Used file system capacity
                     */
                    void SetSizeByte(const uint64_t& _sizeByte);

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取Maximum storage limit of a file system
                     * @return SizeLimit Maximum storage limit of a file system
                     */
                    uint64_t GetSizeLimit() const;

                    /**
                     * 设置Maximum storage limit of a file system
                     * @param SizeLimit Maximum storage limit of a file system
                     */
                    void SetSizeLimit(const uint64_t& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     */
                    bool SizeLimitHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return ZoneId Region ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Region ID
                     * @param ZoneId Region ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return Zone Region name
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region name
                     * @param Zone Region name
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取File system protocol type
                     * @return Protocol File system protocol type
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置File system protocol type
                     * @param Protocol File system protocol type
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取File system storage class
                     * @return StorageType File system storage class
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置File system storage class
                     * @param StorageType File system storage class
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Prepaid storage pack bound to a file system (not supported currently)
                     * @return StorageResourcePkg Prepaid storage pack bound to a file system (not supported currently)
                     */
                    std::string GetStorageResourcePkg() const;

                    /**
                     * 设置Prepaid storage pack bound to a file system (not supported currently)
                     * @param StorageResourcePkg Prepaid storage pack bound to a file system (not supported currently)
                     */
                    void SetStorageResourcePkg(const std::string& _storageResourcePkg);

                    /**
                     * 判断参数 StorageResourcePkg 是否已赋值
                     * @return StorageResourcePkg 是否已赋值
                     */
                    bool StorageResourcePkgHasBeenSet() const;

                    /**
                     * 获取Prepaid bandwidth pack bound to a file system (not supported currently)
                     * @return BandwidthResourcePkg Prepaid bandwidth pack bound to a file system (not supported currently)
                     */
                    std::string GetBandwidthResourcePkg() const;

                    /**
                     * 设置Prepaid bandwidth pack bound to a file system (not supported currently)
                     * @param BandwidthResourcePkg Prepaid bandwidth pack bound to a file system (not supported currently)
                     */
                    void SetBandwidthResourcePkg(const std::string& _bandwidthResourcePkg);

                    /**
                     * 判断参数 BandwidthResourcePkg 是否已赋值
                     * @return BandwidthResourcePkg 是否已赋值
                     */
                    bool BandwidthResourcePkgHasBeenSet() const;

                    /**
                     * 获取Information of permission groups bound to a file system
                     * @return PGroup Information of permission groups bound to a file system
                     */
                    PGroup GetPGroup() const;

                    /**
                     * 设置Information of permission groups bound to a file system
                     * @param PGroup Information of permission groups bound to a file system
                     */
                    void SetPGroup(const PGroup& _pGroup);

                    /**
                     * 判断参数 PGroup 是否已赋值
                     * @return PGroup 是否已赋值
                     */
                    bool PGroupHasBeenSet() const;

                    /**
                     * 获取Custom name
                     * @return FsName Custom name
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置Custom name
                     * @param FsName Custom name
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取Whether a file system is encrypted
                     * @return Encrypted Whether a file system is encrypted
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置Whether a file system is encrypted
                     * @param Encrypted Whether a file system is encrypted
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取Key used for encryption, which can be the key ID or ARN
                     * @return KmsKeyId Key used for encryption, which can be the key ID or ARN
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Key used for encryption, which can be the key ID or ARN
                     * @param KmsKeyId Key used for encryption, which can be the key ID or ARN
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param AppId Application ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * Creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Custom name
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system status
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * Used file system capacity
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * Maximum storage limit of a file system
                     */
                    uint64_t m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * File system protocol type
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * File system storage class
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Prepaid storage pack bound to a file system (not supported currently)
                     */
                    std::string m_storageResourcePkg;
                    bool m_storageResourcePkgHasBeenSet;

                    /**
                     * Prepaid bandwidth pack bound to a file system (not supported currently)
                     */
                    std::string m_bandwidthResourcePkg;
                    bool m_bandwidthResourcePkgHasBeenSet;

                    /**
                     * Information of permission groups bound to a file system
                     */
                    PGroup m_pGroup;
                    bool m_pGroupHasBeenSet;

                    /**
                     * Custom name
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * Whether a file system is encrypted
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * Key used for encryption, which can be the key ID or ARN
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * Application ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMINFO_H_
