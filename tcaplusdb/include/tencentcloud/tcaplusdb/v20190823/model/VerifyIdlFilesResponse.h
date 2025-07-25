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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * VerifyIdlFiles response structure.
                */
                class VerifyIdlFilesResponse : public AbstractModel
                {
                public:
                    VerifyIdlFilesResponse();
                    ~VerifyIdlFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information list of all IDL files uploaded and verified in this request
                     * @return IdlFiles Information list of all IDL files uploaded and verified in this request
                     * 
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     * 
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取Number of valid tables parsed by reading IDL description file, excluding tables already created
                     * @return TotalCount Number of valid tables parsed by reading IDL description file, excluding tables already created
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
                     * 获取List of valid tables parsed by reading IDL description file, excluding tables already created
                     * @return TableInfos List of valid tables parsed by reading IDL description file, excluding tables already created
                     * 
                     */
                    std::vector<ParsedTableInfoNew> GetTableInfos() const;

                    /**
                     * 判断参数 TableInfos 是否已赋值
                     * @return TableInfos 是否已赋值
                     * 
                     */
                    bool TableInfosHasBeenSet() const;

                private:

                    /**
                     * Information list of all IDL files uploaded and verified in this request
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * Number of valid tables parsed by reading IDL description file, excluding tables already created
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of valid tables parsed by reading IDL description file, excluding tables already created
                     */
                    std::vector<ParsedTableInfoNew> m_tableInfos;
                    bool m_tableInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESRESPONSE_H_
