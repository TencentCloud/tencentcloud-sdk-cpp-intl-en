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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>
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
                * cos audit asset data identification details
                */
                class CosAssetDataScanDetail : public AbstractModel
                {
                public:
                    CosAssetDataScanDetail();
                    ~CosAssetDataScanDetail() = default;
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
                    uint64_t GetLatestScanTime() const;

                    /**
                     * 设置<p>Last scan time.</p>
                     * @param _latestScanTime <p>Last scan time.</p>
                     * 
                     */
                    void SetLatestScanTime(const uint64_t& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Recognition failed information.</p>
                     * @return ErrorInfo <p>Recognition failed information.</p>
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置<p>Recognition failed information.</p>
                     * @param _errorInfo <p>Recognition failed information.</p>
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
                     * 获取<p>Recognition result category details</p>
                     * @return CategoryDetails <p>Recognition result category details</p>
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>Recognition result category details</p>
                     * @param _categoryDetails <p>Recognition result category details</p>
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
                     * 获取<p>None.</p>
                     * @return RuleDetails <p>None.</p>
                     * 
                     */
                    std::vector<CosIdentifyRuleDetail> GetRuleDetails() const;

                    /**
                     * 设置<p>None.</p>
                     * @param _ruleDetails <p>None.</p>
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
                     * 获取<p>None.</p>
                     * @return LevelDetails <p>None.</p>
                     * 
                     */
                    std::vector<CosIdentifyLevelDetail> GetLevelDetails() const;

                    /**
                     * 设置<p>None.</p>
                     * @param _levelDetails <p>None.</p>
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
                     * 获取<p>Whether a full scan has been initiated</p>
                     * @return IsFullScanned <p>Whether a full scan has been initiated</p>
                     * 
                     */
                    bool GetIsFullScanned() const;

                    /**
                     * 设置<p>Whether a full scan has been initiated</p>
                     * @param _isFullScanned <p>Whether a full scan has been initiated</p>
                     * 
                     */
                    void SetIsFullScanned(const bool& _isFullScanned);

                    /**
                     * 判断参数 IsFullScanned 是否已赋值
                     * @return IsFullScanned 是否已赋值
                     * 
                     */
                    bool IsFullScannedHasBeenSet() const;

                private:

                    /**
                     * <p>Recognition task status. 0: unrecognized; 1: in process; 2: terminated; 3: successful; 4: failed.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Recognition progress</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Last scan time.</p>
                     */
                    uint64_t m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Recognition failed information.</p>
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>Recognition result category details</p>
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>None.</p>
                     */
                    std::vector<CosIdentifyRuleDetail> m_ruleDetails;
                    bool m_ruleDetailsHasBeenSet;

                    /**
                     * <p>None.</p>
                     */
                    std::vector<CosIdentifyLevelDetail> m_levelDetails;
                    bool m_levelDetailsHasBeenSet;

                    /**
                     * <p>Whether a full scan has been initiated</p>
                     */
                    bool m_isFullScanned;
                    bool m_isFullScannedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETDATASCANDETAIL_H_
