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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_

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
                * Vulnerability Information Product Support Status
                */
                class ProductSupport : public AbstractModel
                {
                public:
                    ProductSupport();
                    ~ProductSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取cveid
                     * @return CveId cveid
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cveid
                     * @param _cveId cveid
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
                     * cveid
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_
