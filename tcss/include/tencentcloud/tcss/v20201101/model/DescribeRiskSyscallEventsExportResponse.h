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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLEVENTSEXPORTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLEVENTSEXPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeRiskSyscallEventsExport response structure.
                */
                class DescribeRiskSyscallEventsExportResponse : public AbstractModel
                {
                public:
                    DescribeRiskSyscallEventsExportResponse();
                    ~DescribeRiskSyscallEventsExportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Excel download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownloadUrl Excel download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * Excel download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKSYSCALLEVENTSEXPORTRESPONSE_H_
