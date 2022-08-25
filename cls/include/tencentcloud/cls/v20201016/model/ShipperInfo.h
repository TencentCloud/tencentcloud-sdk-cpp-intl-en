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
                     * 获取Shipping rule ID
                     * @return ShipperId Shipping rule ID
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping rule ID
                     * @param ShipperId Shipping rule ID
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Bucket address shipped to
                     * @return Bucket Bucket address shipped to
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket address shipped to
                     * @param Bucket Bucket address shipped to
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Shipping prefix directory
                     * @return Prefix Shipping prefix directory
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Shipping prefix directory
                     * @param Prefix Shipping prefix directory
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取Shipping rule name
                     * @return ShipperName Shipping rule name
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置Shipping rule name
                     * @param ShipperName Shipping rule name
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取Shipping time interval in seconds
                     * @return Interval Shipping time interval in seconds
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Shipping time interval in seconds
                     * @param Interval Shipping time interval in seconds
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Maximum size of shipped file in MB
                     * @return MaxSize Maximum size of shipped file in MB
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size of shipped file in MB
                     * @param MaxSize Maximum size of shipped file in MB
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Whether it takes effect
                     * @return Status Whether it takes effect
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether it takes effect
                     * @param Status Whether it takes effect
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Filter rule for shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FilterRules Filter rule for shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置Filter rule for shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FilterRules Filter rule for shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取Partition rule of shipped log, which can be represented in `strftime` time format
                     * @return Partition Partition rule of shipped log, which can be represented in `strftime` time format
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置Partition rule of shipped log, which can be represented in `strftime` time format
                     * @param Partition Partition rule of shipped log, which can be represented in `strftime` time format
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Compression configuration of shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Compress Compression configuration of shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置Compression configuration of shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Compress Compression configuration of shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Format configuration of shipped log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Content Format configuration of shipped log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置Format configuration of shipped log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Content Format configuration of shipped log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Creation time of shipped log
                     * @return CreateTime Creation time of shipped log
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of shipped log
                     * @param CreateTime Creation time of shipped log
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Shipping file naming configuration. Valid values: `0` (by random number); `1` (by shipping time). Default value: `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilenameMode Shipping file naming configuration. Valid values: `0` (by random number); `1` (by shipping time). Default value: `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置Shipping file naming configuration. Valid values: `0` (by random number); `1` (by shipping time). Default value: `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FilenameMode Shipping file naming configuration. Valid values: `0` (by random number); `1` (by shipping time). Default value: `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     */
                    bool FilenameModeHasBeenSet() const;

                private:

                    /**
                     * Shipping rule ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Bucket address shipped to
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Shipping prefix directory
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Shipping rule name
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * Shipping time interval in seconds
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Maximum size of shipped file in MB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Whether it takes effect
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter rule for shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * Partition rule of shipped log, which can be represented in `strftime` time format
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Compression configuration of shipped log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Format configuration of shipped log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Creation time of shipped log
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Shipping file naming configuration. Valid values: `0` (by random number); `1` (by shipping time). Default value: `0`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
