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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGEXPORTSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGEXPORTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/LogExport.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeLogExports response structure.
                */
                class DescribeLogExportsResponse : public AbstractModel
                {
                public:
                    DescribeLogExportsResponse();
                    ~DescribeLogExportsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of log export records
                     * @return LogExportSet List of log export records
                     * 
                     */
                    std::vector<LogExport> GetLogExportSet() const;

                    /**
                     * 判断参数 LogExportSet 是否已赋值
                     * @return LogExportSet 是否已赋值
                     * 
                     */
                    bool LogExportSetHasBeenSet() const;

                private:

                    /**
                     * List of log export records
                     */
                    std::vector<LogExport> m_logExportSet;
                    bool m_logExportSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGEXPORTSRESPONSE_H_
