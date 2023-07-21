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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_

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
                * ModifyShipper request structure.
                */
                class ModifyShipperRequest : public AbstractModel
                {
                public:
                    ModifyShipperRequest();
                    ~ModifyShipperRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shipping rule ID
                     * @return ShipperId Shipping rule ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping rule ID
                     * @param _shipperId Shipping rule ID
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
                     * 获取New destination bucket in shipping rule
                     * @return Bucket New destination bucket in shipping rule
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置New destination bucket in shipping rule
                     * @param _bucket New destination bucket in shipping rule
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
                     * 获取New destination directory prefix in shipping rule
                     * @return Prefix New destination directory prefix in shipping rule
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置New destination directory prefix in shipping rule
                     * @param _prefix New destination directory prefix in shipping rule
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
                     * 获取Shipping rule status
                     * @return Status Shipping rule status
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Shipping rule status
                     * @param _status Shipping rule status
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
                     * 获取Shipping rule name
                     * @return ShipperName Shipping rule name
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置Shipping rule name
                     * @param _shipperName Shipping rule name
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
                     * 获取Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     * @return Interval Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Shipping time interval in seconds. Default value: 300. Value range: 300–900
                     * @param _interval Shipping time interval in seconds. Default value: 300. Value range: 300–900
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
                     * 获取Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 5-256
                     * @return MaxSize Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 5-256
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 5-256
                     * @param _maxSize Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 5-256
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
                     * 获取Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped.
                     * @return FilterRules Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped.
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped.
                     * @param _filterRules Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped.
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
                     * 获取Partition rule of shipped log, which can be represented in `strftime` time format
                     * @return Partition Partition rule of shipped log, which can be represented in `strftime` time format
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置Partition rule of shipped log, which can be represented in `strftime` time format
                     * @param _partition Partition rule of shipped log, which can be represented in `strftime` time format
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
                     * 获取Compression configuration of shipped log
                     * @return Compress Compression configuration of shipped log
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置Compression configuration of shipped log
                     * @param _compress Compression configuration of shipped log
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
                     * 获取Format configuration of shipped log content
                     * @return Content Format configuration of shipped log content
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置Format configuration of shipped log content
                     * @param _content Format configuration of shipped log content
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
                     * 获取Naming a shipping file. Valid values: `0` (by random number), `1` (by shipping time). Default value: `0`.
                     * @return FilenameMode Naming a shipping file. Valid values: `0` (by random number), `1` (by shipping time). Default value: `0`.
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置Naming a shipping file. Valid values: `0` (by random number), `1` (by shipping time). Default value: `0`.
                     * @param _filenameMode Naming a shipping file. Valid values: `0` (by random number), `1` (by shipping time). Default value: `0`.
                     * 
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     * 
                     */
                    bool FilenameModeHasBeenSet() const;

                private:

                    /**
                     * Shipping rule ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * New destination bucket in shipping rule
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * New destination directory prefix in shipping rule
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Shipping rule status
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

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
                     * Maximum size of a file to be shipped, in MB. Default value: 256. Value range: 5-256
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Filter rules for shipped logs. Only logs matching the rules can be shipped. All rules are in the AND relationship, and up to five rules can be added. If the array is empty, no filtering will be performed, and all logs will be shipped.
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

                    /**
                     * Naming a shipping file. Valid values: `0` (by random number), `1` (by shipping time). Default value: `0`.
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_
