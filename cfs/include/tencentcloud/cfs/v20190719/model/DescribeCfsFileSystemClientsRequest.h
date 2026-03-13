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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsFileSystemClients request structure.
                */
                class DescribeCfsFileSystemClientsRequest : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemClientsRequest();
                    ~DescribeCfsFileSystemClientsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * @return FileSystemId File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * @param _fileSystemId File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Offset paging number, defaults to 0.
                     * @return Offset Offset paging number, defaults to 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset paging number, defaults to 0.
                     * @param _offset Offset paging number, defaults to 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit page size. default value 10. maximum value 100.
                     * @return Limit Limit page size. default value 10. maximum value 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit page size. default value 10. maximum value 100.
                     * @param _limit Limit page size. default value 10. maximum value 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * File system ID. obtain it by querying the file system interface (https://www.tencentcloud.com/document/api/582/38170?from_cn_redirect=1).
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Offset paging number, defaults to 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit page size. default value 10. maximum value 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSREQUEST_H_
