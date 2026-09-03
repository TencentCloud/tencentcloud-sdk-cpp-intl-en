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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * System disk configuration of the launch configuration. If this parameter is not specified, the default value is assigned to it.
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>System disk type. For restrictions on system disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_BSSD: universal SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>Default value: CLOUD_PREMIUM.</li>
                     * @return DiskType <p>System disk type. For restrictions on system disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_BSSD: universal SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>Default value: CLOUD_PREMIUM.</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>System disk type. For restrictions on system disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_BSSD: universal SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>Default value: CLOUD_PREMIUM.</li>
                     * @param _diskType <p>System disk type. For restrictions on system disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_BSSD: universal SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>Default value: CLOUD_PREMIUM.</li>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>System disk size (GB). Default value: 50</p>
                     * @return DiskSize <p>System disk size (GB). Default value: 50</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>System disk size (GB). Default value: 50</p>
                     * @param _diskSize <p>System disk size (GB). Default value: 50</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to encrypt the system disk. TRUE means encrypted, FALSE means not encrypted. The specific disk type, region, and KMS rules are validated by CVM.</p>
                     * @return Encrypt <p>Whether to encrypt the system disk. TRUE means encrypted, FALSE means not encrypted. The specific disk type, region, and KMS rules are validated by CVM.</p>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>Whether to encrypt the system disk. TRUE means encrypted, FALSE means not encrypted. The specific disk type, region, and KMS rules are validated by CVM.</p>
                     * @param _encrypt <p>Whether to encrypt the system disk. TRUE means encrypted, FALSE means not encrypted. The specific disk type, region, and KMS rules are validated by CVM.</p>
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取<p>KMS Key ID used for system disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * @return KmsKeyId <p>KMS Key ID used for system disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS Key ID used for system disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * @param _kmsKeyId <p>KMS Key ID used for system disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>System disk type. For restrictions on system disk types, see <a href="https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1">Cloud Disk Types</a>. Value range:</p><li>LOCAL_BASIC: local hard disk</li><li>LOCAL_SSD: local SSD</li><li>CLOUD_BASIC: basic cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_SSD: SSD cloud disk</li><li>CLOUD_BSSD: universal SSD cloud disk</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_TSSD: ultra-fast SSD CBS</li><li>Default value: CLOUD_PREMIUM.</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>System disk size (GB). Default value: 50</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Whether to encrypt the system disk. TRUE means encrypted, FALSE means not encrypted. The specific disk type, region, and KMS rules are validated by CVM.</p>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>KMS Key ID used for system disk encryption. The key validity, permission, as well as adaptability to disk type and region are validated by CVM.</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SYSTEMDISK_H_
