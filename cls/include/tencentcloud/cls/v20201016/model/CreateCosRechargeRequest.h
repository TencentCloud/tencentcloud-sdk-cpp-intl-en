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
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param _topicId ID of the log topic.
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
                     * @return LogsetId ID of the logset.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of the logset.
                     * @param _logsetId ID of the logset.
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
                     * 获取Shipping task name.
                     * @return Name Shipping task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Shipping task name.
                     * @param _name Shipping task name.
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
                     * 获取COS bucket, see the supported [bucket naming conventions](https://intl.cloud.tencent.com/document/product/436/13312?from_cn_redirect=1).
                     * @return Bucket COS bucket, see the supported [bucket naming conventions](https://intl.cloud.tencent.com/document/product/436/13312?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket, see the supported [bucket naming conventions](https://intl.cloud.tencent.com/document/product/436/13312?from_cn_redirect=1).
                     * @param _bucket COS bucket, see the supported [bucket naming conventions](https://intl.cloud.tencent.com/document/product/436/13312?from_cn_redirect=1).
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
                     * 获取The region where the COS bucket is located, see the supported [region list](https://intl.cloud.tencent.com/document/product/436/6224?from_cn_redirect=1).
                     * @return BucketRegion The region where the COS bucket is located, see the supported [region list](https://intl.cloud.tencent.com/document/product/436/6224?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置The region where the COS bucket is located, see the supported [region list](https://intl.cloud.tencent.com/document/product/436/6224?from_cn_redirect=1).
                     * @param _bucketRegion The region where the COS bucket is located, see the supported [region list](https://intl.cloud.tencent.com/document/product/436/6224?from_cn_redirect=1).
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
                     * @return Prefix The prefix of the folder where COS files are located.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置The prefix of the folder where COS files are located.
                     * @param _prefix The prefix of the folder where COS files are located.
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
                     * @return LogType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
                     * @param _logType The type of log collected. `json_log`: JSON logs; `delimiter_log`: separator logs; `minimalist_log`: full text in a single line
Default value: `minimalist_log`
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
                     * 获取Valid values: supported: "", "gzip", "lzop", "snappy"; Default value: "".
                     * @return Compress Valid values: supported: "", "gzip", "lzop", "snappy"; Default value: "".
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Valid values: supported: "", "gzip", "lzop", "snappy"; Default value: "".
                     * @param _compress Valid values: supported: "", "gzip", "lzop", "snappy"; Default value: "".
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
                     * 获取Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @return ExtractRuleInfo Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @param _extractRuleInfo Extraction rule. If `ExtractRule` is set, `LogType` must be set.
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
                     * COS bucket, see the supported [bucket naming conventions](https://intl.cloud.tencent.com/document/product/436/13312?from_cn_redirect=1).
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * The region where the COS bucket is located, see the supported [region list](https://intl.cloud.tencent.com/document/product/436/6224?from_cn_redirect=1).
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
                     * Valid values: supported: "", "gzip", "lzop", "snappy"; Default value: "".
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
