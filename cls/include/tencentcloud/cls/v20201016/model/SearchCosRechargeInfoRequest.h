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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchCosRechargeInfo request structure.
                */
                class SearchCosRechargeInfoRequest : public AbstractModel
                {
                public:
                    SearchCosRechargeInfoRequest();
                    ~SearchCosRechargeInfoRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Delivery Task Name
                     * @return Name Delivery Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Delivery Task Name
                     * @param _name Delivery Task Name
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
                     * 获取The prefix of the folder where COS files are located
                     * @return Prefix The prefix of the folder where COS files are located
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置The prefix of the folder where COS files are located
                     * @param _prefix The prefix of the folder where COS files are located
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
                     * 获取Compression mode: "", "gzip", "lzop", and "snappy”. The default mode is "".
                     * @return Compress Compression mode: "", "gzip", "lzop", and "snappy”. The default mode is "".
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置Compression mode: "", "gzip", "lzop", and "snappy”. The default mode is "".
                     * @param _compress Compression mode: "", "gzip", "lzop", and "snappy”. The default mode is "".
                     * 
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                private:

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
                     * Delivery Task Name
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
                     * The prefix of the folder where COS files are located
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * Compression mode: "", "gzip", "lzop", and "snappy”. The default mode is "".
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_
