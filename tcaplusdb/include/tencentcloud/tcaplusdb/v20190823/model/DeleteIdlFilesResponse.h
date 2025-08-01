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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfoWithoutContent.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteIdlFiles response structure.
                */
                class DeleteIdlFilesResponse : public AbstractModel
                {
                public:
                    DeleteIdlFilesResponse();
                    ~DeleteIdlFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned results
                     * @return TotalCount Number of returned results
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Deletion result
                     * @return IdlFileInfos Deletion result
                     * 
                     */
                    std::vector<IdlFileInfoWithoutContent> GetIdlFileInfos() const;

                    /**
                     * 判断参数 IdlFileInfos 是否已赋值
                     * @return IdlFileInfos 是否已赋值
                     * 
                     */
                    bool IdlFileInfosHasBeenSet() const;

                private:

                    /**
                     * Number of returned results
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Deletion result
                     */
                    std::vector<IdlFileInfoWithoutContent> m_idlFileInfos;
                    bool m_idlFileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESRESPONSE_H_
