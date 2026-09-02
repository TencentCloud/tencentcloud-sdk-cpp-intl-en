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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLRESPONSE_H_

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
                * DescribeExportJobDownloadURL response structure.
                */
                class DescribeExportJobDownloadURLResponse : public AbstractModel
                {
                public:
                    DescribeExportJobDownloadURLResponse();
                    ~DescribeExportJobDownloadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Download URL.
                     * @return DownloadURL Download URL.
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
                     * 获取Task status: RUNNING/SUCCESS/FAILURE
                     * @return ExportStatus Task status: RUNNING/SUCCESS/FAILURE
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 判断参数 ExportStatus 是否已赋值
                     * @return ExportStatus 是否已赋值
                     * 
                     */
                    bool ExportStatusHasBeenSet() const;

                private:

                    /**
                     * Download URL.
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * Task status: RUNNING/SUCCESS/FAILURE
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLRESPONSE_H_
