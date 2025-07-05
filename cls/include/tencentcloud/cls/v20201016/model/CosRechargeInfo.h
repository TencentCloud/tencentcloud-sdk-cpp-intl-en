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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id COS import configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS import configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id COS import configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the log topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId ID of the log topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId ID of the log topic.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogsetId ID of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logsetId ID of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取COS import task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name COS import task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS import task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name COS import task name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取COS bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bucket COS bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucket COS bucket.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region where the COS bucket is located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BucketRegion Region where the COS bucket is located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Region where the COS bucket is located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucketRegion Region where the COS bucket is located.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The prefix of the folder where COS files are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Prefix The prefix of the folder where COS files are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置The prefix of the folder where COS files are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prefix The prefix of the folder where COS files are located.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Progress in percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Progress in percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Progress in percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Progress in percentage.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Valid values: "" (default), "gzip", "lzop", "snappy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compress Valid values: "" (default), "gzip", "lzop", "snappy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Valid values: "" (default), "gzip", "lzop", "snappy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compress Valid values: "" (default), "gzip", "lzop", "snappy"
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取See the description of the `ExtractRuleInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtractRuleInfo See the description of the `ExtractRuleInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置See the description of the `ExtractRuleInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extractRuleInfo See the description of the `ExtractRuleInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     * 
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                private:

                    /**
                     * COS import configuration ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * ID of the log topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * ID of the logset.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * COS import task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region where the COS bucket is located.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * The prefix of the folder where COS files are located.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Progress in percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Valid values: "" (default), "gzip", "lzop", "snappy"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * See the description of the `ExtractRuleInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_
