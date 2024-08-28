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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTRESPONSE_H_

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
                * ExportVulEffectHostList response structure.
                */
                class ExportVulEffectHostListResponse : public AbstractModel
                {
                public:
                    ExportVulEffectHostListResponse();
                    ~ExportVulEffectHostListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This parameter has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownloadUrl This parameter has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Export task ID, which can be downloaded by using the API ExportTasks.
                     * @return TaskId Export task ID, which can be downloaded by using the API ExportTasks.
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
                     * This parameter has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Export task ID, which can be downloaded by using the API ExportTasks.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTRESPONSE_H_
