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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Details of asset scan result
                */
                class AssetInfoDetail : public AbstractModel
                {
                public:
                    AssetInfoDetail();
                    ~AssetInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User appid.
                     * @return AppID User appid.
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置User appid.
                     * @param _appID User appid.
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取CVE id
                     * @return CVEId CVE id
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE id
                     * @param _cVEId CVE id
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取Scan Status. 0-Not Scanned by Default; 1-Scanning; 2-Scan Completed; 3-Scan Error.
                     * @return IsScan Scan Status. 0-Not Scanned by Default; 1-Scanning; 2-Scan Completed; 3-Scan Error.
                     * 
                     */
                    int64_t GetIsScan() const;

                    /**
                     * 设置Scan Status. 0-Not Scanned by Default; 1-Scanning; 2-Scan Completed; 3-Scan Error.
                     * @param _isScan Scan Status. 0-Not Scanned by Default; 1-Scanning; 2-Scan Completed; 3-Scan Error.
                     * 
                     */
                    void SetIsScan(const int64_t& _isScan);

                    /**
                     * 判断参数 IsScan 是否已赋值
                     * @return IsScan 是否已赋值
                     * 
                     */
                    bool IsScanHasBeenSet() const;

                    /**
                     * 获取Number of Affected Assets
                     * @return InfluenceAsset Number of Affected Assets
                     * 
                     */
                    int64_t GetInfluenceAsset() const;

                    /**
                     * 设置Number of Affected Assets
                     * @param _influenceAsset Number of Affected Assets
                     * 
                     */
                    void SetInfluenceAsset(const int64_t& _influenceAsset);

                    /**
                     * 判断参数 InfluenceAsset 是否已赋值
                     * @return InfluenceAsset 是否已赋值
                     * 
                     */
                    bool InfluenceAssetHasBeenSet() const;

                    /**
                     * 获取Number of Unfixed Assets
                     * @return NotRepairAsset Number of Unfixed Assets
                     * 
                     */
                    int64_t GetNotRepairAsset() const;

                    /**
                     * 设置Number of Unfixed Assets
                     * @param _notRepairAsset Number of Unfixed Assets
                     * 
                     */
                    void SetNotRepairAsset(const int64_t& _notRepairAsset);

                    /**
                     * 判断参数 NotRepairAsset 是否已赋值
                     * @return NotRepairAsset 是否已赋值
                     * 
                     */
                    bool NotRepairAssetHasBeenSet() const;

                    /**
                     * 获取Unprotected Asset Count
                     * @return NotProtectAsset Unprotected Asset Count
                     * 
                     */
                    int64_t GetNotProtectAsset() const;

                    /**
                     * 设置Unprotected Asset Count
                     * @param _notProtectAsset Unprotected Asset Count
                     * 
                     */
                    void SetNotProtectAsset(const int64_t& _notProtectAsset);

                    /**
                     * 判断参数 NotProtectAsset 是否已赋值
                     * @return NotProtectAsset 是否已赋值
                     * 
                     */
                    bool NotProtectAssetHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task Percentage
                     * @return TaskPercent Task Percentage
                     * 
                     */
                    int64_t GetTaskPercent() const;

                    /**
                     * 设置Task Percentage
                     * @param _taskPercent Task Percentage
                     * 
                     */
                    void SetTaskPercent(const int64_t& _taskPercent);

                    /**
                     * 判断参数 TaskPercent 是否已赋值
                     * @return TaskPercent 是否已赋值
                     * 
                     */
                    bool TaskPercentHasBeenSet() const;

                    /**
                     * 获取Task Time
                     * @return TaskTime Task Time
                     * 
                     */
                    int64_t GetTaskTime() const;

                    /**
                     * 设置Task Time
                     * @param _taskTime Task Time
                     * 
                     */
                    void SetTaskTime(const int64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scan time
                     * @param _scanTime Scan time
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * User appid.
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * CVE id
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * Scan Status. 0-Not Scanned by Default; 1-Scanning; 2-Scan Completed; 3-Scan Error.
                     */
                    int64_t m_isScan;
                    bool m_isScanHasBeenSet;

                    /**
                     * Number of Affected Assets
                     */
                    int64_t m_influenceAsset;
                    bool m_influenceAssetHasBeenSet;

                    /**
                     * Number of Unfixed Assets
                     */
                    int64_t m_notRepairAsset;
                    bool m_notRepairAssetHasBeenSet;

                    /**
                     * Unprotected Asset Count
                     */
                    int64_t m_notProtectAsset;
                    bool m_notProtectAssetHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task Percentage
                     */
                    int64_t m_taskPercent;
                    bool m_taskPercentHasBeenSet;

                    /**
                     * Task Time
                     */
                    int64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * Scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_
