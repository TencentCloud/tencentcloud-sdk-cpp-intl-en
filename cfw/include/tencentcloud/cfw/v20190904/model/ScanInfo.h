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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/ScanResultInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Getting started on scanning information  
                */
                class ScanInfo : public AbstractModel
                {
                public:
                    ScanInfo();
                    ~ScanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scanning result information
                     * @return ScanResultInfo Scanning result information
                     * 
                     */
                    ScanResultInfo GetScanResultInfo() const;

                    /**
                     * 设置Scanning result information
                     * @param _scanResultInfo Scanning result information
                     * 
                     */
                    void SetScanResultInfo(const ScanResultInfo& _scanResultInfo);

                    /**
                     * 判断参数 ScanResultInfo 是否已赋值
                     * @return ScanResultInfo 是否已赋值
                     * 
                     */
                    bool ScanResultInfoHasBeenSet() const;

                    /**
                     * 获取Scanning status. 0: scanning; 1: completed; 2: auto scanning unselected
                     * @return ScanStatus Scanning status. 0: scanning; 1: completed; 2: auto scanning unselected
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Scanning status. 0: scanning; 1: completed; 2: auto scanning unselected
                     * @param _scanStatus Scanning status. 0: scanning; 1: completed; 2: auto scanning unselected
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Progress
                     * @return ScanPercent Progress
                     * 
                     */
                    double GetScanPercent() const;

                    /**
                     * 设置Progress
                     * @param _scanPercent Progress
                     * 
                     */
                    void SetScanPercent(const double& _scanPercent);

                    /**
                     * 判断参数 ScanPercent 是否已赋值
                     * @return ScanPercent 是否已赋值
                     * 
                     */
                    bool ScanPercentHasBeenSet() const;

                    /**
                     * 获取Estimated completion time
                     * @return ScanTime Estimated completion time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Estimated completion time
                     * @param _scanTime Estimated completion time
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
                     * Scanning result information
                     */
                    ScanResultInfo m_scanResultInfo;
                    bool m_scanResultInfoHasBeenSet;

                    /**
                     * Scanning status. 0: scanning; 1: completed; 2: auto scanning unselected
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Progress
                     */
                    double m_scanPercent;
                    bool m_scanPercentHasBeenSet;

                    /**
                     * Estimated completion time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_
