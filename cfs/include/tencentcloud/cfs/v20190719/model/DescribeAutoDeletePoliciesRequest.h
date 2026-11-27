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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTODELETEPOLICIESREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTODELETEPOLICIESREQUEST_H_

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
                * DescribeAutoDeletePolicies request structure.
                */
                class DescribeAutoDeletePoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAutoDeletePoliciesRequest();
                    ~DescribeAutoDeletePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system ID</p>
                     * @return FileSystemId <p>File system ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID</p>
                     * @param _fileSystemId <p>File system ID</p>
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
                     * 获取<p>Page offset.</p>
                     * @return Offset <p>Page offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Page offset.</p>
                     * @param _offset <p>Page offset.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Page size.</p>
                     * @return Limit <p>Page size.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Page size.</p>
                     * @param _limit <p>Page size.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Page offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Page size.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAUTODELETEPOLICIESREQUEST_H_
