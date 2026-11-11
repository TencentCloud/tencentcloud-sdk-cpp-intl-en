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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicyBrief.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset baseline risk
                */
                class AssetBaselineRisk : public AbstractModel
                {
                public:
                    AssetBaselineRisk();
                    ~AssetBaselineRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique identifier of a risk record.</p>
                     * @return RiskID <p>Unique identifier of a risk record.</p>
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 设置<p>Unique identifier of a risk record.</p>
                     * @param _riskID <p>Unique identifier of a risk record.</p>
                     * 
                     */
                    void SetRiskID(const std::string& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取<p>Detection item details.</p>
                     * @return Item <p>Detection item details.</p>
                     * 
                     */
                    BaselineItem GetItem() const;

                    /**
                     * 设置<p>Detection item details.</p>
                     * @param _item <p>Detection item details.</p>
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
                     * 获取<p>Most recent detection time (ISO 8601 format).</p>
                     * @return LatestCheckTime <p>Most recent detection time (ISO 8601 format).</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>Most recent detection time (ISO 8601 format).</p>
                     * @param _latestCheckTime <p>Most recent detection time (ISO 8601 format).</p>
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
                     * 获取<p>Detection result status. Parameter values:</p><ul><li>NOT_PASS: failed</li><li>PASS: passed</li><li>CHECKING: in-progress detection</li></ul><p></p>
                     * @return ResultStatus <p>Detection result status. Parameter values:</p><ul><li>NOT_PASS: failed</li><li>PASS: passed</li><li>CHECKING: in-progress detection</li></ul><p></p>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>Detection result status. Parameter values:</p><ul><li>NOT_PASS: failed</li><li>PASS: passed</li><li>CHECKING: in-progress detection</li></ul><p></p>
                     * @param _resultStatus <p>Detection result status. Parameter values:</p><ul><li>NOT_PASS: failed</li><li>PASS: passed</li><li>CHECKING: in-progress detection</li></ul><p></p>
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
                     * 获取<p>Brief information of the associated baseline policy.</p>
                     * @return PolicyInfo <p>Brief information of the associated baseline policy.</p>
                     * 
                     */
                    BaselinePolicyBrief GetPolicyInfo() const;

                    /**
                     * 设置<p>Brief information of the associated baseline policy.</p>
                     * @param _policyInfo <p>Brief information of the associated baseline policy.</p>
                     * 
                     */
                    void SetPolicyInfo(const BaselinePolicyBrief& _policyInfo);

                    /**
                     * 判断参数 PolicyInfo 是否已赋值
                     * @return PolicyInfo 是否已赋值
                     * 
                     */
                    bool PolicyInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier of a risk record.</p>
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>Detection item details.</p>
                     */
                    BaselineItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>Most recent detection time (ISO 8601 format).</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>Detection result status. Parameter values:</p><ul><li>NOT_PASS: failed</li><li>PASS: passed</li><li>CHECKING: in-progress detection</li></ul><p></p>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>Brief information of the associated baseline policy.</p>
                     */
                    BaselinePolicyBrief m_policyInfo;
                    bool m_policyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_
