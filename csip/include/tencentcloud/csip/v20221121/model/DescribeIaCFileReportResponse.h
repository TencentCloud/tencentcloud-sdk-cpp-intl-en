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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/IaCFileRisk.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeIaCFileReport response structure.
                */
                class DescribeIaCFileReportResponse : public AbstractModel
                {
                public:
                    DescribeIaCFileReportResponse();
                    ~DescribeIaCFileReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Detect file</p>
                     * @return File <p>Detect file</p>
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取<p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * @return Status <p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Detection time</p>
                     * @return ScanTime <p>Detection time</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Risk list</p>
                     * @return Risks <p>Risk list</p>
                     * 
                     */
                    std::vector<IaCFileRisk> GetRisks() const;

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                private:

                    /**
                     * <p>Detect file</p>
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * <p>Detection status (0: pending scan, 1: detecting, 2: completed, 3: detection exception)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Detection time</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>Risk list</p>
                     */
                    std::vector<IaCFileRisk> m_risks;
                    bool m_risksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_
