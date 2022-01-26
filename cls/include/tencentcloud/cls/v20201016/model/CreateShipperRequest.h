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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateShipper request structure.
                */
                class CreateShipperRequest : public AbstractModel
                {
                public:
                    CreateShipperRequest();
                    ~CreateShipperRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the log topic to which the shipping rule to be created belongs
                     * @return TopicId ID of the log topic to which the shipping rule to be created belongs
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic to which the shipping rule to be created belongs
                     * @param TopicId ID of the log topic to which the shipping rule to be created belongs
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Destination bucket in the shipping rule to be created
                     * @return Bucket Destination bucket in the shipping rule to be created
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Destination bucket in the shipping rule to be created
                     * @param Bucket Destination bucket in the shipping rule to be created
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Prefix of the shipping directory in the shipping rule to be created
                     * @return Prefix Prefix of the shipping directory in the shipping rule to be created
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Prefix of the shipping directory in the shipping rule to be created
                     * @param Prefix Prefix of the shipping directory in the shipping rule to be created
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
                     * 获取Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     * @return Interval Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     * @param Interval Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 100–256
                     * @return MaxSize Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 100–256
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 100–256
                     * @param MaxSize Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 100–256
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped
                     * @return FilterRules Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped
                     * @param FilterRules Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped
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
                     * @return Compress Compression configuration of shipped log
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置Compression configuration of shipped log
                     * @param Compress Compression configuration of shipped log
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Format configuration of shipped log content
                     * @return Content Format configuration of shipped log content
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置Format configuration of shipped log content
                     * @param Content Format configuration of shipped log content
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * ID of the log topic to which the shipping rule to be created belongs
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Destination bucket in the shipping rule to be created
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Prefix of the shipping directory in the shipping rule to be created
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Shipping rule name
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 100–256
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped
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
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Format configuration of shipped log content
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_
