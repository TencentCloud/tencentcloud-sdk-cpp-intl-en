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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEEXPORTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteExport request structure.
                */
                class DeleteExportRequest : public AbstractModel
                {
                public:
                    DeleteExportRequest();
                    ~DeleteExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log export task ID.
-Obtain the log export task Id through [Get Log Download Task List](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1).

                     * @return ExportId Log export task ID.
-Obtain the log export task Id through [Get Log Download Task List](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1).

                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置Log export task ID.
-Obtain the log export task Id through [Get Log Download Task List](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1).

                     * @param _exportId Log export task ID.
-Obtain the log export task Id through [Get Log Download Task List](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1).

                     * 
                     */
                    void SetExportId(const std::string& _exportId);

                    /**
                     * 判断参数 ExportId 是否已赋值
                     * @return ExportId 是否已赋值
                     * 
                     */
                    bool ExportIdHasBeenSet() const;

                private:

                    /**
                     * Log export task ID.
-Obtain the log export task Id through [Get Log Download Task List](https://www.tencentcloud.com/document/product/614/56449?from_cn_redirect=1).

                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEEXPORTREQUEST_H_
