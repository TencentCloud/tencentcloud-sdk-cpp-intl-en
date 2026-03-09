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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskFolderPage.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTaskFolders response structure.
                */
                class ListTaskFoldersResponse : public AbstractModel
                {
                public:
                    ListTaskFoldersResponse();
                    ~ListTaskFoldersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Paged folder query result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Paged folder query result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskFolderPage GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Paged folder query result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskFolderPage m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKFOLDERSRESPONSE_H_
