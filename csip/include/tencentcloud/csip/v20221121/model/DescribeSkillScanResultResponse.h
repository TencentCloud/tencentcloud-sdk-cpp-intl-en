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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillScanItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanResult response structure.
                */
                class DescribeSkillScanResultResponse : public AbstractModel
                {
                public:
                    DescribeSkillScanResultResponse();
                    ~DescribeSkillScanResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detection status
Enumeration value:
SUCCESS: Detection completed, results returned.
SCANNING: Detection in progress
NOT_FOUND: No detection record.
FAILED: Detection failed
                     * @return Status Detection status
Enumeration value:
SUCCESS: Detection completed, results returned.
SCANNING: Detection in progress
NOT_FOUND: No detection record.
FAILED: Detection failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Detection result details. When Status=SUCCESS, most fields have values. When Status=SCANNING, it contains only ContentHash and CreatedAt. When Status=FAILED, it contains only ContentHash, FailedAt, and Message. When Status=NOT_FOUND, it contains only ContentHash.
                     * @return Data Detection result details. When Status=SUCCESS, most fields have values. When Status=SCANNING, it contains only ContentHash and CreatedAt. When Status=FAILED, it contains only ContentHash, FailedAt, and Message. When Status=NOT_FOUND, it contains only ContentHash.
                     * 
                     */
                    SkillScanItem GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Detection status
Enumeration value:
SUCCESS: Detection completed, results returned.
SCANNING: Detection in progress
NOT_FOUND: No detection record.
FAILED: Detection failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Detection result details. When Status=SUCCESS, most fields have values. When Status=SCANNING, it contains only ContentHash and CreatedAt. When Status=FAILED, it contains only ContentHash, FailedAt, and Message. When Status=NOT_FOUND, it contains only ContentHash.
                     */
                    SkillScanItem m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTRESPONSE_H_
