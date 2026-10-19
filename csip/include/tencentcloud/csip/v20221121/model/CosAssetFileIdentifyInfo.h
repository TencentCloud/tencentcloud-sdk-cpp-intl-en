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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyRuleDetail.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyLevelDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Object storage audit file data recognition information
                */
                class CosAssetFileIdentifyInfo : public AbstractModel
                {
                public:
                    CosAssetFileIdentifyInfo();
                    ~CosAssetFileIdentifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>File path</p>
                     * @return DirName <p>File path</p>
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置<p>File path</p>
                     * @param _dirName <p>File path</p>
                     * 
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     * 
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取<p>Details of categorical data items</p>
                     * @return CategoryDetails <p>Details of categorical data items</p>
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>Details of categorical data items</p>
                     * @param _categoryDetails <p>Details of categorical data items</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                    /**
                     * 获取<p>Bucket information</p>
                     * @return BucketInfo <p>Bucket information</p>
                     * 
                     */
                    CosBucketInfo GetBucketInfo() const;

                    /**
                     * 设置<p>Bucket information</p>
                     * @param _bucketInfo <p>Bucket information</p>
                     * 
                     */
                    void SetBucketInfo(const CosBucketInfo& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                    /**
                     * 获取<p>Last scan time</p>
                     * @return LastScanTime <p>Last scan time</p>
                     * 
                     */
                    uint64_t GetLastScanTime() const;

                    /**
                     * 设置<p>Last scan time</p>
                     * @param _lastScanTime <p>Last scan time</p>
                     * 
                     */
                    void SetLastScanTime(const uint64_t& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Handling status</p>
                     * @return HandleStatus <p>Handling status</p>
                     * 
                     */
                    uint64_t GetHandleStatus() const;

                    /**
                     * 设置<p>Handling status</p>
                     * @param _handleStatus <p>Handling status</p>
                     * 
                     */
                    void SetHandleStatus(const uint64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取<p>Result unique ID</p>
                     * @return ResultId <p>Result unique ID</p>
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置<p>Result unique ID</p>
                     * @param _resultId <p>Result unique ID</p>
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule details</p>
                     * @return RuleDetails <p>Rule details</p>
                     * 
                     */
                    std::vector<CosIdentifyRuleDetail> GetRuleDetails() const;

                    /**
                     * 设置<p>Rule details</p>
                     * @param _ruleDetails <p>Rule details</p>
                     * 
                     */
                    void SetRuleDetails(const std::vector<CosIdentifyRuleDetail>& _ruleDetails);

                    /**
                     * 判断参数 RuleDetails 是否已赋值
                     * @return RuleDetails 是否已赋值
                     * 
                     */
                    bool RuleDetailsHasBeenSet() const;

                    /**
                     * 获取<p>Level details</p>
                     * @return LevelDetails <p>Level details</p>
                     * 
                     */
                    std::vector<CosIdentifyLevelDetail> GetLevelDetails() const;

                    /**
                     * 设置<p>Level details</p>
                     * @param _levelDetails <p>Level details</p>
                     * 
                     */
                    void SetLevelDetails(const std::vector<CosIdentifyLevelDetail>& _levelDetails);

                    /**
                     * 判断参数 LevelDetails 是否已赋值
                     * @return LevelDetails 是否已赋值
                     * 
                     */
                    bool LevelDetailsHasBeenSet() const;

                    /**
                     * 获取<p>Template ID.</p>
                     * @return ComplianceId <p>Template ID.</p>
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置<p>Template ID.</p>
                     * @param _complianceId <p>Template ID.</p>
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File path</p>
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * <p>Details of categorical data items</p>
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>Bucket information</p>
                     */
                    CosBucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                    /**
                     * <p>Last scan time</p>
                     */
                    uint64_t m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * <p>Handling status</p>
                     */
                    uint64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * <p>Result unique ID</p>
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * <p>Rule details</p>
                     */
                    std::vector<CosIdentifyRuleDetail> m_ruleDetails;
                    bool m_ruleDetailsHasBeenSet;

                    /**
                     * <p>Level details</p>
                     */
                    std::vector<CosIdentifyLevelDetail> m_levelDetails;
                    bool m_levelDetailsHasBeenSet;

                    /**
                     * <p>Template ID.</p>
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
