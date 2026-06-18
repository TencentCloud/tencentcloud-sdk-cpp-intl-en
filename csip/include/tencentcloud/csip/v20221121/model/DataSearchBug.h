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
#include <tencentcloud/csip/v20221121/model/ProductSupport.h>


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
                     * 获取Vulnerability details
                     * @return DataBug Vulnerability details
                     * 
                     */
                    std::vector<BugInfoDetail> GetDataBug() const;

                    /**
                     * 设置Vulnerability details
                     * @param _dataBug Vulnerability details
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
                     * 获取Vulnerability impact assets details
                     * @return DataAsset Vulnerability impact assets details
                     * 
                     */
                    std::vector<AssetInfoDetail> GetDataAsset() const;

                    /**
                     * 设置Vulnerability impact assets details
                     * @param _dataAsset Vulnerability impact assets details
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
                     * 获取True supports scanning. False does not support scanning.
                     * @return VSSScan True supports scanning. False does not support scanning.
                     * 
                     */
                    bool GetVSSScan() const;

                    /**
                     * 设置True supports scanning. False does not support scanning.
                     * @param _vSSScan True supports scanning. False does not support scanning.
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
                     * 获取0-Not Supported; 1-Supported
                     * @return CWPScan 0-Not Supported; 1-Supported
                     * 
                     */
                    std::string GetCWPScan() const;

                    /**
                     * 设置0-Not Supported; 1-Supported
                     * @param _cWPScan 0-Not Supported; 1-Supported
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
                     * 获取1 indicates virtual patches supported, 0 or null indicates not supported.
                     * @return CFWPatch 1 indicates virtual patches supported, 0 or null indicates not supported.
                     * 
                     */
                    std::string GetCFWPatch() const;

                    /**
                     * 设置1 indicates virtual patches supported, 0 or null indicates not supported.
                     * @param _cFWPatch 1 indicates virtual patches supported, 0 or null indicates not supported.
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
                     * 获取0-Not Supported; 1-Supported
                     * @return WafPatch 0-Not Supported; 1-Supported
                     * 
                     */
                    int64_t GetWafPatch() const;

                    /**
                     * 设置0-Not Supported; 1-Supported
                     * @param _wafPatch 0-Not Supported; 1-Supported
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
                     * 获取0-Not Supported; 1-Supported
                     * @return CWPFix 0-Not Supported; 1-Supported
                     * 
                     */
                    int64_t GetCWPFix() const;

                    /**
                     * 设置0-Not Supported; 1-Supported
                     * @param _cWPFix 0-Not Supported; 1-Supported
                     * 
                     */
                    void SetCWPFix(const int64_t& _cWPFix);

                    /**
                     * 判断参数 CWPFix 是否已赋值
                     * @return CWPFix 是否已赋值
                     * 
                     */
                    bool CWPFixHasBeenSet() const;

                    /**
                     * 获取Product Support Status
                     * @return DataSupport Product Support Status
                     * 
                     */
                    std::vector<ProductSupport> GetDataSupport() const;

                    /**
                     * 设置Product Support Status
                     * @param _dataSupport Product Support Status
                     * 
                     */
                    void SetDataSupport(const std::vector<ProductSupport>& _dataSupport);

                    /**
                     * 判断参数 DataSupport 是否已赋值
                     * @return DataSupport 是否已赋值
                     * 
                     */
                    bool DataSupportHasBeenSet() const;

                    /**
                     * 获取cveId
                     * @return CveId cveId
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cveId
                     * @param _cveId cveId
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                private:

                    /**
                     * Query status code
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     * Vulnerability details
                     */
                    std::vector<BugInfoDetail> m_dataBug;
                    bool m_dataBugHasBeenSet;

                    /**
                     * Vulnerability impact assets details
                     */
                    std::vector<AssetInfoDetail> m_dataAsset;
                    bool m_dataAssetHasBeenSet;

                    /**
                     * True supports scanning. False does not support scanning.
                     */
                    bool m_vSSScan;
                    bool m_vSSScanHasBeenSet;

                    /**
                     * 0-Not Supported; 1-Supported
                     */
                    std::string m_cWPScan;
                    bool m_cWPScanHasBeenSet;

                    /**
                     * 1 indicates virtual patches supported, 0 or null indicates not supported.
                     */
                    std::string m_cFWPatch;
                    bool m_cFWPatchHasBeenSet;

                    /**
                     * 0-Not Supported; 1-Supported
                     */
                    int64_t m_wafPatch;
                    bool m_wafPatchHasBeenSet;

                    /**
                     * 0-Not Supported; 1-Supported
                     */
                    int64_t m_cWPFix;
                    bool m_cWPFixHasBeenSet;

                    /**
                     * Product Support Status
                     */
                    std::vector<ProductSupport> m_dataSupport;
                    bool m_dataSupportHasBeenSet;

                    /**
                     * cveId
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_
