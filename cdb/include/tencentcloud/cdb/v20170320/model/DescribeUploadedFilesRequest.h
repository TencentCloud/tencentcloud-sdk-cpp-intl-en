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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeUploadedFiles request structure.
                */
                class DescribeUploadedFilesRequest : public AbstractModel
                {
                public:
                    DescribeUploadedFilesRequest();
                    ~DescribeUploadedFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File path. `OwnerUin` information of the root account should be entered in this field.
                     * @return Path File path. `OwnerUin` information of the root account should be entered in this field.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置File path. `OwnerUin` information of the root account should be entered in this field.
                     * @param _path File path. `OwnerUin` information of the root account should be entered in this field.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Record offset. Default value: 0.
                     * @return Offset Record offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: 0.
                     * @param _offset Record offset. Default value: 0.
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
                     * 获取Number of results to be returned for a single request. Default value: 20.
                     * @return Limit Number of results to be returned for a single request. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned for a single request. Default value: 20.
                     * @param _limit Number of results to be returned for a single request. Default value: 20.
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
                     * File path. `OwnerUin` information of the root account should be entered in this field.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Record offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned for a single request. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_
