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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FilterRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/CompressInfo.h>
#include <tencentcloud/cls/v20201016/model/ContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Shipping rule
                */
                class ShipperInfo : public AbstractModel
                {
                public:
                    ShipperInfo();
                    ~ShipperInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Delivery Rule ID</p>
                     * @return ShipperId <p>Delivery Rule ID</p>
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置<p>Delivery Rule ID</p>
                     * @param _shipperId <p>Delivery Rule ID</p>
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取<p>Log topic ID.</p>
                     * @return TopicId <p>Log topic ID.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic ID.</p>
                     * @param _topicId <p>Log topic ID.</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>bucket address for shipping</p>
                     * @return Bucket <p>bucket address for shipping</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>bucket address for shipping</p>
                     * @param _bucket <p>bucket address for shipping</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>Delivery prefix directory</p>
                     * @return Prefix <p>Delivery prefix directory</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>Delivery prefix directory</p>
                     * @param _prefix <p>Delivery prefix directory</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>Shipping rule name</p>
                     * @return ShipperName <p>Shipping rule name</p>
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置<p>Shipping rule name</p>
                     * @param _shipperName <p>Shipping rule name</p>
                     * 
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     * 
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取<p>Shipping time interval. Unit: seconds</p>
                     * @return Interval <p>Shipping time interval. Unit: seconds</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>Shipping time interval. Unit: seconds</p>
                     * @param _interval <p>Shipping time interval. Unit: seconds</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Maximum value of delivered files in MB</p>
                     * @return MaxSize <p>Maximum value of delivered files in MB</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>Maximum value of delivered files in MB</p>
                     * @param _maxSize <p>Maximum value of delivered files in MB</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>Whether effective</p>
                     * @return Status <p>Whether effective</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Whether effective</p>
                     * @param _status <p>Whether effective</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Filter rules for log shipping</p>
                     * @return FilterRules <p>Filter rules for log shipping</p>
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置<p>Filter rules for log shipping</p>
                     * @param _filterRules <p>Filter rules for log shipping</p>
                     * 
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>Partition rules for log shipping support strftime time format representation</p>
                     * @return Partition <p>Partition rules for log shipping support strftime time format representation</p>
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置<p>Partition rules for log shipping support strftime time format representation</p>
                     * @param _partition <p>Partition rules for log shipping support strftime time format representation</p>
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取<p>Compression configuration of shipped logs</p>
                     * @return Compress <p>Compression configuration of shipped logs</p>
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置<p>Compression configuration of shipped logs</p>
                     * @param _compress <p>Compression configuration of shipped logs</p>
                     * 
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取<p>Content format configuration for shipped logs</p>
                     * @return Content <p>Content format configuration for shipped logs</p>
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置<p>Content format configuration for shipped logs</p>
                     * @param _content <p>Content format configuration for shipped logs</p>
                     * 
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Creation time of shipped logs. Format: YYYY-MM-DD HH:MM:SS</p>
                     * @return CreateTime <p>Creation time of shipped logs. Format: YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time of shipped logs. Format: YYYY-MM-DD HH:MM:SS</p>
                     * @param _createTime <p>Creation time of shipped logs. Format: YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Delivery file naming configuration. 0: Random number naming, 1: Delivery time naming. Default: 0 (Random number naming).</p>
                     * @return FilenameMode <p>Delivery file naming configuration. 0: Random number naming, 1: Delivery time naming. Default: 0 (Random number naming).</p>
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置<p>Delivery file naming configuration. 0: Random number naming, 1: Delivery time naming. Default: 0 (Random number naming).</p>
                     * @param _filenameMode <p>Delivery file naming configuration. 0: Random number naming, 1: Delivery time naming. Default: 0 (Random number naming).</p>
                     * 
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     * 
                     */
                    bool FilenameModeHasBeenSet() const;

                    /**
                     * 获取<p>Start time of the data shipping range</p>
                     * @return StartTime <p>Start time of the data shipping range</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Start time of the data shipping range</p>
                     * @param _startTime <p>Start time of the data shipping range</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time of the data delivery range</p>
                     * @return EndTime <p>End time of the data delivery range</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>End time of the data delivery range</p>
                     * @param _endTime <p>End time of the data delivery range</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Progress of historical data delivery (valid only when users select historical data within the dataset)</p>
                     * @return Progress <p>Progress of historical data delivery (valid only when users select historical data within the dataset)</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>Progress of historical data delivery (valid only when users select historical data within the dataset)</p>
                     * @param _progress <p>Progress of historical data delivery (valid only when users select historical data within the dataset)</p>
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Remaining time for all historical data delivery completion (valid only when there is historical data in the selected data)</p><p>Unit: second</p>
                     * @return RemainTime <p>Remaining time for all historical data delivery completion (valid only when there is historical data in the selected data)</p><p>Unit: second</p>
                     * 
                     */
                    int64_t GetRemainTime() const;

                    /**
                     * 设置<p>Remaining time for all historical data delivery completion (valid only when there is historical data in the selected data)</p><p>Unit: second</p>
                     * @param _remainTime <p>Remaining time for all historical data delivery completion (valid only when there is historical data in the selected data)</p><p>Unit: second</p>
                     * 
                     */
                    void SetRemainTime(const int64_t& _remainTime);

                    /**
                     * 判断参数 RemainTime 是否已赋值
                     * @return RemainTime 是否已赋值
                     * 
                     */
                    bool RemainTimeHasBeenSet() const;

                    /**
                     * 获取<p>Historical task status:<br>0: Real-time task<br>1: Task preparing<br>2: Task running<br>3: Task execution exception<br>4: Task execution complete</p>
                     * @return HistoryStatus <p>Historical task status:<br>0: Real-time task<br>1: Task preparing<br>2: Task running<br>3: Task execution exception<br>4: Task execution complete</p>
                     * 
                     */
                    int64_t GetHistoryStatus() const;

                    /**
                     * 设置<p>Historical task status:<br>0: Real-time task<br>1: Task preparing<br>2: Task running<br>3: Task execution exception<br>4: Task execution complete</p>
                     * @param _historyStatus <p>Historical task status:<br>0: Real-time task<br>1: Task preparing<br>2: Task running<br>3: Task execution exception<br>4: Task execution complete</p>
                     * 
                     */
                    void SetHistoryStatus(const int64_t& _historyStatus);

                    /**
                     * 判断参数 HistoryStatus 是否已赋值
                     * @return HistoryStatus 是否已赋值
                     * 
                     */
                    bool HistoryStatusHasBeenSet() const;

                    /**
                     * 获取<p>Storage type. Default value is STANDARD. For enumeration values, see the <a href="https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1">storage type overview</a> document.<br>Reference values:<br>STANDARD: standard storage<br>STANDARD_IA: infrequent storage<br>ARCHIVE: archive storage<br>DEEP_ARCHIVE: deep archive storage<br>MAZ_STANDARD: standard storage (multi-AZ)<br>MAZ_STANDARD_IA: infrequent storage (multi-AZ)<br>INTELLIGENT_TIERING: intelligent tiering storage<br>MAZ_INTELLIGENT_TIERING: intelligent tiering storage (multi-AZ)</p>
                     * @return StorageType <p>Storage type. Default value is STANDARD. For enumeration values, see the <a href="https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1">storage type overview</a> document.<br>Reference values:<br>STANDARD: standard storage<br>STANDARD_IA: infrequent storage<br>ARCHIVE: archive storage<br>DEEP_ARCHIVE: deep archive storage<br>MAZ_STANDARD: standard storage (multi-AZ)<br>MAZ_STANDARD_IA: infrequent storage (multi-AZ)<br>INTELLIGENT_TIERING: intelligent tiering storage<br>MAZ_INTELLIGENT_TIERING: intelligent tiering storage (multi-AZ)</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type. Default value is STANDARD. For enumeration values, see the <a href="https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1">storage type overview</a> document.<br>Reference values:<br>STANDARD: standard storage<br>STANDARD_IA: infrequent storage<br>ARCHIVE: archive storage<br>DEEP_ARCHIVE: deep archive storage<br>MAZ_STANDARD: standard storage (multi-AZ)<br>MAZ_STANDARD_IA: infrequent storage (multi-AZ)<br>INTELLIGENT_TIERING: intelligent tiering storage<br>MAZ_INTELLIGENT_TIERING: intelligent tiering storage (multi-AZ)</p>
                     * @param _storageType <p>Storage type. Default value is STANDARD. For enumeration values, see the <a href="https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1">storage type overview</a> document.<br>Reference values:<br>STANDARD: standard storage<br>STANDARD_IA: infrequent storage<br>ARCHIVE: archive storage<br>DEEP_ARCHIVE: deep archive storage<br>MAZ_STANDARD: standard storage (multi-AZ)<br>MAZ_STANDARD_IA: infrequent storage (multi-AZ)<br>INTELLIGENT_TIERING: intelligent tiering storage<br>MAZ_INTELLIGENT_TIERING: intelligent tiering storage (multi-AZ)</p>
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
                     * 获取<p>ARN <a href="https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1">Create role</a></p>
                     * @return RoleArn <p>ARN <a href="https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1">Create role</a></p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>ARN <a href="https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1">Create role</a></p>
                     * @param _roleArn <p>ARN <a href="https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1">Create role</a></p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>External ID</p>
                     * @return ExternalId <p>External ID</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>External ID</p>
                     * @param _externalId <p>External ID</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>Task running status. Supports <code>0</code>, <code>1</code>, <code>2</code></p><ul><li><code>0</code>: Stop</li><li><code>1</code>: Running</li><li><code>2</code>: Exception</li></ul>
                     * @return TaskStatus <p>Task running status. Supports <code>0</code>, <code>1</code>, <code>2</code></p><ul><li><code>0</code>: Stop</li><li><code>1</code>: Running</li><li><code>2</code>: Exception</li></ul>
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置<p>Task running status. Supports <code>0</code>, <code>1</code>, <code>2</code></p><ul><li><code>0</code>: Stop</li><li><code>1</code>: Running</li><li><code>2</code>: Exception</li></ul>
                     * @param _taskStatus <p>Task running status. Supports <code>0</code>, <code>1</code>, <code>2</code></p><ul><li><code>0</code>: Stop</li><li><code>1</code>: Running</li><li><code>2</code>: Exception</li></ul>
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Time variable used to generate the file path shipped to COS</p>
                     * @return TimeZone <p>Time variable used to generate the file path shipped to COS</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>Time variable used to generate the file path shipped to COS</p>
                     * @param _timeZone <p>Time variable used to generate the file path shipped to COS</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>Pre-filtering process - filter out original data before writing to COS</p>
                     * @return DSLFilter <p>Pre-filtering process - filter out original data before writing to COS</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>Pre-filtering process - filter out original data before writing to COS</p>
                     * @param _dSLFilter <p>Pre-filtering process - filter out original data before writing to COS</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Delivery Rule ID</p>
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * <p>Log topic ID.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>bucket address for shipping</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>Delivery prefix directory</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>Shipping rule name</p>
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * <p>Shipping time interval. Unit: seconds</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Maximum value of delivered files in MB</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>Whether effective</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Filter rules for log shipping</p>
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * <p>Partition rules for log shipping support strftime time format representation</p>
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>Compression configuration of shipped logs</p>
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * <p>Content format configuration for shipped logs</p>
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Creation time of shipped logs. Format: YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Delivery file naming configuration. 0: Random number naming, 1: Delivery time naming. Default: 0 (Random number naming).</p>
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                    /**
                     * <p>Start time of the data shipping range</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of the data delivery range</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Progress of historical data delivery (valid only when users select historical data within the dataset)</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Remaining time for all historical data delivery completion (valid only when there is historical data in the selected data)</p><p>Unit: second</p>
                     */
                    int64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * <p>Historical task status:<br>0: Real-time task<br>1: Task preparing<br>2: Task running<br>3: Task execution exception<br>4: Task execution complete</p>
                     */
                    int64_t m_historyStatus;
                    bool m_historyStatusHasBeenSet;

                    /**
                     * <p>Storage type. Default value is STANDARD. For enumeration values, see the <a href="https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1">storage type overview</a> document.<br>Reference values:<br>STANDARD: standard storage<br>STANDARD_IA: infrequent storage<br>ARCHIVE: archive storage<br>DEEP_ARCHIVE: deep archive storage<br>MAZ_STANDARD: standard storage (multi-AZ)<br>MAZ_STANDARD_IA: infrequent storage (multi-AZ)<br>INTELLIGENT_TIERING: intelligent tiering storage<br>MAZ_INTELLIGENT_TIERING: intelligent tiering storage (multi-AZ)</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>ARN <a href="https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1">Create role</a></p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>External ID</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>Task running status. Supports <code>0</code>, <code>1</code>, <code>2</code></p><ul><li><code>0</code>: Stop</li><li><code>1</code>: Running</li><li><code>2</code>: Exception</li></ul>
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Time variable used to generate the file path shipped to COS</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>Pre-filtering process - filter out original data before writing to COS</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
