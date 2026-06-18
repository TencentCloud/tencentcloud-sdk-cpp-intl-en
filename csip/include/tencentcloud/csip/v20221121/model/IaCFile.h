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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KeyValueInt.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * IaC detection file
                */
                class IaCFile : public AbstractModel
                {
                public:
                    IaCFile();
                    ~IaCFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID</p>
                     * @return Id <p>ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>ID</p>
                     * @param _id <p>ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>File ID</p>
                     * @return FileId <p>File ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID</p>
                     * @param _fileId <p>File ID</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>File name.</p>
                     * @return FileName <p>File name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name.</p>
                     * @param _fileName <p>File name.</p>
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
                     * 获取<p>CI/CD name</p>
                     * @return CICDName <p>CI/CD name</p>
                     * 
                     */
                    std::string GetCICDName() const;

                    /**
                     * 设置<p>CI/CD name</p>
                     * @param _cICDName <p>CI/CD name</p>
                     * 
                     */
                    void SetCICDName(const std::string& _cICDName);

                    /**
                     * 判断参数 CICDName 是否已赋值
                     * @return CICDName 是否已赋值
                     * 
                     */
                    bool CICDNameHasBeenSet() const;

                    /**
                     * 获取<p>File path</p>
                     * @return FilePath <p>File path</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>File path</p>
                     * @param _filePath <p>File path</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>File type (1: Dockerfile, 2: Terraform, 3: KubernetesYaml)</p>
                     * @return FileType <p>File type (1: Dockerfile, 2: Terraform, 3: KubernetesYaml)</p>
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置<p>File type (1: Dockerfile, 2: Terraform, 3: KubernetesYaml)</p>
                     * @param _fileType <p>File type (1: Dockerfile, 2: Terraform, 3: KubernetesYaml)</p>
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of risks</p>
                     * @return RiskTotalCnt <p>Total number of risks</p>
                     * 
                     */
                    uint64_t GetRiskTotalCnt() const;

                    /**
                     * 设置<p>Total number of risks</p>
                     * @param _riskTotalCnt <p>Total number of risks</p>
                     * 
                     */
                    void SetRiskTotalCnt(const uint64_t& _riskTotalCnt);

                    /**
                     * 判断参数 RiskTotalCnt 是否已赋值
                     * @return RiskTotalCnt 是否已赋值
                     * 
                     */
                    bool RiskTotalCntHasBeenSet() const;

                    /**
                     * 获取<p>Risk level count (0: Low risk, 1: Medium risk, 2: High risk, 3: Critical)</p>
                     * @return RiskLevelCnt <p>Risk level count (0: Low risk, 1: Medium risk, 2: High risk, 3: Critical)</p>
                     * 
                     */
                    std::vector<KeyValueInt> GetRiskLevelCnt() const;

                    /**
                     * 设置<p>Risk level count (0: Low risk, 1: Medium risk, 2: High risk, 3: Critical)</p>
                     * @param _riskLevelCnt <p>Risk level count (0: Low risk, 1: Medium risk, 2: High risk, 3: Critical)</p>
                     * 
                     */
                    void SetRiskLevelCnt(const std::vector<KeyValueInt>& _riskLevelCnt);

                    /**
                     * 判断参数 RiskLevelCnt 是否已赋值
                     * @return RiskLevelCnt 是否已赋值
                     * 
                     */
                    bool RiskLevelCntHasBeenSet() const;

                    /**
                     * 获取<p>Scan time</p>
                     * @return ScanTime <p>Scan time</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>Scan time</p>
                     * @param _scanTime <p>Scan time</p>
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * @return Status <p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * @param _status <p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Scan failure type (0: No failure, 1: Detection timeout, 2: File format parsing failed, 3: Detection failed)</p>
                     * @return FailType <p>Scan failure type (0: No failure, 1: Detection timeout, 2: File format parsing failed, 3: Detection failed)</p>
                     * 
                     */
                    int64_t GetFailType() const;

                    /**
                     * 设置<p>Scan failure type (0: No failure, 1: Detection timeout, 2: File format parsing failed, 3: Detection failed)</p>
                     * @param _failType <p>Scan failure type (0: No failure, 1: Detection timeout, 2: File format parsing failed, 3: Detection failed)</p>
                     * 
                     */
                    void SetFailType(const int64_t& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>File ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>CI/CD name</p>
                     */
                    std::string m_cICDName;
                    bool m_cICDNameHasBeenSet;

                    /**
                     * <p>File path</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>File type (1: Dockerfile, 2: Terraform, 3: KubernetesYaml)</p>
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Total number of risks</p>
                     */
                    uint64_t m_riskTotalCnt;
                    bool m_riskTotalCntHasBeenSet;

                    /**
                     * <p>Risk level count (0: Low risk, 1: Medium risk, 2: High risk, 3: Critical)</p>
                     */
                    std::vector<KeyValueInt> m_riskLevelCnt;
                    bool m_riskLevelCntHasBeenSet;

                    /**
                     * <p>Scan time</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Scan failure type (0: No failure, 1: Detection timeout, 2: File format parsing failed, 3: Detection failed)</p>
                     */
                    int64_t m_failType;
                    bool m_failTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_
