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
                     * 获取AppID of the user
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppID AppID of the user
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置AppID of the user
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appID AppID of the user
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CVEId CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cVEId CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Whether the asset is scanned. Values: `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsScan Whether the asset is scanned. Values: `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsScan() const;

                    /**
                     * 设置Whether the asset is scanned. Values: `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isScan Whether the asset is scanned. Values: `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of affected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InfluenceAsset Number of affected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInfluenceAsset() const;

                    /**
                     * 设置Number of affected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _influenceAsset Number of affected assets
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of not fixed assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NotRepairAsset Number of not fixed assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNotRepairAsset() const;

                    /**
                     * 设置Number of not fixed assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _notRepairAsset Number of not fixed assets
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of not protected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NotProtectAsset Number of not protected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNotProtectAsset() const;

                    /**
                     * 设置Number of not protected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _notProtectAsset Number of not protected assets
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Task progress in terms of percentage
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskPercent Task progress in terms of percentage
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskPercent() const;

                    /**
                     * 设置Task progress in terms of percentage
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskPercent Task progress in terms of percentage
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Task creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskTime Task creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskTime() const;

                    /**
                     * 设置Task creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskTime Task creation time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanTime Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanTime Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * AppID of the user
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * Whether the asset is scanned. Values: `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isScan;
                    bool m_isScanHasBeenSet;

                    /**
                     * Number of affected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_influenceAsset;
                    bool m_influenceAssetHasBeenSet;

                    /**
                     * Number of not fixed assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_notRepairAsset;
                    bool m_notRepairAssetHasBeenSet;

                    /**
                     * Number of not protected assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_notProtectAsset;
                    bool m_notProtectAssetHasBeenSet;

                    /**
                     * Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task progress in terms of percentage
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskPercent;
                    bool m_taskPercentHasBeenSet;

                    /**
                     * Task creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_
