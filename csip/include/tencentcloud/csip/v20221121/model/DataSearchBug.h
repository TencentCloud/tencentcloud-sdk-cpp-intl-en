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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BugInfoDetail.h>
#include <tencentcloud/csip/v20221121/model/AssetInfoDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability and asset information
                */
                class DataSearchBug : public AbstractModel
                {
                public:
                    DataSearchBug();
                    ~DataSearchBug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query status code
                     * @return StateCode Query status code
                     * 
                     */
                    std::string GetStateCode() const;

                    /**
                     * 设置Query status code
                     * @param _stateCode Query status code
                     * 
                     */
                    void SetStateCode(const std::string& _stateCode);

                    /**
                     * 判断参数 StateCode 是否已赋值
                     * @return StateCode 是否已赋值
                     * 
                     */
                    bool StateCodeHasBeenSet() const;

                    /**
                     * 获取 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DataBug  
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BugInfoDetail> GetDataBug() const;

                    /**
                     * 设置 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _dataBug  
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataBug(const std::vector<BugInfoDetail>& _dataBug);

                    /**
                     * 判断参数 DataBug 是否已赋值
                     * @return DataBug 是否已赋值
                     * 
                     */
                    bool DataBugHasBeenSet() const;

                    /**
                     * 获取None
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DataAsset None
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetInfoDetail> GetDataAsset() const;

                    /**
                     * 设置None
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _dataAsset None
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataAsset(const std::vector<AssetInfoDetail>& _dataAsset);

                    /**
                     * 判断参数 DataAsset 是否已赋值
                     * @return DataAsset 是否已赋值
                     * 
                     */
                    bool DataAssetHasBeenSet() const;

                    /**
                     * 获取`true`: Support vulnerability scan; `false`: Do not support vulnerability scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VSSScan `true`: Support vulnerability scan; `false`: Do not support vulnerability scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetVSSScan() const;

                    /**
                     * 设置`true`: Support vulnerability scan; `false`: Do not support vulnerability scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vSSScan `true`: Support vulnerability scan; `false`: Do not support vulnerability scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVSSScan(const bool& _vSSScan);

                    /**
                     * 判断参数 VSSScan 是否已赋值
                     * @return VSSScan 是否已赋值
                     * 
                     */
                    bool VSSScanHasBeenSet() const;

                    /**
                     * 获取`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPScan `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCWPScan() const;

                    /**
                     * 设置`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPScan `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPScan(const std::string& _cWPScan);

                    /**
                     * 判断参数 CWPScan 是否已赋值
                     * @return CWPScan 是否已赋值
                     * 
                     */
                    bool CWPScanHasBeenSet() const;

                    /**
                     * 获取`1`: Support virtual patches; `0` or null: Do not support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CFWPatch `1`: Support virtual patches; `0` or null: Do not support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCFWPatch() const;

                    /**
                     * 设置`1`: Support virtual patches; `0` or null: Do not support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cFWPatch `1`: Support virtual patches; `0` or null: Do not support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFWPatch(const std::string& _cFWPatch);

                    /**
                     * 判断参数 CFWPatch 是否已赋值
                     * @return CFWPatch 是否已赋值
                     * 
                     */
                    bool CFWPatchHasBeenSet() const;

                    /**
                     * 获取`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WafPatch `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWafPatch() const;

                    /**
                     * 设置`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _wafPatch `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWafPatch(const int64_t& _wafPatch);

                    /**
                     * 判断参数 WafPatch 是否已赋值
                     * @return WafPatch 是否已赋值
                     * 
                     */
                    bool WafPatchHasBeenSet() const;

                    /**
                     * 获取`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPFix `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCWPFix() const;

                    /**
                     * 设置`0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPFix `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPFix(const int64_t& _cWPFix);

                    /**
                     * 判断参数 CWPFix 是否已赋值
                     * @return CWPFix 是否已赋值
                     * 
                     */
                    bool CWPFixHasBeenSet() const;

                private:

                    /**
                     * Query status code
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     *  
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<BugInfoDetail> m_dataBug;
                    bool m_dataBugHasBeenSet;

                    /**
                     * None
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetInfoDetail> m_dataAsset;
                    bool m_dataAssetHasBeenSet;

                    /**
                     * `true`: Support vulnerability scan; `false`: Do not support vulnerability scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    bool m_vSSScan;
                    bool m_vSSScanHasBeenSet;

                    /**
                     * `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cWPScan;
                    bool m_cWPScanHasBeenSet;

                    /**
                     * `1`: Support virtual patches; `0` or null: Do not support
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cFWPatch;
                    bool m_cFWPatchHasBeenSet;

                    /**
                     * `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_wafPatch;
                    bool m_wafPatchHasBeenSet;

                    /**
                     * `0`: Do not support; `1`: Support
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cWPFix;
                    bool m_cWPFixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_
