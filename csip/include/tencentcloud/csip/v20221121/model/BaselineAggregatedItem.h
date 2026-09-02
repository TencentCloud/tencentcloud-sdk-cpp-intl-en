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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Aggregation results of the detection item dimension, carrying the pass/fail statistics of this detection item on assets.
                */
                class BaselineAggregatedItem : public AbstractModel
                {
                public:
                    BaselineAggregatedItem();
                    ~BaselineAggregatedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Basic detection item information (including ID, name, risk level, category, etc.).</p>
                     * @return Item <p>Basic detection item information (including ID, name, risk level, category, etc.).</p>
                     * 
                     */
                    BaselineItem GetItem() const;

                    /**
                     * 设置<p>Basic detection item information (including ID, name, risk level, category, etc.).</p>
                     * @param _item <p>Basic detection item information (including ID, name, risk level, category, etc.).</p>
                     * 
                     */
                    void SetItem(const BaselineItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets with a PASS result in the last scan for this detection item.</p>
                     * @return PassAssetCount <p>Number of assets with a PASS result in the last scan for this detection item.</p>
                     * 
                     */
                    uint64_t GetPassAssetCount() const;

                    /**
                     * 设置<p>Number of assets with a PASS result in the last scan for this detection item.</p>
                     * @param _passAssetCount <p>Number of assets with a PASS result in the last scan for this detection item.</p>
                     * 
                     */
                    void SetPassAssetCount(const uint64_t& _passAssetCount);

                    /**
                     * 判断参数 PassAssetCount 是否已赋值
                     * @return PassAssetCount 是否已赋值
                     * 
                     */
                    bool PassAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets with result NOT_PASS in the last scan of this detection item.</p>
                     * @return NotPassAssetCount <p>Number of assets with result NOT_PASS in the last scan of this detection item.</p>
                     * 
                     */
                    uint64_t GetNotPassAssetCount() const;

                    /**
                     * 设置<p>Number of assets with result NOT_PASS in the last scan of this detection item.</p>
                     * @param _notPassAssetCount <p>Number of assets with result NOT_PASS in the last scan of this detection item.</p>
                     * 
                     */
                    void SetNotPassAssetCount(const uint64_t& _notPassAssetCount);

                    /**
                     * 判断参数 NotPassAssetCount 是否已赋值
                     * @return NotPassAssetCount 是否已赋值
                     * 
                     */
                    bool NotPassAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets with the last scan result of PASS, NOT_PASS, and CHECKING for this detection item.</p>
                     * @return TotalAssetCount <p>Number of assets with the last scan result of PASS, NOT_PASS, and CHECKING for this detection item.</p>
                     * 
                     */
                    uint64_t GetTotalAssetCount() const;

                    /**
                     * 设置<p>Number of assets with the last scan result of PASS, NOT_PASS, and CHECKING for this detection item.</p>
                     * @param _totalAssetCount <p>Number of assets with the last scan result of PASS, NOT_PASS, and CHECKING for this detection item.</p>
                     * 
                     */
                    void SetTotalAssetCount(const uint64_t& _totalAssetCount);

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Pass rate of assets in the last scan of this detection item, unit: percentage (0–100).</p>
                     * @return PassRate <p>Pass rate of assets in the last scan of this detection item, unit: percentage (0–100).</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>Pass rate of assets in the last scan of this detection item, unit: percentage (0–100).</p>
                     * @param _passRate <p>Pass rate of assets in the last scan of this detection item, unit: percentage (0–100).</p>
                     * 
                     */
                    void SetPassRate(const double& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>The last time the scan for this detection item was completed.</p>
                     * @return LatestCheckTime <p>The last time the scan for this detection item was completed.</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>The last time the scan for this detection item was completed.</p>
                     * @param _latestCheckTime <p>The last time the scan for this detection item was completed.</p>
                     * 
                     */
                    void SetLatestCheckTime(const std::string& _latestCheckTime);

                    /**
                     * 判断参数 LatestCheckTime 是否已赋值
                     * @return LatestCheckTime 是否已赋值
                     * 
                     */
                    bool LatestCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>Status of the last scan result. Parameter Value:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li></ul>
                     * @return ResultStatus <p>Status of the last scan result. Parameter Value:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li></ul>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>Status of the last scan result. Parameter Value:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li></ul>
                     * @param _resultStatus <p>Status of the last scan result. Parameter Value:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li></ul>
                     * 
                     */
                    void SetResultStatus(const std::string& _resultStatus);

                    /**
                     * 判断参数 ResultStatus 是否已赋值
                     * @return ResultStatus 是否已赋值
                     * 
                     */
                    bool ResultStatusHasBeenSet() const;

                    /**
                     * 获取<p>Tenant Appid list involved in the aggregation result.</p>
                     * @return Appid <p>Tenant Appid list involved in the aggregation result.</p>
                     * 
                     */
                    std::vector<uint64_t> GetAppid() const;

                    /**
                     * 设置<p>Tenant Appid list involved in the aggregation result.</p>
                     * @param _appid <p>Tenant Appid list involved in the aggregation result.</p>
                     * 
                     */
                    void SetAppid(const std::vector<uint64_t>& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>List of scan JobIDs involved in this aggregation result.</p>
                     * @return JobID <p>List of scan JobIDs involved in this aggregation result.</p>
                     * 
                     */
                    std::vector<std::string> GetJobID() const;

                    /**
                     * 设置<p>List of scan JobIDs involved in this aggregation result.</p>
                     * @param _jobID <p>List of scan JobIDs involved in this aggregation result.</p>
                     * 
                     */
                    void SetJobID(const std::vector<std::string>& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                private:

                    /**
                     * <p>Basic detection item information (including ID, name, risk level, category, etc.).</p>
                     */
                    BaselineItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>Number of assets with a PASS result in the last scan for this detection item.</p>
                     */
                    uint64_t m_passAssetCount;
                    bool m_passAssetCountHasBeenSet;

                    /**
                     * <p>Number of assets with result NOT_PASS in the last scan of this detection item.</p>
                     */
                    uint64_t m_notPassAssetCount;
                    bool m_notPassAssetCountHasBeenSet;

                    /**
                     * <p>Number of assets with the last scan result of PASS, NOT_PASS, and CHECKING for this detection item.</p>
                     */
                    uint64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>Pass rate of assets in the last scan of this detection item, unit: percentage (0–100).</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>The last time the scan for this detection item was completed.</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>Status of the last scan result. Parameter Value:</p><ul><li>CHECKING: in-progress detection</li><li>PASS: passed</li><li>NOT_PASS: failed</li><li>CHECK_FAILED: detection failed</li><li>NOT_INVOLVED: not involved</li></ul>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>Tenant Appid list involved in the aggregation result.</p>
                     */
                    std::vector<uint64_t> m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>List of scan JobIDs involved in this aggregation result.</p>
                     */
                    std::vector<std::string> m_jobID;
                    bool m_jobIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_
