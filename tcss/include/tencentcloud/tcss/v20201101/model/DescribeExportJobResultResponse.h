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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_

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
                * DescribeExportJobResult response structure.
                */
                class DescribeExportJobResultResponse : public AbstractModel
                {
                public:
                    DescribeExportJobResultResponse();
                    ~DescribeExportJobResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Export status. Valid values: `SUCCESS`, `FAILURE`, `RUNNING`.
                     * @return ExportStatus Export status. Valid values: `SUCCESS`, `FAILURE`, `RUNNING`.
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 判断参数 ExportStatus 是否已赋值
                     * @return ExportStatus 是否已赋值
                     * 
                     */
                    bool ExportStatusHasBeenSet() const;

                    /**
                     * 获取Download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownloadURL Download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取Export progress when `ExportStatus` is `RUNNING`. Value range: Floating points between `0` and `100`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExportProgress Export progress when `ExportStatus` is `RUNNING`. Value range: Floating points between `0` and `100`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetExportProgress() const;

                    /**
                     * 判断参数 ExportProgress 是否已赋值
                     * @return ExportProgress 是否已赋值
                     * 
                     */
                    bool ExportProgressHasBeenSet() const;

                    /**
                     * 获取Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailureMsg Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 判断参数 FailureMsg 是否已赋值
                     * @return FailureMsg 是否已赋值
                     * 
                     */
                    bool FailureMsgHasBeenSet() const;

                private:

                    /**
                     * Export status. Valid values: `SUCCESS`, `FAILURE`, `RUNNING`.
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * Download URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * Export progress when `ExportStatus` is `RUNNING`. Value range: Floating points between `0` and `100`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * Failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_
