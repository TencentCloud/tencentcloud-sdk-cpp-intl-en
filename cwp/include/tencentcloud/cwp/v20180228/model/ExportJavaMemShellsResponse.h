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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportJavaMemShells response structure.
                */
                class ExportJavaMemShellsResponse : public AbstractModel
                {
                public:
                    ExportJavaMemShellsResponse();
                    ~ExportJavaMemShellsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID, which is used to obtain the download URL (DownloadUrl) using the <a href="https://intl.cloud.tencent.com/document/product/296/52508?from_cn_redirect=1" target="_blank">asynchronous task export</a> API.
                     * @return TaskId Task ID, which is used to obtain the download URL (DownloadUrl) using the <a href="https://intl.cloud.tencent.com/document/product/296/52508?from_cn_redirect=1" target="_blank">asynchronous task export</a> API.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task ID, which is used to obtain the download URL (DownloadUrl) using the <a href="https://intl.cloud.tencent.com/document/product/296/52508?from_cn_redirect=1" target="_blank">asynchronous task export</a> API.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTJAVAMEMSHELLSRESPONSE_H_
