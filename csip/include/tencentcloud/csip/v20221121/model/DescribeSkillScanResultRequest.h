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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeSkillScanResult request structure.
                */
                class DescribeSkillScanResultRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanResultRequest();
                    ~DescribeSkillScanResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SHA256 Hash of the ZIP file
Parameter format: sha256:<64-bit hex>
                     * @return ContentHash SHA256 Hash of the ZIP file
Parameter format: sha256:<64-bit hex>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置SHA256 Hash of the ZIP file
Parameter format: sha256:<64-bit hex>
                     * @param _contentHash SHA256 Hash of the ZIP file
Parameter format: sha256:<64-bit hex>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取Specify the engine version number
Value for reference: API response of CreateSkillScan
                     * @return EngineVersion Specify the engine version number
Value for reference: API response of CreateSkillScan
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置Specify the engine version number
Value for reference: API response of CreateSkillScan
                     * @param _engineVersion Specify the engine version number
Value for reference: API response of CreateSkillScan
                     * 
                     */
                    void SetEngineVersion(const int64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Report signature address validity
Unit: hr
Default value: 8760 (1 year).
Supplementary explanation: The returned ReportURL takes effect.
                     * @return ReportURLExpireHours Report signature address validity
Unit: hr
Default value: 8760 (1 year).
Supplementary explanation: The returned ReportURL takes effect.
                     * 
                     */
                    int64_t GetReportURLExpireHours() const;

                    /**
                     * 设置Report signature address validity
Unit: hr
Default value: 8760 (1 year).
Supplementary explanation: The returned ReportURL takes effect.
                     * @param _reportURLExpireHours Report signature address validity
Unit: hr
Default value: 8760 (1 year).
Supplementary explanation: The returned ReportURL takes effect.
                     * 
                     */
                    void SetReportURLExpireHours(const int64_t& _reportURLExpireHours);

                    /**
                     * 判断参数 ReportURLExpireHours 是否已赋值
                     * @return ReportURLExpireHours 是否已赋值
                     * 
                     */
                    bool ReportURLExpireHoursHasBeenSet() const;

                private:

                    /**
                     * SHA256 Hash of the ZIP file
Parameter format: sha256:<64-bit hex>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * Specify the engine version number
Value for reference: API response of CreateSkillScan
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Report signature address validity
Unit: hr
Default value: 8760 (1 year).
Supplementary explanation: The returned ReportURL takes effect.
                     */
                    int64_t m_reportURLExpireHours;
                    bool m_reportURLExpireHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_
