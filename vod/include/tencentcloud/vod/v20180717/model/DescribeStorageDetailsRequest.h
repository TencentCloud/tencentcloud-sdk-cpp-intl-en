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
                     * 获取Start time. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return StartTime Start time. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _startTime Start time. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
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
                     * 获取End time, which must be greater than the start date. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return EndTime End time, which must be greater than the start date. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, which must be greater than the start date. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _endTime End time, which must be greater than the start date. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Statistical time granularity. Valid values:
<li>Minute: 5 minutes.</li>
<li>Day: day.</li>
By default, the granularity is determined by the time span. It is 5 minutes for a duration of up to 1 day and day for over 1 day.
                     * @return Interval Statistical time granularity. Valid values:
<li>Minute: 5 minutes.</li>
<li>Day: day.</li>
By default, the granularity is determined by the time span. It is 5 minutes for a duration of up to 1 day and day for over 1 day.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Statistical time granularity. Valid values:
<li>Minute: 5 minutes.</li>
<li>Day: day.</li>
By default, the granularity is determined by the time span. It is 5 minutes for a duration of up to 1 day and day for over 1 day.
                     * @param _interval Statistical time granularity. Valid values:
<li>Minute: 5 minutes.</li>
<li>Day: day.</li>
By default, the granularity is determined by the time span. It is 5 minutes for a duration of up to 1 day and day for over 1 day.
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
                     * 获取Storage type for query. Valid values:
<li>TotalStorage: Total stored amount, sum of standard, infrequent, archive, and deep archive storage capacity, excluding early deletion amount.</li>
<li>StandardStorage: Standard storage.</li>
<li>InfrequentStorage: Infrequent storage.</li>
<li>ArchiveStorage: Archive storage.</li>
<li>DeepArchiveStorage: deep archive storage.</li>
<li>DeletedInfrequentStorage: Early deletion amount of infrequent storage.</li>
<li>DeletedArchiveStorage: Early deletion amount of archive.</li>
<li>DeletedDeepArchiveStorage: Early deletion amount of deep archive.</li>
<li>ArchiveStandardRetrieval: Standard retrieval volume of archive.</li>
<li>ArchiveExpeditedRetrieval: Quick retrieval volume of archive.</li>
<li>ArchiveBulkRetrieval: Archive batch retrieval amount.</li>
<li>DeepArchiveStandardRetrieval: Deep archive standard retrieval.</li>
<li>DeepArchiveBulkRetrieval: Deep archive batch retrieval amount.</li>
<li>InfrequentRetrieval: Retrieval volume of infrequent storage.</li>
Default value: TotalStorage.
                     * @return StorageType Storage type for query. Valid values:
<li>TotalStorage: Total stored amount, sum of standard, infrequent, archive, and deep archive storage capacity, excluding early deletion amount.</li>
<li>StandardStorage: Standard storage.</li>
<li>InfrequentStorage: Infrequent storage.</li>
<li>ArchiveStorage: Archive storage.</li>
<li>DeepArchiveStorage: deep archive storage.</li>
<li>DeletedInfrequentStorage: Early deletion amount of infrequent storage.</li>
<li>DeletedArchiveStorage: Early deletion amount of archive.</li>
<li>DeletedDeepArchiveStorage: Early deletion amount of deep archive.</li>
<li>ArchiveStandardRetrieval: Standard retrieval volume of archive.</li>
<li>ArchiveExpeditedRetrieval: Quick retrieval volume of archive.</li>
<li>ArchiveBulkRetrieval: Archive batch retrieval amount.</li>
<li>DeepArchiveStandardRetrieval: Deep archive standard retrieval.</li>
<li>DeepArchiveBulkRetrieval: Deep archive batch retrieval amount.</li>
<li>InfrequentRetrieval: Retrieval volume of infrequent storage.</li>
Default value: TotalStorage.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type for query. Valid values:
<li>TotalStorage: Total stored amount, sum of standard, infrequent, archive, and deep archive storage capacity, excluding early deletion amount.</li>
<li>StandardStorage: Standard storage.</li>
<li>InfrequentStorage: Infrequent storage.</li>
<li>ArchiveStorage: Archive storage.</li>
<li>DeepArchiveStorage: deep archive storage.</li>
<li>DeletedInfrequentStorage: Early deletion amount of infrequent storage.</li>
<li>DeletedArchiveStorage: Early deletion amount of archive.</li>
<li>DeletedDeepArchiveStorage: Early deletion amount of deep archive.</li>
<li>ArchiveStandardRetrieval: Standard retrieval volume of archive.</li>
<li>ArchiveExpeditedRetrieval: Quick retrieval volume of archive.</li>
<li>ArchiveBulkRetrieval: Archive batch retrieval amount.</li>
<li>DeepArchiveStandardRetrieval: Deep archive standard retrieval.</li>
<li>DeepArchiveBulkRetrieval: Deep archive batch retrieval amount.</li>
<li>InfrequentRetrieval: Retrieval volume of infrequent storage.</li>
Default value: TotalStorage.
                     * @param _storageType Storage type for query. Valid values:
<li>TotalStorage: Total stored amount, sum of standard, infrequent, archive, and deep archive storage capacity, excluding early deletion amount.</li>
<li>StandardStorage: Standard storage.</li>
<li>InfrequentStorage: Infrequent storage.</li>
<li>ArchiveStorage: Archive storage.</li>
<li>DeepArchiveStorage: deep archive storage.</li>
<li>DeletedInfrequentStorage: Early deletion amount of infrequent storage.</li>
<li>DeletedArchiveStorage: Early deletion amount of archive.</li>
<li>DeletedDeepArchiveStorage: Early deletion amount of deep archive.</li>
<li>ArchiveStandardRetrieval: Standard retrieval volume of archive.</li>
<li>ArchiveExpeditedRetrieval: Quick retrieval volume of archive.</li>
<li>ArchiveBulkRetrieval: Archive batch retrieval amount.</li>
<li>DeepArchiveStandardRetrieval: Deep archive standard retrieval.</li>
<li>DeepArchiveBulkRetrieval: Deep archive batch retrieval amount.</li>
<li>InfrequentRetrieval: Retrieval volume of infrequent storage.</li>
Default value: TotalStorage.
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
                     * 获取Storage region for query. Valid value:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China) and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
Default value is Chinese Mainland.
                     * @return Area Storage region for query. Valid value:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China) and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
Default value is Chinese Mainland.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Storage region for query. Valid value:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China) and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
Default value is Chinese Mainland.
                     * @param _area Storage region for query. Valid value:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China) and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
Default value is Chinese Mainland.
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
                     * Start time. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which must be greater than the start date. Format according to ISO 8601. For details, see the [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Statistical time granularity. Valid values:
<li>Minute: 5 minutes.</li>
<li>Day: day.</li>
By default, the granularity is determined by the time span. It is 5 minutes for a duration of up to 1 day and day for over 1 day.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Storage type for query. Valid values:
<li>TotalStorage: Total stored amount, sum of standard, infrequent, archive, and deep archive storage capacity, excluding early deletion amount.</li>
<li>StandardStorage: Standard storage.</li>
<li>InfrequentStorage: Infrequent storage.</li>
<li>ArchiveStorage: Archive storage.</li>
<li>DeepArchiveStorage: deep archive storage.</li>
<li>DeletedInfrequentStorage: Early deletion amount of infrequent storage.</li>
<li>DeletedArchiveStorage: Early deletion amount of archive.</li>
<li>DeletedDeepArchiveStorage: Early deletion amount of deep archive.</li>
<li>ArchiveStandardRetrieval: Standard retrieval volume of archive.</li>
<li>ArchiveExpeditedRetrieval: Quick retrieval volume of archive.</li>
<li>ArchiveBulkRetrieval: Archive batch retrieval amount.</li>
<li>DeepArchiveStandardRetrieval: Deep archive standard retrieval.</li>
<li>DeepArchiveBulkRetrieval: Deep archive batch retrieval amount.</li>
<li>InfrequentRetrieval: Retrieval volume of infrequent storage.</li>
Default value: TotalStorage.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Storage region for query. Valid value:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China) and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
Default value is Chinese Mainland.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDETAILSREQUEST_H_
