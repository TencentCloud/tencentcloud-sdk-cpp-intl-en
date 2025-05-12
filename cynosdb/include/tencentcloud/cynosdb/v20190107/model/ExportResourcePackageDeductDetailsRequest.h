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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ExportResourcePackageDeductDetails request structure.
                */
                class ExportResourcePackageDeductDetailsRequest : public AbstractModel
                {
                public:
                    ExportResourcePackageDeductDetailsRequest();
                    ~ExportResourcePackageDeductDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource package ID to be exported.
                     * @return PackageId Resource package ID to be exported.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置Resource package ID to be exported.
                     * @param _packageId Resource package ID to be exported.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Specifies the cluster ID of the cynos cluster that uses the resource package capacity.
                     * @return ClusterIds Specifies the cluster ID of the cynos cluster that uses the resource package capacity.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Specifies the cluster ID of the cynos cluster that uses the resource package capacity.
                     * @param _clusterIds Specifies the cluster ID of the cynos cluster that uses the resource package capacity.
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Sorting field. currently supports: createTime (resource package deduction time), successDeductSpec (resource package deduction amount).
                     * @return OrderBy Sorting field. currently supports: createTime (resource package deduction time), successDeductSpec (resource package deduction amount).
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. currently supports: createTime (resource package deduction time), successDeductSpec (resource package deduction amount).
                     * @param _orderBy Sorting field. currently supports: createTime (resource package deduction time), successDeductSpec (resource package deduction amount).
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
                     * 获取Sorting type. supports ASC, DESC, ASC, DESC.
                     * @return OrderByType Sorting type. supports ASC, DESC, ASC, DESC.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting type. supports ASC, DESC, ASC, DESC.
                     * @param _orderByType Sorting type. supports ASC, DESC, ASC, DESC.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取A maximum of 2000 rows of data can be exported at a time. currently, a maximum of 2000 rows are supported.
                     * @return Limit A maximum of 2000 rows of data can be exported at a time. currently, a maximum of 2000 rows are supported.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置A maximum of 2000 rows of data can be exported at a time. currently, a maximum of 2000 rows are supported.
                     * @param _limit A maximum of 2000 rows of data can be exported at a time. currently, a maximum of 2000 rows are supported.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset and page number.
                     * @return Offset Offset and page number.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset and page number.
                     * @param _offset Offset and page number.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Specifies the format for exporting data. currently only supports csv format, reserved for future expansion.
                     * @return FileType Specifies the format for exporting data. currently only supports csv format, reserved for future expansion.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Specifies the format for exporting data. currently only supports csv format, reserved for future expansion.
                     * @param _fileType Specifies the format for exporting data. currently only supports csv format, reserved for future expansion.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * Resource package ID to be exported.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Specifies the cluster ID of the cynos cluster that uses the resource package capacity.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Sorting field. currently supports: createTime (resource package deduction time), successDeductSpec (resource package deduction amount).
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting type. supports ASC, DESC, ASC, DESC.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * A maximum of 2000 rows of data can be exported at a time. currently, a maximum of 2000 rows are supported.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset and page number.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies the format for exporting data. currently only supports csv format, reserved for future expansion.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_
