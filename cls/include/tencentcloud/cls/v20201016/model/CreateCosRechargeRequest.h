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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_

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
                * CreateCosRecharge request structure.
                */
                class CreateCosRechargeRequest : public AbstractModel
                {
                public:
                    CreateCosRechargeRequest();
                    ~CreateCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the log topic.
                     * @return TopicId ID of the log topic.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param TopicId ID of the log topic.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取ID of the logset.
                     * @return LogsetId ID of the logset.
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of the logset.
                     * @param LogsetId ID of the logset.
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Shipping task name.
                     * @return Name Shipping task name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Shipping task name.
                     * @param Name Shipping task name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取COS bucket.
                     * @return Bucket COS bucket.
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket.
                     * @param Bucket COS bucket.
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Region where the COS bucket is located.
                     * @return BucketRegion Region where the COS bucket is located.
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Region where the COS bucket is located.
                     * @param BucketRegion Region where the COS bucket is located.
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取The prefix of the folder where COS files are located.
                     * @return Prefix The prefix of the folder where COS files are located.
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置The prefix of the folder where COS files are located.
                     * @param Prefix The prefix of the folder where COS files are located.
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     * @return LogType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     * @param LogType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Valid values: "" (default), "gzip", "lzop", "snappy"
                     * @return Compress Valid values: "" (default), "gzip", "lzop", "snappy"
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Valid values: "" (default), "gzip", "lzop", "snappy"
                     * @param Compress Valid values: "" (default), "gzip", "lzop", "snappy"
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @return ExtractRuleInfo Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @param ExtractRuleInfo Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the log topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * ID of the logset.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Shipping task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS bucket.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region where the COS bucket is located.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * The prefix of the folder where COS files are located.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Valid values: "" (default), "gzip", "lzop", "snappy"
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_
