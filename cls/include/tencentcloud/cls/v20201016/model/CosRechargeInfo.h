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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * COS import configuration information.
                */
                class CosRechargeInfo : public AbstractModel
                {
                public:
                    CosRechargeInfo();
                    ~CosRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS import configuration ID.
                     * @return Id COS import configuration ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS import configuration ID.
                     * @param _id COS import configuration ID.
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
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取COS import task name
                     * @return Name COS import task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS import task name
                     * @param _name COS import task name
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
                     * 获取COS bucket
                     * @return Bucket COS bucket
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket
                     * @param _bucket COS bucket
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
                     * 获取COS bucket location.

-Obtain region information via [regions and access endpoints](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * @return BucketRegion COS bucket location.

-Obtain region information via [regions and access endpoints](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置COS bucket location.

-Obtain region information via [regions and access endpoints](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     * @param _bucketRegion COS bucket location.

-Obtain region information via [regions and access endpoints](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
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
                     * 获取Prefix of the COS file folder location
                     * @return Prefix Prefix of the COS file folder location
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Prefix of the COS file folder location
                     * @param _prefix Prefix of the COS file folder location
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
                     * 获取Types of logs collected: json_log represents JSON logs, delimiter_log represents delimiter-separated format logs, minimalist_log represents single-line full-text representation.
default is minimalist_log
                     * @return LogType Types of logs collected: json_log represents JSON logs, delimiter_log represents delimiter-separated format logs, minimalist_log represents single-line full-text representation.
default is minimalist_log
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Types of logs collected: json_log represents JSON logs, delimiter_log represents delimiter-separated format logs, minimalist_log represents single-line full-text representation.
default is minimalist_log
                     * @param _logType Types of logs collected: json_log represents JSON logs, delimiter_log represents delimiter-separated format logs, minimalist_log represents single-line full-text representation.
default is minimalist_log
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
                     * 获取status 0: Created, 1: Running, 2: Stopped, 3: Completed, 4: Execution failed.
                     * @return Status status 0: Created, 1: Running, 2: Stopped, 3: Completed, 4: Execution failed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置status 0: Created, 1: Running, 2: Stopped, 3: Completed, 4: Execution failed.
                     * @param _status status 0: Created, 1: Running, 2: Stopped, 3: Completed, 4: Execution failed.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether this feature is enabled. 0: Disabled; 1: Enabled.
                     * @return Enable Whether this feature is enabled. 0: Disabled; 1: Enabled.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether this feature is enabled. 0: Disabled; 1: Enabled.
                     * @param _enable Whether this feature is enabled. 0: Disabled; 1: Enabled.
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
                     * 获取Creation time. Time format: YYYY-MM-DD HH:mm:ss
                     * @return CreateTime Creation time. Time format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Time format: YYYY-MM-DD HH:mm:ss
                     * @param _createTime Creation time. Time format: YYYY-MM-DD HH:mm:ss
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
                     * 获取Update time. Time format: YYYY-MM-DD HH:mm:ss
                     * @return UpdateTime Update time. Time format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. Time format: YYYY-MM-DD HH:mm:ss
                     * @param _updateTime Update time. Time format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Progress Bar Percentage
                     * @return Progress Progress Bar Percentage
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Progress Bar Percentage
                     * @param _progress Progress Bar Percentage
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Compression methods supported: "", "gzip", "lzop", and "snappy". Default empty with no compression.
                     * @return Compress Compression methods supported: "", "gzip", "lzop", and "snappy". Default empty with no compression.
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Compression methods supported: "", "gzip", "lzop", and "snappy". Default empty with no compression.
                     * @param _compress Compression methods supported: "", "gzip", "lzop", and "snappy". Default empty with no compression.
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
                     * 获取See the description of the ExtractRuleInfo structure.
                     * @return ExtractRuleInfo See the description of the ExtractRuleInfo structure.
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置See the description of the ExtractRuleInfo structure.
                     * @param _extractRuleInfo See the description of the ExtractRuleInfo structure.
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
                     * COS import configuration ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * COS import task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS bucket
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS bucket location.

-Obtain region information via [regions and access endpoints](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1).
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Prefix of the COS file folder location
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Types of logs collected: json_log represents JSON logs, delimiter_log represents delimiter-separated format logs, minimalist_log represents single-line full-text representation.
default is minimalist_log
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * status 0: Created, 1: Running, 2: Stopped, 3: Completed, 4: Execution failed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether this feature is enabled. 0: Disabled; 1: Enabled.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Creation time. Time format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time. Time format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Progress Bar Percentage
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Compression methods supported: "", "gzip", "lzop", and "snappy". Default empty with no compression.
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * See the description of the ExtractRuleInfo structure.
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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_
