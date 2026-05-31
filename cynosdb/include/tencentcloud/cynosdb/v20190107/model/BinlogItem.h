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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Binlog description
                */
                class BinlogItem : public AbstractModel
                {
                public:
                    BinlogItem();
                    ~BinlogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Binlog filename
                     * @return FileName Binlog filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Binlog filename
                     * @param _fileName Binlog filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in bytes
                     * @return FileSize File size in bytes
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
                     * @param _fileSize File size in bytes
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Transaction start time
                     * @return StartTime Transaction start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Transaction start time
                     * @param _startTime Transaction start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Transaction end time
                     * @return FinishTime Transaction end time
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Transaction end time
                     * @param _finishTime Transaction end time
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Binlog file ID
                     * @return BinlogId Binlog file ID
                     * 
                     */
                    int64_t GetBinlogId() const;

                    /**
                     * 设置Binlog file ID
                     * @param _binlogId Binlog file ID
                     * 
                     */
                    void SetBinlogId(const int64_t& _binlogId);

                    /**
                     * 判断参数 BinlogId 是否已赋值
                     * @return BinlogId 是否已赋值
                     * 
                     */
                    bool BinlogIdHasBeenSet() const;

                    /**
                     * 获取binlog cross-region coverage
                     * @return CrossRegions binlog cross-region coverage
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置binlog cross-region coverage
                     * @param _crossRegions binlog cross-region coverage
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取Backup delivery status
                     * @return CopyStatus Backup delivery status
                     * 
                     */
                    std::string GetCopyStatus() const;

                    /**
                     * 设置Backup delivery status
                     * @param _copyStatus Backup delivery status
                     * 
                     */
                    void SetCopyStatus(const std::string& _copyStatus);

                    /**
                     * 判断参数 CopyStatus 是否已赋值
                     * @return CopyStatus 是否已赋值
                     * 
                     */
                    bool CopyStatusHasBeenSet() const;

                    /**
                     * 获取Safe info
                     * @return VaultInfos Safe info
                     * 
                     */
                    std::vector<VaultInfo> GetVaultInfos() const;

                    /**
                     * 设置Safe info
                     * @param _vaultInfos Safe info
                     * 
                     */
                    void SetVaultInfos(const std::vector<VaultInfo>& _vaultInfos);

                    /**
                     * 判断参数 VaultInfos 是否已赋值
                     * @return VaultInfos 是否已赋值
                     * 
                     */
                    bool VaultInfosHasBeenSet() const;

                    /**
                     * 获取Encryption key
                     * @return EncryptKeyId Encryption key
                     * 
                     */
                    std::string GetEncryptKeyId() const;

                    /**
                     * 设置Encryption key
                     * @param _encryptKeyId Encryption key
                     * 
                     */
                    void SetEncryptKeyId(const std::string& _encryptKeyId);

                    /**
                     * 判断参数 EncryptKeyId 是否已赋值
                     * @return EncryptKeyId 是否已赋值
                     * 
                     */
                    bool EncryptKeyIdHasBeenSet() const;

                    /**
                     * 获取Encrypt key region
                     * @return EncryptRegion Encrypt key region
                     * 
                     */
                    std::string GetEncryptRegion() const;

                    /**
                     * 设置Encrypt key region
                     * @param _encryptRegion Encrypt key region
                     * 
                     */
                    void SetEncryptRegion(const std::string& _encryptRegion);

                    /**
                     * 判断参数 EncryptRegion 是否已赋值
                     * @return EncryptRegion 是否已赋值
                     * 
                     */
                    bool EncryptRegionHasBeenSet() const;

                private:

                    /**
                     * Binlog filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in bytes
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Transaction start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Transaction end time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Binlog file ID
                     */
                    int64_t m_binlogId;
                    bool m_binlogIdHasBeenSet;

                    /**
                     * binlog cross-region coverage
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * Backup delivery status
                     */
                    std::string m_copyStatus;
                    bool m_copyStatusHasBeenSet;

                    /**
                     * Safe info
                     */
                    std::vector<VaultInfo> m_vaultInfos;
                    bool m_vaultInfosHasBeenSet;

                    /**
                     * Encryption key
                     */
                    std::string m_encryptKeyId;
                    bool m_encryptKeyIdHasBeenSet;

                    /**
                     * Encrypt key region
                     */
                    std::string m_encryptRegion;
                    bool m_encryptRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
