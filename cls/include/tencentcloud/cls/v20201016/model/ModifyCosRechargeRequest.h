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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyCosRecharge request structure.
                */
                class ModifyCosRechargeRequest : public AbstractModel
                {
                public:
                    ModifyCosRechargeRequest();
                    ~ModifyCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS import configuration Id.

-Obtain the cos import configuration Id through the [Get cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1) API.
                     * @return Id COS import configuration Id.

-Obtain the cos import configuration Id through the [Get cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS import configuration Id.

-Obtain the cos import configuration Id through the [Get cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1) API.
                     * @param _id COS import configuration Id.

-Obtain the cos import configuration Id through the [Get cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1) API.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Log topic Id.

-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic Id.

-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic Id.

-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic Id.

-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
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
                     * 获取COS import task name, supports up to 128 bytes.
                     * @return Name COS import task name, supports up to 128 bytes.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS import task name, supports up to 128 bytes.
                     * @param _name COS import task name, supports up to 128 bytes.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: 0: disabled; 1: enabled.
                     * @return Enable Task status. Valid values: 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Task status. Valid values: 0: disabled; 1: enabled.
                     * @param _enable Task status. Valid values: 0: disabled; 1: enabled.
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取COS bucket, see the supported [bucket naming conventions](https://www.tencentcloud.com/document/product/436/13312?from_cn_redirect=1).	

-Get COS buckets via [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291?from_cn_redirect=1).
                     * @return Bucket COS bucket, see the supported [bucket naming conventions](https://www.tencentcloud.com/document/product/436/13312?from_cn_redirect=1).	

-Get COS buckets via [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket, see the supported [bucket naming conventions](https://www.tencentcloud.com/document/product/436/13312?from_cn_redirect=1).	

-Get COS buckets via [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291?from_cn_redirect=1).
                     * @param _bucket COS bucket, see the supported [bucket naming conventions](https://www.tencentcloud.com/document/product/436/13312?from_cn_redirect=1).	

-Get COS buckets via [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291?from_cn_redirect=1).
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
                     * 获取The region where the COS bucket is located, see the supported [region list](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * @return BucketRegion The region where the COS bucket is located, see the supported [region list](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置The region where the COS bucket is located, see the supported [region list](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * @param _bucketRegion The region where the COS bucket is located, see the supported [region list](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取Prefix of the folder where COS files are located. When it is an empty string, all files in the bucket will be delivered.
                     * @return Prefix Prefix of the folder where COS files are located. When it is an empty string, all files in the bucket will be delivered.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Prefix of the folder where COS files are located. When it is an empty string, all files in the bucket will be delivered.
                     * @param _prefix Prefix of the folder where COS files are located. When it is an empty string, all files in the bucket will be delivered.
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
                     * 获取Types of logs collected. json_log indicates logs in JSON format; delimiter_log indicates logs in delimiter-separated values format; minimalist_log indicates single-line full-text logs. The default value is minimalist_log.
                     * @return LogType Types of logs collected. json_log indicates logs in JSON format; delimiter_log indicates logs in delimiter-separated values format; minimalist_log indicates single-line full-text logs. The default value is minimalist_log.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Types of logs collected. json_log indicates logs in JSON format; delimiter_log indicates logs in delimiter-separated values format; minimalist_log indicates single-line full-text logs. The default value is minimalist_log.
                     * @param _logType Types of logs collected. json_log indicates logs in JSON format; delimiter_log indicates logs in delimiter-separated values format; minimalist_log indicates single-line full-text logs. The default value is minimalist_log.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Parsing format. Valid values: "", "gzip", "lzop", "snappy". Empty string means no compression.
                     * @return Compress Parsing format. Valid values: "", "gzip", "lzop", "snappy". Empty string means no compression.
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Parsing format. Valid values: "", "gzip", "lzop", "snappy". Empty string means no compression.
                     * @param _compress Parsing format. Valid values: "", "gzip", "lzop", "snappy". Empty string means no compression.
                     * 
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Extraction rule. If ExtractRule is set, then LogType must be set.
                     * @return ExtractRuleInfo Extraction rule. If ExtractRule is set, then LogType must be set.
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置Extraction rule. If ExtractRule is set, then LogType must be set.
                     * @param _extractRuleInfo Extraction rule. If ExtractRule is set, then LogType must be set.
                     * 
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     * 
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                    /**
                     * 获取COS import task type. Valid values: 1: one-time import task; 2: continuous import task.
                     * @return TaskType COS import task type. Valid values: 1: one-time import task; 2: continuous import task.
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置COS import task type. Valid values: 1: one-time import task; 2: continuous import task.
                     * @param _taskType COS import task type. Valid values: 1: one-time import task; 2: continuous import task.
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Metadata. Buckets and objects are supported.
                     * @return Metadata Metadata. Buckets and objects are supported.
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置Metadata. Buckets and objects are supported.
                     * @param _metadata Metadata. Buckets and objects are supported.
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * COS import configuration Id.

-Obtain the cos import configuration Id through the [Get cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1) API.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log topic Id.

-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * COS import task name, supports up to 128 bytes.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task status. Valid values: 0: disabled; 1: enabled.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * COS bucket, see the supported [bucket naming conventions](https://www.tencentcloud.com/document/product/436/13312?from_cn_redirect=1).	

-Get COS buckets via [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291?from_cn_redirect=1).
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * The region where the COS bucket is located, see the supported [region list](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Prefix of the folder where COS files are located. When it is an empty string, all files in the bucket will be delivered.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Types of logs collected. json_log indicates logs in JSON format; delimiter_log indicates logs in delimiter-separated values format; minimalist_log indicates single-line full-text logs. The default value is minimalist_log.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Parsing format. Valid values: "", "gzip", "lzop", "snappy". Empty string means no compression.
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Extraction rule. If ExtractRule is set, then LogType must be set.
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                    /**
                     * COS import task type. Valid values: 1: one-time import task; 2: continuous import task.
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Metadata. Buckets and objects are supported.
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
