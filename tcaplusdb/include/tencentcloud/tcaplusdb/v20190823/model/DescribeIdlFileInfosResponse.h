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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeIdlFileInfos response structure.
                */
                class DescribeIdlFileInfosResponse : public AbstractModel
                {
                public:
                    DescribeIdlFileInfosResponse();
                    ~DescribeIdlFileInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of files
                     * @return TotalCount Number of files
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of file details
                     * @return IdlFileInfos List of file details
                     */
                    std::vector<IdlFileInfo> GetIdlFileInfos() const;

                    /**
                     * 判断参数 IdlFileInfos 是否已赋值
                     * @return IdlFileInfos 是否已赋值
                     */
                    bool IdlFileInfosHasBeenSet() const;

                private:

                    /**
                     * Number of files
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of file details
                     */
                    std::vector<IdlFileInfo> m_idlFileInfos;
                    bool m_idlFileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSRESPONSE_H_
