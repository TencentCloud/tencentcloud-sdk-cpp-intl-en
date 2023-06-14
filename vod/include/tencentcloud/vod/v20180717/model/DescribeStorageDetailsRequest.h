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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeStorageDetails request structure.
                */
                class DescribeStorageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeStorageDetailsRequest();
                    ~DescribeStorageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in ISO 8601 format. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @return StartTime Start time in ISO 8601 format. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in ISO 8601 format. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @param _startTime Start time in ISO 8601 format. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
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
                     * 获取End time in ISO 8601 format, which should be larger than the start time. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @return EndTime End time in ISO 8601 format, which should be larger than the start time. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in ISO 8601 format, which should be larger than the start time. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @param _endTime End time in ISO 8601 format, which should be larger than the start time. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
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
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
You can set this parameter to 1 to query the total usage of all applications (including the primary application) as an admin.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
You can set this parameter to 1 to query the total usage of all applications (including the primary application) as an admin.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
You can set this parameter to 1 to query the total usage of all applications (including the primary application) as an admin.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
You can set this parameter to 1 to query the total usage of all applications (including the primary application) as an admin.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Time granularity. Valid values:
<li>Minute: 5-minute granularity</li>
<li>Day: 1-day granularity</li>
The value is set according to query period length by default. 5-minute granularity is set for periods no longer than 1 day, and 1-day granularity is set for periods longer than 1 day.
                     * @return Interval Time granularity. Valid values:
<li>Minute: 5-minute granularity</li>
<li>Day: 1-day granularity</li>
The value is set according to query period length by default. 5-minute granularity is set for periods no longer than 1 day, and 1-day granularity is set for periods longer than 1 day.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity. Valid values:
<li>Minute: 5-minute granularity</li>
<li>Day: 1-day granularity</li>
The value is set according to query period length by default. 5-minute granularity is set for periods no longer than 1 day, and 1-day granularity is set for periods longer than 1 day.
                     * @param _interval Time granularity. Valid values:
<li>Minute: 5-minute granularity</li>
<li>Day: 1-day granularity</li>
The value is set according to query period length by default. 5-minute granularity is set for periods no longer than 1 day, and 1-day granularity is set for periods longer than 1 day.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Storage class to query. Valid values:
<li>`TotalStorage`: total storage usage in classes of STANDARD, STANDARD_IA, ARCHIVE, and DEEP ARCHIVE, excluding the storage usage for data deleted in advance.</li>
<li>`StandardStorage`: STANDARD</li>
<li>`InfrequentStorage`: STANDARD_IA</li>
<li>`ArchiveStorage`: ARCHIVE</li>
<li>`DeepArchiveStorage`: DEEP ARCHIVE</li>
<li>`DeletedInfrequentStorage`: STANDARD_IA data deleted in advance</li>
<li>`DeletedArchiveStorage`: ARCHIVE data deleted in advance</li>
<li>`DeletedDeepArchiveStorage`: DEEP ARCHIVE data deleted in advance</li>
<li>`ArchiveStandardRetrieval`: ARCHIVE data retrieved using standard retrievals</li>
<li>`ArchiveExpeditedRetrieval`: ARCHIVE data retrieved using expedited retrievals</li>
<li>`ArchiveBulkRetrieval`: ARCHIVE data retrieved using bulk retrievals</li>
<li>`DeepArchiveStandardRetrieval`: DEEP ARCHIVE data retrieved using standard retrievals</li>
<li>`DeepArchiveBulkRetrieval`: DEEP ARCHIVE data retrieved using bulk retrievals</li>
Default value: `TotalStorage`
                     * @return StorageType Storage class to query. Valid values:
<li>`TotalStorage`: total storage usage in classes of STANDARD, STANDARD_IA, ARCHIVE, and DEEP ARCHIVE, excluding the storage usage for data deleted in advance.</li>
<li>`StandardStorage`: STANDARD</li>
<li>`InfrequentStorage`: STANDARD_IA</li>
<li>`ArchiveStorage`: ARCHIVE</li>
<li>`DeepArchiveStorage`: DEEP ARCHIVE</li>
<li>`DeletedInfrequentStorage`: STANDARD_IA data deleted in advance</li>
<li>`DeletedArchiveStorage`: ARCHIVE data deleted in advance</li>
<li>`DeletedDeepArchiveStorage`: DEEP ARCHIVE data deleted in advance</li>
<li>`ArchiveStandardRetrieval`: ARCHIVE data retrieved using standard retrievals</li>
<li>`ArchiveExpeditedRetrieval`: ARCHIVE data retrieved using expedited retrievals</li>
<li>`ArchiveBulkRetrieval`: ARCHIVE data retrieved using bulk retrievals</li>
<li>`DeepArchiveStandardRetrieval`: DEEP ARCHIVE data retrieved using standard retrievals</li>
<li>`DeepArchiveBulkRetrieval`: DEEP ARCHIVE data retrieved using bulk retrievals</li>
Default value: `TotalStorage`
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage class to query. Valid values:
<li>`TotalStorage`: total storage usage in classes of STANDARD, STANDARD_IA, ARCHIVE, and DEEP ARCHIVE, excluding the storage usage for data deleted in advance.</li>
<li>`StandardStorage`: STANDARD</li>
<li>`InfrequentStorage`: STANDARD_IA</li>
<li>`ArchiveStorage`: ARCHIVE</li>
<li>`DeepArchiveStorage`: DEEP ARCHIVE</li>
<li>`DeletedInfrequentStorage`: STANDARD_IA data deleted in advance</li>
<li>`DeletedArchiveStorage`: ARCHIVE data deleted in advance</li>
<li>`DeletedDeepArchiveStorage`: DEEP ARCHIVE data deleted in advance</li>
<li>`ArchiveStandardRetrieval`: ARCHIVE data retrieved using standard retrievals</li>
<li>`ArchiveExpeditedRetrieval`: ARCHIVE data retrieved using expedited retrievals</li>
<li>`ArchiveBulkRetrieval`: ARCHIVE data retrieved using bulk retrievals</li>
<li>`DeepArchiveStandardRetrieval`: DEEP ARCHIVE data retrieved using standard retrievals</li>
<li>`DeepArchiveBulkRetrieval`: DEEP ARCHIVE data retrieved using bulk retrievals</li>
Default value: `TotalStorage`
                     * @param _storageType Storage class to query. Valid values:
<li>`TotalStorage`: total storage usage in classes of STANDARD, STANDARD_IA, ARCHIVE, and DEEP ARCHIVE, excluding the storage usage for data deleted in advance.</li>
<li>`StandardStorage`: STANDARD</li>
<li>`InfrequentStorage`: STANDARD_IA</li>
<li>`ArchiveStorage`: ARCHIVE</li>
<li>`DeepArchiveStorage`: DEEP ARCHIVE</li>
<li>`DeletedInfrequentStorage`: STANDARD_IA data deleted in advance</li>
<li>`DeletedArchiveStorage`: ARCHIVE data deleted in advance</li>
<li>`DeletedDeepArchiveStorage`: DEEP ARCHIVE data deleted in advance</li>
<li>`ArchiveStandardRetrieval`: ARCHIVE data retrieved using standard retrievals</li>
<li>`ArchiveExpeditedRetrieval`: ARCHIVE data retrieved using expedited retrievals</li>
<li>`ArchiveBulkRetrieval`: ARCHIVE data retrieved using bulk retrievals</li>
<li>`DeepArchiveStandardRetrieval`: DEEP ARCHIVE data retrieved using standard retrievals</li>
<li>`DeepArchiveBulkRetrieval`: DEEP ARCHIVE data retrieved using bulk retrievals</li>
Default value: `TotalStorage`
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Storage region to query. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
Default value: Chinese Mainland
                     * @return Area Storage region to query. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
Default value: Chinese Mainland
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Storage region to query. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
Default value: Chinese Mainland
                     * @param _area Storage region to query. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
Default value: Chinese Mainland
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Start time in ISO 8601 format. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in ISO 8601 format, which should be larger than the start time. For more information, please see [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
You can set this parameter to 1 to query the total usage of all applications (including the primary application) as an admin.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Time granularity. Valid values:
<li>Minute: 5-minute granularity</li>
<li>Day: 1-day granularity</li>
The value is set according to query period length by default. 5-minute granularity is set for periods no longer than 1 day, and 1-day granularity is set for periods longer than 1 day.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Storage class to query. Valid values:
<li>`TotalStorage`: total storage usage in classes of STANDARD, STANDARD_IA, ARCHIVE, and DEEP ARCHIVE, excluding the storage usage for data deleted in advance.</li>
<li>`StandardStorage`: STANDARD</li>
<li>`InfrequentStorage`: STANDARD_IA</li>
<li>`ArchiveStorage`: ARCHIVE</li>
<li>`DeepArchiveStorage`: DEEP ARCHIVE</li>
<li>`DeletedInfrequentStorage`: STANDARD_IA data deleted in advance</li>
<li>`DeletedArchiveStorage`: ARCHIVE data deleted in advance</li>
<li>`DeletedDeepArchiveStorage`: DEEP ARCHIVE data deleted in advance</li>
<li>`ArchiveStandardRetrieval`: ARCHIVE data retrieved using standard retrievals</li>
<li>`ArchiveExpeditedRetrieval`: ARCHIVE data retrieved using expedited retrievals</li>
<li>`ArchiveBulkRetrieval`: ARCHIVE data retrieved using bulk retrievals</li>
<li>`DeepArchiveStandardRetrieval`: DEEP ARCHIVE data retrieved using standard retrievals</li>
<li>`DeepArchiveBulkRetrieval`: DEEP ARCHIVE data retrieved using bulk retrievals</li>
Default value: `TotalStorage`
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Storage region to query. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
Default value: Chinese Mainland
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_
