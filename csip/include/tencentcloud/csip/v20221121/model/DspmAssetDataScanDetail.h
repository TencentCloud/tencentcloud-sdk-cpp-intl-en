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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmSensitiveScanTaskConfig.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm asset data identification details
                */
                class DspmAssetDataScanDetail : public AbstractModel
                {
                public:
                    DspmAssetDataScanDetail();
                    ~DspmAssetDataScanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * @return Status <p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * @param _status <p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Identification task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * @return StatusInfo <p>Identification task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * 
                     */
                    std::string GetStatusInfo() const;

                    /**
                     * 设置<p>Identification task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * @param _statusInfo <p>Identification task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     * 
                     */
                    void SetStatusInfo(const std::string& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取<p>Recognition progress</p>
                     * @return Progress <p>Recognition progress</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>Recognition progress</p>
                     * @param _progress <p>Recognition progress</p>
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Last scan time.</p>
                     * @return LatestScanTime <p>Last scan time.</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>Last scan time.</p>
                     * @param _latestScanTime <p>Last scan time.</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Recognition failure message</p>
                     * @return ErrorInfo <p>Recognition failure message</p>
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置<p>Recognition failure message</p>
                     * @param _errorInfo <p>Recognition failure message</p>
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>Number of databases</p>
                     * @return DbCount <p>Number of databases</p>
                     * 
                     */
                    uint64_t GetDbCount() const;

                    /**
                     * 设置<p>Number of databases</p>
                     * @param _dbCount <p>Number of databases</p>
                     * 
                     */
                    void SetDbCount(const uint64_t& _dbCount);

                    /**
                     * 判断参数 DbCount 是否已赋值
                     * @return DbCount 是否已赋值
                     * 
                     */
                    bool DbCountHasBeenSet() const;

                    /**
                     * 获取<p>Category id set</p>
                     * @return CategoryIds <p>Category id set</p>
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置<p>Category id set</p>
                     * @param _categoryIds <p>Category id set</p>
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取<p>Category name collection.</p>
                     * @return CategoryNames <p>Category name collection.</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryNames() const;

                    /**
                     * 设置<p>Category name collection.</p>
                     * @param _categoryNames <p>Category name collection.</p>
                     * 
                     */
                    void SetCategoryNames(const std::vector<std::string>& _categoryNames);

                    /**
                     * 判断参数 CategoryNames 是否已赋值
                     * @return CategoryNames 是否已赋值
                     * 
                     */
                    bool CategoryNamesHasBeenSet() const;

                    /**
                     * 获取<p>Scan task configuration</p>
                     * @return TaskConfig <p>Scan task configuration</p>
                     * 
                     */
                    DspmSensitiveScanTaskConfig GetTaskConfig() const;

                    /**
                     * 设置<p>Scan task configuration</p>
                     * @param _taskConfig <p>Scan task configuration</p>
                     * 
                     */
                    void SetTaskConfig(const DspmSensitiveScanTaskConfig& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                    /**
                     * 获取<p>Categorization details of recognition results</p>
                     * @return CategoryDetails <p>Categorization details of recognition results</p>
                     * 
                     */
                    std::vector<DspmIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>Categorization details of recognition results</p>
                     * @param _categoryDetails <p>Categorization details of recognition results</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<DspmIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Identification task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     */
                    std::string m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * <p>Recognition progress</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Last scan time.</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Recognition failure message</p>
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>Number of databases</p>
                     */
                    uint64_t m_dbCount;
                    bool m_dbCountHasBeenSet;

                    /**
                     * <p>Category id set</p>
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * <p>Category name collection.</p>
                     */
                    std::vector<std::string> m_categoryNames;
                    bool m_categoryNamesHasBeenSet;

                    /**
                     * <p>Scan task configuration</p>
                     */
                    DspmSensitiveScanTaskConfig m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                    /**
                     * <p>Categorization details of recognition results</p>
                     */
                    std::vector<DspmIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATASCANDETAIL_H_
