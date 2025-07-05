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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBusinessIntelligenceFile request structure.
                */
                class DescribeBusinessIntelligenceFileRequest : public AbstractModel
                {
                public:
                    DescribeBusinessIntelligenceFileRequest();
                    ~DescribeBusinessIntelligenceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Migration task status set. Valid values: `1` (Initialize to be deployed), `2` (Deploying), `3` (Deployment successful), `4` (Deployment failed)
                     * @return StatusSet Migration task status set. Valid values: `1` (Initialize to be deployed), `2` (Deploying), `3` (Deployment successful), `4` (Deployment failed)
                     * 
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置Migration task status set. Valid values: `1` (Initialize to be deployed), `2` (Deploying), `3` (Deployment successful), `4` (Deployment failed)
                     * @param _statusSet Migration task status set. Valid values: `1` (Initialize to be deployed), `2` (Deploying), `3` (Deployment successful), `4` (Deployment failed)
                     * 
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取File type. Valid values: `FLAT` (flat files), `SSIS` (project file for business intelligence service).
                     * @return FileType File type. Valid values: `FLAT` (flat files), `SSIS` (project file for business intelligence service).
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type. Valid values: `FLAT` (flat files), `SSIS` (project file for business intelligence service).
                     * @param _fileType File type. Valid values: `FLAT` (flat files), `SSIS` (project file for business intelligence service).
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned per page. Value range: 1-100.
                     * @return Limit The maximum number of results returned per page. Value range: 1-100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Value range: 1-100.
                     * @param _limit The maximum number of results returned per page. Value range: 1-100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`.
                     * @return Offset Page number. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`.
                     * @param _offset Page number. Default value: `0`.
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
                     * 获取Sorting field. Valid values: `file_name`, `create_time`, `start_time`.
                     * @return OrderBy Sorting field. Valid values: `file_name`, `create_time`, `start_time`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values: `file_name`, `create_time`, `start_time`.
                     * @param _orderBy Sorting field. Valid values: `file_name`, `create_time`, `start_time`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order: Valid values: `desc`, `asc`.
                     * @return OrderByType Sorting order: Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order: Valid values: `desc`, `asc`.
                     * @param _orderByType Sorting order: Valid values: `desc`, `asc`.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Migration task status set. Valid values: `1` (Initialize to be deployed), `2` (Deploying), `3` (Deployment successful), `4` (Deployment failed)
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * File type. Valid values: `FLAT` (flat files), `SSIS` (project file for business intelligence service).
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * The maximum number of results returned per page. Value range: 1-100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Valid values: `file_name`, `create_time`, `start_time`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order: Valid values: `desc`, `asc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_
